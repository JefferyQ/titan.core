/******************************************************************************
 * Copyright (c) 2000-2017 Ericsson Telecom AB
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *   Balasko, Jeno
 *   Lovassy, Arpad
 *   Raduly, Csaba
 *   Szabados, Kristof
 *
 ******************************************************************************/
// This Test Port skeleton header file was generated by the
// TTCN-3 Compiler of the TTCN-3 Test Executor version 1.7.pre2 build 2
// for ecsardu (ecsardu@E0017A4D11749) on Thu Jan 10 14:37:19 2008


// You may modify this file. Add your attributes and prototypes of your
// member functions here.

#ifndef PT__DefOpt_HH
#define PT__DefOpt_HH

#include "Tsenderos.hh"

#ifndef OLD_NAMES
namespace Tsenderos {
#define DATATYPES_NS Datatypes::
#else
#define DATATYPES_NS
#endif

class PT__DefOpt : public PT__DefOpt_BASE {
public:
	PT__DefOpt(const char *par_port_name = NULL);
	~PT__DefOpt();

	void set_parameter(const char *parameter_name,
		const char *parameter_value);

	void Event_Handler(const fd_set *read_fds,
		const fd_set *write_fds, const fd_set *error_fds,
		double time_since_last_call);

protected:
	void user_map(const char *system_port);
	void user_unmap(const char *system_port);

	void user_start();
	void user_stop();

	void outgoing_send(const DATATYPES_NS Deff& send_par);
	void outgoing_send(const DATATYPES_NS Opt& send_par);
};

#ifndef OLD_NAMES
} /* end of namespace */
#endif

#endif
