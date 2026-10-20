// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100AED50 .. +0xAA7 bytes.
extern "C" __declspec(naked) void FUN_100aed50_100AED50() {
    __asm {
        sub esp, 14h
        ; Exact mapped bytes 8B 15 0C 57 1C 10: mov edx, dword ptr [0x101c570c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebp
        mov ebp, ecx
        xor eax, eax
        push esi
        push edi
        mov dword ptr [esp + 18h], ebp
        mov dword ptr [esp + 10h], eax
        lea ecx, [edx + 2e8h]
        mov esi, dword ptr [ecx]
        mov edi, dword ptr [esi + 94h]
        test edi, edi
        ; Exact mapped bytes 75 12: jne 0x100aed8c
        __asm _emit 0x75
        __asm _emit 0x12
        inc eax
        add ecx, 4
        cmp eax, 20h
        ; Exact mapped bytes 7C EB: jl 0x100aed6e
        __asm _emit 0x7c
        __asm _emit 0xeb
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes E9 1D 0A 00 00: jmp 0x100af7a9
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edx + eax*4 + 2e8h]
        mov dword ptr [esp + 10h], eax
        mov dword ptr [ecx + 94h], 0
        ; Exact mapped bytes 8B 15 0C 57 1C 10: mov edx, dword ptr [0x101c570c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov esi, dword ptr [edx + eax*4 + 2e8h]
        mov eax, dword ptr [esi + 0b0h]
        add esi, 0a0h
        and eax, 0fh
        mov dword ptr [esp + 1ch], esi
        mov ecx, dword ptr [esi + 54h]
        lea edx, [eax + eax*4]
        shr ecx, 1
        lea edx, [eax + edx*8]
        lea eax, [eax + edx*2]
        add ecx, eax
        lea edx, [ecx + ecx*4]
        lea ecx, [ecx + edx*2]
        lea eax, [ecx + ecx*4]
        ; Exact mapped bytes 8B 0D 6C 59 1C 10: mov ecx, dword ptr [0x101c596c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [eax*4 + 10181758h]
        mov edx, dword ptr [ecx + 160h]
        cmp edx, eax
        ; Exact mapped bytes 7E 15: jle 0x100aee06
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x100aee06
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x100aee06
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x100aee08
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 74h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100aee3a
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [esi + 10h]
        mov ecx, dword ptr [esi + 54h]
        and eax, 0fh
        shr ecx, 1
        lea edx, [eax + eax*4]
        lea edx, [eax + edx*8]
        lea eax, [eax + edx*2]
        add ecx, eax
        lea edx, [ecx + ecx*4]
        lea eax, [ecx + edx*2]
        lea eax, [eax + eax*4]
        mov eax, dword ptr [eax*4 + 1018174ch]
        cmp eax, 4bh
        ; Exact mapped bytes 7D 34: jge 0x100aee99
        __asm _emit 0x7d
        __asm _emit 0x34
        ; Exact mapped bytes 8B 0D C4 57 1C 10: mov ecx, dword ptr [0x101c57c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, 20fh
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 13: jle 0x100aee8b
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x100aee8b
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100aee8b
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x100aee8d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 78h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 5C: je 0x100aeef3
        __asm _emit 0x74
        __asm _emit 0x5c
        ; Exact mapped bytes EB 32: jmp 0x100aeecb
        __asm _emit 0xeb
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D C8 57 1C 10: mov ecx, dword ptr [0x101c57c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, 145h
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 13: jle 0x100aeebf
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x100aeebf
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100aeebf
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x100aeec1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 78h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100aeef3
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [ebp + 7ch]
        lea ecx, [esi + 0ach]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x100aef0f
        __asm _emit 0x74
        __asm _emit 0x0c
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100aef0f
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 10h]
        push ebx
        shr ecx, 4
        and ecx, 0ffh
        push ecx
        mov ecx, dword ptr [ebp + 80h]
        ; Exact mapped bytes E8 F8 07 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x07
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [esi + 10h]
        mov eax, dword ptr [ebp + 84h]
        and edx, 0fh
        dec edx
        mov dword ptr [eax + 50h], edx
        mov eax, dword ptr [esi + 10h]
        mov edx, dword ptr [esi + 54h]
        mov ecx, eax
        shr ecx, 1dh
        shr eax, 15h
        and ecx, 7
        and eax, 0ffh
        test edx, 20000000h
        ; Exact mapped bytes 0F 84 F7 00 00 00: je 0x100af051
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 9C 57 1C 10: mov edx, dword ptr [0x101c579c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 10h], 1
        cmp dword ptr [edx + 164h], 99h
        ; Exact mapped bytes 7E 12: jle 0x100aef86
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [edx + 18ch]
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x100aef86
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [edx + 264h]
        ; Exact mapped bytes EB 02: jmp 0x100aef88
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov edi, dword ptr [ebp + 64h]
        test edx, edx
        mov dword ptr [edi + 50h], edx
        ; Exact mapped bytes 74 28: je 0x100aefba
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebx, dword ptr [edx + 10h]
        add edx, 18h
        mov dword ptr [edi + 0ch], ebx
        mov ebx, dword ptr [edx - 4]
        mov dword ptr [edi + 10h], ebx
        mov ebx, dword ptr [edx]
        add edi, 14h
        mov dword ptr [edi], ebx
        mov ebx, dword ptr [edx + 4]
        mov dword ptr [edi + 4], ebx
        mov ebx, dword ptr [edx + 8]
        mov dword ptr [edi + 8], ebx
        mov edx, dword ptr [edx + 0ch]
        mov dword ptr [edi + 0ch], edx
        push eax
        push ecx
        ; Exact mapped bytes E8 6F 2D F7 FF: call 0x10021d30
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x2d
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 138h]
        add esp, 8
        mov ecx, dword ptr [ecx + 6ch]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x100aefdd
        __asm _emit 0x74
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100aefdd
        __asm _emit 0x74
        __asm _emit 0x08
        push eax
        push ecx
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 6ch]
        xor ecx, ecx
        lea edi, [ebp + 13ch]
        add esi, 9ch
        mov dword ptr [eax + 50h], ecx
        mov eax, dword ptr [ebp + 70h]
        mov ebx, 8
        mov dword ptr [eax + 50h], ecx
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        test al, 1
        ; Exact mapped bytes 74 26: je 0x100af029
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, eax
        ; Exact mapped bytes 66 C1 E8 0D: shr ax, 0xd
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0d
        shr ecx, 5
        and al, 0fh
        push ecx
        push eax
        ; Exact mapped bytes E8 1B 2D F7 FF: call 0x10021d30
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x2d
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [edi]
        add esp, 8
        mov ecx, dword ptr [ecx + 6ch]
        test ecx, ecx
        ; Exact mapped bytes 74 22: je 0x100af043
        __asm _emit 0x74
        __asm _emit 0x22
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x100af043
        __asm _emit 0x74
        __asm _emit 0x1e
        push eax
        push ecx
        ; Exact mapped bytes EB 14: jmp 0x100af03d
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [edi]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x100af043
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, 101ace48h
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x100af043
        __asm _emit 0x74
        __asm _emit 0x08
        push edx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        add esi, 2
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 B0: jne 0x100aeffc
        __asm _emit 0x75
        __asm _emit 0xb0
        ; Exact mapped bytes E9 EE 05 00 00: jmp 0x100af63f
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 10h], 0bh
        cmp dword ptr [eax + 164h], 98h
        ; Exact mapped bytes 7E 12: jle 0x100af07c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100af07c
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 260h]
        ; Exact mapped bytes EB 02: jmp 0x100af07e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 64h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100af0b0
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov esi, dword ptr [esi + 94h]
        test esi, 10000h
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x100af147
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 9bh
        ; Exact mapped bytes 7E 12: jle 0x100af0e5
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100af0e5
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 26ch]
        ; Exact mapped bytes EB 02: jmp 0x100af0e7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 6ch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100af119
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 9ch
        ; Exact mapped bytes 0F 8E 05 04 00 00: jle 0x100af533
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 F7 03 00 00: je 0x100af533
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 270h]
        ; Exact mapped bytes E9 EE 03 00 00: jmp 0x100af535
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, 2000000h
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x100af1d8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 9dh
        ; Exact mapped bytes 7E 12: jle 0x100af176
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100af176
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 274h]
        ; Exact mapped bytes EB 02: jmp 0x100af178
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 6ch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100af1aa
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 9eh
        ; Exact mapped bytes 0F 8E 74 03 00 00: jle 0x100af533
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 66 03 00 00: je 0x100af533
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 278h]
        ; Exact mapped bytes E9 5D 03 00 00: jmp 0x100af535
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, 80000h
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x100af269
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 9fh
        ; Exact mapped bytes 7E 12: jle 0x100af207
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100af207
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 27ch]
        ; Exact mapped bytes EB 02: jmp 0x100af209
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 6ch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100af23b
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 0a0h
        ; Exact mapped bytes 0F 8E E3 02 00 00: jle 0x100af533
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 D5 02 00 00: je 0x100af533
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 280h]
        ; Exact mapped bytes E9 CC 02 00 00: jmp 0x100af535
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, 200000h
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x100af2fa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 0a1h
        ; Exact mapped bytes 7E 12: jle 0x100af298
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100af298
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 284h]
        ; Exact mapped bytes EB 02: jmp 0x100af29a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 6ch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100af2cc
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 0a2h
        ; Exact mapped bytes 0F 8E 52 02 00 00: jle 0x100af533
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 44 02 00 00: je 0x100af533
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 288h]
        ; Exact mapped bytes E9 3B 02 00 00: jmp 0x100af535
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, 1000000h
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x100af38b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 0a3h
        ; Exact mapped bytes 7E 12: jle 0x100af329
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100af329
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 28ch]
        ; Exact mapped bytes EB 02: jmp 0x100af32b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 6ch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100af35d
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 0a4h
        ; Exact mapped bytes 0F 8E C1 01 00 00: jle 0x100af533
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 B3 01 00 00: je 0x100af533
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 290h]
        ; Exact mapped bytes E9 AA 01 00 00: jmp 0x100af535
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, 40000h
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x100af41c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 0a5h
        ; Exact mapped bytes 7E 12: jle 0x100af3ba
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100af3ba
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 294h]
        ; Exact mapped bytes EB 02: jmp 0x100af3bc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 6ch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100af3ee
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 0a6h
        ; Exact mapped bytes 0F 8E 30 01 00 00: jle 0x100af533
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 22 01 00 00: je 0x100af533
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 298h]
        ; Exact mapped bytes E9 19 01 00 00: jmp 0x100af535
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, 20000h
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x100af4ad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 0abh
        ; Exact mapped bytes 7E 12: jle 0x100af44b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100af44b
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 2ach]
        ; Exact mapped bytes EB 02: jmp 0x100af44d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 6ch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100af47f
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 0ach
        ; Exact mapped bytes 0F 8E 9F 00 00 00: jle 0x100af533
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x100af533
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 2b0h]
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x100af535
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, 40000000h
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x100af548
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C8 57 1C 10: mov eax, dword ptr [0x101c57c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 190h
        ; Exact mapped bytes 7E 12: jle 0x100af4dc
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100af4dc
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 640h]
        ; Exact mapped bytes EB 02: jmp 0x100af4de
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 6ch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100af510
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 C8 57 1C 10: mov eax, dword ptr [0x101c57c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 191h
        ; Exact mapped bytes 7E 12: jle 0x100af533
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100af533
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 644h]
        ; Exact mapped bytes EB 02: jmp 0x100af535
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 70h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 0F 84 B3 00 00 00: je 0x100af5f6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x100af5ce
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 0a9h
        ; Exact mapped bytes 7E 12: jle 0x100af56b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100af56b
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 2a4h]
        ; Exact mapped bytes EB 02: jmp 0x100af56d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 6ch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100af59f
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 0aah
        ; Exact mapped bytes 7E 12: jle 0x100af5c2
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100af5c2
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 2a8h]
        ; Exact mapped bytes EB 02: jmp 0x100af5c4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 70h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100af5f6
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [ebp + 138h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x100af614
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, 101ace48h
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100af614
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea esi, [ebp + 13ch]
        mov edi, 8
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x100af639
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, 1017f514h
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x100af639
        __asm _emit 0x74
        __asm _emit 0x08
        push edx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 E0: jne 0x100af61f
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [esp + 10h]
        test eax, eax
        ; Exact mapped bytes 0F 8E 15 01 00 00: jle 0x100af760
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        lea edi, [ebp + 10ch]
        lea ebx, [ebp + 8ch]
        mov dword ptr [esp + 18h], eax
        mov ecx, dword ptr [ebp + 8]
        lea edx, [esi + ecx + 4eh]
        mov ecx, dword ptr [edi - 2ch]
        push edx
        ; Exact mapped bytes E8 53 F7 04 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xf7
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        lea ecx, [esi + eax + 4eh]
        push ecx
        mov ecx, dword ptr [ebx - 4]
        ; Exact mapped bytes E8 43 F7 04 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xf7
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebx]
        lea eax, [esi + edx + 4eh]
        push eax
        ; Exact mapped bytes E8 34 F7 04 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xf7
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        lea edx, [esi + ecx + 53h]
        mov ecx, dword ptr [edi]
        push edx
        ; Exact mapped bytes E8 25 F7 04 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xf7
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        add edi, 4
        add ebx, 8
        add esi, 0eh
        dec eax
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes 75 AE: jne 0x100af65d
        __asm _emit 0x75
        __asm _emit 0xae
        mov eax, dword ptr [esp + 10h]
        test eax, eax
        ; Exact mapped bytes 0F 8E A5 00 00 00: jle 0x100af760
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 1ch]
        mov eax, dword ptr [esp + 20h]
        mov ecx, 0ffffffd4h
        lea esi, [edi + 10ch]
        add edi, 8ch
        sub ecx, eax
        lea ebp, [eax + 2ch]
        lea ebx, [eax + 14h]
        mov dword ptr [esp + 20h], ecx
        mov eax, dword ptr [esi - 2ch]
        mov ecx, 1
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi - 4]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [edi - 4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 03: mov ax, word ptr [ebx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes E8 13 00 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 45 00: movsx eax, byte ptr [ebp]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        cdq
        xor eax, edx
        sub eax, edx
        push eax
        ; Exact mapped bytes E8 02 00 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        mov dl, byte ptr [ebp]
        xor ecx, ecx
        test dl, dl
        mov edx, dword ptr [esi - 2ch]
        push 9f6h
        setl cl
        xor eax, eax
        mov dword ptr [edx + 50h], ecx
        ; Exact mapped bytes 66 8B 03: mov ax, word ptr [ebx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x03
        mov ecx, dword ptr [esi]
        push eax
        ; Exact mapped bytes E8 10 AC F7 FF: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xac
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 20h]
        mov eax, dword ptr [esp + 10h]
        add ebx, 2
        add esi, 4
        add edi, 8
        inc ebp
        add ecx, ebp
        cmp ecx, eax
        ; Exact mapped bytes 7C 88: jl 0x100af6e0
        __asm _emit 0x7c
        __asm _emit 0x88
        mov ebp, dword ptr [esp + 1ch]
        mov edx, eax
        ; Exact mapped bytes EB 04: jmp 0x100af764
        __asm _emit 0xeb
        __asm _emit 0x04
        mov edx, dword ptr [esp + 10h]
        cmp edx, 0bh
        pop ebx
        ; Exact mapped bytes 7D 3F: jge 0x100af7a9
        __asm _emit 0x7d
        __asm _emit 0x3f
        mov edi, 0bh
        lea eax, [ebp + edx*4 + 10ch]
        lea ecx, [ebp + edx*8 + 8ch]
        sub edi, edx
        mov esi, 0fffeh
        mov edx, dword ptr [eax - 2ch]
        add eax, 4
        add ecx, 8
        ; Exact mapped bytes 66 21 72 24: and word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x72
        __asm _emit 0x24
        mov edx, dword ptr [ecx - 0ch]
        ; Exact mapped bytes 66 21 72 24: and word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x72
        __asm _emit 0x24
        mov edx, dword ptr [ecx - 8]
        ; Exact mapped bytes 66 21 72 24: and word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x72
        __asm _emit 0x24
        mov edx, dword ptr [eax - 4]
        ; Exact mapped bytes 66 21 72 24: and word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x72
        __asm _emit 0x24
        dec edi
        ; Exact mapped bytes 75 DB: jne 0x100af784
        __asm _emit 0x75
        __asm _emit 0xdb
        cmp dword ptr [esp + 10h], 20h
        ; Exact mapped bytes 75 40: jne 0x100af7f0
        __asm _emit 0x75
        __asm _emit 0x40
        mov eax, dword ptr [ebp + 7ch]
        xor esi, esi
        mov eax, dword ptr [eax + 6ch]
        cmp eax, esi
        ; Exact mapped bytes 74 11: je 0x100af7cd
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, 1017f514h
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x100af7cd
        __asm _emit 0x74
        __asm _emit 0x08
        push edx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes A1 0C 57 1C 10: mov eax, dword ptr [0x101c570c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [eax + 64h], esi
        ; Exact mapped bytes 8B 0D 0C 57 1C 10: mov ecx, dword ptr [0x101c570c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 3fch]
        mov ecx, ebp
        or byte ptr [eax + 24h], 1
        mov edx, dword ptr [ebp]
        mov dword ptr [ebp + 58h], esi
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        pop edi
        pop esi
        pop ebp
        add esp, 14h
        ret
    }
}
