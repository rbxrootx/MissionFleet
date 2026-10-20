// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884C330 .. +0x1B7 bytes.
extern "C" __declspec(naked) void FUN_5884c330() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        test al, 2
        ; Exact mapped bytes 0F 84 9F 01 00 00: je 0x5884c4df
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x5884c36f
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x5884c368
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0B: je 0x5884c36f
        __asm _emit 0x74
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x5884c352
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        cmp eax, 100h
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x5884c42a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 201h
        ; Exact mapped bytes 0F 85 57 01 00 00: jne 0x5884c4df
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 7ch]
        push ebx
        ; Exact mapped bytes 8B 1D C8 84 A2 58: mov ebx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        add ebx, 4
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 A3 51 EE FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x51
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x5884c3c6
        __asm _emit 0x74
        __asm _emit 0x25
        push 1
        mov ecx, edi
        ; Exact mapped bytes E8 76 52 EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x52
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 74h]
        push 0
        ; Exact mapped bytes E8 6C 52 EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x52
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 78h]
        push 0
        ; Exact mapped bytes E8 62 52 EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x52
        __asm _emit 0xee
        __asm _emit 0xff
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        push ebx
        ; Exact mapped bytes E8 71 51 EE FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x51
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x5884c3f8
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        mov ecx, edi
        ; Exact mapped bytes E8 44 52 EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x52
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 74h]
        push 1
        ; Exact mapped bytes E8 3A 52 EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x52
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 78h]
        push 0
        ; Exact mapped bytes E8 30 52 EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x52
        __asm _emit 0xee
        __asm _emit 0xff
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 78h]
        push ebx
        ; Exact mapped bytes E8 3F 51 EE FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x51
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x5884c422
        __asm _emit 0x74
        __asm _emit 0x1d
        push 0
        mov ecx, edi
        ; Exact mapped bytes E8 12 52 EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x52
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 74h]
        push 0
        ; Exact mapped bytes E8 08 52 EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x52
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 78h]
        push 1
        ; Exact mapped bytes E8 FE 51 EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x51
        __asm _emit 0xee
        __asm _emit 0xff
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, dword ptr [edi + 8]
        cmp edi, 9
        ; Exact mapped bytes 74 2C: je 0x5884c45e
        __asm _emit 0x74
        __asm _emit 0x2c
        cmp edi, 0dh
        ; Exact mapped bytes 74 19: je 0x5884c450
        __asm _emit 0x74
        __asm _emit 0x19
        cmp edi, 1bh
        ; Exact mapped bytes 0F 85 98 00 00 00: jne 0x5884c4d8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 A9 FA FF FF: call 0x5884bf00
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7ch]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        shr dl, 1
        test dl, 1
        ; Exact mapped bytes 74 0E: je 0x5884c47a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [esi + 7ch]
        push 0
        ; Exact mapped bytes E8 AA 51 EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x51
        __asm _emit 0xee
        __asm _emit 0xff
        push 1
        ; Exact mapped bytes EB 4C: jmp 0x5884c4c6
        __asm _emit 0xeb
        __asm _emit 0x4c
        mov eax, dword ptr [esi + 74h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        shr cl, 1
        test cl, 1
        ; Exact mapped bytes 74 25: je 0x5884c4ad
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [esi + 7ch]
        push 0
        ; Exact mapped bytes E8 8E 51 EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x51
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 74h]
        push 0
        ; Exact mapped bytes E8 84 51 EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x51
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 78h]
        push 1
        ; Exact mapped bytes E8 7A 51 EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x51
        __asm _emit 0xee
        __asm _emit 0xff
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 78h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        shr al, 1
        test al, 1
        ; Exact mapped bytes 74 1E: je 0x5884c4d8
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [esi + 7ch]
        push 1
        ; Exact mapped bytes E8 5C 51 EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x51
        __asm _emit 0xee
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [esi + 74h]
        ; Exact mapped bytes E8 52 51 EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x51
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 78h]
        push 0
        ; Exact mapped bytes E8 48 51 EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x51
        __asm _emit 0xee
        __asm _emit 0xff
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
