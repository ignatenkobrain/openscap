/*
 * Copyright 2015 Red Hat Inc., Durham, North Carolina.
 * All Rights Reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Authors:
 *      "Jan Černý" <jcerny@redhat.com>
 */

#ifndef OSCAP_OVAL_STATUS_COUNTER_H_
#define OSCAP_OVAL_STATUS_COUNTER_H_

#include "../common/util.h"
#include "oval_definitions.h"
#include "oval_types.h"
#include "oval_system_characteristics.h"


struct oval_status_counter {
	int error_cnt;
	int exists_cnt;
	int does_not_exist_cnt;
	int not_collected_cnt;
};

void oval_status_counter_clear(struct oval_status_counter *counter);
void oval_status_counter_add_status(struct oval_status_counter *counter, oval_syschar_status_t status);
oval_result_t oval_status_counter_get_result(struct oval_status_counter *counter, oval_existence_t check_existence);


#endif
