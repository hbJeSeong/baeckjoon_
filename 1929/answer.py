def isPrime(num):
    if num==1:
        return False
    else:
        for i in range(2, int(num**0.5)+1):
            if num%i == 0:
                return False
        return True

def main():
    M,N=map(int, input().split())

    for i in range(M, N+1):
        if isPrime(i):
            print(i)

if __name__== "__main__":
    main()