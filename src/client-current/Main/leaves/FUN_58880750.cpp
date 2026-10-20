// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880750 .. +0x138 bytes.
extern "C" __declspec(naked) void FUN_58880750() {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0a4h]
        mov dword ptr [esp + 10h], esi
        cmp edi, dword ptr [esi + 0a8h]
        ; Exact mapped bytes 76 05: jbe 0x5888076e
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 04 C5 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xc5
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esi, dword ptr [esi + 98h]
        mov ebp, edi
        lea ebx, [edi + 22h]
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        mov edi, dword ptr [eax + 0a8h]
        cmp dword ptr [eax + 0a4h], edi
        ; Exact mapped bytes 76 09: jbe 0x5888079b
        __asm _emit 0x76
        __asm _emit 0x09
        ; Exact mapped bytes E8 DB C4 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xc4
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        mov eax, dword ptr [eax + 98h]
        test esi, esi
        ; Exact mapped bytes 74 04: je 0x588807a9
        __asm _emit 0x74
        __asm _emit 0x04
        cmp esi, eax
        ; Exact mapped bytes 74 05: je 0x588807ae
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 C4 C4 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xc4
        __asm _emit 0x0f
        __asm _emit 0x00
        cmp ebp, edi
        ; Exact mapped bytes 0F 84 B3 00 00 00: je 0x58880869
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 75 54: jne 0x5888080e
        __asm _emit 0x75
        __asm _emit 0x54
        ; Exact mapped bytes E8 B3 C4 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xc4
        __asm _emit 0x0f
        __asm _emit 0x00
        xor eax, eax
        cmp ebp, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x588807cb
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 A7 C4 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xc4
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 44 24 18: mov ax, word ptr [esp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 66 39 43 E2: cmp word ptr [ebx - 0x1e], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x43
        __asm _emit 0xe2
        ; Exact mapped bytes 75 20: jne 0x588807f6
        __asm _emit 0x75
        __asm _emit 0x20
        test esi, esi
        ; Exact mapped bytes 75 38: jne 0x58880812
        __asm _emit 0x75
        __asm _emit 0x38
        ; Exact mapped bytes E8 93 C4 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xc4
        __asm _emit 0x0f
        __asm _emit 0x00
        xor eax, eax
        cmp ebp, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x588807eb
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 87 C4 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xc4
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4C 24 1C: mov cx, word ptr [esp + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 66 39 4B E4: cmp word ptr [ebx - 0x1c], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x4b
        __asm _emit 0xe4
        ; Exact mapped bytes 74 3B: je 0x58880831
        __asm _emit 0x74
        __asm _emit 0x3b
        test esi, esi
        ; Exact mapped bytes 75 1C: jne 0x58880816
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes E8 73 C4 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xc4
        __asm _emit 0x0f
        __asm _emit 0x00
        xor eax, eax
        cmp ebx, dword ptr [eax + 10h]
        ; Exact mapped bytes 77 1B: ja 0x58880821
        __asm _emit 0x77
        __asm _emit 0x1b
        test esi, esi
        ; Exact mapped bytes 74 10: je 0x5888081a
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB 0E: jmp 0x5888081c
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB AF: jmp 0x588807c1
        __asm _emit 0xeb
        __asm _emit 0xaf
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB CB: jmp 0x588807e1
        __asm _emit 0xeb
        __asm _emit 0xcb
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB E7: jmp 0x58880801
        __asm _emit 0xeb
        __asm _emit 0xe7
        xor eax, eax
        cmp ebx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 73 05: jae 0x58880826
        __asm _emit 0x73
        __asm _emit 0x05
        ; Exact mapped bytes E8 4C C4 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xc4
        __asm _emit 0x0f
        __asm _emit 0x00
        add ebp, 22h
        add ebx, 22h
        ; Exact mapped bytes E9 4F FF FF FF: jmp 0x58880780
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test esi, esi
        ; Exact mapped bytes 75 41: jne 0x58880876
        __asm _emit 0x75
        __asm _emit 0x41
        ; Exact mapped bytes E8 38 C4 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xc4
        __asm _emit 0x0f
        __asm _emit 0x00
        xor eax, eax
        cmp ebp, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58880846
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 2C C4 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xc4
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7D 08 00: cmp word ptr [ebp + 8], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 76 31: jbe 0x5888087e
        __asm _emit 0x76
        __asm _emit 0x31
        test esi, esi
        ; Exact mapped bytes 75 29: jne 0x5888087a
        __asm _emit 0x75
        __asm _emit 0x29
        ; Exact mapped bytes E8 1C C4 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xc4
        __asm _emit 0x0f
        __asm _emit 0x00
        cmp ebp, dword ptr [esi + 10h]
        ; Exact mapped bytes 72 05: jb 0x58880860
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 12 C4 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xc4
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, 0ffffh
        ; Exact mapped bytes 66 01 55 08: add word ptr [ebp + 8], dx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x55
        __asm _emit 0x08
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB C2: jmp 0x5888083c
        __asm _emit 0xeb
        __asm _emit 0xc2
        mov esi, dword ptr [esi]
        ; Exact mapped bytes EB D8: jmp 0x58880856
        __asm _emit 0xeb
        __asm _emit 0xd8
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
