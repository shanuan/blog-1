//Download by http://www.NewXing.com
/*
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

	文件：CapForm.h	类CCapForm的头文件

	版权：Firebird Software Workroom 保留

	声明：本源程序的版权受《中华人民共和国著作权法》以及其
		  它相关法律和条约的保护。任何有机会得到本源程序的
		  个人和机构，未经作者明确授权，不得将本源程序用于
		  任何商业目的(直接的或间接的)。对于非商业目的的使
		  用 (包括复制、传播、编译和修改)， 原则上没有特别
		  的限制条款，但请在相关文档中说明其来源，并尊重原
		  作者的署名权。

	编写：秦传安(chings)	2000.5

	联络：Tel：(0792)6323086	E_mail：chings@163.net
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/

#ifndef _CAPFORM_H__
#define _CAPFORM_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "FBDialog.h"
//#####################################################################
class CCapForm : public CModalDlg  
{
public:
	CCapForm();
	virtual ~CCapForm();

	HCURSOR m_hCursor;
	POINT	m_ptBegin,m_ptEnd;
	RECT	m_rcSel;
	HDC		m_hScreenDC;
	UINT	m_nCapFlag;

protected:
	BOOL	m_bDown;

	virtual void OnInitDialog();
	virtual LRESULT WindowProc(UINT msg,WPARAM wParam,LPARAM lParam);
};

//#####################################################################
#endif //_CAPFORM_H__
