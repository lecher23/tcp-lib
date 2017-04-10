#ifndef NETCORE_H
#define NETCORE_H

#include <unordered_map>
#include <atomic>
#include <vector>
#include "utils/common_define.h"
#include "tcpserver.h"
#include "ibizsuit.h"

BEGIN_NAMESPACE(fnet)

#define MAX_MSG_QUEUE_SIZE 512
#define WORK_THREADS_COUNT 4

class NetCore{
public:
  NetCore();
  ~NetCore();

  void add_conn(ConnectionPtr conn);

  void close_conn(std::size_t conn_id);

  void start(int port);

  void stop() {_stop = true;}

private:
  void start_work_loop();

  std::unordered_map<int64_t, ConnectionPtr> _conns;
  BlockMessageQueue _queue{MAX_MSG_QUEUE_SIZE};
  TcpServerPtr _server;
  bool _stop{false};
  IBizSuitPtr _biz;
  io_service _work_service;
  shared_ptr<io_service::work> _work_ptr;
  std::vector<std::shared_ptr<std::thread> > _work_threads;
};

END_NAMESPACE
#endif
