/*
 * Copyright (c)2013-2021 ZeroTier, Inc.
 *
 * Use of this software is governed by the Business Source License included
 * in the LICENSE.TXT file in the project's root directory.
 *
 * Change Date: 2026-01-01
 *
 * On the date above, in accordance with the Business Source License, use
 * of this software will be governed by version 2.0 of the Apache License.
 */
/****/

#ifndef ZTS_PYTHON_SOCKETS_H
#define ZTS_PYTHON_SOCKETS_H

#ifdef ZTS_ENABLE_PYTHON
#include "Python.h"

int zts_py_bind(int fd, int family, int type, PyObject* addro);

int zts_py_connect(int fd, int family, int type, PyObject* addro);

PyObject* zts_py_accept(int fd);

int zts_py_listen(int fd, int backlog);

PyObject* zts_py_recv(int fd, int len, int flags);

int zts_py_send(int fd, PyObject* buf, int flags);

int zts_py_close(int fd);

int zts_py_setblocking(int fd, int flag);

int zts_py_getblocking(int fd);

PyObject* zts_py_addr_get_str(uint64_t net_id, int family);

#endif   // ZTS_ENABLE_PYTHON

#endif   // ZTS_PYTHON_SOCKETS_H
