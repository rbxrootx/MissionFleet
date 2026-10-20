// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E2470 .. +0x18C bytes.
extern "C" __declspec(naked) void FUN_100e2470_100E2470() {
    __asm {
        ; Exact mapped bytes A1 40 57 1C 10: mov eax, dword ptr [0x101c5740]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        mov edi, 2
        cmp dword ptr [eax + 160h], edi
        ; Exact mapped bytes 7E 11: jle 0x100e2494
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x100e2494
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 80h
        ; Exact mapped bytes EB 02: jmp 0x100e2496
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        test eax, eax
        mov dword ptr [edx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100e24cc
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [edx + 0ch], ebx
        mov ebx, dword ptr [eax - 4]
        mov dword ptr [edx + 10h], ebx
        mov ebx, dword ptr [eax]
        add edx, 14h
        mov dword ptr [edx], ebx
        mov ebx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ebx
        mov ebx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ebx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        ; Exact mapped bytes A1 D0 58 1C 10: mov eax, dword ptr [0x101c58d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, 1
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes A1 CC 58 1C 10: mov eax, dword ptr [0x101c58cc]
        __asm _emit 0xa1
        __asm _emit 0xcc
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes A1 D4 58 1C 10: mov eax, dword ptr [0x101c58d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes A1 40 57 1C 10: mov eax, dword ptr [0x101c5740]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 4
        ; Exact mapped bytes 7E 11: jle 0x100e250d
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x100e250d
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 100h
        ; Exact mapped bytes EB 02: jmp 0x100e250f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes 8B 15 CC 58 1C 10: mov edx, dword ptr [0x101c58cc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        mov dword ptr [edx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100e2544
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [edx + 0ch], ebx
        mov ebx, dword ptr [eax - 4]
        mov dword ptr [edx + 10h], ebx
        mov ebx, dword ptr [eax]
        add edx, 14h
        mov dword ptr [edx], ebx
        mov ebx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ebx
        mov ebx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ebx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        ; Exact mapped bytes A1 40 57 1C 10: mov eax, dword ptr [0x101c5740]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 5
        ; Exact mapped bytes 7E 11: jle 0x100e2563
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x100e2563
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 140h
        ; Exact mapped bytes EB 02: jmp 0x100e2565
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes 8B 15 D4 58 1C 10: mov edx, dword ptr [0x101c58d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        mov dword ptr [edx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100e259a
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [edx + 0ch], ebx
        mov ebx, dword ptr [eax - 4]
        mov dword ptr [edx + 10h], ebx
        mov ebx, dword ptr [eax]
        add edx, 14h
        mov dword ptr [edx], ebx
        mov ebx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ebx
        mov ebx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ebx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        mov eax, dword ptr [esp + 0ch]
        pop ebx
        cmp eax, 40000h
        ; Exact mapped bytes 77 1E: ja 0x100e25c4
        __asm _emit 0x77
        __asm _emit 0x1e
        ; Exact mapped bytes 74 10: je 0x100e25b8
        __asm _emit 0x74
        __asm _emit 0x10
        cmp eax, 20000h
        ; Exact mapped bytes 74 1C: je 0x100e25cb
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp eax, 30000h
        ; Exact mapped bytes 75 2B: jne 0x100e25e1
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes EB 13: jmp 0x100e25cb
        __asm _emit 0xeb
        __asm _emit 0x13
        mov dword ptr [ecx + 60h], edi
        mov dword ptr [ecx + 64h], 3
        ; Exact mapped bytes EB 1D: jmp 0x100e25e1
        __asm _emit 0xeb
        __asm _emit 0x1d
        cmp eax, 50000h
        ; Exact mapped bytes 75 16: jne 0x100e25e1
        __asm _emit 0x75
        __asm _emit 0x16
        mov dword ptr [ecx + 60h], edi
        mov dword ptr [ecx + 64h], 3
        ; Exact mapped bytes A1 D0 58 1C 10: mov eax, dword ptr [0x101c58d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [eax + 54h], 0
        mov edx, dword ptr [ecx + 60h]
        mov eax, 12ch
        mov dword ptr [ecx + 50h], eax
        mov dword ptr [ecx + 54h], eax
        mov eax, dword ptr [ecx + 64h]
        mov dword ptr [ecx + 58h], edx
        mov dword ptr [ecx + 5ch], eax
        pop edi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
