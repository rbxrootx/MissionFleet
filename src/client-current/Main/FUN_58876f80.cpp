// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 27 bytes in 2 exact ranges.
// Source symbol alias: FUN_58876f80.

// Ghidra body range 0x58876F80..0x58876F95; 21 mapped bytes.
extern "C" __declspec(naked) void FUN_58876f80_segment_00() {
    __asm {
        // 0x58876F80: push esi
        __asm _emit 0x56
        // 0x58876F81: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58876F83: call 0x58876d40
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876F88: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x58876F8D: je 0x58876f98
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58876F8F: push esi
        __asm _emit 0x56
        // 0x58876F90: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x5C
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58876F98..0x58876F9E; 6 mapped bytes.
extern "C" __declspec(naked) void FUN_58876f80_segment_01() {
    __asm {
        // 0x58876F98: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58876F9A: pop esi
        __asm _emit 0x5E
        // 0x58876F9B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Ghidra ends the deleting-destructor body at its call-terminator edge.
// Preserve the mapped post-call stack adjustment at 0x58876F95 explicitly.
extern "C" __declspec(naked) void FUN_58876f80_postcall_stack_cleanup() {
    __asm {
        // 0x58876F95: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
    }
}
