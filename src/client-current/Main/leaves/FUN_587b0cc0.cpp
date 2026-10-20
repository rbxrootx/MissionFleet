// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B0CC0 .. +0x211 bytes.
extern "C" __declspec(naked) void FUN_587b0cc0() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        cmp dword ptr [esi + 0fch], ebx
        ; Exact mapped bytes 0F 84 FC 01 00 00: je 0x587b0ece
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 5ch], ebx
        ; Exact mapped bytes 0F 85 F3 01 00 00: jne 0x587b0ece
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 40000000h
        cmp dword ptr [esi + 118h], eax
        ; Exact mapped bytes 75 0C: jne 0x587b0cf4
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [esi + 0d0h], 2
        ; Exact mapped bytes EB 23: jmp 0x587b0d17
        __asm _emit 0xeb
        __asm _emit 0x23
        cmp dword ptr [esi + 110h], eax
        ; Exact mapped bytes 75 11: jne 0x587b0d0d
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [esi + 0cch]
        add ecx, 2
        mov dword ptr [esi + 0d0h], ecx
        ; Exact mapped bytes EB 0A: jmp 0x587b0d17
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [esi + 0d0h], 5
        cmp dword ptr [esi + 108h], eax
        ; Exact mapped bytes 0F 85 8F 01 00 00: jne 0x587b0eb2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 124h]
        imul eax, dword ptr [esi + 0d0h]
        add eax, dword ptr [esi + 0a8h]
        mov ecx, 0e10h
        cdq
        idiv ecx
        cmp edx, ebx
        mov dword ptr [esi + 0a8h], edx
        ; Exact mapped bytes 7D 08: jge 0x587b0d50
        __asm _emit 0x7d
        __asm _emit 0x08
        add edx, ecx
        mov dword ptr [esi + 0a8h], edx
        mov eax, dword ptr [esi + 80h]
        mov ecx, dword ptr [esi + 0b4h]
        push ebp
        push edi
        mov edi, dword ptr [esi + 0b0h]
        mov ebp, 1
        cmp eax, 3
        ; Exact mapped bytes 0F 87 2F 01 00 00: ja 0x587b0ea1
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 D4 0E 7B 58: jmp dword ptr [eax*4 + 0x587b0ed4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x0e
        __asm _emit 0x7b
        __asm _emit 0x58
        mov dword ptr [esi + 0f4h], ebp
        cmp dword ptr [esi + 0c8h], ebx
        ; Exact mapped bytes 74 2B: je 0x587b0db2
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [esi + 0a8h]
        cmp dword ptr [esi + 0c4h], eax
        ; Exact mapped bytes 0F 8E 8A 00 00 00: jle 0x587b0e23
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, ecx
        ; Exact mapped bytes 0F 8D 00 01 00 00: jge 0x587b0ea1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0a8h], ecx
        mov dword ptr [esi + 108h], ebx
        ; Exact mapped bytes E9 EF 00 00 00: jmp 0x587b0ea1
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c4h]
        add eax, 708h
        cdq
        mov ebp, 0e10h
        idiv ebp
        mov ebx, dword ptr [esi + 0a8h]
        cmp edx, ebx
        ; Exact mapped bytes 7E 1B: jle 0x587b0dea
        __asm _emit 0x7e
        __asm _emit 0x1b
        cmp ebx, ecx
        ; Exact mapped bytes 0F 8E C3 00 00 00: jle 0x587b0e9a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        mov dword ptr [esi + 0a8h], ecx
        mov dword ptr [esi + 108h], ebx
        ; Exact mapped bytes E9 B2 00 00 00: jmp 0x587b0e9c
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, edi
        ; Exact mapped bytes 0F 8D A8 00 00 00: jge 0x587b0e9a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        mov dword ptr [esi + 0a8h], edi
        mov dword ptr [esi + 108h], ebx
        ; Exact mapped bytes E9 97 00 00 00: jmp 0x587b0e9c
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a8h]
        cmp eax, ecx
        mov dword ptr [esi + 0f4h], ebp
        ; Exact mapped bytes 7D 0E: jge 0x587b0e23
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov dword ptr [esi + 0a8h], ecx
        mov dword ptr [esi + 108h], ebx
        ; Exact mapped bytes EB 7E: jmp 0x587b0ea1
        __asm _emit 0xeb
        __asm _emit 0x7e
        cmp eax, edi
        ; Exact mapped bytes 7E 7A: jle 0x587b0ea1
        __asm _emit 0x7e
        __asm _emit 0x7a
        mov dword ptr [esi + 0a8h], edi
        mov dword ptr [esi + 108h], ebx
        ; Exact mapped bytes EB 6C: jmp 0x587b0ea1
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov eax, dword ptr [esi + 0a8h]
        mov ecx, dword ptr [esi + 0c0h]
        cmp eax, ecx
        mov dword ptr [esi + 0f4h], ebx
        ; Exact mapped bytes 7C 0E: jl 0x587b0e59
        __asm _emit 0x7c
        __asm _emit 0x0e
        cmp eax, dword ptr [esi + 0bch]
        ; Exact mapped bytes 7F 06: jg 0x587b0e59
        __asm _emit 0x7f
        __asm _emit 0x06
        mov dword ptr [esi + 0f4h], ebp
        mov edx, dword ptr [esi + 0bch]
        mov edi, 0e10h
        sub edi, edx
        cmp eax, edi
        ; Exact mapped bytes 7C 11: jl 0x587b0e7b
        __asm _emit 0x7c
        __asm _emit 0x11
        mov edi, 0e10h
        sub edi, ecx
        cmp eax, edi
        ; Exact mapped bytes 7F 06: jg 0x587b0e7b
        __asm _emit 0x7f
        __asm _emit 0x06
        mov dword ptr [esi + 0f4h], ebp
        cmp edx, ecx
        ; Exact mapped bytes 7D 22: jge 0x587b0ea1
        __asm _emit 0x7d
        __asm _emit 0x22
        cmp eax, ecx
        ; Exact mapped bytes 7C 07: jl 0x587b0e8a
        __asm _emit 0x7c
        __asm _emit 0x07
        cmp eax, 0e10h
        ; Exact mapped bytes 7E 08: jle 0x587b0e92
        __asm _emit 0x7e
        __asm _emit 0x08
        cmp eax, ebx
        ; Exact mapped bytes 7C 13: jl 0x587b0ea1
        __asm _emit 0x7c
        __asm _emit 0x13
        cmp eax, edx
        ; Exact mapped bytes 7F 0F: jg 0x587b0ea1
        __asm _emit 0x7f
        __asm _emit 0x0f
        mov dword ptr [esi + 0f4h], ebp
        ; Exact mapped bytes EB 07: jmp 0x587b0ea1
        __asm _emit 0xeb
        __asm _emit 0x07
        xor ebx, ebx
        mov ebp, 1
        mov edx, dword ptr [esi + 0a8h]
        push ebp
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 80 FA FF FF: call 0x587b0930
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop ebp
        mov ecx, dword ptr [esi + 168h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 12: je 0x587b0ece
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [esi + 130h]
        add eax, dword ptr [esi + 0a8h]
        push eax
        ; Exact mapped bytes E8 C2 83 FD FF: call 0x58789290
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0xff
        pop esi
        pop ebx
        ret
    }
}
