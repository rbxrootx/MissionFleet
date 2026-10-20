// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588A5810 .. +0x615 bytes.
extern "C" __declspec(naked) void FUN_588a5810() {
    __asm {
        push ecx
        push ebx
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 0e1ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 100h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        xor ebx, ebx
        mov edi, 1
        ; Exact mapped bytes 66 09 7E 24: or word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x7e
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 4E 24 06: or word ptr [esi + 0x24], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x06
        mov eax, 40000000h
        mov dword ptr [esi + 84h], eax
        mov dword ptr [esi + 88h], eax
        mov eax, dword ptr [esi + 17ch]
        mov dword ptr [esi + 0ach], ebx
        mov dword ptr [esi + 0a0h], ebx
        mov dword ptr [esi + 0a4h], ebx
        mov dword ptr [esi + 0a8h], ebx
        mov dword ptr [eax + 50h], ebx
        mov dword ptr [eax + 54h], ebx
        mov eax, dword ptr [esi + 17ch]
        mov dword ptr [eax + 68h], ebx
        mov ecx, dword ptr [esi + 17ch]
        ; Exact mapped bytes E8 69 5C F7 FF: call 0x5881b4f0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x5c
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 17ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 114h]
        push ebx
        push 400h
        ; Exact mapped bytes E8 EB D9 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 114h]
        mov dword ptr [eax + 50h], 36ah
        mov dword ptr [eax + 54h], ebx
        mov ecx, dword ptr [esi + 114h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, dword ptr [esi + 11ch]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, dword ptr [esi + 11ch]
        mov dword ptr [edx + 50h], ebx
        mov eax, dword ptr [esi + 120h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 120h]
        ; Exact mapped bytes E8 B1 8F F2 FF: call 0x587ce8a0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x8f
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [esi + 188h]
        mov dword ptr [edx + 50h], ebx
        mov eax, dword ptr [esi + 18ch]
        mov dword ptr [eax + 50h], ebx
        mov ecx, dword ptr [esi + 190h]
        push ebx
        mov dword ptr [ecx + 50h], ebx
        mov ecx, dword ptr [esi + 124h]
        push ebx
        ; Exact mapped bytes E8 79 D9 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 124h]
        mov edx, dword ptr [eax + 8]
        mov ecx, dword ptr [esi + 128h]
        add eax, 4
        mov eax, dword ptr [eax]
        push edx
        push eax
        ; Exact mapped bytes E8 5E D9 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 124h]
        mov edx, dword ptr [eax + 4]
        mov ecx, dword ptr [esi + 158h]
        mov eax, dword ptr [eax + 8]
        push 0ffffff38h
        mov dword ptr [ecx + 50h], edx
        mov dword ptr [ecx + 54h], eax
        mov ecx, dword ptr [esi + 158h]
        push ebx
        ; Exact mapped bytes E8 35 D9 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 158h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 1b4h]
        push ebx
        ; Exact mapped bytes E8 EC 19 06 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x19
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1b8h]
        push ebx
        ; Exact mapped bytes E8 E0 19 06 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x19
        __asm _emit 0x06
        __asm _emit 0x00
        movzx eax, word ptr [esi + 9ch]
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 74 3E: je 0x588a59cb
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 66 83 F8 0A: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 74 38: je 0x588a59cb
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 74 32: je 0x588a59cb
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 66 83 F8 0E: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 74 2C: je 0x588a59cb
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 66 83 F8 0F: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0f
        ; Exact mapped bytes 74 26: je 0x588a59cb
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [esi + 1b0h]
        push ebx
        ; Exact mapped bytes E8 3F BC E8 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xbc
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 1b4h]
        push ebx
        ; Exact mapped bytes E8 33 BC E8 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xbc
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 1b8h]
        push ebx
        ; Exact mapped bytes E8 27 BC E8 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xbc
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes EB 1E: jmp 0x588a59e9
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov eax, dword ptr [esi + 1b0h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1b4h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1b8h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 120h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 194h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 198h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 19ch]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 184h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, dword ptr [esi + 184h]
        mov dword ptr [edx + 50h], 5
        mov eax, dword ptr [esi + 1a0h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1a4h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 134h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 138h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 13ch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 140h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 144h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 148h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 14ch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 150h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 154h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 15 A8 45 A2 58: mov edx, dword ptr [0x58a245a8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx eax, word ptr [edx + 204h]
        push ebp
        ; Exact mapped bytes 66 83 F8 08: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 0F 84 AA 00 00 00: je 0x588a5b61
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 09: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x09
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x588a5b61
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebp, ebp
        cmp dword ptr [esi + 98h], ebx
        ; Exact mapped bytes 7E 4B: jle 0x588a5b16
        __asm _emit 0x7e
        __asm _emit 0x4b
        lea edi, [esi + 0d4h]
        mov eax, dword ptr [edi - 20h]
        mov dword ptr [eax + 50h], 1
        mov ecx, dword ptr [edi]
        push 100h
        ; Exact mapped bytes E8 F9 D1 05 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xd1
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [edi + 88h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi + 10ch]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        inc ebp
        add edi, 4
        cmp ebp, dword ptr [esi + 98h]
        ; Exact mapped bytes 7C C4: jl 0x588a5ad1
        __asm _emit 0x7c
        __asm _emit 0xc4
        cmp ebp, 8
        ; Exact mapped bytes 0F 8D 8F 00 00 00: jge 0x588a5ba5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 8
        sub eax, ebp
        lea edi, [esi + ebp*4 + 0d4h]
        mov dword ptr [esp + 10h], eax
        mov edx, dword ptr [edi - 20h]
        mov dword ptr [edx + 50h], ebx
        mov ecx, dword ptr [edi]
        push 32h
        ; Exact mapped bytes E8 A9 D1 05 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xd1
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [edi + 88h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi + 10ch]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        add edi, 4
        sub dword ptr [esp + 10h], 1
        ; Exact mapped bytes 75 C9: jne 0x588a5b28
        __asm _emit 0x75
        __asm _emit 0xc9
        ; Exact mapped bytes EB 44: jmp 0x588a5ba5
        __asm _emit 0xeb
        __asm _emit 0x44
        lea edi, [esi + 0d4h]
        mov ebp, 8
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, dword ptr [edi - 20h]
        mov dword ptr [eax + 50h], ebx
        mov ecx, dword ptr [edi]
        push 32h
        ; Exact mapped bytes E8 61 D1 05 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xd1
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [edi + 88h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi + 10ch]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 CB: jne 0x588a5b70
        __asm _emit 0x75
        __asm _emit 0xcb
        ; Exact mapped bytes 66 83 BE 9C 00 00 00 02: cmp word ptr [esi + 0x9c], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 FE 00 00 00: jne 0x588a5cb1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A8 46 A2 58: mov eax, dword ptr [0x58a246a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 6bh
        ; Exact mapped bytes 7E 16: jle 0x588a5bd7
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x588a5bd7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 1ach]
        ; Exact mapped bytes EB 02: jmp 0x588a5bd9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 124h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebx
        ; Exact mapped bytes 74 28: je 0x588a5c0e
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
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
        mov dword ptr [esp + 10h], ebx
        mov ebp, 10ah
        lea edi, [esi + 0f4h]
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, dword ptr [edi - 20h]
        push ebp
        ; Exact mapped bytes E8 B7 D6 05 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xd6
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi - 20h]
        push 20h
        ; Exact mapped bytes E8 2D D7 05 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xd7
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 2eh
        ; Exact mapped bytes 7E 15: jle 0x588a5c56
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp dword ptr [eax + 190h], ebx
        ; Exact mapped bytes 74 0D: je 0x588a5c56
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0b80h
        ; Exact mapped bytes EB 02: jmp 0x588a5c58
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi - 20h]
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [ecx + 0f8h], eax
        mov eax, dword ptr [edi]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        cmp edx, dword ptr [esi + 98h]
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes 7C 0A: jl 0x588a5c80
        __asm _emit 0x7c
        __asm _emit 0x0a
        push 32h
        ; Exact mapped bytes E8 63 D0 05 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xd0
        __asm _emit 0x05
        __asm _emit 0x00
        push ebx
        ; Exact mapped bytes EB 0F: jmp 0x588a5c8f
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 100h
        ; Exact mapped bytes E8 56 D0 05 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xd0
        __asm _emit 0x05
        __asm _emit 0x00
        push 101h
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 8A D0 05 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xd0
        __asm _emit 0x05
        __asm _emit 0x00
        inc dword ptr [esp + 10h]
        add ebp, 32h
        add edi, 4
        cmp ebp, 29ah
        ; Exact mapped bytes 0F 8C 74 FF FF FF: jl 0x588a5c20
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 C1 00 00 00: jmp 0x588a5d72
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 1C 47 A2 58: mov eax, dword ptr [0x58a2471c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 191h
        ; Exact mapped bytes 7E 16: jle 0x588a5cd8
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x588a5cd8
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 644h]
        ; Exact mapped bytes EB 02: jmp 0x588a5cda
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 124h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebx
        ; Exact mapped bytes 74 28: je 0x588a5d0f
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
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
        mov ebp, 108h
        lea edi, [esi + 0d4h]
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push ebp
        ; Exact mapped bytes E8 B8 D5 05 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xd5
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push 19h
        ; Exact mapped bytes E8 2F D6 05 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xd6
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes A1 94 46 A2 58: mov eax, dword ptr [0x58a24694]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], ebx
        ; Exact mapped bytes 7E 10: jle 0x588a5d4e
        __asm _emit 0x7e
        __asm _emit 0x10
        cmp dword ptr [eax + 190h], ebx
        ; Exact mapped bytes 74 08: je 0x588a5d4e
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 190h]
        ; Exact mapped bytes EB 02: jmp 0x588a5d50
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi]
        mov dword ptr [ecx + 0f8h], eax
        mov eax, dword ptr [edi + 20h]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        add ebp, 50h
        add edi, 4
        cmp ebp, 388h
        ; Exact mapped bytes 7C AE: jl 0x588a5d20
        __asm _emit 0x7c
        __asm _emit 0xae
        ; Exact mapped bytes 66 83 BE 9C 00 00 00 10: cmp word ptr [esi + 0x9c], 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        mov dword ptr [esi + 200h], ebx
        pop ebp
        ; Exact mapped bytes 75 3E: jne 0x588a5dc1
        __asm _emit 0x75
        __asm _emit 0x3e
        ; Exact mapped bytes A1 64 47 A2 58: mov eax, dword ptr [0x58a24764]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 13h
        ; Exact mapped bytes 7E 13: jle 0x588a5da4
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [eax + 18ch], ebx
        ; Exact mapped bytes 74 0B: je 0x588a5da4
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 4ch]
        ; Exact mapped bytes EB 02: jmp 0x588a5da6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esi, dword ptr [esi + 124h]
        mov dword ptr [esi + 50h], eax
        cmp eax, ebx
        ; Exact mapped bytes 74 6D: je 0x588a5e20
        __asm _emit 0x74
        __asm _emit 0x6d
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [eax + 14h]
        mov dword ptr [esi + 10h], edx
        ; Exact mapped bytes EB 42: jmp 0x588a5e03
        __asm _emit 0xeb
        __asm _emit 0x42
        ; Exact mapped bytes A1 1C 47 A2 58: mov eax, dword ptr [0x58a2471c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 191h
        ; Exact mapped bytes 7E 16: jle 0x588a5de8
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x588a5de8
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 644h]
        ; Exact mapped bytes EB 02: jmp 0x588a5dea
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esi, dword ptr [esi + 124h]
        mov dword ptr [esi + 50h], eax
        cmp eax, ebx
        ; Exact mapped bytes 74 29: je 0x588a5e20
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [esi + 0ch], edx
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [esi + 10h], ecx
        mov edx, dword ptr [eax + 18h]
        add eax, 18h
        lea ecx, [esi + 14h]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret
    }
}
