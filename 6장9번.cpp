/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

class Board{
    public:
  static int id[100];
  static string infomation[100];
  static int index;
  static void add(string info);
  static void print();
};

int Board::id[100];
string Board::infomation[100];
int Board::index=0;

void Board::add(string info){
    id[index]=index;
    infomation[index]=info;
    index++;
}

void Board::print(){
    cout << "********** 게시판입니다. **********" << endl;
    for(int i=0; i<index; i++){
        cout << id[i] << ":" << infomation[i] << endl;
    }
    cout << endl;
}
int main()
{
    Board::add("중간고사는 감독 없는 자율 시험입니다.");
    Board::add("코딩 라운지 많이 이용해주세요.");
    Board::print();
    Board::add("진소린 학생이 경진대회 입상하였습니다. 축하해주세요");
    Board::print();

    return 0;
}
