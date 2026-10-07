// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 92 bytes in 1 exact ranges.
// Source symbol alias: FUN_5887a410.

// Ghidra body range 0x5887A410..0x5887A46C; 92 mapped bytes.
extern "C" __declspec(naked) void FUN_5887a410_segment_00() {
    __asm {
        // 0x5887A410: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5887A414: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x5887A417: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5887A419: ja 0x5887a433
        __asm _emit 0x77
        __asm _emit 0x18
        // 0x5887A41B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5887A41D: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5887A41F: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x5887A422: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x5887A424: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x5887A426: push edx
        __asm _emit 0x52
        // 0x5887A427: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x28
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5887A42C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5887A42F: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5887A432: ret
        __asm _emit 0xC3
        // 0x5887A433: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5887A436: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5887A438: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x5887A43A: cmp eax, 0x22
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x22
        // 0x5887A43D: jae 0x5887a41d
        __asm _emit 0x73
        __asm _emit 0xDE
        // 0x5887A43F: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5887A443: push eax
        __asm _emit 0x50
        // 0x5887A444: lea ecx, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5887A448: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A450: call 0x5897cc60
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x28
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5887A455: push 0x589abd70
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xBD
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5887A45A: lea ecx, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5887A45E: push ecx
        __asm _emit 0x51
        // 0x5887A45F: mov dword ptr [esp + 8], 0x5898ca90
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x90
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5887A467: call 0x5897cc78
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x28
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
