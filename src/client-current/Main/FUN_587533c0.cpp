// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587533C0 .. +0x5B bytes.
// Source symbol alias: FUN_587533c0.
extern "C" __declspec(naked) void FUN_587533c0() {
    __asm {
        // 0x587533C0: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587533C4: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x587533C7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587533C9: ja 0x587533e0
        __asm _emit 0x77
        __asm _emit 0x15
        // 0x587533CB: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587533CD: imul ecx, ecx, 0x808
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587533D3: push ecx
        __asm _emit 0x51
        // 0x587533D4: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x98
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587533D9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587533DC: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587533DF: ret
        __asm _emit 0xC3
        // 0x587533E0: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x587533E3: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587533E5: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x587533E7: cmp eax, 0x808
        __asm _emit 0x3D
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587533EC: jae 0x587533cd
        __asm _emit 0x73
        __asm _emit 0xDF
        // 0x587533EE: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587533F2: push eax
        __asm _emit 0x50
        // 0x587533F3: lea ecx, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587533F7: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587533FF: call 0x5897cc60
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x98
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753404: push 0x589abd70
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xBD
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58753409: lea ecx, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5875340D: push ecx
        __asm _emit 0x51
        // 0x5875340E: mov dword ptr [esp + 8], 0x5898ca90
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x90
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58753416: call 0x5897cc78
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0x98
        __asm _emit 0x22
        __asm _emit 0x00
    }
}
