#ifndef GAMEBUSINESSIMPL_H
#define GAMEBUSINESSIMPL_H

#include "network/ibizsuit.h"

BEGIN_NAMESPACE(fgame)

class GameBusinessImpl:public fnet::IBizSuit{
public:
  explicit GameBusinessImpl(boost::asio::io_service& s, SendMsgFuncType f)
      :fnet::IBizSuit(s, f) {}

  virtual bool do_process(fnet::TcpMessagePtr msg);
};

END_NAMESPACE
#endif
