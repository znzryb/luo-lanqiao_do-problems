import sys

m = 5800000  # Approximately 5,700,000+ prime numbers in the range of 10^8
m1 = 100000000

f = [False] * m1  # f is used to check if a number has been sieved
p = [0] * m  # p is used to store prime numbers

def main():
    n = int(input())
    cnt = 0

    for i in range(2, n + 1):
        if not f[i]:
            # If i is not marked, it's a prime number
            cnt += 1
            p[cnt] = i

        j = 1
        while j <= cnt:
            if i * p[j] > n:
                # If i*p[j] > n, there's no need to continue searching
                break
            f[i * p[j]] = True
            if i % p[j] == 0:
                # Ensure each number is sieved only by its smallest prime factor
                break
            j += 1

    print(cnt)

if __name__ == "__main__":
    main()