// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 97 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f72d0.

// Ghidra body range 0x588F72D0..0x588F7331; 97 mapped bytes.
extern "C" __declspec(naked) void FUN_588f72d0_segment_00() {
    __asm {
        // 0x588F72D0: mov eax, dword ptr [0x58a245f4]
        __asm _emit 0xA1
        __asm _emit 0xF4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F72D5: mov dword ptr [ecx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x588F72D8: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588F72DC: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x588F72DF: je 0x588f7324
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x588F72E1: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x588F72E4: je 0x588f7317
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x588F72E6: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x588F72E9: je 0x588f730a
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x588F72EB: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x588F72EE: push ecx
        __asm _emit 0x51
        // 0x588F72EF: push 0x23
        __asm _emit 0x6A
        __asm _emit 0x23
        // 0x588F72F1: push 0x589a1a18
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x1A
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F72F6: push 0x2711
        __asm _emit 0x68
        __asm _emit 0x11
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F72FB: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x47
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588F7300: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F7302: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0xDA
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588F7307: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F730A: mov dword ptr [esp + 4], 0x589a1ab8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0xB8
        __asm _emit 0x1A
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F7312: jmp 0x588f7230
        __asm _emit 0xE9
        __asm _emit 0x19
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F7317: mov dword ptr [esp + 4], 0x589a1a90
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x90
        __asm _emit 0x1A
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F731F: jmp 0x588f7230
        __asm _emit 0xE9
        __asm _emit 0x0C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F7324: mov dword ptr [esp + 4], 0x589a1a78
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x78
        __asm _emit 0x1A
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F732C: jmp 0x588f7230
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
    }
}
