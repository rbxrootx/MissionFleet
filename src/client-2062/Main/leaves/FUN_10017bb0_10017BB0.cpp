// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10017BB0 .. +0x235 bytes.
extern "C" __declspec(naked) void FUN_10017bb0_10017BB0() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 22 02 00 00: je 0x10017de2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 1f00h
        push ebx
        ; Exact mapped bytes 66 3D 00 01: cmp ax, 0x100
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x01
        mov ebx, 40000000h
        ; Exact mapped bytes 74 0F: je 0x10017be0
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 66 3D 00 04: cmp ax, 0x400
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 74 09: je 0x10017be0
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [esi + 70h], ebx
        ; Exact mapped bytes 0F 85 8D 01 00 00: jne 0x10017d6d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov edi, dword ptr [esi + 84h]
        cmp eax, edi
        ; Exact mapped bytes 75 11: jne 0x10017bfe
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 88h]
        cmp ecx, edx
        ; Exact mapped bytes 0F 84 C8 00 00 00: je 0x10017cc6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        sub edi, eax
        mov eax, dword ptr [esi + 8]
        sub ecx, eax
        mov eax, dword ptr [esi + 74h]
        cmp eax, 2
        ; Exact mapped bytes 75 7A: jne 0x10017c8d
        __asm _emit 0x75
        __asm _emit 0x7a
        cmp edi, -8
        ; Exact mapped bytes 7E 2C: jle 0x10017c44
        __asm _emit 0x7e
        __asm _emit 0x2c
        cmp edi, 8
        ; Exact mapped bytes 7D 27: jge 0x10017c44
        __asm _emit 0x7d
        __asm _emit 0x27
        cmp edi, -4
        ; Exact mapped bytes 7E 19: jle 0x10017c3b
        __asm _emit 0x7e
        __asm _emit 0x19
        cmp edi, 4
        ; Exact mapped bytes 7D 14: jge 0x10017c3b
        __asm _emit 0x7d
        __asm _emit 0x14
        test edi, edi
        ; Exact mapped bytes 7D 05: jge 0x10017c30
        __asm _emit 0x7d
        __asm _emit 0x05
        or edi, 0ffffffffh
        ; Exact mapped bytes EB 21: jmp 0x10017c51
        __asm _emit 0xeb
        __asm _emit 0x21
        xor edx, edx
        test edi, edi
        setg dl
        mov edi, edx
        ; Exact mapped bytes EB 16: jmp 0x10017c51
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, edi
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 0B: jmp 0x10017c4f
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, edi
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov edi, eax
        cmp ecx, -8
        ; Exact mapped bytes 7E 2A: jle 0x10017c80
        __asm _emit 0x7e
        __asm _emit 0x2a
        cmp ecx, 8
        ; Exact mapped bytes 7D 25: jge 0x10017c80
        __asm _emit 0x7d
        __asm _emit 0x25
        cmp ecx, -4
        ; Exact mapped bytes 7E 17: jle 0x10017c77
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp ecx, 4
        ; Exact mapped bytes 7D 12: jge 0x10017c77
        __asm _emit 0x7d
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7D 05: jge 0x10017c6e
        __asm _emit 0x7d
        __asm _emit 0x05
        or ecx, 0ffffffffh
        ; Exact mapped bytes EB 4F: jmp 0x10017cbd
        __asm _emit 0xeb
        __asm _emit 0x4f
        xor eax, eax
        test ecx, ecx
        setg al
        ; Exact mapped bytes EB 44: jmp 0x10017cbb
        __asm _emit 0xeb
        __asm _emit 0x44
        mov eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 3B: jmp 0x10017cbb
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov eax, ecx
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        ; Exact mapped bytes EB 2E: jmp 0x10017cbb
        __asm _emit 0xeb
        __asm _emit 0x2e
        cmp eax, 1
        ; Exact mapped bytes 75 2B: jne 0x10017cbd
        __asm _emit 0x75
        __asm _emit 0x2b
        mov eax, dword ptr [esi + 78h]
        test edi, edi
        ; Exact mapped bytes 7E 08: jle 0x10017ca1
        __asm _emit 0x7e
        __asm _emit 0x08
        cmp edi, eax
        ; Exact mapped bytes 7C 0E: jl 0x10017cab
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov edi, eax
        ; Exact mapped bytes EB 0A: jmp 0x10017cab
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov edx, eax
        neg edx
        cmp edi, edx
        ; Exact mapped bytes 7F 02: jg 0x10017cab
        __asm _emit 0x7f
        __asm _emit 0x02
        mov edi, edx
        test ecx, ecx
        ; Exact mapped bytes 7E 06: jle 0x10017cb5
        __asm _emit 0x7e
        __asm _emit 0x06
        cmp ecx, eax
        ; Exact mapped bytes 7C 0A: jl 0x10017cbd
        __asm _emit 0x7c
        __asm _emit 0x0a
        ; Exact mapped bytes EB 06: jmp 0x10017cbb
        __asm _emit 0xeb
        __asm _emit 0x06
        neg eax
        cmp ecx, eax
        ; Exact mapped bytes 7F 02: jg 0x10017cbd
        __asm _emit 0x7f
        __asm _emit 0x02
        mov ecx, eax
        push ecx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 6A 71 0E 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x71
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        mov eax, dword ptr [esi + 28h]
        cmp ecx, eax
        ; Exact mapped bytes 74 2A: je 0x10017cfd
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [esi + 6ch]
        ; Exact mapped bytes 7E 10: jle 0x10017ce8
        __asm _emit 0x7e
        __asm _emit 0x10
        mov edi, ecx
        sub edi, eax
        cmp edi, edx
        ; Exact mapped bytes 7F 03: jg 0x10017ce3
        __asm _emit 0x7f
        __asm _emit 0x03
        push ecx
        ; Exact mapped bytes EB 13: jmp 0x10017cf6
        __asm _emit 0xeb
        __asm _emit 0x13
        add edx, eax
        push edx
        ; Exact mapped bytes EB 0E: jmp 0x10017cf6
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edi, eax
        sub edi, ecx
        cmp edi, edx
        ; Exact mapped bytes 7F 03: jg 0x10017cf3
        __asm _emit 0x7f
        __asm _emit 0x03
        push ecx
        ; Exact mapped bytes EB 03: jmp 0x10017cf6
        __asm _emit 0xeb
        __asm _emit 0x03
        sub eax, edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 23 74 0E 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x74
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [esi + 84h]
        cmp ecx, eax
        ; Exact mapped bytes 75 63: jne 0x10017d6d
        __asm _emit 0x75
        __asm _emit 0x63
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 88h]
        cmp edx, eax
        ; Exact mapped bytes 75 56: jne 0x10017d6d
        __asm _emit 0x75
        __asm _emit 0x56
        mov eax, dword ptr [esi + 80h]
        mov ecx, dword ptr [esi + 28h]
        cmp eax, ecx
        ; Exact mapped bytes 75 49: jne 0x10017d6d
        __asm _emit 0x75
        __asm _emit 0x49
        cmp dword ptr [esi + 70h], ebx
        ; Exact mapped bytes 75 07: jne 0x10017d30
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [esi + 70h], 0
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, eax
        and ecx, 1f00h
        ; Exact mapped bytes 66 81 F9 00 01: cmp cx, 0x100
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 17: jne 0x10017d5a
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [esi + 50h]
        and eax, 0e2ffh
        or ah, 2
        test ecx, ecx
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 74 17: je 0x10017d6d
        __asm _emit 0x74
        __asm _emit 0x17
        or al, 2
        ; Exact mapped bytes EB 0F: jmp 0x10017d69
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes 66 81 F9 00 04: cmp cx, 0x400
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 75 0C: jne 0x10017d6d
        __asm _emit 0x75
        __asm _emit 0x0c
        and eax, 0e5f8h
        or ah, 5
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 4]
        mov ebx, dword ptr [esi + 1ch]
        mov ecx, dword ptr [eax + 4]
        mov edi, dword ptr [eax + 14h]
        add edi, ecx
        add ebx, edx
        cmp edi, ebx
        ; Exact mapped bytes 7F 30: jg 0x10017db6
        __asm _emit 0x7f
        __asm _emit 0x30
        mov edi, dword ptr [eax + 1ch]
        add edi, ecx
        mov ecx, dword ptr [esi + 14h]
        add ecx, edx
        cmp edi, ecx
        ; Exact mapped bytes 7C 22: jl 0x10017db6
        __asm _emit 0x7c
        __asm _emit 0x22
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [esi + 8]
        mov edi, dword ptr [eax + 18h]
        mov ebx, dword ptr [esi + 20h]
        add edi, ecx
        add ebx, edx
        cmp edi, ebx
        ; Exact mapped bytes 7F 0E: jg 0x10017db6
        __asm _emit 0x7f
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 20h]
        add eax, ecx
        mov ecx, dword ptr [esi + 18h]
        add ecx, edx
        cmp eax, ecx
        ; Exact mapped bytes 7D 07: jge 0x10017dbd
        __asm _emit 0x7d
        __asm _emit 0x07
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov ecx, dword ptr [esi + 3ch]
        pop ebx
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x10017de2
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x10017ddd
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x10017dc5
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        pop edi
        pop esi
        ret
    }
}
