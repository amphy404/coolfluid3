#ifndef CF_GUI_Client_NMethod_hpp
#define CF_GUI_Client_NMethod_hpp

//////////////////////////////////////////////////////////////////////////////

#include "GUI/Client/CNode.hpp"

//////////////////////////////////////////////////////////////////////////////

namespace CF {
namespace GUI {
namespace Client {

  ////////////////////////////////////////////////////////////////////////////

  class NMethod :
      public CNode
  {
    Q_OBJECT

  public:

    typedef boost::shared_ptr<NMethod> Ptr;

    /// @brief Constructor
    /// @param name Node name
    NMethod(const QString & name);

    /// @brief Gives a list of action the node can execute
    /// @return Returns a list of action the node can execute
    /// @note This method should be reimplemented by all subclasses.
    virtual QList<NodeAction> getNodeActions() const;

    /// @brief Gives the icon associated to this node
    /// @return Returns the icon associated to this node
    /// @note This method should be reimplemented by all subclasses.
    virtual QIcon getIcon() const;

    virtual QString getToolTip() const;

    /// @brief Gives a string with the class name.
    /// This implementation always returns "CNode". Subclass implementations
    /// should returns their own class name.
    /// @return Returns the class name.
    /// @note This method should be reimplemented by all subclasses.
    virtual QString getClassName() const;

    virtual void getParams(QList<NodeParams> & params) const;

  }; // class NMethod

//////////////////////////////////////////////////////////////////////////////

} // namespace Client
} // namespace GUI
} // namespace CF

//////////////////////////////////////////////////////////////////////////////

#endif // CF_GUI_Client_NMethod_hpp
