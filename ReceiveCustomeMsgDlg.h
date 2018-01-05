// ReceiveCustomeMsgDlg.h : header file
//

#if !defined(AFX_RECEIVECUSTOMEMSGDLG_H__58000820_A606_4701_9741_F9789782F5F1__INCLUDED_)
#define AFX_RECEIVECUSTOMEMSGDLG_H__58000820_A606_4701_9741_F9789782F5F1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CReceiveCustomeMsgDlg dialog

class CReceiveCustomeMsgDlg : public CDialog
{
// Construction
public:
	CReceiveCustomeMsgDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CReceiveCustomeMsgDlg)
	enum { IDD = IDD_RECEIVECUSTOMEMSG_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CReceiveCustomeMsgDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CReceiveCustomeMsgDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//Ó³Éäº¯ÊýµÄÉùÃ÷
	afx_msg LRESULT OnReceive(WPARAM wParam,LPARAM lParam);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RECEIVECUSTOMEMSGDLG_H__58000820_A606_4701_9741_F9789782F5F1__INCLUDED_)
