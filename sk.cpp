#include "conteiner.h"
#include < stdio.h >
#include < stdlib.h >
#include < iostream >
#include < windows.h >
void main()
{
	Conteiner < int > a;
	a.PutHead( 3 );
	a.PutHead( 4 );
	a.PutHead( 5 );
	a.PutTail( 2 );
	std::cout << a.IsEmpty( ) << "\n" << a.GetTail( ) << "\n" << a.GetHead() << "\n" << a.GetQuanity();
	//�������� �� �������, �������� ��������� �������, �������� ������, �������� ���������� ���������
	a.DelHead( );
	a.DelTail( );
	std::cout << "\n----\n" << a.IsEmpty() << "\n" << a.GetTail( ) << "\n" << a.GetHead() << "\n"<< a.GetQuanity( );
	a.Clearn( );
	std::cout << "\n=" << a.IsEmpty( );
	//�������� � �������� �� �������
	system( "pause" );
}