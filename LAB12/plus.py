column = int(input()) # 3
row = int(input()) # 4

metrix = []

for i in range(column):
    metrix.append([int(x) for x in input().split()])

row_sum = []
for i in metrix:
    row_sum.append(sum(i))
print(row_sum)

column_sum = []
for i in range(row):
    temp = 0
    for j in range(column):
        temp += metrix[j][i]
    column_sum.append(temp)
print(column_sum)