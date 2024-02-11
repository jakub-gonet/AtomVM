/*
 * This file is part of AtomVM.
 *
 * Copyright 2019 Davide Bettio <davide@uninstall.it>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * SPDX-License-Identifier: Apache-2.0 OR LGPL-2.1-or-later
 */

#ifndef _DEFAULTATOMS_H_
#define _DEFAULTATOMS_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "globalcontext.h"

#define FALSE_ATOM_INDEX 0
#define TRUE_ATOM_INDEX 1

#define OK_ATOM_INDEX 2
#define ERROR_ATOM_INDEX 3

#define UNDEFINED_ATOM_INDEX 4

#define BADARG_ATOM_INDEX 5
#define BADARITH_ATOM_INDEX 6
#define BADARITY_ATOM_INDEX 7
#define BADFUN_ATOM_INDEX 8
#define FUNCTION_CLAUSE_ATOM_INDEX 9
#define TRY_CLAUSE_ATOM_INDEX 10
#define OUT_OF_MEMORY_ATOM_INDEX 11
#define OVERFLOW_ATOM_INDEX 12
#define SYSTEM_LIMIT_ATOM_INDEX 13

#define FLUSH_ATOM_INDEX 14
#define HEAP_SIZE_ATOM_INDEX 15
#define LATIN1_ATOM_INDEX 16
#define MAX_HEAP_SIZE_ATOM_INDEX 17
#define MEMORY_ATOM_INDEX 18
#define MESSAGE_QUEUE_LEN_ATOM_INDEX 19
#define PUTS_ATOM_INDEX 20
#define STACK_SIZE_ATOM_INDEX 21
#define MIN_HEAP_SIZE_ATOM_INDEX 22

#define PROCESS_COUNT_ATOM_INDEX 23
#define PORT_COUNT_ATOM_INDEX 24
#define ATOM_COUNT_ATOM_INDEX 25
#define SYSTEM_ARCHITECTURE_ATOM_INDEX 26
#define WORDSIZE_ATOM_INDEX 27

#define DECIMALS_ATOM_INDEX 28
#define SCIENTIFIC_ATOM_INDEX 29
#define COMPACT_ATOM_INDEX 30

#define BADMATCH_ATOM_INDEX 31
#define CASE_CLAUSE_ATOM_INDEX 32
#define IF_CLAUSE_ATOM_INDEX 33
#define THROW_ATOM_INDEX 34
#define LOW_ENTROPY_ATOM_INDEX 35
#define UNSUPPORTED_ATOM_INDEX 36
#define USED_ATOM_INDEX 37
#define ALL_ATOM_INDEX 38
#define START_ATOM_INDEX 39

#define UNDEF_ATOM_INDEX 40
#define VM_ABORT_ATOM_INDEX 41

#define LINK_ATOM_INDEX 42
#define MONITOR_ATOM_INDEX 43
#define NORMAL_ATOM_INDEX 44
#define DOWN_ATOM_INDEX 45
#define PROCESS_ATOM_INDEX 46
#define NOCATCH_ATOM_INDEX 47

#define REFC_BINARY_INFO_ATOM_INDEX 48

#define NOPROC_ATOM_INDEX 49
#define TRAP_EXIT_ATOM_INDEX 50
#define EXIT_ATOM_INDEX 51

#define BADMAP_ATOM_INDEX 52
#define BADKEY_ATOM_INDEX 53
#define NONE_ATOM_INDEX 54

#define IO_REQUEST_ATOM_INDEX 55
#define IO_REPLY_ATOM_INDEX 56
#define PUT_CHARS_ATOM_INDEX 57

#define LOWERCASE_EXIT_ATOM_INDEX 58
#define ATOMVM_VERSION_ATOM_INDEX 59

#define SECOND_ATOM_INDEX 60
#define MILLISECOND_ATOM_INDEX 61
#define MICROSECOND_ATOM_INDEX 62

#define INFINITY_ATOM_INDEX 63
#define TIMEOUT_VALUE_ATOM_INDEX 64

#define SCHEDULERS_ATOM_INDEX 65
#define SCHEDULERS_ONLINE_ATOM_INDEX 66

#define APPEND_ATOM_INDEX 67
#define PRIVATE_APPEND_ATOM_INDEX 68
#define BINARY_ATOM_INDEX 69
#define INTEGER_ATOM_INDEX 70
#define LITTLE_ATOM_INDEX 71
#define NATIVE_ATOM_INDEX 72
#define STRING_ATOM_INDEX 73
#define UTF8_ATOM_INDEX 74
#define UTF16_ATOM_INDEX 75
#define UTF32_ATOM_INDEX 76
#define BADRECORD_ATOM_INDEX 77

#define COPY_ATOM_INDEX 78
#define REUSE_ATOM_INDEX 79
#define ENSURE_AT_LEAST_ATOM_INDEX 80
#define ENSURE_EXACTLY_ATOM_INDEX 81
#define SKIP_ATOM_INDEX 82
#define GET_TAIL_ATOM_INDEX 83
#define EQUAL_COLON_EQUAL_ATOM_INDEX 84
#define SIGNED_ATOM_INDEX 85

#define MACHINE_ATOM_INDEX 86
#define AVM_FLOATSIZE_ATOM_INDEX 87

#define CLOSE_ATOM_INDEX 88
#define CLOSED_ATOM_INDEX 89
#define PORT_ATOM_INDEX 90

#define INFO_ATOM_INDEX 91

#define MODULE_ATOM_INDEX 92

#define SELECT_ATOM_INDEX 93
#define READY_INPUT_ATOM_INDEX 94
#define READY_OUTPUT_ATOM_INDEX 95

#define ATTRIBUTES_ATOM_INDEX 96
#define COMPILE_ATOM_INDEX 97
#define EXPORTS_ATOM_INDEX 98

#define INCOMPLETE_ATOM_INDEX 99

#define KILL_ATOM_INDEX 100
#define KILLED_ATOM_INDEX 101
#define LINKS_ATOM_INDEX 102

#define TOTAL_HEAP_SIZE_ATOM_INDEX 103
#define ATOMVM_HEAP_GROWTH_ATOM_INDEX 104
#define BOUNDED_FREE_ATOM_INDEX 105
#define MINIMUM_ATOM_INDEX 106
#define FIBONACCI_ATOM_INDEX 107

#define CALL_ATOM_INDEX 108
#define CAST_ATOM_INDEX 109

#define UNICODE_ATOM_INDEX 110

#define PLATFORM_ATOMS_BASE_INDEX 111

#define FALSE_ATOM TERM_FROM_ATOM_INDEX(FALSE_ATOM_INDEX)
#define TRUE_ATOM TERM_FROM_ATOM_INDEX(TRUE_ATOM_INDEX)

#define OK_ATOM TERM_FROM_ATOM_INDEX(OK_ATOM_INDEX)
#define ERROR_ATOM term_from_atom_index(ERROR_ATOM_INDEX)

#define UNDEFINED_ATOM TERM_FROM_ATOM_INDEX(UNDEFINED_ATOM_INDEX)

#define BADARG_ATOM term_from_atom_index(BADARG_ATOM_INDEX)
#define BADARITH_ATOM term_from_atom_index(BADARITH_ATOM_INDEX)
#define BADARITY_ATOM term_from_atom_index(BADARITY_ATOM_INDEX)
#define BADFUN_ATOM term_from_atom_index(BADFUN_ATOM_INDEX)
#define FUNCTION_CLAUSE_ATOM term_from_atom_index(FUNCTION_CLAUSE_ATOM_INDEX)
#define TRY_CLAUSE_ATOM term_from_atom_index(TRY_CLAUSE_ATOM_INDEX)
#define OUT_OF_MEMORY_ATOM term_from_atom_index(OUT_OF_MEMORY_ATOM_INDEX)
#define OVERFLOW_ATOM term_from_atom_index(OVERFLOW_ATOM_INDEX)
#define SYSTEM_LIMIT_ATOM term_from_atom_index(SYSTEM_LIMIT_ATOM_INDEX)

#define LATIN1_ATOM term_from_atom_index(LATIN1_ATOM_INDEX)
#define FLUSH_ATOM term_from_atom_index(FLUSH_ATOM_INDEX)
#define HEAP_SIZE_ATOM TERM_FROM_ATOM_INDEX(HEAP_SIZE_ATOM_INDEX)
#define MAX_HEAP_SIZE_ATOM term_from_atom_index(MAX_HEAP_SIZE_ATOM_INDEX)
#define MEMORY_ATOM TERM_FROM_ATOM_INDEX(MEMORY_ATOM_INDEX)
#define MESSAGE_QUEUE_LEN_ATOM TERM_FROM_ATOM_INDEX(MESSAGE_QUEUE_LEN_ATOM_INDEX)
#define PUTS_ATOM term_from_atom_index(PUTS_ATOM_INDEX)
#define STACK_SIZE_ATOM TERM_FROM_ATOM_INDEX(STACK_SIZE_ATOM_INDEX)
#define MIN_HEAP_SIZE_ATOM term_from_atom_index(MIN_HEAP_SIZE_ATOM_INDEX)

#define PROCESS_COUNT_ATOM term_from_atom_index(PROCESS_COUNT_ATOM_INDEX)
#define PORT_COUNT_ATOM term_from_atom_index(PORT_COUNT_ATOM_INDEX)
#define ATOM_COUNT_ATOM term_from_atom_index(ATOM_COUNT_ATOM_INDEX)
#define SYSTEM_ARCHITECTURE_ATOM term_from_atom_index(SYSTEM_ARCHITECTURE_ATOM_INDEX)
#define WORDSIZE_ATOM term_from_atom_index(WORDSIZE_ATOM_INDEX)

#define DECIMALS_ATOM TERM_FROM_ATOM_INDEX(DECIMALS_ATOM_INDEX)
#define SCIENTIFIC_ATOM TERM_FROM_ATOM_INDEX(SCIENTIFIC_ATOM_INDEX)
#define DEFAULTATOMS_COMPACT_ATOM TERM_FROM_ATOM_INDEX(COMPACT_ATOM_INDEX)

#define BADMATCH_ATOM TERM_FROM_ATOM_INDEX(BADMATCH_ATOM_INDEX)
#define CASE_CLAUSE_ATOM TERM_FROM_ATOM_INDEX(CASE_CLAUSE_ATOM_INDEX)
#define IF_CLAUSE_ATOM TERM_FROM_ATOM_INDEX(IF_CLAUSE_ATOM_INDEX)
#define THROW_ATOM TERM_FROM_ATOM_INDEX(THROW_ATOM_INDEX)
#define LOW_ENTROPY_ATOM TERM_FROM_ATOM_INDEX(LOW_ENTROPY_ATOM_INDEX)
#define UNSUPPORTED_ATOM TERM_FROM_ATOM_INDEX(UNSUPPORTED_ATOM_INDEX)
#define USED_ATOM TERM_FROM_ATOM_INDEX(USED_ATOM_INDEX)
#define ALL_ATOM TERM_FROM_ATOM_INDEX(ALL_ATOM_INDEX)
#define START_ATOM TERM_FROM_ATOM_INDEX(START_ATOM_INDEX)

#define UNDEF_ATOM TERM_FROM_ATOM_INDEX(UNDEF_ATOM_INDEX)
#define VM_ABORT_ATOM TERM_FROM_ATOM_INDEX(VM_ABORT_ATOM_INDEX)

#define LINK_ATOM TERM_FROM_ATOM_INDEX(LINK_ATOM_INDEX)
#define MONITOR_ATOM TERM_FROM_ATOM_INDEX(MONITOR_ATOM_INDEX)
#define NORMAL_ATOM TERM_FROM_ATOM_INDEX(NORMAL_ATOM_INDEX)
#define DOWN_ATOM TERM_FROM_ATOM_INDEX(DOWN_ATOM_INDEX)
#define PROCESS_ATOM TERM_FROM_ATOM_INDEX(PROCESS_ATOM_INDEX)
#define NOCATCH_ATOM TERM_FROM_ATOM_INDEX(NOCATCH_ATOM_INDEX)

#define REFC_BINARY_INFO_ATOM TERM_FROM_ATOM_INDEX(REFC_BINARY_INFO_ATOM_INDEX)

#define NOPROC_ATOM TERM_FROM_ATOM_INDEX(NOPROC_ATOM_INDEX)
#define TRAP_EXIT_ATOM TERM_FROM_ATOM_INDEX(TRAP_EXIT_ATOM_INDEX)
#define EXIT_ATOM TERM_FROM_ATOM_INDEX(EXIT_ATOM_INDEX)

#define BADMAP_ATOM TERM_FROM_ATOM_INDEX(BADMAP_ATOM_INDEX)
#define BADKEY_ATOM TERM_FROM_ATOM_INDEX(BADKEY_ATOM_INDEX)
#define NONE_ATOM TERM_FROM_ATOM_INDEX(NONE_ATOM_INDEX)

#define IO_REQUEST_ATOM TERM_FROM_ATOM_INDEX(IO_REQUEST_ATOM_INDEX)
#define IO_REPLY_ATOM TERM_FROM_ATOM_INDEX(IO_REPLY_ATOM_INDEX)
#define PUT_CHARS_ATOM TERM_FROM_ATOM_INDEX(PUT_CHARS_ATOM_INDEX)

#define LOWERCASE_EXIT_ATOM TERM_FROM_ATOM_INDEX(LOWERCASE_EXIT_ATOM_INDEX)
#define ATOMVM_VERSION_ATOM TERM_FROM_ATOM_INDEX(ATOMVM_VERSION_ATOM_INDEX)

#define SECOND_ATOM TERM_FROM_ATOM_INDEX(SECOND_ATOM_INDEX)
#define MILLISECOND_ATOM TERM_FROM_ATOM_INDEX(MILLISECOND_ATOM_INDEX)
#define MICROSECOND_ATOM TERM_FROM_ATOM_INDEX(MICROSECOND_ATOM_INDEX)

#define INFINITY_ATOM TERM_FROM_ATOM_INDEX(INFINITY_ATOM_INDEX)
#define TIMEOUT_VALUE_ATOM TERM_FROM_ATOM_INDEX(TIMEOUT_VALUE_ATOM_INDEX)

#define SCHEDULERS_ATOM TERM_FROM_ATOM_INDEX(SCHEDULERS_ATOM_INDEX)
#define SCHEDULERS_ONLINE_ATOM TERM_FROM_ATOM_INDEX(SCHEDULERS_ONLINE_ATOM_INDEX)

#define APPEND_ATOM TERM_FROM_ATOM_INDEX(APPEND_ATOM_INDEX)
#define PRIVATE_APPEND_ATOM TERM_FROM_ATOM_INDEX(PRIVATE_APPEND_ATOM_INDEX)
#define BINARY_ATOM TERM_FROM_ATOM_INDEX(BINARY_ATOM_INDEX)
#define INTEGER_ATOM TERM_FROM_ATOM_INDEX(INTEGER_ATOM_INDEX)
#define LITTLE_ATOM TERM_FROM_ATOM_INDEX(LITTLE_ATOM_INDEX)
#define NATIVE_ATOM TERM_FROM_ATOM_INDEX(NATIVE_ATOM_INDEX)
#define STRING_ATOM TERM_FROM_ATOM_INDEX(STRING_ATOM_INDEX)
#define UTF8_ATOM TERM_FROM_ATOM_INDEX(UTF8_ATOM_INDEX)
#define UTF16_ATOM TERM_FROM_ATOM_INDEX(UTF16_ATOM_INDEX)
#define UTF32_ATOM TERM_FROM_ATOM_INDEX(UTF32_ATOM_INDEX)
#define BADRECORD_ATOM TERM_FROM_ATOM_INDEX(BADRECORD_ATOM_INDEX)

#define COPY_ATOM TERM_FROM_ATOM_INDEX(COPY_ATOM_INDEX)
#define REUSE_ATOM TERM_FROM_ATOM_INDEX(REUSE_ATOM_INDEX)
#define ENSURE_AT_LEAST_ATOM TERM_FROM_ATOM_INDEX(ENSURE_AT_LEAST_ATOM_INDEX)
#define ENSURE_EXACTLY_ATOM TERM_FROM_ATOM_INDEX(ENSURE_EXACTLY_ATOM_INDEX)
#define SKIP_ATOM TERM_FROM_ATOM_INDEX(SKIP_ATOM_INDEX)
#define GET_TAIL_ATOM TERM_FROM_ATOM_INDEX(GET_TAIL_ATOM_INDEX)
#define EQUAL_COLON_EQUAL_ATOM TERM_FROM_ATOM_INDEX(EQUAL_COLON_EQUAL_ATOM_INDEX)
#define SIGNED_ATOM TERM_FROM_ATOM_INDEX(SIGNED_ATOM_INDEX)

#define MACHINE_ATOM TERM_FROM_ATOM_INDEX(MACHINE_ATOM_INDEX)
#define AVM_FLOATSIZE_ATOM TERM_FROM_ATOM_INDEX(AVM_FLOATSIZE_ATOM_INDEX)

#define CLOSE_ATOM TERM_FROM_ATOM_INDEX(CLOSE_ATOM_INDEX)
#define CLOSED_ATOM TERM_FROM_ATOM_INDEX(CLOSED_ATOM_INDEX)
#define PORT_ATOM TERM_FROM_ATOM_INDEX(PORT_ATOM_INDEX)

#define INFO_ATOM TERM_FROM_ATOM_INDEX(INFO_ATOM_INDEX)

#define MODULE_ATOM TERM_FROM_ATOM_INDEX(MODULE_ATOM_INDEX)

#define SELECT_ATOM TERM_FROM_ATOM_INDEX(SELECT_ATOM_INDEX)
#define READY_INPUT_ATOM TERM_FROM_ATOM_INDEX(READY_INPUT_ATOM_INDEX)
#define READY_OUTPUT_ATOM TERM_FROM_ATOM_INDEX(READY_OUTPUT_ATOM_INDEX)

#define ATTRIBUTES_ATOM TERM_FROM_ATOM_INDEX(ATTRIBUTES_ATOM_INDEX)
#define COMPILE_ATOM TERM_FROM_ATOM_INDEX(COMPILE_ATOM_INDEX)
#define EXPORTS_ATOM TERM_FROM_ATOM_INDEX(EXPORTS_ATOM_INDEX)

#define INCOMPLETE_ATOM TERM_FROM_ATOM_INDEX(INCOMPLETE_ATOM_INDEX)

#define KILL_ATOM TERM_FROM_ATOM_INDEX(KILL_ATOM_INDEX)
#define KILLED_ATOM TERM_FROM_ATOM_INDEX(KILLED_ATOM_INDEX)
#define LINKS_ATOM TERM_FROM_ATOM_INDEX(LINKS_ATOM_INDEX)

#define TOTAL_HEAP_SIZE_ATOM TERM_FROM_ATOM_INDEX(TOTAL_HEAP_SIZE_ATOM_INDEX)
#define ATOMVM_HEAP_GROWTH_ATOM TERM_FROM_ATOM_INDEX(ATOMVM_HEAP_GROWTH_ATOM_INDEX)
#define BOUNDED_FREE_ATOM TERM_FROM_ATOM_INDEX(BOUNDED_FREE_ATOM_INDEX)
#define MINIMUM_ATOM TERM_FROM_ATOM_INDEX(MINIMUM_ATOM_INDEX)
#define FIBONACCI_ATOM TERM_FROM_ATOM_INDEX(FIBONACCI_ATOM_INDEX)

#define CALL_ATOM TERM_FROM_ATOM_INDEX(CALL_ATOM_INDEX)
#define CAST_ATOM TERM_FROM_ATOM_INDEX(CAST_ATOM_INDEX)

#define UNICODE_ATOM TERM_FROM_ATOM_INDEX(UNICODE_ATOM_INDEX)

void defaultatoms_init(GlobalContext *glb);

void platform_defaultatoms_init(GlobalContext *glb);

#ifdef __cplusplus
}
#endif

#endif
