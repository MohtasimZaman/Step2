
// ChildView.h : interface of the CChildView class
//


#pragma once
#include "graphics/OpenGLWnd.h"
#include "graphics/GrTexture.h"
#include "graphics/GrCamera.h"
#include "Mesh.h"


// CChildView window

class CChildView : public COpenGLWnd
{
// Construction
public:
	CChildView();

// Attributes
public:
	CGrTexture m_wood;
	CGrTexture m_fish_texture;
	CGrCamera m_camera;

private:
	double  m_spinAngle;
	UINT_PTR m_spinTimer;
	CMesh           m_mesh;
	CMesh           m_surface;
	CMesh			m_fish;
	int             m_scene;

// Operations
public:

// Overrides
	protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// Implementation
public:
	virtual ~CChildView();

private:
	void CreateMesh();

public:
	virtual void OnGLDraw(CDC* pDC);

	void Box(GLdouble p_x, GLdouble p_y, GLdouble p_z, const GLdouble* p_color);

	// Generated message map functions
protected:

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnStepSpin();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnStepMesh();
};

