#if !defined(AFX_READERADDDLG_H__E5FBE465_E3F7_4FEF_B1AD_CD2D6C58172D__INCLUDED_)
#define AFX_READERADDDLG_H__E5FBE465_E3F7_4FEF_B1AD_CD2D6C58172D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ReaderAddDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CReaderAddDlg dialog

class CReaderAddDlg : public CDialog
{
// Construction
public:
	CReaderAddDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CReaderAddDlg)
	enum { IDD = IDD_READER_ADD };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CReaderAddDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CReaderAddDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_READERADDDLG_H__E5FBE465_E3F7_4FEF_B1AD_CD2D6C58172D__INCLUDED_)
