// LinkList.cpp
//

#include "stdafx.h"
#include "LinkList.h"


int _tmain(int argc, _TCHAR* argv[])
{
	LinkList<int> l;
	for (int i = 1; i < 8; i++){
		l.TailInsert(i);
	}
	l.Insert(8, 8);
	l.Delete(8);
	l.showList();
	LinkList<int> m;
	m=l.Reverse();
	m.showList();
	l.reverse();
	l.showList();
	return 0;
}

