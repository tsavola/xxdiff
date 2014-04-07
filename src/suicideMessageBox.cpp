/* -*- c-file-style: "xxdiff" -*- */
/******************************************************************************\
 * $RCSfile$
 *
 * Copyright (C) 1999-2003  Martin Blais <blais@furius.ca>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 ******************************************************************************/

/*==============================================================================
 * EXTERNAL DECLARATIONS
 *============================================================================*/

#include <suicideMessageBox.h>

XX_NAMESPACE_BEGIN

/*==============================================================================
 * PUBLIC FUNCTIONS
 *============================================================================*/

/*==============================================================================
 * CLASS XxSuicideMessageBox
 *============================================================================*/

//------------------------------------------------------------------------------
//
XxSuicideMessageBox::XxSuicideMessageBox( 
   QWidget*       parent,
   const QString& caption, 
   const QString& text, 
   Icon           icon 
) :
   QMessageBox( caption, text, icon, 1, 0, 0, parent, 0, false )
{}

//------------------------------------------------------------------------------
//
void XxSuicideMessageBox::done( int /*r*/ )
{
   delete this;
}

XX_NAMESPACE_END
