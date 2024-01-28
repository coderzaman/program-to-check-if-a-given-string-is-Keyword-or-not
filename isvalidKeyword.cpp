#include<iostream>
using namespace std;

bool isValidKeyword(string str){
    string keywords[] = {
        "alignas", "alignof", "and", "and_eq", "asm", "auto", "bitand", "bitor", "bool", "break",
        "case", "catch", "char", "char16_t", "char32_t", "class", "compl", "const", "constexpr", "const_cast",
        "continue", "decltype", "default", "delete", "do", "double", "dynamic_cast", "else", "enum", "explicit",
        "export", "extern", "false", "float", "for", "friend", "goto", "if", "inline", "int",
        "long", "mutable", "namespace", "new", "noexcept", "not", "not_eq", "nullptr", "operator", "or",
        "or_eq", "private", "protected", "public", "register", "reinterpret_cast", "return", "short", "signed", "sizeof",
        "static", "static_assert", "static_cast", "struct", "switch", "template", "this", "thread_local", "throw", "true",
        "try", "typedef", "typeid", "typename", "union", "unsigned", "using", "virtual", "void", "volatile",
        "wchar_t", "while", "xor", "xor_eq"
    };

    for(string keyword: keywords){
        if(keyword == str){
            return true;
        }
    }

    return false;
}


int main(){
    string checkKeyword;
    cout << "Please Enter your keyword: ";
    getline(cin,checkKeyword);

    if(isValidKeyword(checkKeyword)){
        cout << checkKeyword << " is a valid keyword" << endl;
    }else{
       cout << checkKeyword << " is not a valid keyword" << endl;
    }
}

