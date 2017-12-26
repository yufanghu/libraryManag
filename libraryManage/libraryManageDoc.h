// libraryManageDoc.h : interface of the CLibraryManageDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_LIBRARYMANAGEDOC_H__CC082A3A_E082_4882_8CF4_0B02164EB3B6__INCLUDED_)
#define AFX_LIBRARYMANAGEDOC_H__CC082A3A_E082_4882_8CF4_0B02164EB3B6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CLibraryManageDoc : public CDocument
{
protected: // create from serialization only
	CLibraryManageDoc();
	DECLARE_DYNCREATE(CLibraryManageDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLibraryManageDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CLibraryManageDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CLibraryManageDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LIBRARYMANAGEDOC_H__CC082A3A_E082_4882_8CF4_0B02164EB3B6__INCLUDED_)
