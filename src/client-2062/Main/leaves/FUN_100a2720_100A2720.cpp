// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A2720 .. +0x2B4 bytes.
extern "C" __declspec(naked) void FUN_100a2720_100A2720() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 7D 02 00 00: je 0x100a29ad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        and ecx, 1f00h
        ; Exact mapped bytes 66 81 F9 00 01: cmp cx, 0x100
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 74 27: je 0x100a2766
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 66 81 F9 00 04: cmp cx, 0x400
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 74 20: je 0x100a2766
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 66 81 F9 00 02: cmp cx, 0x200
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 5C 02 00 00: jne 0x100a29ad
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        or al, 2
        ; Exact mapped bytes 66 89 47 24: mov word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x24
        ; Exact mapped bytes C7 05 C4 91 1C 10 00 00 00 00: mov dword ptr [0x101c91c4], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xc4
        __asm _emit 0x91
        __asm _emit 0x1c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 47 02 00 00: jmp 0x100a29ad
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 4]
        mov eax, dword ptr [edi + 6ch]
        cmp ecx, eax
        ; Exact mapped bytes 75 0E: jne 0x100a277e
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [edi + 8]
        mov esi, dword ptr [edi + 70h]
        cmp edx, esi
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x100a2807
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [edi + 8]
        sub eax, ecx
        mov ecx, dword ptr [edi + 70h]
        sub ecx, esi
        cmp eax, -8
        ; Exact mapped bytes 7E 2C: jle 0x100a27b9
        __asm _emit 0x7e
        __asm _emit 0x2c
        cmp eax, 8
        ; Exact mapped bytes 7D 27: jge 0x100a27b9
        __asm _emit 0x7d
        __asm _emit 0x27
        cmp eax, -4
        ; Exact mapped bytes 7E 19: jle 0x100a27b0
        __asm _emit 0x7e
        __asm _emit 0x19
        cmp eax, 4
        ; Exact mapped bytes 7D 14: jge 0x100a27b0
        __asm _emit 0x7d
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x100a27a5
        __asm _emit 0x7d
        __asm _emit 0x05
        or esi, 0ffffffffh
        ; Exact mapped bytes EB 1F: jmp 0x100a27c4
        __asm _emit 0xeb
        __asm _emit 0x1f
        xor edx, edx
        test eax, eax
        setg dl
        mov esi, edx
        ; Exact mapped bytes EB 14: jmp 0x100a27c4
        __asm _emit 0xeb
        __asm _emit 0x14
        cdq
        sub eax, edx
        mov esi, eax
        sar esi, 1
        ; Exact mapped bytes EB 0B: jmp 0x100a27c4
        __asm _emit 0xeb
        __asm _emit 0x0b
        cdq
        and edx, 3
        add eax, edx
        mov esi, eax
        sar esi, 2
        cmp ecx, -8
        ; Exact mapped bytes 7E 2A: jle 0x100a27f3
        __asm _emit 0x7e
        __asm _emit 0x2a
        cmp ecx, 8
        ; Exact mapped bytes 7D 25: jge 0x100a27f3
        __asm _emit 0x7d
        __asm _emit 0x25
        cmp ecx, -4
        ; Exact mapped bytes 7E 17: jle 0x100a27ea
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp ecx, 4
        ; Exact mapped bytes 7D 12: jge 0x100a27ea
        __asm _emit 0x7d
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7D 05: jge 0x100a27e1
        __asm _emit 0x7d
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 1D: jmp 0x100a27fe
        __asm _emit 0xeb
        __asm _emit 0x1d
        xor eax, eax
        test ecx, ecx
        setg al
        ; Exact mapped bytes EB 14: jmp 0x100a27fe
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 0B: jmp 0x100a27fe
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, ecx
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 29 C6 05 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        mov ecx, dword ptr [edi + 6ch]
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 98 01 00 00: jne 0x100a29ad
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 8]
        mov eax, dword ptr [edi + 70h]
        cmp ecx, eax
        ; Exact mapped bytes 0F 85 8A 01 00 00: jne 0x100a29ad
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        mov ecx, eax
        and ecx, 1f00h
        ; Exact mapped bytes 66 81 F9 00 01: cmp cx, 0x100
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 ED 00 00 00: jne 0x100a2927
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 91 1C 10: mov eax, dword ptr [0x101c91c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x91
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 75 39: jne 0x100a287c
        __asm _emit 0x75
        __asm _emit 0x39
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        mov ecx, 0c8h
        cmp dword ptr [eax + 170h], 0ch
        ; Exact mapped bytes 7E 0F: jle 0x100a2867
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100a2867
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 30h]
        ; Exact mapped bytes EB 02: jmp 0x100a2869
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 1E 61 FA FF: call 0x10048990
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x61
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes C7 05 C4 91 1C 10 01 00 00 00: mov dword ptr [0x101c91c4], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xc4
        __asm _emit 0x91
        __asm _emit 0x1c
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0f8h]
        mov edx, dword ptr [ecx + 8]
        cmp edx, 2b2h
        ; Exact mapped bytes 74 45: je 0x100a28d2
        __asm _emit 0x74
        __asm _emit 0x45
        mov eax, 2b2h
        sub eax, edx
        cmp eax, -8
        ; Exact mapped bytes 7E 2A: jle 0x100a28c3
        __asm _emit 0x7e
        __asm _emit 0x2a
        cmp eax, 8
        ; Exact mapped bytes 7D 25: jge 0x100a28c3
        __asm _emit 0x7d
        __asm _emit 0x25
        cmp eax, -4
        ; Exact mapped bytes 7E 19: jle 0x100a28bc
        __asm _emit 0x7e
        __asm _emit 0x19
        cmp eax, 4
        ; Exact mapped bytes 7D 14: jge 0x100a28bc
        __asm _emit 0x7d
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x100a28b1
        __asm _emit 0x7d
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 1B: jmp 0x100a28cc
        __asm _emit 0xeb
        __asm _emit 0x1b
        xor edx, edx
        test eax, eax
        setg dl
        mov eax, edx
        ; Exact mapped bytes EB 10: jmp 0x100a28cc
        __asm _emit 0xeb
        __asm _emit 0x10
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 09: jmp 0x100a28cc
        __asm _emit 0xeb
        __asm _emit 0x09
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        ; Exact mapped bytes E8 EE C5 05 00: call 0x100feec0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0f8h]
        cmp dword ptr [eax + 8], 2b2h
        ; Exact mapped bytes 0F 85 C8 00 00 00: jne 0x100a29ad
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor esi, esi
        mov edx, 0c8h
        cmp dword ptr [eax + 170h], 0ch
        ; Exact mapped bytes 7E 0F: jle 0x100a2909
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100a2909
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [eax + 30h]
        ; Exact mapped bytes EB 02: jmp 0x100a290b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push esi
        push edx
        ; Exact mapped bytes E8 7E 60 FA FF: call 0x10048990
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x60
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 4F 24: mov cx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x24
        and ecx, 0e2ffh
        or ecx, 202h
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x100a29a9
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 F9 00 04: cmp cx, 0x400
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 75 7F: jne 0x100a29ad
        __asm _emit 0x75
        __asm _emit 0x7f
        mov ecx, dword ptr [edi + 0f8h]
        and eax, 0fffdh
        ; Exact mapped bytes 66 89 47 24: mov word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x24
        mov edx, dword ptr [ecx + 8]
        cmp edx, 302h
        ; Exact mapped bytes 74 45: je 0x100a298d
        __asm _emit 0x74
        __asm _emit 0x45
        mov eax, 302h
        sub eax, edx
        cmp eax, -8
        ; Exact mapped bytes 7E 2A: jle 0x100a297e
        __asm _emit 0x7e
        __asm _emit 0x2a
        cmp eax, 8
        ; Exact mapped bytes 7D 25: jge 0x100a297e
        __asm _emit 0x7d
        __asm _emit 0x25
        cmp eax, -4
        ; Exact mapped bytes 7E 19: jle 0x100a2977
        __asm _emit 0x7e
        __asm _emit 0x19
        cmp eax, 4
        ; Exact mapped bytes 7D 14: jge 0x100a2977
        __asm _emit 0x7d
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x100a296c
        __asm _emit 0x7d
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 1B: jmp 0x100a2987
        __asm _emit 0xeb
        __asm _emit 0x1b
        xor edx, edx
        test eax, eax
        setg dl
        mov eax, edx
        ; Exact mapped bytes EB 10: jmp 0x100a2987
        __asm _emit 0xeb
        __asm _emit 0x10
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 09: jmp 0x100a2987
        __asm _emit 0xeb
        __asm _emit 0x09
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        ; Exact mapped bytes E8 33 C5 05 00: call 0x100feec0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0f8h]
        cmp dword ptr [eax + 8], 302h
        ; Exact mapped bytes 75 11: jne 0x100a29ad
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 66 8B 4F 24: mov cx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x24
        and ecx, 0e5fah
        or ch, 5
        ; Exact mapped bytes 66 89 4F 24: mov word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x24
        mov ecx, dword ptr [edi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x100a29d1
        __asm _emit 0x74
        __asm _emit 0x1d
        mov esi, dword ptr [ecx + 38h]
        mov eax, dword ptr [edi + 3ch]
        cmp esi, eax
        ; Exact mapped bytes 74 0E: je 0x100a29cc
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test esi, esi
        mov ecx, esi
        ; Exact mapped bytes 75 EB: jne 0x100a29b4
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        pop edi
        pop esi
        ret
    }
}
