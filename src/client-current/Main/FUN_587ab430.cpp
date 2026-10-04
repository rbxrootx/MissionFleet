// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587AB430 .. +0x5A bytes.
// Source symbol alias: FUN_587ab430.
extern "C" __declspec(naked) void FUN_587ab430() {
    __asm {
        // 0x587AB430: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587AB434: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x587AB437: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587AB439: ja 0x587ab451
        __asm _emit 0x77
        __asm _emit 0x16
        // 0x587AB43B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587AB43D: lea edx, [ecx*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB444: push edx
        __asm _emit 0x52
        // 0x587AB445: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x18
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB44A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587AB44D: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587AB450: ret
        __asm _emit 0xC3
        // 0x587AB451: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x587AB454: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587AB456: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x587AB458: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x587AB45B: jae 0x587ab43d
        __asm _emit 0x73
        __asm _emit 0xE0
        // 0x587AB45D: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AB461: push eax
        __asm _emit 0x50
        // 0x587AB462: lea ecx, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587AB466: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB46E: call 0x5897cc60
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0x17
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB473: push 0x589abd70
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xBD
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x587AB478: lea ecx, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587AB47C: push ecx
        __asm _emit 0x51
        // 0x587AB47D: mov dword ptr [esp + 8], 0x5898ca90
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x90
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587AB485: call 0x5897cc78
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0x17
        __asm _emit 0x1D
        __asm _emit 0x00
    }
}
