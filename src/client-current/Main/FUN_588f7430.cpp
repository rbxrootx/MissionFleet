// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 120 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f7430.

// Ghidra body range 0x588F7430..0x588F74A8; 120 mapped bytes.
extern "C" __declspec(naked) void FUN_588f7430_segment_00() {
    __asm {
        // 0x588F7430: mov eax, dword ptr [0x58a245f0]
        __asm _emit 0xA1
        __asm _emit 0xF0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F7435: mov dword ptr [ecx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x588F7438: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588F743C: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x588F743F: ja 0x588f7489
        __asm _emit 0x77
        __asm _emit 0x48
        // 0x588F7441: jmp dword ptr [eax*4 + 0x588f74a8]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xA8
        __asm _emit 0x74
        __asm _emit 0x8F
        __asm _emit 0x58
        // 0x588F7448: mov dword ptr [esp + 4], 0x589a1d78
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x78
        __asm _emit 0x1D
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F7450: jmp 0x588f7230
        __asm _emit 0xE9
        __asm _emit 0xDB
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F7455: mov dword ptr [esp + 4], 0x589a1a78
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x78
        __asm _emit 0x1A
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F745D: jmp 0x588f7230
        __asm _emit 0xE9
        __asm _emit 0xCE
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F7462: mov dword ptr [esp + 4], 0x589a1d54
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x54
        __asm _emit 0x1D
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F746A: jmp 0x588f7230
        __asm _emit 0xE9
        __asm _emit 0xC1
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F746F: mov dword ptr [esp + 4], 0x589a1d20
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x1D
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F7477: jmp 0x588f7230
        __asm _emit 0xE9
        __asm _emit 0xB4
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F747C: mov dword ptr [esp + 4], 0x589a1cf4
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0xF4
        __asm _emit 0x1C
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F7484: jmp 0x588f7230
        __asm _emit 0xE9
        __asm _emit 0xA7
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F7489: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x588F748C: push ecx
        __asm _emit 0x51
        // 0x588F748D: push 0x23
        __asm _emit 0x6A
        __asm _emit 0x23
        // 0x588F748F: push 0x589a1a18
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x1A
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F7494: push 0x2711
        __asm _emit 0x68
        __asm _emit 0x11
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7499: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x46
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588F749E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F74A0: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0xD8
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588F74A5: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
