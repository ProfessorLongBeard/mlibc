#ifndef _ARCH_SYSCALL_H
#define _ARCH_SYSCALL_H

#define SYS_read 0
#define SYS_write 1
#define SYS_open 2
#define SYS_close 3
#define SYS_stat 4
#define SYS_fstat 5
#define SYS_poll 7
#define SYS_lseek 8
#define SYS_mmap 9
#define SYS_mprotect 10
#define SYS_munmap 11
#define SYS_rt_sigaction 13
#define SYS_rt_sigprocmask 14
#define SYS_ioctl 16
#define SYS_pread64 17
#define SYS_pwrite64 18
#define SYS_access 21
#define SYS_pipe 22
#define SYS_select 23
#define SYS_madvise 28
#define SYS_dup 32
#define SYS_nanosleep 35
#define SYS_setitimer 38
#define SYS_getpid 39
#define SYS_socket 41
#define SYS_connect 42
#define SYS_accept 43
#define SYS_sendmsg 46
#define SYS_recvmsg 47
#define SYS_shutdown 48
#define SYS_bind 49
#define SYS_listen 50
#define SYS_getsockname 51
#define SYS_getpeername 52
#define SYS_socketpair 53
#define SYS_setsockopt 54
#define SYS_getsockopt 55
#define SYS_clone 56
#define SYS_fork 57
#define SYS_execve 59
#define SYS_exit 60
#define SYS_wait4 61
#define SYS_kill 62
#define SYS_uname 63
#define SYS_fcntl 72
#define SYS_fsync 74
#define SYS_fdatasync 75
#define SYS_ftruncate 75
#define SYS_getcwd 79
#define SYS_chdir 80
#define SYS_fchdir 81
#define SYS_rename 82
#define SYS_mkdir 83
#define SYS_rmdir 84
#define SYS_unlink 87
#define SYS_symlink 88
#define SYS_readlink 89
#define SYS_chmod 90
#define SYS_fchmod 91
#define SYS_chown 92
#define SYS_fchown 93
#define SYS_umask 95
#define SYS_getrlimit 97
#define SYS_getrusage 97
#define SYS_times 100
#define SYS_ptrace 101
#define SYS_getuid 102
#define SYS_getgid 104
#define SYS_setuid 105
#define SYS_geteuid 107
#define SYS_getegid 108
#define SYS_setpgid 109
#define SYS_getppid 110
#define SYS_setsid 112
#define SYS_getgroups 115
#define SYS_getpgid 121
#define SYS_getsid 124
#define SYS_rt_sigsuspend 130
#define SYS_sigaltstack 131
#define SYS_statfs 137
#define SYS_fstatfs 138
#define SYS_getpriority 140
#define SYS_setpriority 141
#define SYS_prctl 157
#define SYS_arch_prctl 158
#define SYS_setrlimit 160
#define SYS_sync 162
#define SYS_mount 165
#define SYS_umount2 166
#define SYS_reboot 169
#define SYS_sethostname 170
#define SYS_futex 202
#define SYS_getdents64 217
#define SYS_sys_futex 202
#define SYS_fadvise64 221
#define SYS_clock_gettime 228
#define SYS_clock_getres 229
#define SYS_exit_group 231
#define SYS_epoll_wait 232
#define SYS_epoll_ctl 233
#define SYS_tgkill 234
#define SYS_inotify_init 253
#define SYS_openat 257
#define SYS_mkdirat 258
#define SYS_mknodat 259
#define SYS_fchownat 260
#define SYS_newfstatat 262
#define SYS_unlinkat 263
#define SYS_renameat 264
#define SYS_symlinkat 266
#define SYS_readlinkat 267
#define SYS_fchmodat 268
#define SYS_faccessat 269
#define SYS_pselect6 270
#define SYS_ppoll 271
#define SYS_utimensat 280
#define SYS_epoll_pwait 281
#define SYS_timerfd_create 283
#define SYS_timerfd_settime 286
#define SYS_accept4 288
#define SYS_signalfd4 289
#define SYS_eventfd2 290
#define SYS_epoll_create1 291
#define SYS_dup3 292
#define SYS_pipe2 293
#define SYS_inotify_init1 294
#define SYS_kcmp 312
#define SYS_getrandom 318

#endif // _ARCH_SYSCALL_H
