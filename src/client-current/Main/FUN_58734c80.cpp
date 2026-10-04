// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58734C80 .. +0x53 bytes.
// Source symbol alias: FUN_58734c80.
extern "C" __declspec(naked) void FUN_58734c80() {
    __asm {
        // 0x58734C80: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58734C84: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58734C87: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58734C89: ja 0x58734c9a
        __asm _emit 0x77
        __asm _emit 0x0F
        // 0x58734C8B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58734C8D: push ecx
        __asm _emit 0x51
        // 0x58734C8E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x7F
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58734C93: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58734C96: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58734C99: ret
        __asm _emit 0xC3
        // 0x58734C9A: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x58734C9D: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58734C9F: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x58734CA1: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58734CA4: jae 0x58734c8d
        __asm _emit 0x73
        __asm _emit 0xE7
        // 0x58734CA6: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58734CAA: push eax
        __asm _emit 0x50
        // 0x58734CAB: lea ecx, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58734CAF: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734CB7: call 0x5897cc60
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x7F
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58734CBC: push 0x589abd70
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xBD
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58734CC1: lea ecx, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58734CC5: push ecx
        __asm _emit 0x51
        // 0x58734CC6: mov dword ptr [esp + 8], 0x5898ca90
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x90
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58734CCE: call 0x5897cc78
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x7F
        __asm _emit 0x24
        __asm _emit 0x00
    }
}
