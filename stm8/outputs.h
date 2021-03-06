/* Copyright (C) 2015 Baruch Even
 *
 * This file is part of the B3603 alternative firmware.
 *
 *  B3603 alternative firmware is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  B3603 alternative firmware is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with B3603 alternative firmware.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef OUTPUTS_H
#define OUTPUTS_H

#include <stdint.h>

#include "config.h"

void pwm_init(void);
uint16_t pwm_from_set(uint16_t set, calibrate_t *cal);
void output_commit(cfg_output_t *cfg, cfg_system_t *sys, uint8_t state_constant_current);
void output_check_state(cfg_system_t *sys, uint8_t state_constant_current);

#endif
