mem = {}


def cal(n, mem):
    if n == 1:
        return 1
    else:
        for i in range(1, 1 + n // 2):
            if i == 1:
                mem[1] = 1
                cal_n = 1
            else:
                if i in mem:
                    cal_n = mem[i]
                else:
                    cal_n += cal(i, mem) + 1
                    mem[i] = cal_n
        return cal_n


n = int(input())
if n != 1:
    print(cal(n, mem) + 1)
else:
    print(1)


# def f(n, memo=None):
#     if memo is None:
#         memo = {}
#
#     if n <= 1:
#         return 1
#
#     if n in memo:
#         return memo[n]
#
#     sum = 1
#     for i in range(1, (n // 2) + 1):
#         sum += f(i, memo)
#
#     memo[n] = sum
#     return sum
#
#
# n = int(input())
#
# result = f(n)
#
# print(result)