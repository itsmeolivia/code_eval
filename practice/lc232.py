class Queue:
    # initialize your data structure here.
    def __init__(self):
        self.stackPush = []
        self.stackPop = []


    # @param x, an integer
    # @return nothing
    def push(self, x):
        self.stackPush.append(x)


    # @return nothing
    def pop(self):
        if len(self.stackPop) == 0:
            while len(self.stackPush) > 0:
                self.stackPop.append(self.stackPush.pop())
        return self.stackPop.pop()

    # @return an integer
    def peek(self):
        if len(self.stackPop) > 0:
            return self.stackPop[-1]
        elif len(self.stackPush) > 0:
            return self.stackPush[0]
        else:
            return None

    # @return an boolean
    def empty(self):
        return (len(self.stackPop) + len(self.stackPush)) == 0
