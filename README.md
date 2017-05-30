# GraphBook

1. Copy the "libtest.so" file to the folder where JNI looks for native libraries.
2. $ javac Equation.java
3. $ javac Test.java
4. $ javac Graph.java
5. lex test.l
6. yacc test.y
7. gcc y.tab.h -o final
8. $ java Graph
