/*
 * Copyright 2022-present MongoDB, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PHONGO_BSON_OBJECTID_H
#define PHONGO_BSON_OBJECTID_H

#include "bson/bson.h"

#include <php.h>

void phongo_objectid_init(zval* return_value, const bson_oid_t* oid);

#endif /* PHONGO_BSON_OBJECTID_H */