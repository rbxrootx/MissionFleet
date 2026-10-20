// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10047770 .. +0x1DC bytes.
extern "C" __declspec(naked) void FUN_10047770_10047770() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        cmp dword ptr [esi + 5ch], 40000000h
        ; Exact mapped bytes 0F 85 C8 01 00 00: jne 0x10047949
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [esi + 6ch]
        cmp ecx, eax
        ; Exact mapped bytes 75 0E: jne 0x10047799
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [esi + 8]
        mov edi, dword ptr [esi + 70h]
        cmp edx, edi
        ; Exact mapped bytes 0F 84 0E 01 00 00: je 0x100478a7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 70h]
        sub eax, ecx
        mov ecx, dword ptr [esi + 8]
        sub edi, ecx
        mov ecx, dword ptr [esi + 68h]
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 A0 00 00 00: jne 0x1004784f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, -8
        ; Exact mapped bytes 7E 2A: jle 0x100477de
        __asm _emit 0x7e
        __asm _emit 0x2a
        cmp eax, 8
        ; Exact mapped bytes 7D 25: jge 0x100477de
        __asm _emit 0x7d
        __asm _emit 0x25
        cmp eax, -4
        ; Exact mapped bytes 7E 17: jle 0x100477d5
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp eax, 4
        ; Exact mapped bytes 7D 12: jge 0x100477d5
        __asm _emit 0x7d
        __asm _emit 0x12
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x100477cc
        __asm _emit 0x7d
        __asm _emit 0x05
        or ecx, 0ffffffffh
        ; Exact mapped bytes EB 1D: jmp 0x100477e9
        __asm _emit 0xeb
        __asm _emit 0x1d
        xor ecx, ecx
        test eax, eax
        setg cl
        ; Exact mapped bytes EB 14: jmp 0x100477e9
        __asm _emit 0xeb
        __asm _emit 0x14
        cdq
        sub eax, edx
        mov ecx, eax
        sar ecx, 1
        ; Exact mapped bytes EB 0B: jmp 0x100477e9
        __asm _emit 0xeb
        __asm _emit 0x0b
        cdq
        and edx, 3
        add eax, edx
        mov ecx, eax
        sar ecx, 2
        cmp edi, -8
        ; Exact mapped bytes 7E 4B: jle 0x10047839
        __asm _emit 0x7e
        __asm _emit 0x4b
        cmp edi, 8
        ; Exact mapped bytes 7D 46: jge 0x10047839
        __asm _emit 0x7d
        __asm _emit 0x46
        cmp edi, -4
        ; Exact mapped bytes 7E 2F: jle 0x10047827
        __asm _emit 0x7e
        __asm _emit 0x2f
        cmp edi, 4
        ; Exact mapped bytes 7D 2A: jge 0x10047827
        __asm _emit 0x7d
        __asm _emit 0x2a
        test edi, edi
        ; Exact mapped bytes 7D 11: jge 0x10047812
        __asm _emit 0x7d
        __asm _emit 0x11
        or eax, 0ffffffffh
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 23 76 0B 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x76
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes E9 95 00 00 00: jmp 0x100478a7
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        test edi, edi
        setg al
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 0E 76 0B 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x76
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes E9 80 00 00 00: jmp 0x100478a7
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, edi
        cdq
        sub eax, edx
        sar eax, 1
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 F9 75 0B 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x75
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes EB 6E: jmp 0x100478a7
        __asm _emit 0xeb
        __asm _emit 0x6e
        mov eax, edi
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 E3 75 0B 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x75
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes EB 58: jmp 0x100478a7
        __asm _emit 0xeb
        __asm _emit 0x58
        cmp ecx, 1
        ; Exact mapped bytes 75 53: jne 0x100478a7
        __asm _emit 0x75
        __asm _emit 0x53
        mov ecx, dword ptr [esi + 60h]
        test eax, eax
        ; Exact mapped bytes 7E 06: jle 0x10047861
        __asm _emit 0x7e
        __asm _emit 0x06
        cmp eax, ecx
        ; Exact mapped bytes 7C 0A: jl 0x10047869
        __asm _emit 0x7c
        __asm _emit 0x0a
        ; Exact mapped bytes EB 06: jmp 0x10047867
        __asm _emit 0xeb
        __asm _emit 0x06
        neg ecx
        cmp eax, ecx
        ; Exact mapped bytes 7F 02: jg 0x10047869
        __asm _emit 0x7f
        __asm _emit 0x02
        mov eax, ecx
        mov ecx, dword ptr [esi + 64h]
        test edi, edi
        ; Exact mapped bytes 7E 06: jle 0x10047876
        __asm _emit 0x7e
        __asm _emit 0x06
        cmp edi, ecx
        ; Exact mapped bytes 7C 0A: jl 0x1004787e
        __asm _emit 0x7c
        __asm _emit 0x0a
        ; Exact mapped bytes EB 06: jmp 0x1004787c
        __asm _emit 0xeb
        __asm _emit 0x06
        neg ecx
        cmp edi, ecx
        ; Exact mapped bytes 7F 02: jg 0x1004787e
        __asm _emit 0x7f
        __asm _emit 0x02
        mov edi, ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 FA 75 0B 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x75
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 58h]
        mov eax, 10624dd3h
        add ecx, edi
        imul ecx
        sar edx, 6
        mov eax, edx
        mov dword ptr [esi + 58h], ecx
        shr eax, 1fh
        add edx, eax
        mov ecx, esi
        push edx
        ; Exact mapped bytes E8 19 75 0B 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x75
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [esi + 6ch]
        cmp ecx, eax
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x10047949
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 70h]
        cmp edx, eax
        ; Exact mapped bytes 0F 85 86 00 00 00: jne 0x10047949
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 5ch], 40000000h
        ; Exact mapped bytes 75 38: jne 0x10047904
        __asm _emit 0x75
        __asm _emit 0x38
        mov ecx, dword ptr [esi + 74h]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x100478e4
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100478e4
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 74h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 78h]
        test ecx, ecx
        ; Exact mapped bytes 74 19: je 0x10047904
        __asm _emit 0x74
        __asm _emit 0x19
        mov edi, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov edx, 12ch
        sub eax, 190h
        sub edx, edi
        push edx
        push eax
        ; Exact mapped bytes E8 8C 10 00 00: call 0x10048990
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 75 18: jne 0x1004792f
        __asm _emit 0x75
        __asm _emit 0x18
        and eax, 0e2ffh
        mov dword ptr [esi + 5ch], 0
        or eax, 202h
        pop edi
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        pop esi
        ret
        ; Exact mapped bytes 66 81 F9 00 04: cmp cx, 0x400
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 75 0C: jne 0x10047942
        __asm _emit 0x75
        __asm _emit 0x0c
        and eax, 0e5f8h
        or ah, 5
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov dword ptr [esi + 5ch], 0
        pop edi
        pop esi
        ret
    }
}
