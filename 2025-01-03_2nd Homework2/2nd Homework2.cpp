#include <iostream>
#include <vector> // ����
#include <string> // å �˻��� ����
#include <algorithm> // ���ı��
using namespace std;

// å ���� Ŭ����
// ���� ���� Ŭ����(å���� ����)
// �۰��� ���� Ŭ����(å���� ����)



class book
{
private:
	vector<book> BookList; // å ����Ʈ
	string name; // ����
	string author; // �۰�

public:
	virtual void search(string) = 0;
};


class book_title : public book
{
public:
	//�̸��� ���� �� ���
};


class book_author : public book
{
	// �۰��� ���� �� ���
};


int main()
{

	return 0;
}