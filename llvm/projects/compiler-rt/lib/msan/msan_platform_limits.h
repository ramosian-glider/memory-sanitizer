#ifndef MSAN_PLATFORM_LIMITS_H
#define MSAN_PLATFORM_LIMITS_H

namespace __msan {
  extern unsigned struct_utsname_sz;
  extern unsigned struct_stat_sz;
  extern unsigned struct_stat64_sz;
  extern unsigned struct_rlimit_sz;
  extern unsigned struct_rlimit64_sz;
  extern unsigned struct_dirent_sz;
  extern unsigned struct_statfs_sz;
  extern unsigned struct_statfs64_sz;
  extern unsigned struct_epoll_event_sz;

  void* __msan_get_msghdr_iov_iov_base(void* msg, int idx);
  uptr __msan_get_msghdr_iov_iov_len(void* msg, int idx);
  uptr __msan_get_msghdr_iovlen(void* msg);
};

#endif