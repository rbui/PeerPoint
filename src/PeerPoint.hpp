// Default empty project template
#ifndef PeerPoint_HPP_
#define PeerPoint_HPP_

#include <QObject>

namespace bb { namespace cascades { class Application; }}

/*!
 * @brief Application pane object
 *
 *Use this object to create and init app UI, to create context objects, to register the new meta types etc.
 */
class PeerPoint : public QObject
{
    Q_OBJECT
public:
    PeerPoint(bb::cascades::Application *app);
    virtual ~PeerPoint() {}
};


#endif /* PeerPoint_HPP_ */
