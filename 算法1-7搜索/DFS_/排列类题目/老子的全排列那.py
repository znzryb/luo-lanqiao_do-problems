# https://ac.nowcoder.com/acm/contest/23156/1001
import itertools
permutations=itertools.permutations([1,2,3,4,5,6,7,8])
for i in permutations:
    print(' '.join(map(str,i)))