// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BBC10 .. +0x4F3 bytes.
extern "C" __declspec(naked) void FUN_100bbc10_100BBC10() {
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
        ; Exact mapped bytes 0F 84 E0 04 00 00: je 0x100bc100
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 1f00h
        push ebx
        ; Exact mapped bytes 66 3D 00 01: cmp ax, 0x100
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x01
        mov edi, 1
        ; Exact mapped bytes 74 0A: je 0x100bbc3b
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 3D 00 04: cmp ax, 0x400
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 59 01 00 00: jne 0x100bbd94
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [esi + 50h]
        cmp ecx, eax
        ; Exact mapped bytes 75 0E: jne 0x100bbc53
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [esi + 8]
        mov ebx, dword ptr [esi + 54h]
        cmp edx, ebx
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x100bbcda
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esi + 8]
        sub eax, ecx
        mov ecx, dword ptr [esi + 54h]
        sub ecx, ebx
        cmp eax, -8
        ; Exact mapped bytes 7E 2A: jle 0x100bbc8c
        __asm _emit 0x7e
        __asm _emit 0x2a
        cmp eax, 8
        ; Exact mapped bytes 7D 25: jge 0x100bbc8c
        __asm _emit 0x7d
        __asm _emit 0x25
        cmp eax, -4
        ; Exact mapped bytes 7E 17: jle 0x100bbc83
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp eax, 4
        ; Exact mapped bytes 7D 12: jge 0x100bbc83
        __asm _emit 0x7d
        __asm _emit 0x12
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x100bbc7a
        __asm _emit 0x7d
        __asm _emit 0x05
        or ebx, 0ffffffffh
        ; Exact mapped bytes EB 1D: jmp 0x100bbc97
        __asm _emit 0xeb
        __asm _emit 0x1d
        xor ebx, ebx
        test eax, eax
        setg bl
        ; Exact mapped bytes EB 14: jmp 0x100bbc97
        __asm _emit 0xeb
        __asm _emit 0x14
        cdq
        sub eax, edx
        mov ebx, eax
        sar ebx, 1
        ; Exact mapped bytes EB 0B: jmp 0x100bbc97
        __asm _emit 0xeb
        __asm _emit 0x0b
        cdq
        and edx, 3
        add eax, edx
        mov ebx, eax
        sar ebx, 2
        cmp ecx, -8
        ; Exact mapped bytes 7E 2A: jle 0x100bbcc6
        __asm _emit 0x7e
        __asm _emit 0x2a
        cmp ecx, 8
        ; Exact mapped bytes 7D 25: jge 0x100bbcc6
        __asm _emit 0x7d
        __asm _emit 0x25
        cmp ecx, -4
        ; Exact mapped bytes 7E 17: jle 0x100bbcbd
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp ecx, 4
        ; Exact mapped bytes 7D 12: jge 0x100bbcbd
        __asm _emit 0x7d
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7D 05: jge 0x100bbcb4
        __asm _emit 0x7d
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 1D: jmp 0x100bbcd1
        __asm _emit 0xeb
        __asm _emit 0x1d
        xor eax, eax
        test ecx, ecx
        setg al
        ; Exact mapped bytes EB 14: jmp 0x100bbcd1
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 0B: jmp 0x100bbcd1
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, ecx
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 56 31 04 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x31
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 50h]
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 AC 00 00 00: jne 0x100bbd94
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 54h]
        cmp ecx, eax
        ; Exact mapped bytes 0F 85 9E 00 00 00: jne 0x100bbd94
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x00
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
        ; Exact mapped bytes 75 78: jne 0x100bbd81
        __asm _emit 0x75
        __asm _emit 0x78
        mov ecx, dword ptr [esi + 15ch]
        and eax, 0e2ffh
        or eax, 202h
        mov dword ptr [esi + 138h], edi
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov dword ptr [esi + 134h], 0
        ; Exact mapped bytes E8 4E C2 F8 FF: call 0x10047f80
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xc2
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 160h]
        ; Exact mapped bytes E8 43 C2 F8 FF: call 0x10047f80
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xc2
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 164h]
        ; Exact mapped bytes E8 38 C2 F8 FF: call 0x10047f80
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xc2
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes A1 34 93 1C 10: mov eax, dword ptr [0x101c9334]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [eax + 20h]
        mov ecx, dword ptr [eax + 18h]
        mov ebx, dword ptr [eax + 14h]
        sub edx, ecx
        mov ecx, dword ptr [eax + 1ch]
        sub edx, 23h
        sub ecx, ebx
        push edx
        sub ecx, 80h
        push ecx
        mov ecx, dword ptr [esi + 64h]
        ; Exact mapped bytes E8 F0 C1 F8 FF: call 0x10047f60
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 64h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov ecx, esi
        ; Exact mapped bytes E8 81 17 00 00: call 0x100bd500
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 13: jmp 0x100bbd94
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes 66 81 F9 00 04: cmp cx, 0x400
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 75 0C: jne 0x100bbd94
        __asm _emit 0x75
        __asm _emit 0x0c
        and eax, 0e5fah
        or ah, 5
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and eax, 1f00h
        cmp eax, 200h
        ; Exact mapped bytes 0F 85 33 03 00 00: jne 0x100bc0db
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x33
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 138h]
        test eax, eax
        ; Exact mapped bytes 74 7F: je 0x100bbe31
        __asm _emit 0x74
        __asm _emit 0x7f
        mov ecx, dword ptr [esi + 12ch]
        mov eax, dword ptr [esi + 134h]
        mov ebx, dword ptr [ecx + 4]
        sub eax, ebx
        mov ebx, 0
        setns bl
        dec ebx
        and ebx, 0fffffffeh
        inc ebx
        cmp eax, 10h
        ; Exact mapped bytes 7E 07: jle 0x100bbddc
        __asm _emit 0x7e
        __asm _emit 0x07
        mov eax, 10h
        ; Exact mapped bytes EB 0A: jmp 0x100bbde6
        __asm _emit 0xeb
        __asm _emit 0x0a
        cmp eax, -10h
        ; Exact mapped bytes 7D 05: jge 0x100bbde6
        __asm _emit 0x7d
        __asm _emit 0x05
        mov eax, 0fffffff0h
        push eax
        ; Exact mapped bytes E8 94 30 04 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 12ch]
        mov eax, dword ptr [esi + 134h]
        mov edx, dword ptr [ecx + 4]
        cmp edx, eax
        ; Exact mapped bytes 75 32: jne 0x100bbe31
        __asm _emit 0x75
        __asm _emit 0x32
        push edi
        mov dword ptr [esi + 138h], 0
        ; Exact mapped bytes E8 91 66 F7 FF: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x66
        __asm _emit 0xf7
        __asm _emit 0xff
        test ebx, ebx
        ; Exact mapped bytes 7E 1E: jle 0x100bbe31
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov eax, dword ptr [esi + 144h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 14ch]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 148h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 13ch]
        mov ebx, 40000000h
        test eax, eax
        ; Exact mapped bytes 0F 84 D9 00 00 00: je 0x100bbf1d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 150h]
        ; Exact mapped bytes E8 91 67 F7 FF: call 0x100325e0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x67
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 C6 00 00 00: jne 0x100bbf1d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 15ch]
        mov dword ptr [eax + 7ch], 100h
        mov dword ptr [eax + 74h], ebx
        mov eax, dword ptr [esi + 160h]
        mov dword ptr [eax + 7ch], 100h
        mov dword ptr [eax + 74h], ebx
        mov eax, dword ptr [esi + 164h]
        mov dword ptr [eax + 7ch], 100h
        mov dword ptr [eax + 74h], ebx
        mov eax, dword ptr [esi + 198h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 19ch]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1a0h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 118h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 114h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 184h]
        mov dword ptr [esi + 13ch], 0
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 188h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 18ch]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 190h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 168h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 16ch]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 170h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 178h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 17ch]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 08 9E F9 FF: call 0x10055d30
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x9e
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp eax, ebx
        ; Exact mapped bytes 75 0B: jne 0x100bbf37
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 59 9D F9 FF: call 0x10055c90
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x9d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [esi + 180h]
        test eax, eax
        ; Exact mapped bytes 0F 84 96 01 00 00: je 0x100bc0db
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 184h]
        ; Exact mapped bytes 8B 0D D4 92 1C 10: mov ecx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [eax + 4]
        mov ebx, dword ptr [eax + 14h]
        mov edi, dword ptr [ecx + 4]
        add ebx, edx
        cmp edi, ebx
        ; Exact mapped bytes 7C 38: jl 0x100bbf98
        __asm _emit 0x7c
        __asm _emit 0x38
        mov ebx, dword ptr [eax + 1ch]
        add ebx, edx
        cmp edi, ebx
        ; Exact mapped bytes 7D 2F: jge 0x100bbf98
        __asm _emit 0x7d
        __asm _emit 0x2f
        mov edx, dword ptr [eax + 8]
        mov ebx, dword ptr [eax + 18h]
        mov edi, dword ptr [ecx + 8]
        add ebx, edx
        cmp edi, ebx
        ; Exact mapped bytes 7C 20: jl 0x100bbf98
        __asm _emit 0x7c
        __asm _emit 0x20
        mov eax, dword ptr [eax + 20h]
        add eax, edx
        cmp edi, eax
        ; Exact mapped bytes 7D 17: jge 0x100bbf98
        __asm _emit 0x7d
        __asm _emit 0x17
        mov ecx, dword ptr [esi + 198h]
        ; Exact mapped bytes E8 F4 85 04 00: call 0x10104580
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 BD 14 00 00: call 0x100bd450
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 43 01 00 00: jmp 0x100bc0db
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 188h]
        mov edi, dword ptr [ecx + 4]
        mov edx, dword ptr [eax + 4]
        mov ebx, dword ptr [eax + 14h]
        add ebx, edx
        cmp edi, ebx
        ; Exact mapped bytes 7C 54: jl 0x100bc001
        __asm _emit 0x7c
        __asm _emit 0x54
        mov ebx, dword ptr [eax + 1ch]
        add ebx, edx
        cmp edi, ebx
        ; Exact mapped bytes 7D 4B: jge 0x100bc001
        __asm _emit 0x7d
        __asm _emit 0x4b
        mov edx, dword ptr [eax + 8]
        mov ebx, dword ptr [eax + 18h]
        mov edi, dword ptr [ecx + 8]
        add ebx, edx
        cmp edi, ebx
        ; Exact mapped bytes 7C 3C: jl 0x100bc001
        __asm _emit 0x7c
        __asm _emit 0x3c
        mov eax, dword ptr [eax + 20h]
        add eax, edx
        cmp edi, eax
        ; Exact mapped bytes 7D 33: jge 0x100bc001
        __asm _emit 0x7d
        __asm _emit 0x33
        mov ecx, dword ptr [esi + 198h]
        mov edi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 61 7E 04 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x00
        add edi, -9
        cmp eax, edi
        ; Exact mapped bytes 0F 8D F1 00 00 00: jge 0x100bc0db
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 198h]
        ; Exact mapped bytes E8 2B 86 04 00: call 0x10104620
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 54 14 00 00: call 0x100bd450
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x100bc0db
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 18ch]
        mov edi, dword ptr [ecx + 4]
        mov edx, dword ptr [eax + 4]
        mov ebx, dword ptr [eax + 14h]
        add ebx, edx
        cmp edi, ebx
        ; Exact mapped bytes 7C 47: jl 0x100bc05d
        __asm _emit 0x7c
        __asm _emit 0x47
        mov ebx, dword ptr [eax + 1ch]
        add ebx, edx
        cmp edi, ebx
        ; Exact mapped bytes 7D 3E: jge 0x100bc05d
        __asm _emit 0x7d
        __asm _emit 0x3e
        mov edx, dword ptr [eax + 8]
        mov ebx, dword ptr [eax + 18h]
        mov edi, dword ptr [ecx + 8]
        add ebx, edx
        cmp edi, ebx
        ; Exact mapped bytes 7C 2F: jl 0x100bc05d
        __asm _emit 0x7c
        __asm _emit 0x2f
        mov eax, dword ptr [eax + 20h]
        add eax, edx
        cmp edi, eax
        ; Exact mapped bytes 7D 26: jge 0x100bc05d
        __asm _emit 0x7d
        __asm _emit 0x26
        mov ecx, dword ptr [esi + 19ch]
        ; Exact mapped bytes E8 3E 85 04 00: call 0x10104580
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1a0h]
        ; Exact mapped bytes E8 33 85 04 00: call 0x10104580
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 9C 04 00 00: call 0x100bc4f0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 F5 13 00 00: call 0x100bd450
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 7E: jmp 0x100bc0db
        __asm _emit 0xeb
        __asm _emit 0x7e
        mov eax, dword ptr [esi + 190h]
        mov edi, dword ptr [ecx + 4]
        mov edx, dword ptr [eax + 4]
        mov ebx, dword ptr [eax + 14h]
        add ebx, edx
        cmp edi, ebx
        ; Exact mapped bytes 7C 5F: jl 0x100bc0d1
        __asm _emit 0x7c
        __asm _emit 0x5f
        mov ebx, dword ptr [eax + 1ch]
        add ebx, edx
        cmp edi, ebx
        ; Exact mapped bytes 7D 56: jge 0x100bc0d1
        __asm _emit 0x7d
        __asm _emit 0x56
        mov edx, dword ptr [eax + 8]
        mov edi, dword ptr [eax + 18h]
        mov ecx, dword ptr [ecx + 8]
        add edi, edx
        cmp ecx, edi
        ; Exact mapped bytes 7C 47: jl 0x100bc0d1
        __asm _emit 0x7c
        __asm _emit 0x47
        mov eax, dword ptr [eax + 20h]
        add eax, edx
        cmp ecx, eax
        ; Exact mapped bytes 7D 3E: jge 0x100bc0d1
        __asm _emit 0x7d
        __asm _emit 0x3e
        mov ecx, dword ptr [esi + 19ch]
        mov edi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 9C 7D 04 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x7d
        __asm _emit 0x04
        __asm _emit 0x00
        add edi, -6
        cmp eax, edi
        ; Exact mapped bytes 7D 30: jge 0x100bc0db
        __asm _emit 0x7d
        __asm _emit 0x30
        mov ecx, dword ptr [esi + 19ch]
        ; Exact mapped bytes E8 6A 85 04 00: call 0x10104620
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1a0h]
        ; Exact mapped bytes E8 5F 85 04 00: call 0x10104620
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 28 04 00 00: call 0x100bc4f0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 81 13 00 00: call 0x100bd450
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x100bc0db
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [esi + 180h], 0
        mov ecx, dword ptr [esi + 3ch]
        pop ebx
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x100bc100
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x100bc0fb
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x100bc0e3
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
