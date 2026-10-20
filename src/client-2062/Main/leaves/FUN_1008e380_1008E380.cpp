// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1008E380 .. +0x123 bytes.
extern "C" __declspec(naked) void FUN_1008e380_1008E380() {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, ecx
        test byte ptr [edi + 24h], 2
        ; Exact mapped bytes 0F 84 0B 01 00 00: je 0x1008e49a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 3ch]
        mov esi, dword ptr [esp + 10h]
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x1008e3bb
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x1008e3b3
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [eax]
        push esi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [edi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0A: je 0x1008e3bb
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes EB EA: jmp 0x1008e39d
        __asm _emit 0xeb
        __asm _emit 0xea
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        sub eax, 100h
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x1008e478
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 100h
        ; Exact mapped bytes 74 3F: je 0x1008e40f
        __asm _emit 0x74
        __asm _emit 0x3f
        sub eax, 0ah
        ; Exact mapped bytes 0F 85 C1 00 00 00: jne 0x1008e49a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 1d8h]
        mov al, byte ptr [edx + 24h]
        and al, 1
        cmp al, 1
        ; Exact mapped bytes 0F 85 AE 00 00 00: jne 0x1008e49a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        xor eax, eax
        shr ecx, 10h
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7E 05: jle 0x1008e3fe
        __asm _emit 0x7e
        __asm _emit 0x05
        mov eax, 1
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 0A 0B 00 00: call 0x1008ef10
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 1d8h]
        ; Exact mapped bytes 8B 35 D4 92 1C 10: mov esi, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 4]
        mov ebx, dword ptr [eax + 14h]
        mov edx, dword ptr [esi + 4]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 7C 34: jl 0x1008e45e
        __asm _emit 0x7c
        __asm _emit 0x34
        mov ebx, dword ptr [eax + 1ch]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 7D 2B: jge 0x1008e45e
        __asm _emit 0x7d
        __asm _emit 0x2b
        mov edx, dword ptr [esi + 8]
        mov ecx, dword ptr [eax + 8]
        mov esi, dword ptr [eax + 18h]
        add esi, ecx
        cmp edx, esi
        ; Exact mapped bytes 7C 1C: jl 0x1008e45e
        __asm _emit 0x7c
        __asm _emit 0x1c
        mov esi, dword ptr [eax + 20h]
        add esi, ecx
        cmp edx, esi
        ; Exact mapped bytes 7D 13: jge 0x1008e45e
        __asm _emit 0x7d
        __asm _emit 0x13
        test byte ptr [eax + 24h], 1
        ; Exact mapped bytes 75 49: jne 0x1008e49a
        __asm _emit 0x75
        __asm _emit 0x49
        or byte ptr [eax + 24h], 1
        mov eax, dword ptr [edi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov dl, byte ptr [eax + 24h]
        and dl, 1
        cmp dl, 1
        ; Exact mapped bytes 75 31: jne 0x1008e49a
        __asm _emit 0x75
        __asm _emit 0x31
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [edi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, dword ptr [esi + 8]
        sub esi, 21h
        ; Exact mapped bytes 74 13: je 0x1008e493
        __asm _emit 0x74
        __asm _emit 0x13
        dec esi
        ; Exact mapped bytes 75 17: jne 0x1008e49a
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, edi
        ; Exact mapped bytes E8 B6 9E FB FF: call 0x10048340
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x9e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [edi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, edi
        ; Exact mapped bytes E8 26 9E FB FF: call 0x100482c0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x9e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [edi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
