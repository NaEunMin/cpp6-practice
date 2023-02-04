/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

class Trace{
    public:
    static string tagName[100];
    static string debugCourse[100];
    static int count;
    static void put(string tag, string debug);
    static void print(string tag="all");
};

int Trace::count = 0;
string Trace::tagName[100];
string Trace::debugCourse[100];

void Trace::put(string tag, string debug){
    tagName[count] = tag;
    debugCourse[count] = debug;
    count++;
}

void Trace::print(string tag){
    if(tag=="all"){
        cout << "----- 모든 Trace 정보를 출력합니다. -----\n";
        for(int i=0; i<count; i++){
            cout << tagName[i] << ":" << debugCourse[i] << endl;
        }
    }
    else{
        cout << "-----" << tag << "태그의 Trace 정보를 출력합니다. -----\n";
        for(int i=0; i<count; i++){
            if(tagName[i]=="f()")
            cout << tagName[i] << ":" << debugCourse[i] << endl;
        }
    }
}

    

void f(){
    int a,b,c;
    cout << "두 개의 정수를 입력하세요>>";
    cin >> a >> b;
    Trace::put("f()", "정수를 입력 받았음");
    c = a + b;
    Trace::put("f()", "합 계산");
    cout << "합은" << c << endl;
}

int main()
{
    Trace::put("main()", "프로그램 시작합니다");
    f();
    Trace::put("main()", "종료");
    
    Trace::print("f()");
    Trace::print();

    return 0;
}
