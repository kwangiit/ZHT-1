/*
 * Copyright 2010-2020 DatasysLab@iit.edu(http://datasys.cs.iit.edu/index.html)
 *      Director: Ioan Raicu(iraicu@cs.iit.edu)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * This file is part of ZHT library(http://datasys.cs.iit.edu/projects/ZHT/index.html).
 *      Tonglin Li(tli13@hawk.iit.edu) with nickname Tony,
 *      Xiaobing Zhou(xzhou40@hawk.iit.edu) with nickname Xiaobingo,
 *      Ke Wang(kwang22@hawk.iit.edu) with nickname KWang,
 *      Dongfang Zhao(dzhao8@@hawk.iit.edu) with nickname DZhao,
 *      Ioan Raicu(iraicu@cs.iit.edu).
 *
 * Env.h
 *
 *  Created on: Jun 25, 2013
 *      Author: Xiaobingo
 *      Contributor: Tony, KWang, DZhao
 */

#ifndef ENV_H_
#define ENV_H_

#include <sys/types.h>
#include <string>
using namespace std;

class Env {
public:
	Env();
	virtual ~Env();

public:

	static const uint BUF_SIZE; //size of blob transfered from client to server each time
	static const int MSG_DEFAULTSIZE; //max size of a message in each transfer
	static const int SCCB_POLL_DEFAULT_INTERVAL; //polling interval for state_change_callback

	static int NUM_REPLICAS;
	static int REPLICATION_TYPE; //1 for Client-side replication

public:
	static int get_msg_maxsize();
	static int get_sccb_poll_interval();
};

#endif /* ENV_H_ */
