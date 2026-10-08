// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 91 bytes in 1 exact ranges.
// Source symbol alias: FUN_587724d0.

// Ghidra body range 0x587724D0..0x5877252B; 91 mapped bytes.
extern "C" __declspec(naked) void FUN_587724d0_segment_00() {
    __asm {
        // 0x587724D0: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587724D4: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x587724D7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587724D9: ja 0x587724f0
        __asm _emit 0x77
        __asm _emit 0x15
        // 0x587724DB: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587724DD: imul ecx, ecx, 0x118
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587724E3: push ecx
        __asm _emit 0x51
        // 0x587724E4: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0xA7
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587724E9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587724EC: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587724EF: ret
        __asm _emit 0xC3
        // 0x587724F0: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x587724F3: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587724F5: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x587724F7: cmp eax, 0x118
        __asm _emit 0x3D
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587724FC: jae 0x587724dd
        __asm _emit 0x73
        __asm _emit 0xDF
        // 0x587724FE: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772502: push eax
        __asm _emit 0x50
        // 0x58772503: lea ecx, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58772507: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877250F: call 0x5897cc60
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0xA7
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58772514: push 0x589abd70
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xBD
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58772519: lea ecx, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5877251D: push ecx
        __asm _emit 0x51
        // 0x5877251E: mov dword ptr [esp + 8], 0x5898ca90
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x90
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58772526: call 0x5897cc78
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0xA7
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
