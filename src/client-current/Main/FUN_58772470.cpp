// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 91 bytes in 1 exact ranges.
// Source symbol alias: FUN_58772470.

// Ghidra body range 0x58772470..0x587724CB; 91 mapped bytes.
extern "C" __declspec(naked) void FUN_58772470_segment_00() {
    __asm {
        // 0x58772470: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58772474: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58772477: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58772479: ja 0x58772490
        __asm _emit 0x77
        __asm _emit 0x15
        // 0x5877247B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5877247D: imul ecx, ecx, 0x108
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772483: push ecx
        __asm _emit 0x51
        // 0x58772484: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0xA7
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58772489: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5877248C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5877248F: ret
        __asm _emit 0xC3
        // 0x58772490: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x58772493: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58772495: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x58772497: cmp eax, 0x108
        __asm _emit 0x3D
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877249C: jae 0x5877247d
        __asm _emit 0x73
        __asm _emit 0xDF
        // 0x5877249E: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587724A2: push eax
        __asm _emit 0x50
        // 0x587724A3: lea ecx, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587724A7: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587724AF: call 0x5897cc60
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0xA7
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587724B4: push 0x589abd70
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xBD
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x587724B9: lea ecx, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587724BD: push ecx
        __asm _emit 0x51
        // 0x587724BE: mov dword ptr [esp + 8], 0x5898ca90
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x90
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587724C6: call 0x5897cc78
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0xA7
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
