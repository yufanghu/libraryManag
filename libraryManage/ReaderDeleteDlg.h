#if !defined(AFX_READERDELETEDLG_H__7AF6A5D8_6A5C_47D9_8036_CA7F2BBB8B3F__INCLUDED_)
#define AFX_READERDELETEDLG_H__7AF6A5D8_6A5C_47D9_8036_CA7F2BBB8B3F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ReaderDeleteDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CReaderDeleteDlg dialog

class CReaderDeleteDlg : public CDialog
{
// Construction
public:
	CReaderDeleteDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CReaderDeleteDlg)
	enum { IDD = IDD_READER_DELETE };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CReaderDeleteDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CReaderDeleteDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_READERDELETEDLG_H__7AF6A5D8_6A5C_47D9_8036_CA7F2BBB8B3F__INCLUDED_)
