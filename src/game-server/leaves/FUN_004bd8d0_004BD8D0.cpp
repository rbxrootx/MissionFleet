// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BD8D0 .. +0xC07 bytes.
extern "C" __declspec(naked) void FUN_004bd8d0_004BD8D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4a0h
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 42ch], 0
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 4D D8: mov word ptr [ebp - 0x28], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd8
        mov edx, dword ptr [ebp - 28h]
        and edx, 0ffffh
        mov eax, dword ptr [ebp + 0ch]
        add eax, 2
        mov dword ptr [ebp + 0ch], eax
        test edx, edx
        ; Exact mapped bytes 0F 84 B8 0B 00 00: je 0x4be4cd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 42ch], 0
        ; Exact mapped bytes 0F 8C AB 0B 00 00: jl 0x4be4cd
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xab
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        and ecx, 0ffffh
        cmp ecx, 20h
        ; Exact mapped bytes 7C 28: jl 0x4bd958
        __asm _emit 0x7c
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 28h]
        and edx, 0ffffh
        cmp edx, 78h
        ; Exact mapped bytes 7F 1A: jg 0x4bd958
        __asm _emit 0x7f
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 28h]
        and eax, 0ffffh
        ; Exact mapped bytes 0F BE 88 C0 C7 58 00: movsx ecx, byte ptr [eax + 0x58c7c0]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x88
        __asm _emit 0xc0
        __asm _emit 0xc7
        __asm _emit 0x58
        __asm _emit 0x00
        and ecx, 0fh
        mov dword ptr [ebp - 48ch], ecx
        ; Exact mapped bytes EB 0A: jmp 0x4bd962
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 48ch], 0
        mov edx, dword ptr [ebp - 48ch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 94 C1 E0 C7 58 00: movsx edx, byte ptr [ecx + eax*8 + 0x58c7e0]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x94
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0xc7
        __asm _emit 0x58
        __asm _emit 0x00
        sar edx, 4
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 490h], eax
        cmp dword ptr [ebp - 490h], 7
        ; Exact mapped bytes 0F 87 33 0B 00 00: ja 0x4be4c8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x33
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 490h]
        ; Exact mapped bytes FF 24 8D D7 E4 4B 00: jmp dword ptr [ecx*4 + 0x4be4d7]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xd7
        __asm _emit 0xe4
        __asm _emit 0x4b
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 1
        lea edx, [ebp - 42ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 66 8B 4D D8: mov cx, word ptr [ebp - 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd8
        push ecx
        ; Exact mapped bytes E8 E2 0B 00 00: call 0x4be5a0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 02 0B 00 00: jmp 0x4be4c8
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 43ch], edx
        mov eax, dword ptr [ebp - 43ch]
        mov dword ptr [ebp - 444h], eax
        mov ecx, dword ptr [ebp - 444h]
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 434h], 0ffffffffh
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes E9 C0 0A 00 00: jmp 0x4be4c8
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        and edx, 0ffffh
        mov dword ptr [ebp - 494h], edx
        mov eax, dword ptr [ebp - 494h]
        sub eax, 20h
        mov dword ptr [ebp - 494h], eax
        cmp dword ptr [ebp - 494h], 10h
        ; Exact mapped bytes 77 48: ja 0x4bda77
        __asm _emit 0x77
        __asm _emit 0x48
        mov edx, dword ptr [ebp - 494h]
        xor ecx, ecx
        mov cl, byte ptr [edx + 4be50fh]
        ; Exact mapped bytes FF 24 8D F7 E4 4B 00: jmp dword ptr [ecx*4 + 0x4be4f7]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xf7
        __asm _emit 0xe4
        __asm _emit 0x4b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        or al, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 29: jmp 0x4bda77
        __asm _emit 0xeb
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        or ecx, 1
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 1E: jmp 0x4bda77
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 4]
        or edx, 2
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 13: jmp 0x4bda77
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        or al, 80h
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 09: jmp 0x4bda77
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        or ecx, 8
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E9 4C 0A 00 00: jmp 0x4be4c8
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        and edx, 0ffffh
        cmp edx, 2ah
        ; Exact mapped bytes 75 34: jne 0x4bdabe
        __asm _emit 0x75
        __asm _emit 0x34
        lea eax, [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 DD 0B 00 00: call 0x4be670
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 444h], eax
        cmp dword ptr [ebp - 444h], 0
        ; Exact mapped bytes 7D 17: jge 0x4bdabc
        __asm _emit 0x7d
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        or ecx, 4
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 444h]
        neg edx
        mov dword ptr [ebp - 444h], edx
        ; Exact mapped bytes EB 1C: jmp 0x4bdada
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 444h]
        imul eax, eax, 0ah
        mov ecx, dword ptr [ebp - 28h]
        and ecx, 0ffffh
        lea edx, [eax + ecx - 30h]
        mov dword ptr [ebp - 444h], edx
        ; Exact mapped bytes E9 E9 09 00 00: jmp 0x4be4c8
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 434h], 0
        ; Exact mapped bytes E9 DA 09 00 00: jmp 0x4be4c8
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        and eax, 0ffffh
        cmp eax, 2ah
        ; Exact mapped bytes 75 27: jne 0x4bdb22
        __asm _emit 0x75
        __asm _emit 0x27
        lea ecx, [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 6C 0B 00 00: call 0x4be670
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 434h], eax
        cmp dword ptr [ebp - 434h], 0
        ; Exact mapped bytes 7D 0A: jge 0x4bdb20
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov dword ptr [ebp - 434h], 0ffffffffh
        ; Exact mapped bytes EB 1B: jmp 0x4bdb3d
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 434h]
        imul edx, edx, 0ah
        mov eax, dword ptr [ebp - 28h]
        and eax, 0ffffh
        lea ecx, [edx + eax - 30h]
        mov dword ptr [ebp - 434h], ecx
        ; Exact mapped bytes E9 86 09 00 00: jmp 0x4be4c8
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        and edx, 0ffffh
        mov dword ptr [ebp - 498h], edx
        cmp dword ptr [ebp - 498h], 49h
        ; Exact mapped bytes 74 14: je 0x4bdb6e
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dword ptr [ebp - 498h], 68h
        ; Exact mapped bytes 74 48: je 0x4bdbab
        __asm _emit 0x74
        __asm _emit 0x48
        cmp dword ptr [ebp - 498h], 77h
        ; Exact mapped bytes 74 49: je 0x4bdbb5
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes EB 50: jmp 0x4bdbbe
        __asm _emit 0xeb
        __asm _emit 0x50
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        cmp ecx, 36h
        ; Exact mapped bytes 75 22: jne 0x4bdb9d
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 02: mov ax, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x02
        cmp eax, 34h
        ; Exact mapped bytes 75 14: jne 0x4bdb9d
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        or dh, 80h
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 0C: jmp 0x4bdba9
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes E9 F9 FD FF FF: jmp 0x4bd9a2
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x4bdbbe
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        or al, 20h
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 09: jmp 0x4bdbbe
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        or ch, 8
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E9 05 09 00 00: jmp 0x4be4c8
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        and edx, 0ffffh
        mov dword ptr [ebp - 49ch], edx
        mov eax, dword ptr [ebp - 49ch]
        sub eax, 43h
        mov dword ptr [ebp - 49ch], eax
        cmp dword ptr [ebp - 49ch], 35h
        ; Exact mapped bytes 0F 87 0F 07 00 00: ja 0x4be2fd
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x0f
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 49ch]
        xor ecx, ecx
        mov cl, byte ptr [edx + 4be55ch]
        ; Exact mapped bytes FF 24 8D 20 E5 4B 00: jmp dword ptr [ecx*4 + 0x4be520]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x20
        __asm _emit 0xe5
        __asm _emit 0x4b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        and eax, 830h
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x4bdc18
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        or ecx, 20h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 1ch], 1
        lea edx, [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 48 0A 00 00: call 0x4be670
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes 66 89 45 EC: mov word ptr [ebp - 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        mov eax, dword ptr [ebp - 4]
        and eax, 20h
        test eax, eax
        ; Exact mapped bytes 74 49: je 0x4bdc82
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 14h]
        and ecx, 0ffffh
        and ecx, 0ffh
        mov byte ptr [ebp - 448h], cl
        mov byte ptr [ebp - 447h], 0
        ; Exact mapped bytes 8B 15 88 18 5D 00: mov edx, dword ptr [0x5d1888]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        lea eax, [ebp - 448h]
        push eax
        lea ecx, [ebp - 428h]
        push ecx
        ; Exact mapped bytes E8 31 6A 00 00: call 0x4c46a0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 7D 0A: jge 0x4bdc80
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov dword ptr [ebp - 43ch], 1
        ; Exact mapped bytes EB 0B: jmp 0x4bdc8d
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes 66 8B 55 EC: mov dx, word ptr [ebp - 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 66 89 95 D8 FB FF FF: mov word ptr [ebp - 0x428], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xd8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 428h]
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 24h], 1
        ; Exact mapped bytes E9 5B 06 00 00: jmp 0x4be2fd
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 C5 09 00 00: call 0x4be670
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44ch], eax
        cmp dword ptr [ebp - 44ch], 0
        ; Exact mapped bytes 74 0C: je 0x4bdcc9
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 44ch]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 75 19: jne 0x4bdce2
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes A1 D0 18 5D 00: mov eax, dword ptr [0x5d18d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 F6 B6 FE FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xb6
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 4F: jmp 0x4bdd31
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov edx, dword ptr [ebp - 4]
        and edx, 800h
        test edx, edx
        ; Exact mapped bytes 74 23: je 0x4bdd12
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 44ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 44ch]
        ; Exact mapped bytes 0F BF 02: movsx eax, word ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x02
        shr eax, 1
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes EB 1F: jmp 0x4bdd31
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 44ch]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 44ch]
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes E9 C7 05 00 00: jmp 0x4be2fd
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        and edx, 830h
        test edx, edx
        ; Exact mapped bytes 75 08: jne 0x4bdd4b
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        or al, 20h
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 434h], -1
        ; Exact mapped bytes 75 0C: jne 0x4bdd60
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 4a0h], 7fffffffh
        ; Exact mapped bytes EB 0C: jmp 0x4bdd6c
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 434h]
        mov dword ptr [ebp - 4a0h], ecx
        mov edx, dword ptr [ebp - 4a0h]
        mov dword ptr [ebp - 458h], edx
        lea eax, [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 EF 08 00 00: call 0x4be670
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 4]
        and ecx, 20h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x4bde19
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 09: jne 0x4bdda4
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 8B 15 D0 18 5D 00: mov edx, dword ptr [0x5d18d0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 450h], eax
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x4bddbf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 1
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 24h]
        cmp edx, dword ptr [ebp - 458h]
        ; Exact mapped bytes 7D 4D: jge 0x4bde17
        __asm _emit 0x7d
        __asm _emit 0x4d
        mov eax, dword ptr [ebp - 450h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 40: je 0x4bde17
        __asm _emit 0x74
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 450h]
        xor eax, eax
        mov al, byte ptr [edx]
        ; Exact mapped bytes 8B 0D 7C 16 5D 00: mov ecx, dword ptr [0x5d167c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        xor edx, edx
        ; Exact mapped bytes 66 8B 14 41: mov dx, word ptr [ecx + eax*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x41
        and edx, 8000h
        test edx, edx
        ; Exact mapped bytes 74 0F: je 0x4bde06
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 450h]
        add eax, 1
        mov dword ptr [ebp - 450h], eax
        mov ecx, dword ptr [ebp - 450h]
        add ecx, 1
        mov dword ptr [ebp - 450h], ecx
        ; Exact mapped bytes EB 9F: jmp 0x4bddb6
        __asm _emit 0xeb
        __asm _emit 0x9f
        ; Exact mapped bytes EB 66: jmp 0x4bde7f
        __asm _emit 0xeb
        __asm _emit 0x66
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 09: jne 0x4bde28
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 8B 15 D4 18 5D 00: mov edx, dword ptr [0x5d18d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], edx
        mov dword ptr [ebp - 1ch], 1
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 454h], eax
        mov ecx, dword ptr [ebp - 458h]
        mov edx, dword ptr [ebp - 458h]
        sub edx, 1
        mov dword ptr [ebp - 458h], edx
        test ecx, ecx
        ; Exact mapped bytes 74 20: je 0x4bde71
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 454h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x4bde71
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 454h]
        add edx, 2
        mov dword ptr [ebp - 454h], edx
        ; Exact mapped bytes EB C7: jmp 0x4bde38
        __asm _emit 0xeb
        __asm _emit 0xc7
        mov eax, dword ptr [ebp - 454h]
        sub eax, dword ptr [ebp - 20h]
        sar eax, 1
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes E9 79 04 00 00: jmp 0x4be2fd
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 E3 07 00 00: call 0x4be670
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 45ch], eax
        mov edx, dword ptr [ebp - 4]
        and edx, 20h
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x4bdeb2
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 45ch]
        ; Exact mapped bytes 66 8B 8D D4 FB FF FF: mov cx, word ptr [ebp - 0x42c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes EB 0E: jmp 0x4bdec0
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 45ch]
        mov eax, dword ptr [ebp - 42ch]
        mov dword ptr [edx], eax
        mov dword ptr [ebp - 43ch], 1
        ; Exact mapped bytes E9 2E 04 00 00: jmp 0x4be2fd
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes 66 8B 4D D8: mov cx, word ptr [ebp - 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes 66 83 C1 20: add cx, 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x20
        ; Exact mapped bytes 66 89 4D D8: mov word ptr [ebp - 0x28], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd8
        mov edx, dword ptr [ebp - 4]
        or edx, 40h
        mov dword ptr [ebp - 4], edx
        lea eax, [ebp - 428h]
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 434h], 0
        ; Exact mapped bytes 7D 0C: jge 0x4bdf09
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 434h], 6
        ; Exact mapped bytes EB 21: jmp 0x4bdf2a
        __asm _emit 0xeb
        __asm _emit 0x21
        cmp dword ptr [ebp - 434h], 0
        ; Exact mapped bytes 75 18: jne 0x4bdf2a
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 28h]
        and ecx, 0ffffh
        cmp ecx, 67h
        ; Exact mapped bytes 75 0A: jne 0x4bdf2a
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [ebp - 434h], 1
        mov edx, dword ptr [ebp + 10h]
        add edx, 8
        mov dword ptr [ebp + 10h], edx
        mov eax, dword ptr [ebp + 10h]
        sub eax, 8
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 464h], ecx
        mov dword ptr [ebp - 460h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 434h]
        push ecx
        ; Exact mapped bytes 0F BE 55 D8: movsx edx, byte ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xd8
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        lea ecx, [ebp - 464h]
        push ecx
        ; Exact mapped bytes FF 15 64 16 5D 00: call dword ptr [0x5d1664]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        add esp, 14h
        mov edx, dword ptr [ebp - 4]
        and edx, 80h
        test edx, edx
        ; Exact mapped bytes 74 16: je 0x4bdf91
        __asm _emit 0x74
        __asm _emit 0x16
        cmp dword ptr [ebp - 434h], 0
        ; Exact mapped bytes 75 0D: jne 0x4bdf91
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes FF 15 70 16 5D 00: call dword ptr [0x5d1670]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 28h]
        and ecx, 0ffffh
        cmp ecx, 67h
        ; Exact mapped bytes 75 1A: jne 0x4bdfb9
        __asm _emit 0x75
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 4]
        and edx, 80h
        test edx, edx
        ; Exact mapped bytes 75 0D: jne 0x4bdfb9
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes FF 15 68 16 5D 00: call dword ptr [0x5d1668]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 2dh
        ; Exact mapped bytes 75 12: jne 0x4bdfd6
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        or ah, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes E8 F1 B3 FE FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes E9 13 03 00 00: jmp 0x4be2fd
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        or al, 40h
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 438h], 0ah
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x4be085
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 438h], 0ah
        ; Exact mapped bytes EB 78: jmp 0x4be085
        __asm _emit 0xeb
        __asm _emit 0x78
        mov dword ptr [ebp - 434h], 8
        mov dword ptr [ebp - 430h], 7
        ; Exact mapped bytes EB 0A: jmp 0x4be02d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 430h], 27h
        mov dword ptr [ebp - 438h], 10h
        mov ecx, dword ptr [ebp - 4]
        and ecx, 80h
        test ecx, ecx
        ; Exact mapped bytes 74 20: je 0x4be064
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 66 C7 85 C0 FB FF FF 30 00: mov word ptr [ebp - 0x440], 0x30
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x30
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 430h]
        add edx, 51h
        ; Exact mapped bytes 66 89 95 C2 FB FF FF: mov word ptr [ebp - 0x43e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xc2
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 2
        ; Exact mapped bytes EB 1F: jmp 0x4be085
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov dword ptr [ebp - 438h], 8
        mov eax, dword ptr [ebp - 4]
        and eax, 80h
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x4be085
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        or ch, 2
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        and edx, 8000h
        test edx, edx
        ; Exact mapped bytes 74 1D: je 0x4be0af
        __asm _emit 0x74
        __asm _emit 0x1d
        lea eax, [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 F5 05 00 00: call 0x4be690
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 478h], eax
        mov dword ptr [ebp - 474h], edx
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x4be140
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        and ecx, 20h
        test ecx, ecx
        ; Exact mapped bytes 74 48: je 0x4be101
        __asm _emit 0x74
        __asm _emit 0x48
        mov edx, dword ptr [ebp - 4]
        and edx, 40h
        test edx, edx
        ; Exact mapped bytes 74 1E: je 0x4be0e1
        __asm _emit 0x74
        __asm _emit 0x1e
        lea eax, [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 A4 05 00 00: call 0x4be670
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        cdq
        mov dword ptr [ebp - 478h], eax
        mov dword ptr [ebp - 474h], edx
        ; Exact mapped bytes EB 1E: jmp 0x4be0ff
        __asm _emit 0xeb
        __asm _emit 0x1e
        lea ecx, [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 86 05 00 00: call 0x4be670
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        and eax, 0ffffh
        cdq
        mov dword ptr [ebp - 478h], eax
        mov dword ptr [ebp - 474h], edx
        ; Exact mapped bytes EB 3F: jmp 0x4be140
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 4]
        and edx, 40h
        test edx, edx
        ; Exact mapped bytes 74 1B: je 0x4be126
        __asm _emit 0x74
        __asm _emit 0x1b
        lea eax, [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 5C 05 00 00: call 0x4be670
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cdq
        mov dword ptr [ebp - 478h], eax
        mov dword ptr [ebp - 474h], edx
        ; Exact mapped bytes EB 1A: jmp 0x4be140
        __asm _emit 0xeb
        __asm _emit 0x1a
        lea ecx, [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 41 05 00 00: call 0x4be670
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        xor edx, edx
        mov dword ptr [ebp - 478h], eax
        mov dword ptr [ebp - 474h], edx
        mov eax, dword ptr [ebp - 4]
        and eax, 40h
        test eax, eax
        ; Exact mapped bytes 74 3E: je 0x4be188
        __asm _emit 0x74
        __asm _emit 0x3e
        cmp dword ptr [ebp - 474h], 0
        ; Exact mapped bytes 7F 35: jg 0x4be188
        __asm _emit 0x7f
        __asm _emit 0x35
        ; Exact mapped bytes 7C 09: jl 0x4be15e
        __asm _emit 0x7c
        __asm _emit 0x09
        cmp dword ptr [ebp - 478h], 0
        ; Exact mapped bytes 73 2A: jae 0x4be188
        __asm _emit 0x73
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 478h]
        neg ecx
        mov edx, dword ptr [ebp - 474h]
        adc edx, 0
        neg edx
        mov dword ptr [ebp - 46ch], ecx
        mov dword ptr [ebp - 468h], edx
        mov eax, dword ptr [ebp - 4]
        or ah, 1
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 18: jmp 0x4be1a0
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 478h]
        mov dword ptr [ebp - 46ch], ecx
        mov edx, dword ptr [ebp - 474h]
        mov dword ptr [ebp - 468h], edx
        mov eax, dword ptr [ebp - 4]
        and eax, 8000h
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x4be1c7
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 46ch]
        mov edx, dword ptr [ebp - 468h]
        and edx, 0
        mov dword ptr [ebp - 46ch], ecx
        mov dword ptr [ebp - 468h], edx
        cmp dword ptr [ebp - 434h], 0
        ; Exact mapped bytes 7D 0C: jge 0x4be1dc
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 434h], 1
        ; Exact mapped bytes EB 08: jmp 0x4be1e4
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        and al, 0f7h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 46ch]
        or ecx, dword ptr [ebp - 468h]
        test ecx, ecx
        ; Exact mapped bytes 75 07: jne 0x4be1fb
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        lea edx, [ebp - 229h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 434h]
        mov ecx, dword ptr [ebp - 434h]
        sub ecx, 1
        mov dword ptr [ebp - 434h], ecx
        test eax, eax
        ; Exact mapped bytes 7F 14: jg 0x4be231
        __asm _emit 0x7f
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 46ch]
        or edx, dword ptr [ebp - 468h]
        test edx, edx
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x4be2b2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 438h]
        cdq
        push edx
        push eax
        mov eax, dword ptr [ebp - 468h]
        push eax
        mov ecx, dword ptr [ebp - 46ch]
        push ecx
        ; Exact mapped bytes E8 13 E2 FE FF: call 0x4ac460
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, 30h
        mov dword ptr [ebp - 470h], eax
        mov eax, dword ptr [ebp - 438h]
        cdq
        push edx
        push eax
        mov edx, dword ptr [ebp - 468h]
        push edx
        mov eax, dword ptr [ebp - 46ch]
        push eax
        ; Exact mapped bytes E8 6E E2 FE FF: call 0x4ac4e0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 46ch], eax
        mov dword ptr [ebp - 468h], edx
        cmp dword ptr [ebp - 470h], 39h
        ; Exact mapped bytes 7E 12: jle 0x4be299
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 470h]
        add ecx, dword ptr [ebp - 430h]
        mov dword ptr [ebp - 470h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov al, byte ptr [ebp - 470h]
        mov byte ptr [edx], al
        mov ecx, dword ptr [ebp - 20h]
        sub ecx, 1
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x4be204
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [ebp - 229h]
        sub edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 4]
        and ecx, 200h
        test ecx, ecx
        ; Exact mapped bytes 74 29: je 0x4be2fd
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 30h
        ; Exact mapped bytes 75 06: jne 0x4be2e5
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 18: jne 0x4be2fd
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 20h]
        sub ecx, 1
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov byte ptr [edx], 30h
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 43ch], 0
        ; Exact mapped bytes 0F 85 BE 01 00 00: jne 0x4be4c8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        and ecx, 40h
        test ecx, ecx
        ; Exact mapped bytes 74 55: je 0x4be369
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        and edx, 100h
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x4be333
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 66 C7 85 C0 FB FF FF 2D 00: mov word ptr [ebp - 0x440], 0x2d
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x2d
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 36: jmp 0x4be369
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 4]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x4be34f
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 66 C7 85 C0 FB FF FF 2B 00: mov word ptr [ebp - 0x440], 0x2b
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x2b
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 1A: jmp 0x4be369
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        and ecx, 2
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x4be369
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 66 C7 85 C0 FB FF FF 20 00: mov word ptr [ebp - 0x440], 0x20
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x20
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 1
        mov edx, dword ptr [ebp - 444h]
        sub edx, dword ptr [ebp - 24h]
        sub edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 47ch], edx
        mov eax, dword ptr [ebp - 4]
        and eax, 0ch
        test eax, eax
        ; Exact mapped bytes 75 1C: jne 0x4be3a1
        __asm _emit 0x75
        __asm _emit 0x1c
        lea ecx, [ebp - 42ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 47ch]
        push eax
        push 20h
        ; Exact mapped bytes E8 42 02 00 00: call 0x4be5e0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        lea ecx, [ebp - 42ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        lea ecx, [ebp - 440h]
        push ecx
        ; Exact mapped bytes E8 64 02 00 00: call 0x4be620
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov edx, dword ptr [ebp - 4]
        and edx, 8
        test edx, edx
        ; Exact mapped bytes 74 26: je 0x4be3ef
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 4]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 75 1C: jne 0x4be3ef
        __asm _emit 0x75
        __asm _emit 0x1c
        lea ecx, [ebp - 42ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 47ch]
        push eax
        push 30h
        ; Exact mapped bytes E8 F4 01 00 00: call 0x4be5e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 85 8E 00 00 00: jne 0x4be487
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 8E 84 00 00 00: jle 0x4be487
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 480h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 484h], edx
        mov eax, dword ptr [ebp - 484h]
        mov ecx, dword ptr [ebp - 484h]
        sub ecx, 1
        mov dword ptr [ebp - 484h], ecx
        test eax, eax
        ; Exact mapped bytes 7E 57: jle 0x4be485
        __asm _emit 0x7e
        __asm _emit 0x57
        ; Exact mapped bytes 8B 15 88 18 5D 00: mov edx, dword ptr [0x5d1888]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        mov eax, dword ptr [ebp - 480h]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 5B 62 00 00: call 0x4c46a0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 488h], eax
        cmp dword ptr [ebp - 488h], 0
        ; Exact mapped bytes 7F 02: jg 0x4be459
        __asm _emit 0x7f
        __asm _emit 0x02
        ; Exact mapped bytes EB 2C: jmp 0x4be485
        __asm _emit 0xeb
        __asm _emit 0x2c
        lea edx, [ebp - 42ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 66 8B 4D EC: mov cx, word ptr [ebp - 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        push ecx
        ; Exact mapped bytes E8 32 01 00 00: call 0x4be5a0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 480h]
        add edx, dword ptr [ebp - 488h]
        mov dword ptr [ebp - 480h], edx
        ; Exact mapped bytes EB 90: jmp 0x4be415
        __asm _emit 0xeb
        __asm _emit 0x90
        ; Exact mapped bytes EB 1B: jmp 0x4be4a2
        __asm _emit 0xeb
        __asm _emit 0x1b
        lea eax, [ebp - 42ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 81 01 00 00: call 0x4be620
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 4]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 1C: je 0x4be4c8
        __asm _emit 0x74
        __asm _emit 0x1c
        lea edx, [ebp - 42ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 47ch]
        push ecx
        push 20h
        ; Exact mapped bytes E8 1B 01 00 00: call 0x4be5e0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes E9 24 F4 FF FF: jmp 0x4bd8f1
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 42ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
