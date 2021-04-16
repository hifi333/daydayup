1. gcc maintreetraverse_while.c  -->  target to make a EXE 啊，所以必须先找到main 函数， if yes, 遇到一个函数调用 enQueue, 
通过 .h 文件找到了函数的定义。。 可找不到函数的body 啊。。 所以返回错误，，， 你要知道，最后的EXE 一定要包括全部代码。

2. gcc -c treeNodeQueue.c  --> -c 参数表示我只有编译一个二进制代码， 不要EXE， 所以你不需要找main 函数。
 编译完成后. 产生同名的模块二进制代码。 treeNodeQueue.o (这个就是二进制模块了)

3. gcc  maintreetraverse_while.c treeNodeQueue.o  ---> 这是要编译链接到一个EXE啊， 所以必须找main， if yes, 遇到enQueue 函数
   搜索目标编译文件中， 在treeNodeQueue.o找到了。。 最后都放进到 a.out EXE 啊

4. gcc *.c  -o  main.o   --> 编译所有*.c 文件， 寻找main， 找到所有函数， 链接到 EXE - main.o 中啦。。

5. 如何模块是外部人家给你的。。 treeNodeQueue.o,  你只需要加到自己的gcc 编译 参数中即可。。 你需要用人家的函数， 就需要人家提供
    treeNodeQueue.h

======= 这是 模块 的背景和用途！！