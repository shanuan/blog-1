//Download by http://www.NewXing.com
/*
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

	文件：about.h	类CAboutDlg的头文件

	版权：Firebird Software Workroom 保留

	声明：本源程序的版权受《中华人民共和国著作权法》以及其
		  它相关法律和条约的保护。任何有机会得到本源程序的
		  个人和机构，未经作者明确授权，不得将本源程序用于
		  任何商业目的(直接的或间接的)。对于非商业目的的使
		  用 (包括复制、传播、编译和修改)， 原则上没有特别
		  的限制条款，但请在相关文档中说明其来源，并尊重原
		  作者的署名权。

	编写：秦传安(chings)	1999.12 - 2000.4

	联络：Tel：(0792)6323086	E_mail：chings@163.net
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
#ifndef _ABOUT_H_INCLUDED
#define _ABOUT_H_INCLUDED
///////////////////////////////////////////////////////////////////////////////////

#include "FBDialog.h"
///////////////////////////////////////////////////////////////////////////////////

class CAboutDlg : public CModalDlg
{
public:
	CAboutDlg();
	~CAboutDlg();

protected:
	static WNDPROC	pfnStaticProc;
	static HCURSOR	m_hLinkCursor;
	static BOOL		m_bOverHLink;

	virtual void OnInitDialog();
	virtual void OnCommand(UINT uCmdID,UINT code);
	virtual LRESULT WindowProc(UINT msg,WPARAM wParam,LPARAM lParam);

	static LRESULT CALLBACK StaticProc (HWND hWnd, UINT msg, UINT wParam, LPARAM lParam);
};

#endif // _ABOUT_H_INCLUDED