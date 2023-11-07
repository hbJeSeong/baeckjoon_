def answer():
    result=None
    value=input()

    for i in value:
        if i.isupper():
            print(i.lower(), end="")
        else:
            print(i.upper(), end="")

def main():
    answer()

if __name__ == "__main__":
    main()
