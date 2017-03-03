#ifndef RIBI_TESTTRIANGLEMENUDIALOG_H
#define RIBI_TESTTRIANGLEMENUDIALOG_H

#include <string>
#include <vector>

#include "menudialog.h"

struct QRegExp;

namespace ribi {

///GUI independent TestTriangle menu dialog
struct TestTriangleMenuDialog : public MenuDialog
{
  TestTriangleMenuDialog();
  About GetAbout() const noexcept;
  Help GetHelp() const noexcept;
  std::string GetVersion() const noexcept;
  std::vector<std::string> GetVersionHistory() const noexcept;

  private:
  int ExecuteSpecific(const std::vector<std::string>& argv) noexcept;


  #ifndef NDEBUG
  static void Test() noexcept;
  #endif
};

} //namespace ribi

#endif // RIBI_TESTTRIANGLEMENUDIALOG_H
