/////////////////////////////////////////////////////////////////////////////
// Name:        wxMACAddressUtilityApp.cpp
// Purpose:
// Author:      Volodymir (T-Rex) Tryapichko
// Modified by:
// Created:     28/08/2009 18:23:02
// RCS-ID:
// Copyright:   Volodymir (T-Rex) Tryapichko, 2009
// Licence:
/////////////////////////////////////////////////////////////////////////////

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

////@begin includes
////@end includes

#include "wxMACAddressUtilityApp.h"

////@begin XPM images
////@end XPM images


/*
 * Application instance implementation
 */

////@begin implement app
IMPLEMENT_APP( wxMACAddressUtilityApp )
////@end implement app


/*
 * wxMACAddressUtilityApp type definition
 */

IMPLEMENT_CLASS( wxMACAddressUtilityApp, wxApp )


/*
 * wxMACAddressUtilityApp event table definition
 */

BEGIN_EVENT_TABLE( wxMACAddressUtilityApp, wxApp )

////@begin wxMACAddressUtilityApp event table entries
////@end wxMACAddressUtilityApp event table entries

END_EVENT_TABLE()


/*
 * Constructor for wxMACAddressUtilityApp
 */

wxMACAddressUtilityApp::wxMACAddressUtilityApp()
{
    Init();
}


/*
 * Member initialisation
 */

void wxMACAddressUtilityApp::Init()
{
////@begin wxMACAddressUtilityApp member initialisation
////@end wxMACAddressUtilityApp member initialisation
}

/*
 * Initialisation for wxMACAddressUtilityApp
 */

bool wxMACAddressUtilityApp::OnInit()
{
	wxMACAddressUtilityMainFrame* mainWindow = new wxMACAddressUtilityMainFrame( NULL );
	mainWindow->Centre();
	mainWindow->Show(true);
    return true;
}


/*
 * Cleanup for wxMACAddressUtilityApp
 */

int wxMACAddressUtilityApp::OnExit()
{
////@begin wxMACAddressUtilityApp cleanup
	return wxApp::OnExit();
////@end wxMACAddressUtilityApp cleanup
}

