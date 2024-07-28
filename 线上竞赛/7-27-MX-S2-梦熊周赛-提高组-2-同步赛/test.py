from collections import Counter

def find_min_substring_length(n, s):
    length = len(s)
    
    # 优化1: 预计算所有可能的子段长度
    all_son_lens = [i for i in range(1, length + 1) if length % i == 0]
    
    # 优化2: 预计算每个字符在每个位置上的出现次数
    char_counts = [{} for _ in range(length)]
    for i, char in enumerate(s):
        for j in range(len(all_son_lens)):
            pos = i % all_son_lens[j]
            char_counts[j].setdefault(pos, {}).setdefault(char, 0)
            char_counts[j][pos][char] += 1
    
    # 优化3: 二分查找最小的有效子段长度
    left, right = 0, len(all_son_lens) - 1
    while left <= right:
        mid = (left + right) // 2
        i = all_son_lens[mid]
        
        operate_time = sum(len(s) // i - max(counts.values()) for counts in char_counts[mid].values())
        
        if operate_time <= n:
            right = mid - 1
        else:
            left = mid + 1
    
    return all_son_lens[left] if left < len(all_son_lens) else length

# 输入处理
n = int(input())
s = input()
print(find_min_substring_length(n, s))