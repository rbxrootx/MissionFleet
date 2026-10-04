// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5889E970 .. +0x14C bytes.
// Source symbol alias: FUN_5889e970.
extern "C" __declspec(naked) void FUN_5889e970() {
    __asm {
        // 0x5889E970: push esi
        __asm _emit 0x56
        // 0x5889E971: push edi
        __asm _emit 0x57
        // 0x5889E972: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5889E974: push 0x7c
        __asm _emit 0x6A
        __asm _emit 0x7C
        // 0x5889E976: lea edi, [esi + 0x150]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E97C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889E97E: push edi
        __asm _emit 0x57
        // 0x5889E97F: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0xE2
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5889E984: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5889E987: mov dword ptr [edi], 0x51
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E98D: pop edi
        __asm _emit 0x5F
        // 0x5889E98E: mov dword ptr [esi + 0x154], 0x45
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E998: mov dword ptr [esi + 0x158], 0x41
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E9A2: mov dword ptr [esi + 0x15c], 0x44
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E9AC: mov dword ptr [esi + 0x160], 0x57
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E9B6: mov dword ptr [esi + 0x164], 0x53
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E9C0: mov dword ptr [esi + 0x168], 0x10
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E9CA: mov dword ptr [esi + 0x16c], 0x11
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E9D4: mov dword ptr [esi + 0x170], 0x20
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E9DE: mov dword ptr [esi + 0x174], 0x5a
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x5A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E9E8: mov dword ptr [esi + 0x178], 0x43
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E9F2: mov dword ptr [esi + 0x17c], 0x58
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E9FC: mov dword ptr [esi + 0x180], 0x52
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EA06: mov dword ptr [esi + 0x184], 0x54
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EA10: mov dword ptr [esi + 0x188], 0x59
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EA1A: mov dword ptr [esi + 0x18c], 0x48
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EA24: mov dword ptr [esi + 0x190], 0x4e
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x4E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EA2E: mov dword ptr [esi + 0x194], 0x46
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EA38: mov dword ptr [esi + 0x198], 0x56
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EA42: mov dword ptr [esi + 0x19c], 0x42
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EA4C: mov dword ptr [esi + 0x1a0], 0x4c
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x4C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EA56: mov dword ptr [esi + 0x1a4], 0xbc
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EA60: mov dword ptr [esi + 0x1a8], 0xde
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xDE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EA6A: mov dword ptr [esi + 0x1ac], 0xba
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EA74: mov dword ptr [esi + 0x1b0], 0xbe
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EA7E: mov dword ptr [esi + 0x1b4], 0x47
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EA88: mov dword ptr [esi + 0x1b8], 0xdc
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EA92: mov dword ptr [esi + 0x1bc], 0x50
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EA9C: mov dword ptr [esi + 0x1c4], 0x55
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EAA6: mov dword ptr [esi + 0x1c8], 0x49
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EAB0: mov dword ptr [esi + 0x1c0], 0x4d
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x4D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EABA: pop esi
        __asm _emit 0x5E
        // 0x5889EABB: ret
        __asm _emit 0xC3
    }
}
