#include "common.h"
#include "tc_mix.h"

ubench_functions_t ubenchs[] = {
	{ "tc_base_mix_latency",          tc_base_mix_init, tc_mix_fini, tc_mix_thread_init, tc_mix_thread_fini, tc_mix_latency_thread_main, tc_mix_latency_print_stats },
	{ "tc_base_mix_throughput",       tc_base_mix_init, tc_mix_fini, tc_mix_thread_init, tc_mix_thread_fini, tc_mix_throughput_thread_main, tc_mix_throughput_print_stats },
	{ NULL, NULL, NULL, NULL, NULL, NULL, NULL},
};
