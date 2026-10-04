// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5878D5F0 .. +0x60 bytes.
// Source symbol alias: FUN_5878d5f0.
extern "C" __declspec(naked) void FUN_5878d5f0() {
    __asm {
        // 0x5878D5F0: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5878D5F4: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x5878D5F7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5878D5F9: ja 0x5878d617
        __asm _emit 0x77
        __asm _emit 0x1C
        // 0x5878D5FB: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5878D5FD: lea edx, [ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xCD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878D604: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x5878D606: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x5878D608: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x5878D60A: push edx
        __asm _emit 0x52
        // 0x5878D60B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0xF6
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x5878D610: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5878D613: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5878D616: ret
        __asm _emit 0xC3
        // 0x5878D617: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5878D61A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5878D61C: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x5878D61E: cmp eax, 0x1c
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1C
        // 0x5878D621: jae 0x5878d5fd
        __asm _emit 0x73
        __asm _emit 0xDA
        // 0x5878D623: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5878D627: push eax
        __asm _emit 0x50
        // 0x5878D628: lea ecx, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5878D62C: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878D634: call 0x5897cc60
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0xF6
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x5878D639: push 0x589abd70
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xBD
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5878D63E: lea ecx, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5878D642: push ecx
        __asm _emit 0x51
        // 0x5878D643: mov dword ptr [esp + 8], 0x5898ca90
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x90
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5878D64B: call 0x5897cc78
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0xF6
        __asm _emit 0x1E
        __asm _emit 0x00
    }
}
