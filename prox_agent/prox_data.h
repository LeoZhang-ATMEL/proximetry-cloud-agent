/*******************************************************************************
*
* Proximetry AMP Agent Application
*
* Copyright (C) 2016 Proximetry Inc. All rights reserved.
* Authors: Proximetry (www.proximetry.io)
*
* THIS SOFTWARE IS PROVIDED BY PROXIMETRY "AS IS" AND ANY EXPRESS OR IMPLIED
* WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
* EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL PROXIMETRY BE LIABLE
* FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
* DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
* OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
* HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
* STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
* ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
* POSSIBILITY OF SUCH DAMAGE.
*
******************************************************************************/

/**
 * @file prox_data.h
 * @brief Proximetry Agent - Module Internal Interface
 * */

#ifndef PROX_DATA_H
#define PROX_DATA_H

/* This must be increment with every new release of the component */
#define PROX_COMPONENT_VER_MAJOR     3
#define PROX_COMPONENT_VER_MINOR     1
#define PROX_COMPONENT_VER_REVISION  1
#define PROX_COMPONENT_VER_INSTANCE  0     // if 0 then it is a pure copy of module without local changes.
                                     	   // Increment it when the module code is modified due to project specific requirements.

#define PROX_COMPONENT_VER       TOSTR(PROX_COMPONENT_VER_MAJOR)"."TOSTR(PROX_COMPONENT_VER_MINOR)"."TOSTR(PROX_COMPONENT_VER_REVISION)"."TOSTR(PROX_COMPONENT_VER_INSTANCE)"-as"

/**
 * @brief 
 */
void prox_check_and_lib_init(void);

/**
 * @brief Statically allocated variables for Proximetry Library
 */
extern prox_vars_t prox_vars;

/**
 * @brief Parameter changed callback function
 */
void prox_conf_param_changed(uint32_t param_id);

/**
 * @brief Update Statistic data in the Proximetry Library
 */
void prox_stats_update(void);

/**
 * @brief Prints Configuration Parameters values from the Proximetry Library
 */
void prox_dump_conf_params(void);



#endif

