// Copyright 2022 Matthew Dews (@matthew-dews)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#define SPLIT_TRANSACTION_IDS_USER JOYSTICK_SYNC
#define JS_X_PIN GP27
#define JS_Y_PIN GP26
#define JS_B_PIN GP28
#define SPLIT_JS_SAMPLE_MS 20

#include "quantum.h"
#include <analog.h>
#include <transactions.h>
#include <gpio.h>
#define IGNORE_UNSUSED(x) (void)x

