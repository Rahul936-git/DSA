Multi-level Inheritance -> A class which contain only one base class and multiple 
                           derive class is called multi-level inheritance

    SYNTAX:

class base{
    member of base class
}

class derive1:public/private/protected base{
    member of derive1 class
}

class derive2:public/private/protected derive1{
    member of derive2 class
}


FlowChart :- base
              |
            Derive1
              |
            Derive2 

