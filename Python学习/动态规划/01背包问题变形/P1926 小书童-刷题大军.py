# 小书童里发现了 n 样他喜欢的“题目”   大抵是指文章标题
# 刷题大概是指看小说，闲书吧
# https://www.luogu.com.cn/problem/P1926

n_question,m_homework,k_60,r_time=map(int,input().split())
like_question_times=list(map(int,input().split()))
homework_times=list(map(int,input().split()))
homework_scores=list(map(int,input().split()))

dp_60=[0]*(r_time+1)
for i in range(m_homework):
    time_hw=homework_times[i]
    score_hw=homework_scores[i]
    for curr_t in range(r_time,0,-1):
        if curr_t >= time_hw:
            dp_60[curr_t]=max(dp_60[curr_t],dp_60[curr_t-time_hw]+score_hw)

if dp_60[-1] <= k_60:
    print(0)
    exit()
else:
    for i in range(1,r_time+1):
        if dp_60[i] >= k_60:
            do_question_time=r_time-i
            break

dp_ques=[0]*(do_question_time+1)
for i in range(n_question):
    ques_time=like_question_times[i]
    for curr_t in range(do_question_time,0,-1):
        if curr_t >= ques_time:
            dp_ques[curr_t]=max(dp_ques[curr_t],dp_ques[curr_t-ques_time]+1)
print(dp_ques[-1])

# https://www.luogu.com.cn/record/168824003