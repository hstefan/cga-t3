#ifndef HSTEFAN_CORE_DEBUGGING_DEBUG_HPP
#define HSTEFAN_CORE_DEBUGGING_DEBUG_HPP

#ifdef _DEBUG
#include <cstdio>
#define DEBUG_ERR(MSG) fprintf(stderr, MSG);
#define DEBUG_MSG(MSG) fprintf(stdout, MSG);
#else
#define DBGMSG_CERR(MSG) (void)0
#define DBGMSG(MSG) (void)0
#endif

#endif