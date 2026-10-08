// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 27 bytes in 2 exact ranges.
// Source symbol alias: FUN_58877b40.

// Ghidra body range 0x58877B40..0x58877B55; 21 mapped bytes.
extern "C" __declspec(naked) void FUN_58877b40_segment_00() {
    __asm {
        // 0x58877B40: push esi
        __asm _emit 0x56
        // 0x58877B41: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58877B43: call 0x58877980
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58877B48: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x58877B4D: je 0x58877b58
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58877B4F: push esi
        __asm _emit 0x56
        // 0x58877B50: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0x50
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58877B58..0x58877B5E; 6 mapped bytes.
extern "C" __declspec(naked) void FUN_58877b40_segment_01() {
    __asm {
        // 0x58877B58: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58877B5A: pop esi
        __asm _emit 0x5E
        // 0x58877B5B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Ghidra ends the deleting-destructor body at its call-terminator edge.
// Preserve the mapped post-call stack adjustment at 0x58877B55 explicitly.
extern "C" __declspec(naked) void FUN_58877b40_postcall_stack_cleanup() {
    __asm {
        // 0x58877B55: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
    }
}
