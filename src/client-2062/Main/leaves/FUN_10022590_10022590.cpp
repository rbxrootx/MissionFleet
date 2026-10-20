// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10022590 .. +0x3A1 bytes.
extern "C" __declspec(naked) void FUN_10022590_10022590() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        test cl, 4
        ; Exact mapped bytes 0F 84 8D 03 00 00: je 0x1002292e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and ecx, 1f00h
        push ebx
        ; Exact mapped bytes 66 81 F9 00 01: cmp cx, 0x100
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 BD 01 00 00: je 0x10022770
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 F9 00 04: cmp cx, 0x400
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 0F 84 B2 01 00 00: je 0x10022770
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 F9 00 02: cmp cx, 0x200
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 74 0B: je 0x100225d0
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 66 81 F9 00 06: cmp cx, 0x600
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x06
        ; Exact mapped bytes 0F 85 39 03 00 00: jne 0x10022909
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ach]
        mov edi, dword ptr [esi + 5ch]
        mov edx, dword ptr [eax + 8]
        mov eax, edx
        sub eax, edi
        cmp edx, edi
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x10022671
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, -10h
        ; Exact mapped bytes 7E 3F: jle 0x1002262c
        __asm _emit 0x7e
        __asm _emit 0x3f
        cmp eax, 10h
        ; Exact mapped bytes 7D 3A: jge 0x1002262c
        __asm _emit 0x7d
        __asm _emit 0x3a
        cmp eax, -8
        ; Exact mapped bytes 7E 2A: jle 0x10022621
        __asm _emit 0x7e
        __asm _emit 0x2a
        cmp eax, 8
        ; Exact mapped bytes 7D 25: jge 0x10022621
        __asm _emit 0x7d
        __asm _emit 0x25
        cmp eax, -4
        ; Exact mapped bytes 7E 19: jle 0x1002261a
        __asm _emit 0x7e
        __asm _emit 0x19
        cmp eax, 4
        ; Exact mapped bytes 7D 14: jge 0x1002261a
        __asm _emit 0x7d
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x1002260f
        __asm _emit 0x7d
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 26: jmp 0x10022635
        __asm _emit 0xeb
        __asm _emit 0x26
        xor ecx, ecx
        test eax, eax
        setg cl
        mov eax, ecx
        ; Exact mapped bytes EB 1B: jmp 0x10022635
        __asm _emit 0xeb
        __asm _emit 0x1b
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 14: jmp 0x10022635
        __asm _emit 0xeb
        __asm _emit 0x14
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        ; Exact mapped bytes EB 09: jmp 0x10022635
        __asm _emit 0xeb
        __asm _emit 0x09
        cdq
        and edx, 7
        add eax, edx
        sar eax, 3
        mov ecx, dword ptr [esi + 74h]
        mov edx, dword ptr [esi + 0c8h]
        add ecx, eax
        mov dword ptr [esi + 74h], ecx
        mov dword ptr [edx + 54h], ecx
        mov ecx, dword ptr [esi + 0c4h]
        neg eax
        push eax
        ; Exact mapped bytes E8 6C C8 0D 00: call 0x100feec0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xc8
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c4h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 0fh
        push ecx
        mov ecx, dword ptr [esi + 0ach]
        ; Exact mapped bytes E8 54 C7 0D 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xc7
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes E9 98 02 00 00: jmp 0x10022909
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 F9 00 02: cmp cx, 0x200
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 75 5B: jne 0x100226d3
        __asm _emit 0x75
        __asm _emit 0x5b
        mov ecx, dword ptr [esi + 54h]
        push 0
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov eax, dword ptr [esi + 74h]
        mov ecx, dword ptr [esi + 5ch]
        mov edx, dword ptr [esi + 0ach]
        add ecx, eax
        mov dword ptr [esi + 5ch], ecx
        mov ecx, dword ptr [esi + 0a8h]
        mov eax, dword ptr [edx + 54h]
        push ecx
        mov ecx, dword ptr [esi + 0a4h]
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 20 DB 03 00: call 0x100601d0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xdb
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ach]
        mov dword ptr [eax + 54h], 0
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        and edx, 0e6ffh
        or dh, 6
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes E9 36 02 00 00: jmp 0x10022909
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 F9 00 06: cmp cx, 0x600
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x06
        ; Exact mapped bytes 0F 85 2B 02 00 00: jne 0x10022909
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 50h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 0eh
        ; Exact mapped bytes 7E 0F: jle 0x10022703
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x10022703
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [eax + 38h]
        ; Exact mapped bytes EB 02: jmp 0x10022705
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov dword ptr [esi + 50h], ecx
        mov edx, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov ecx, dword ptr [esi + 0b4h]
        mov eax, dword ptr [esi + 0c0h]
        mov ebx, dword ptr [esi + 80h]
        push 1
        mov edx, dword ptr [ecx + 4]
        mov ecx, dword ptr [eax + 4]
        sub edx, ecx
        mov ecx, dword ptr [esi + 78h]
        lea eax, [edx + 384h]
        imul ecx, eax
        mov dword ptr [esi + 58h], eax
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        mov ecx, 258h
        shr eax, 1fh
        add edx, eax
        sub ecx, edx
        sub ecx, ebx
        mov dword ptr [esi + 5ch], ecx
        mov ecx, dword ptr [esi + 50h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and eax, 0e4ffh
        or ah, 4
        ; Exact mapped bytes E9 95 01 00 00: jmp 0x10022905
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c0h]
        mov eax, dword ptr [esi + 58h]
        cmp dword ptr [ecx + 4], eax
        ; Exact mapped bytes 0F 84 F6 00 00 00: je 0x10022878
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0ach]
        mov ecx, dword ptr [esi + 0a0h]
        sub eax, dword ptr [edx + 4]
        test eax, eax
        ; Exact mapped bytes 7E 06: jle 0x1002279b
        __asm _emit 0x7e
        __asm _emit 0x06
        cmp eax, ecx
        ; Exact mapped bytes 7C 0A: jl 0x100227a3
        __asm _emit 0x7c
        __asm _emit 0x0a
        ; Exact mapped bytes EB 06: jmp 0x100227a1
        __asm _emit 0xeb
        __asm _emit 0x06
        neg ecx
        cmp eax, ecx
        ; Exact mapped bytes 7F 02: jg 0x100227a3
        __asm _emit 0x7f
        __asm _emit 0x02
        mov eax, ecx
        mov ecx, dword ptr [esi + 0b4h]
        mov ebx, 258h
        mov edi, dword ptr [ecx + 4]
        mov ecx, dword ptr [esi + 0b0h]
        add edi, eax
        mov eax, dword ptr [esi + 78h]
        imul eax, edi
        cdq
        and edx, 3ffh
        add eax, edx
        sar eax, 0ah
        sub ebx, eax
        mov eax, dword ptr [esi + 80h]
        sub ebx, eax
        push ebx
        push edi
        ; Exact mapped bytes E8 F4 C4 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xc4
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        push ebx
        push edi
        ; Exact mapped bytes E8 E7 C4 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xc4
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        push ebx
        push edi
        ; Exact mapped bytes E8 DA C4 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xc4
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        push ebx
        push edi
        ; Exact mapped bytes E8 CD C4 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xc4
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c0h]
        add ebx, 40h
        add edi, 50h
        push ebx
        push edi
        ; Exact mapped bytes E8 BA C4 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xc4
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c0h]
        mov ecx, dword ptr [esi + 0c4h]
        mov edx, dword ptr [eax + 8]
        mov eax, dword ptr [eax + 4]
        add edx, 0ah
        push edx
        push eax
        ; Exact mapped bytes E8 9E C4 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xc4
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c4h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        add ecx, 0fh
        push ecx
        mov ecx, dword ptr [esi + 0ach]
        push edx
        ; Exact mapped bytes E8 82 C4 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xc4
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c0h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [esi + 0c8h]
        push edx
        ; Exact mapped bytes E8 69 C4 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xc4
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c8h]
        mov ecx, dword ptr [esi + 74h]
        mov dword ptr [eax + 54h], ecx
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x10022909
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 50h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 0fh
        ; Exact mapped bytes 7E 0F: jle 0x1002289d
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1002289d
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [eax + 3ch]
        ; Exact mapped bytes EB 02: jmp 0x1002289f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov dword ptr [esi + 50h], ecx
        mov eax, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov eax, ecx
        and eax, 1f00h
        ; Exact mapped bytes 66 3D 00 01: cmp ax, 0x100
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 0F: jne 0x100228c9
        __asm _emit 0x75
        __asm _emit 0x0f
        and ecx, 0e2ffh
        or ch, 2
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes EB 40: jmp 0x10022909
        __asm _emit 0xeb
        __asm _emit 0x40
        ; Exact mapped bytes 66 3D 00 04: cmp ax, 0x400
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 75 3A: jne 0x10022909
        __asm _emit 0x75
        __asm _emit 0x3a
        mov ecx, dword ptr [esi + 50h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 0eh
        ; Exact mapped bytes 7E 0F: jle 0x100228f4
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100228f4
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 38h]
        ; Exact mapped bytes EB 02: jmp 0x100228f6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 50h], eax
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and eax, 0e5fbh
        or ah, 5
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 3ch]
        pop ebx
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x1002292e
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x10022929
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x10022911
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
