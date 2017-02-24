#DEFINES += TODO_ISSUE_207

# Prevents this error:
#/usr/include/boost/math/constants/constants.hpp:277: error: unable to find numeric literal operator 'operator""Q'
#   BOOST_DEFINE_MATH_CONSTANT(half, 5.000000000000000000000000000000000000e-01, "5.00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000e-01")
#   ^
QMAKE_CXXFLAGS += -fext-numeric-literals

include(../RibiLibraries/DesktopApplication.pri)
include(../RibiLibraries/Apfloat.pri)

include(../RibiClasses/CppAbout/CppAbout.pri)
include(../RibiClasses/CppFileIo/CppFileIo.pri)
include(../RibiClasses/CppHelp/CppHelp.pri)
include(../RibiClasses/CppMenuDialog/CppMenuDialog.pri)

#Console
include(../RibiClasses/CppContainer/CppContainer.pri)
include(../RibiClasses/CppFuzzy_equal_to/CppFuzzy_equal_to.pri)
include(../RibiClasses/CppGeometry/CppGeometry.pri)
include(../RibiClasses/CppOpenFoam/CppOpenFoam.pri) #Really need it
include(../RibiClasses/CppPhp/CppPhp.pri)
include(../Plane/plane.pri)
include(../RibiClasses/CppPolyFile/CppPolyFile.pri)
include(../RibiClasses/CppPolyFileFromPolygons/CppPolyFileFromPolygons.pri)
include(../RibiClasses/CppRibiRegex/CppRibiRegex.pri)
include(../RibiClasses/CppTriangleFile/CppTriangleFile.pri)
include(../RibiClasses/CppTriangleMesh/CppTriangleMesh.pri)
include(../RibiClasses/CppXml/CppXml.pri)
#include(../../Tools/ToolTriangle/ToolTriangleConsole.pri)
#include(../../Tools/ToolTriangleCpp/ToolTriangleCppConsole.pri)

#Desktop
include(../RibiClasses/CppQtNavigationableGraphicsView/CppQtNavigationableGraphicsView.pri)
include(ToolTestTriangleDesktop.pri)
include(../RibiClasses/CppQtAboutDialog/CppQtAboutDialog.pri)
include(../RibiClasses/CppQtHideAndShowDialog/CppQtHideAndShowDialog.pri)

SOURCES += qtmain.cpp

