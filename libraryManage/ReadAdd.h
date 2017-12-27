#if !defined(AFX_READADD_H__240DBE17_1974_4F7F_8CDA_50C61204A535__INCLUDED_)
#define AFX_READADD_H__240DBE17_1974_4F7F_8CDA_50C61204A535__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ReadAdd.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CReadAdd dialog

class CReadAdd : public CDialog
{
// Construction
public:
	CReadAdd(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CReadAdd)
	enum { IDD = IDD_READER_ADD };
	CString	m_reader_name;
	CString	m_reader_sex;
	CString	m_reader_card;
	CString	m_reader_id;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CReadAdd)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CReadAdd)
	afx_msg void OnReaderAdd();
	afx_msg void OnReaderClear();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_READADD_H__240DBE17_1974_4F7F_8CDA_50C61204A535__INCLUDED_)
