// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 90 bytes in 1 exact ranges.
// Source symbol alias: FUN_58774d50.

// Ghidra body range 0x58774D50..0x58774DAA; 90 mapped bytes.
extern "C" __declspec(naked) void FUN_58774d50_segment_00() {
    __asm {
        // 0x58774D50: push ecx
        __asm _emit 0x51
        // 0x58774D51: mov edx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58774D54: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58774D56: mov dword ptr [esp], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x24
        // 0x58774D59: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x58774D5C: je 0x58774d84
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x58774D5E: call 0x58772380
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0xD6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58774D63: lea eax, [esp]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x24
        // 0x58774D66: push eax
        __asm _emit 0x50
        // 0x58774D67: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58774D69: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58774D6B: push 0x58774c90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x4C
        __asm _emit 0x77
        __asm _emit 0x58
        // 0x58774D70: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58774D72: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58774D74: call 0x5897cec2
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0x81
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58774D79: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58774D7D: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58774D80: pop ecx
        __asm _emit 0x59
        // 0x58774D81: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58774D84: test dl, 2
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x02
        // 0x58774D87: je 0x58774da6
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x58774D89: lea ecx, [esp]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x24
        // 0x58774D8C: push ecx
        __asm _emit 0x51
        // 0x58774D8D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58774D8F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58774D91: push 0x58774c40
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x4C
        __asm _emit 0x77
        __asm _emit 0x58
        // 0x58774D96: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58774D98: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58774D9A: call 0x5897cec2
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x81
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58774D9F: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58774DA3: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58774DA6: pop ecx
        __asm _emit 0x59
        // 0x58774DA7: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
