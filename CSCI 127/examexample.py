def v1(vincent, munem):
    if vincent + munem > 0:
        return vincent
    else:
        return -1

def start():
    panda = 20
    minh = -30
    qiuqun = v1(panda, minh)
    return qiuqun

def main():
    x = start()

if __name__ == "__main__":
    main()
