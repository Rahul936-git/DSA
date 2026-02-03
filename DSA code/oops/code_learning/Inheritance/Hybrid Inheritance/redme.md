It is the combination of more than one type of inheritance is called hybrid inheritance.

                                    Syntax :-

class A {
    memeber of base class
};

class B:virtual public/private/protected A{
    memeber of class derive1 
};

class c:virtual public/private/protected A{
    memeber of class derive2
};

class D:public A 

FlowChart :-

                                class A
                                   /\
                                  /  \
                                 /    \
                                /      \
                               /        \
                              /          \
                             /            \
                            /              \
                        class B          class C
                            \               /   
                             \             /
                              \           /
                               \         /
                                \       /
                                 \     /
                                  \   /
                                   \ / 
                                 class D