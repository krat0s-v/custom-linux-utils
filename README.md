# Custom Linux Utils

A collection of standard Linux command-line utilities reimplemented from scratch in C. 
The goal of this project is to master **low-level system programming**, understand **kernel-user space communication**, and explore **security-related system internals**.

---

## 🚀 Project Roadmap

* **ps** - Process status via `/proc` parsing. [Status: **In Progress** 🛠]
* **id** - User and group identity via `getuid` / `getgid` syscalls. [Status: **Planned** 📅]
* **pmap** - Process memory map analysis. [Status: **Planned** 📅]

## 🎯 Learning Objectives

* **Direct Kernel Interaction:** Understanding how the Linux Kernel exposes data via the `/proc` filesystem.
* **System Internals:** Exploring process state transitions, memory management, and isolation.
* **Low-level Parsing:** Handling raw data from system files with minimal dependency footprint (bypassing heavy glibc wrappers).
* **Professional Standards:** Maintaining clean, modular C code with full **Doxygen** documentation.

## 🛠 Tech Stack

* **Language:** C (C11/C99)
* **Environment:** Linux (x86_64)
* **Interface:** Direct Syscalls / Glibc
* **Documentation:** Doxygen

## 🏗 Build & Run

To build a specific tool, navigate to its directory and use `make`:
```bash
# Example: Building 'ps'
cd ps
make

# Run the utility
./ps
```

## 📚 Documentation

The source code follows the Doxygen standard for documentation. To generate a local HTML/LaTeX report, run:
```bash
doxygen Doxyfile
```

---

*Created by **krat0s-v** – Deep dive into Linux internals and security research.*