// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58847A50 .. +0x58 bytes.
// Source symbol alias: FUN_58847a50.
extern "C" __declspec(naked) void FUN_58847a50() {
    __asm {
        // 0x58847A50: cmp dword ptr [esp + 4], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58847A55: push esi
        __asm _emit 0x56
        // 0x58847A56: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58847A58: jne 0x58847a6b
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x58847A5A: cmp dword ptr [esp + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58847A5F: je 0x58847a7e
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x58847A61: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58847A65: add eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x0C
        // 0x58847A68: push eax
        __asm _emit 0x50
        // 0x58847A69: jmp 0x58847a73
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x58847A6B: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58847A6F: add ecx, 0xc
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x0C
        // 0x58847A72: push ecx
        __asm _emit 0x51
        // 0x58847A73: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847A79: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0xA2
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58847A7E: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58847A82: mov eax, 0x1f00
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847A87: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x58847A8A: mov ecx, 0x500
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847A8F: mov byte ptr [esi + 0xa0], 1
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58847A96: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x58847A99: jne 0x58847aa4
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x58847A9B: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58847A9D: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58847AA0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58847AA2: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58847AA4: pop esi
        __asm _emit 0x5E
        // 0x58847AA5: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
