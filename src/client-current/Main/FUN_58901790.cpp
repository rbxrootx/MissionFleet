// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58901790 .. +0x5A bytes.
// Source symbol alias: FUN_58901790.
extern "C" __declspec(naked) void FUN_58901790() {
    __asm {
        // 0x58901790: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58901794: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58901797: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58901799: ja 0x589017b1
        __asm _emit 0x77
        __asm _emit 0x16
        // 0x5890179B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5890179D: lea edx, [ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xCD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589017A4: push edx
        __asm _emit 0x52
        // 0x589017A5: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0xB4
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x589017AA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x589017AD: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x589017B0: ret
        __asm _emit 0xC3
        // 0x589017B1: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x589017B4: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x589017B6: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x589017B8: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x589017BB: jae 0x5890179d
        __asm _emit 0x73
        __asm _emit 0xE0
        // 0x589017BD: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x589017C1: push eax
        __asm _emit 0x50
        // 0x589017C2: lea ecx, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x589017C6: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589017CE: call 0x5897cc60
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0xB4
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x589017D3: push 0x589abd70
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xBD
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x589017D8: lea ecx, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x589017DC: push ecx
        __asm _emit 0x51
        // 0x589017DD: mov dword ptr [esp + 8], 0x5898ca90
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x90
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x589017E5: call 0x5897cc78
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x07
        __asm _emit 0x00
    }
}
