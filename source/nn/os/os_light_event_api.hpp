/*
 * Copyright (c) Atmosphère-NX
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "nn/nn_common.hpp"
#include "nn/time.hpp"
#include "os_event_common.hpp"

namespace nn::os {

    struct LightEventType;

    void InitializeLightEvent(LightEventType *event, bool signaled, EventClearMode clear_mode);
    void FinalizeLightEvent(LightEventType *event);

    void SignalLightEvent(LightEventType *event);
    void WaitLightEvent(LightEventType *event);
    bool TryWaitLightEvent(LightEventType *event);
    bool TimedWaitLightEvent(LightEventType *event, TimeSpan timeout);
    void ClearLightEvent(LightEventType *event);

}
