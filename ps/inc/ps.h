/**
 * @file ps.h
 * @author krat0s-v (https://github.com/krat0s-v)
 * @brief Header file for a custom, low-level implementation of the ps utility.
 * @details This tool is designed to explore the Linux /proc filesystem and
 * understand how the kernel exposes process information to user space.
 * * Key technical goals:
 * - Direct parsing of /proc/[pid]/stat and /proc/[pid]/cmdline.
 * - Minimal dependency footprint (bypassing heavy glibc wrappers).
 * - Understanding process state transitions at the kernel level.
 * @version 0.1
 * @date 2026-02-13
*/
#ifndef PS_H
#define PS_H

#include <stdio.h>

/**
 * @brief Prints the process table header to standard output.
 * @details The header follows the POSIX standard format, including columns for:
 * - PID (Process ID)
 * - TTY (Controlling Terminal)
 * - TIME (CPU usage time)
 * - CMD (Executable name/Command)
 * @note This is the first step of the output sequence before
 * data parsing begins.
 * @warning Requires the /proc file system to be mounted in
 * the standard location.
 */
void print_ps_header(void);

#endif