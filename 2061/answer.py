# 2061번
# 입력 : 첫째 줄에 두 정수 K, L이 주어진다.
# 출력 : 좋은 암호인 경우에는 GOOD을 출력한다. 나쁜 암호일 경우에는 BAD를 출력하고, K의 가장 작은(1 아닌) 인수를 출력한다.
# 제한
#   4 <= K <= 10^100
#   2 <= L <= 1,000,000

def answer():
    K,L=map(int, input().split())

    for i in range(L):
        if i>1 and K%i == 0:
            print("BAD ", end=""), print(i)
            return
            #print("VALUE is ", end=""), print(i)
    print("GOOD")

def main():
    answer()

if __name__ == "__main__":
    main()
