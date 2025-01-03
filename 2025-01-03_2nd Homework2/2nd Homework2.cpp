#include <iostream>
#include <vector> // 벡터
#include <string> // 책 검색용 글자
#include <algorithm> // 정렬기능
using namespace std;

// 책 정보 클래스
// 제목별 정렬 클래스(책정보 하위)
// 작가별 정렬 클래스(책정보 하위)



class book
{
private:
	vector<book> BookList; // 책 리스트
	string name; // 제목
	string author; // 작가

public:
	virtual void search(string) = 0;
};


class book_title : public book
{
public:
	//이름순 정렬 및 출력
};


class book_author : public book
{
	// 작가순 정렬 및 출력
};


int main()
{

	return 0;
}