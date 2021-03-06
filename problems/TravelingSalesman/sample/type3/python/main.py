import sys

class TravelingSalesman:
    def solve (self, N, x, y):
        v = []
        for i in range(N):
            v.append(i)
        return v

def main():
    N = int(input())
    x = []
    y = []
    for i in range(N):
        xt,yt = map(int,input().split())
        x.append(xt)
        y.append(yt)
    ts = TravelingSalesman()
    v = ts.solve(N, x, y)
    for i in v:
        print(i)
    sys.stdout.flush()

if __name__ == '__main__':
    main()
