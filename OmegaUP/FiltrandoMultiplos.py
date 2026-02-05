
def _main() -> None:
    t = int(input())
    l = list(map(int, input().split()))
    k = int(input())

    result = [x if x % k == 0 else "X" for x in l]

    print(*result)

if __name__ == '__main__':
    _main()
