// Copyright (C) 2010 von Karman Institute for Fluid Dynamics, Belgium
//
// This software is distributed under the terms of the
// GNU Lesser General Public License version 3 (LGPLv3).
// See doc/lgpl.txt and doc/gpl.txt for the license text.

#ifndef CF_GUI_Client_uTests_GraphicalValueTest_hpp
#define CF_GUI_Client_uTests_GraphicalValueTest_hpp

#include <QObject>

class QValidator;

////////////////////////////////////////////////////////////////////////////

namespace CF {
namespace GUI {

namespace ClientUI { class GraphicalArray; }

namespace ClientTest {

//////////////////////////////////////////////////////////////////////////

class GraphicalValueTest : public QObject
{
  Q_OBJECT

private slots:

  void test_createFromOption();

  void test_createFromOptionArray();

  void test_createFromOptionRestrValues();

  void test_createFromOptionArrayRestrValues();

private:

  const QValidator * arrayValidator(GUI::ClientUI::GraphicalArray* array);

}; // GraphicalValueTest

//////////////////////////////////////////////////////////////////////////

} // ClientTest
} // GUI
} // CF

////////////////////////////////////////////////////////////////////////////

#endif // CF_GUI_Client_uTests_GraphicalValueTest_hpp
