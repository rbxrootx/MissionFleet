// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588059B0 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_588059b0_segment_00() {
    __asm {
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B 5C 24 10: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B 70 0C: mov esi, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x0c
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B F9: mov edi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf9
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 28: je 0x588059ed
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes EB 09: jmp 0x588059d0
        __asm _emit 0xeb
        __asm _emit 0x09
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588059D0 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_588059b0_segment_01() {
    __asm {
        ; Exact mapped bytes 8A 4C 24 10: mov cl, byte ptr [esp + 0x10]
        __asm _emit 0x8a
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 38 8E 54 03 00 00: cmp byte ptr [esi + 0x354], cl
        __asm _emit 0x38
        __asm _emit 0x8e
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0A: jne 0x588059e6
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 BA 59 0D 00: call 0x588db3a0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x59
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 76 78: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x78
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 E3: jne 0x588059d0
        __asm _emit 0x75
        __asm _emit 0xe3
        ; Exact mapped bytes 66 8B 74 24 14: mov si, word ptr [esp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F B7 D6: movzx edx, si
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xd6
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 5F 47 F8 FF: call 0x5878a160
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x47
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 80 C3 0A: add bl, 0xa
        __asm _emit 0x80
        __asm _emit 0xc3
        __asm _emit 0x0a
        ; Exact mapped bytes 0F B6 CB: movzx ecx, bl
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xcb
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 8F 59 0D 00: call 0x588db3a0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x59
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 66 39 B0 50 03 00 00: cmp word ptr [eax + 0x350], si
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 15: jne 0x58805a38
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes 8B 8F 74 01 00 00: mov ecx, dword ptr [edi + 0x174]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 4F 78 04: or dword ptr [edi + 0x78], 4
        __asm _emit 0x83
        __asm _emit 0x4f
        __asm _emit 0x78
        __asm _emit 0x04
        ; Exact mapped bytes E8 0E 38 0A 00: call 0x588a9240
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x38
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8A 4C 24 10: mov cl, byte ptr [esp + 0x10]
        __asm _emit 0x8a
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 3A 88 54 03 00 00: cmp cl, byte ptr [eax + 0x354]
        __asm _emit 0x3a
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0B: jne 0x58805a4f
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 8F 74 01 00 00: mov ecx, dword ptr [edi + 0x174]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 31 0C 0A 00: call 0x588a6680
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x0c
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
