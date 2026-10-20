// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58496650 .. +0x13CD bytes.
extern "C" __declspec(naked) void FUN_58496650_58496650() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887da1ah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 250h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push ebx
        push esi
        push edi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 124h], ecx
        mov dword ptr [ebp - 140h], 2710h
        mov dword ptr [ebp - 1b0h], 64h
        mov dword ptr [ebp - 134h], 0
        mov eax, dword ptr [ebp - 124h]
        mov eax, dword ptr [eax + 338h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 124h]
        mov ecx, dword ptr [edx + 338h]
        sub ecx, eax
        mov dword ptr [ebp - 150h], ecx
        mov edx, dword ptr [ebp - 124h]
        cmp dword ptr [edx + 478h], 0
        ; Exact mapped bytes 0F 85 0C 02 00 00: jne 0x584968e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 124h]
        cmp dword ptr [eax + 4d4h], 0
        ; Exact mapped bytes 0F 84 0C 01 00 00: je 0x584967fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 124h]
        mov ecx, dword ptr [ecx + 4d4h]
        ; Exact mapped bytes E8 4F AF 03 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xaf
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 F3 00 00 00: je 0x584967fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 4d4h]
        mov dword ptr [ebp - 190h], eax
        push 1
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 E8 90 00 00: call 0x5849f810
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C 02 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 124h]
        cmp dword ptr [ecx + 4d4h], eax
        ; Exact mapped bytes 75 15: jne 0x58496757
        __asm _emit 0x75
        __asm _emit 0x15
        push 0
        push 83h
        push 23h
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A B3 2D 00: call 0x58771ac0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xb3
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 124h]
        cmp dword ptr [edx + 318h], 2
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x584967f7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 4d4h]
        ; Exact mapped bytes E8 85 E2 FE FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp - 124h]
        mov dword ptr [eax + 49ch], ecx
        mov dword ptr [eax + 4a0h], edx
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [ecx + 49ch]
        sub eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 154h], eax
        mov ecx, dword ptr [ebp - 124h]
        mov eax, dword ptr [ecx + 4ach]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        mov edx, dword ptr [ebp - 124h]
        mov ecx, dword ptr [edx + 4a0h]
        sub ecx, eax
        mov dword ptr [ebp - 158h], ecx
        mov edx, dword ptr [ebp - 154h]
        imul edx, dword ptr [ebp - 154h]
        mov eax, dword ptr [ebp - 158h]
        imul eax, dword ptr [ebp - 158h]
        add edx, eax
        mov dword ptr [ebp - 140h], edx
        ; Exact mapped bytes E9 E8 00 00 00: jmp 0x584968e4
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [ecx + 4d4h], 0
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [edx + 4d8h], 0ffffffffh
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx + 338h]
        mov dword ptr [eax + 320h], edx
        mov eax, dword ptr [ebp - 124h]
        cmp dword ptr [eax + 318h], 0
        ; Exact mapped bytes 75 15: jne 0x58496858
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [ecx + 318h], 3
        ; Exact mapped bytes E9 8C 00 00 00: jmp 0x584968e4
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 124h]
        cmp dword ptr [edx + 318h], 1
        ; Exact mapped bytes 75 7D: jne 0x584968e4
        __asm _emit 0x75
        __asm _emit 0x7d
        mov eax, dword ptr [ebp - 124h]
        mov dword ptr [eax + 318h], 2
        mov dword ptr [ebp - 258h], 190h
        mov dword ptr [ebp - 254h], 0
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx + 348h]
        push edx
        lea eax, [ebp - 230h]
        push eax
        lea ecx, [ebp - 258h]
        push ecx
        ; Exact mapped bytes E8 A5 D2 04 00: call 0x584e3b50
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xd2
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 4]
        add eax, dword ptr [ebp - 230h]
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [ecx + 49ch], eax
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 8]
        sub eax, dword ptr [ebp - 22ch]
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [ecx + 4a0h], eax
        ; Exact mapped bytes E9 B2 00 00 00: jmp 0x5849699b
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 124h]
        cmp dword ptr [edx + 48ch], 0
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x5849699b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 48ch]
        ; Exact mapped bytes E8 B3 00 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [ecx + 49ch], eax
        mov edx, dword ptr [ebp - 124h]
        mov ecx, dword ptr [edx + 48ch]
        ; Exact mapped bytes E8 86 57 FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [ecx + 4a0h], eax
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [edx + 49ch]
        sub ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 15ch], ecx
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 4ach]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        mov edx, dword ptr [ebp - 124h]
        mov ecx, dword ptr [edx + 4a0h]
        sub ecx, eax
        mov dword ptr [ebp - 160h], ecx
        mov edx, dword ptr [ebp - 15ch]
        imul edx, dword ptr [ebp - 15ch]
        mov eax, dword ptr [ebp - 160h]
        imul eax, dword ptr [ebp - 160h]
        add edx, eax
        mov dword ptr [ebp - 140h], edx
        mov ecx, dword ptr [ebp - 124h]
        cmp dword ptr [ecx + 318h], 0
        ; Exact mapped bytes 0F 85 2F 03 00 00: jne 0x58496cdd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 33ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, 4
        imul ecx, edx, 5ah
        imul eax, dword ptr [ecx + 58950170h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 164h], eax
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [edx + 344h], 0
        mov eax, dword ptr [ebp - 124h]
        cmp dword ptr [eax + 4d4h], 0
        ; Exact mapped bytes 74 7D: je 0x58496a7b
        __asm _emit 0x74
        __asm _emit 0x7d
        mov ecx, dword ptr [ebp - 124h]
        mov ecx, dword ptr [ecx + 4d4h]
        ; Exact mapped bytes E8 71 5A FF FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x5a
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 3
        ; Exact mapped bytes 7C 64: jl 0x58496a7b
        __asm _emit 0x7c
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 124h]
        mov dword ptr [eax + 4c4h], 0
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [ecx + 318h], 0
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 4d4h]
        mov dword ptr [ebp - 194h], eax
        push 0
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 BA 8D 00 00: call 0x5849f810
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [ecx + 4d4h], 0
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [edx + 4d8h], 0ffffffffh
        ; Exact mapped bytes E9 86 0F 00 00: jmp 0x58497a01
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 164h]
        imul eax, dword ptr [ebp - 164h]
        cmp dword ptr [ebp - 140h], eax
        ; Exact mapped bytes 0F 8D 02 02 00 00: jge 0x58496c96
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 124h]
        cmp dword ptr [ecx + 4d4h], 0
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x58496b2e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 4d4h]
        mov dword ptr [ebp - 198h], eax
        push 0
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 6A BF 2C 00: call 0x58762a30
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xbf
        __asm _emit 0x2c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 64: je 0x58496b2e
        __asm _emit 0x74
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [ecx + 4c4h], 0
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [edx + 318h], 0
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 4d4h]
        mov dword ptr [ebp - 19ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 07 8D 00 00: call 0x5849f810
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [edx + 4d4h], 0
        mov eax, dword ptr [ebp - 124h]
        mov dword ptr [eax + 4d8h], 0ffffffffh
        ; Exact mapped bytes E9 D3 0E 00 00: jmp 0x58497a01
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 124h]
        mov eax, dword ptr [ecx + 338h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [edx + 320h], eax
        mov eax, dword ptr [ebp - 124h]
        mov dword ptr [eax + 318h], 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 77 FE FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 50 DE FE FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xde
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 63 FE FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xfe
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8C EE FF FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        mov eax, 7d000h
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 124h]
        sub esi, dword ptr [edx + 4]
        mov dword ptr [ebp - 18ch], esi
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 36 FE FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xfe
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7F EB FF FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 22 FE FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4B EE FF FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        mov eax, 5dc00h
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 124h]
        sub esi, dword ptr [edx + 8]
        mov dword ptr [ebp - 188h], esi
        mov eax, dword ptr [ebp - 18ch]
        imul eax, dword ptr [ebp - 18ch]
        mov ecx, dword ptr [ebp - 188h]
        imul ecx, dword ptr [ebp - 188h]
        add eax, ecx
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 13 A4 3B 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xa4
        __asm _emit 0x3b
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 7B A6 39 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xa6
        __asm _emit 0x39
        __asm _emit 0x00
        mov dword ptr [ebp - 1a0h], eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AA EC FF FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        sar eax, 1
        cmp dword ptr [ebp - 1a0h], eax
        ; Exact mapped bytes 7D 64: jge 0x58496c94
        __asm _emit 0x7d
        __asm _emit 0x64
        push 4
        ; Exact mapped bytes 8B 0D 14 07 96 58: mov ecx, dword ptr [0x58960714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 DE FE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xde
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1a8h], eax
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1a4h], edx
        mov eax, dword ptr [ebp - 1a4h]
        push eax
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 5F 51 32 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x51
        __asm _emit 0x32
        __asm _emit 0x00
        push 4
        ; Exact mapped bytes 8B 0D 14 07 96 58: mov ecx, dword ptr [0x58960714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 12 DE FE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xde
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 168h], eax
        mov ecx, dword ptr [ebp - 168h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 1ach], eax
        push 0
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes FF 95 54 FE FF FF: call dword ptr [ebp - 0x1ac]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 42: jmp 0x58496cd8
        __asm _emit 0xeb
        __asm _emit 0x42
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [ecx + 33ch]
        cmp eax, dword ptr [edx + 338h]
        ; Exact mapped bytes 7D 28: jge 0x58496cd8
        __asm _emit 0x7d
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [ecx + 344h], 64h
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 338h]
        mov dword ptr [edx + 320h], ecx
        ; Exact mapped bytes E9 9A 0C 00 00: jmp 0x58497977
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 124h]
        cmp dword ptr [edx + 318h], 1
        ; Exact mapped bytes 0F 85 48 0A 00 00: jne 0x58497738
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 124h]
        cmp dword ptr [eax + 344h], 0fffffd12h
        ; Exact mapped bytes 7E 2C: jle 0x58496d2e
        __asm _emit 0x7e
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [ecx + 320h]
        sub eax, dword ptr [edx + 33ch]
        imul eax, dword ptr [ebp - 1b0h]
        cdq
        idiv dword ptr [ebp - 150h]
        mov dword ptr [ebp - 134h], eax
        mov ecx, dword ptr [ebp - 124h]
        cmp dword ptr [ecx + 344h], 0fffffd12h
        ; Exact mapped bytes 7E 13: jle 0x58496d53
        __asm _emit 0x7e
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 124h]
        cmp dword ptr [edx + 478h], 0
        ; Exact mapped bytes 0F 84 E0 09 00 00: je 0x58497733
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 124h]
        cmp dword ptr [eax + 468h], 0
        ; Exact mapped bytes 0F 84 7C 08 00 00: je 0x584975e2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 34 2E 90 58 00: cmp dword ptr [0x58902e34], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x2e
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 86 01 00 00: je 0x58496ef9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 FC FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3B DC FE FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E EB FF FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        sar eax, 1
        imul edi, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3B FC FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 64 EC FF FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 4]
        sub eax, esi
        mov dword ptr [ebp - 224h], eax
        mov ecx, dword ptr [ebp - 124h]
        mov esi, dword ptr [ecx + 8]
        neg esi
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 04 FC FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4D E9 FF FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 EA FF FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        sar eax, 1
        imul ebx, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DD FB FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 06 EC FF FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        mov eax, ebx
        cdq
        idiv ecx
        add edi, eax
        add esi, edi
        mov dword ptr [ebp - 220h], esi
        mov edx, dword ptr [ebp - 124h]
        cmp dword ptr [edx + 524h], 0
        ; Exact mapped bytes 74 33: je 0x58496e5d
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 524h]
        mov dword ptr [ebp - 228h], ecx
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp - 220h]
        push eax
        mov ecx, dword ptr [ebp - 224h]
        push ecx
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 64 6D 0D 00: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x6d
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 EA FF FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 89 00 00 00: jne 0x58496ef9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 124h]
        cmp dword ptr [edx + 470h], 0
        ; Exact mapped bytes 74 7A: je 0x58496ef9
        __asm _emit 0x74
        __asm _emit 0x7a
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 36 FB FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 124h]
        cmp dword ptr [ecx + 74h], eax
        ; Exact mapped bytes 75 64: jne 0x58496ef9
        __asm _emit 0x75
        __asm _emit 0x64
        push 20h
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DE DB FE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xdb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 21ch], eax
        ; Exact mapped bytes 8B 15 94 20 96 58: mov edx, dword ptr [0x58962094]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1f8h], edx
        mov eax, dword ptr [ebp - 1f8h]
        push eax
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes E8 FA 4E 32 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x4e
        __asm _emit 0x32
        __asm _emit 0x00
        push 20h
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AD DB FE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xdb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        mov ecx, dword ptr [ebp - 16ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 1b4h], eax
        push 0
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes FF 95 4C FE FF FF: call dword ptr [ebp - 0x1b4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [ecx + 468h], 0
        mov edx, dword ptr [ebp - 124h]
        ; Exact mapped bytes 66 8B 82 D2 02 00 00: mov ax, word ptr [edx + 0x2d2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E8 01: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes 66 89 81 D2 02 00 00: mov word ptr [ecx + 0x2d2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 510h]
        mov dword ptr [ebp - 1b8h], eax
        mov ecx, dword ptr [ebp - 124h]
        movzx edx, word ptr [ecx + 2d2h]
        push edx
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 3E 42 32 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x42
        __asm _emit 0x32
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [eax + 338h]
        sub edx, dword ptr [ecx + 33ch]
        imul eax, edx, 32h
        cdq
        idiv dword ptr [ebp - 150h]
        mov dword ptr [ebp - 130h], eax
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [ebp - 130h]
        imul ecx, dword ptr [eax + 4c0h]
        mov eax, ecx
        cdq
        mov ecx, 64h
        idiv ecx
        add eax, dword ptr [ebp - 130h]
        mov dword ptr [ebp - 130h], eax
        cmp dword ptr [ebp - 130h], 64h
        ; Exact mapped bytes 7E 0C: jle 0x58496fb8
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov dword ptr [ebp - 170h], 64h
        ; Exact mapped bytes EB 0C: jmp 0x58496fc4
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 130h]
        mov dword ptr [ebp - 170h], edx
        mov eax, dword ptr [ebp - 170h]
        mov dword ptr [ebp - 130h], eax
        mov ecx, 64h
        sub ecx, dword ptr [ebp - 130h]
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 4d0h]
        xor edx, edx
        mov esi, 0ah
        div esi
        add ecx, eax
        mov dword ptr [ebp - 138h], ecx
        mov eax, dword ptr [ebp - 138h]
        add eax, 5
        mov dword ptr [ebp - 138h], eax
        mov eax, dword ptr [ebp - 138h]
        cdq
        sub eax, edx
        mov esi, eax
        sar esi, 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 53 FF FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 124h]
        add eax, dword ptr [ecx + 78h]
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 7D 4C FF FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov eax, 3e8h
        sub eax, dword ptr [edx*4 + 589558f8h]
        imul eax, dword ptr [ebp - 138h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        sub esi, eax
        mov dword ptr [ebp - 128h], esi
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [ebp - 128h]
        add eax, dword ptr [edx + 348h]
        mov dword ptr [ebp - 128h], eax
        ; Exact mapped bytes 79 14: jns 0x5849708d
        __asm _emit 0x79
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 128h]
        add ecx, 0e10h
        mov dword ptr [ebp - 174h], ecx
        ; Exact mapped bytes EB 14: jmp 0x584970a1
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 128h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 174h], edx
        mov edx, dword ptr [ebp - 174h]
        mov dword ptr [ebp - 128h], edx
        mov eax, dword ptr [ebp - 124h]
        mov eax, dword ptr [eax + 30ch]
        cdq
        mov ecx, 32h
        idiv ecx
        neg eax
        mov dword ptr [ebp - 144h], eax
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 344h]
        mov eax, dword ptr [eax*4 + 5894c930h]
        imul eax, dword ptr [ebp - 144h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 118h], eax
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 344h]
        mov eax, dword ptr [eax*4 + 58950170h]
        imul eax, dword ptr [ebp - 144h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 114h], eax
        mov edx, dword ptr [ebp - 128h]
        mov eax, dword ptr [edx*4 + 5894c930h]
        imul eax, dword ptr [ebp - 114h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 120h], eax
        mov edx, dword ptr [ebp - 128h]
        mov eax, dword ptr [edx*4 + 589490f0h]
        imul eax, dword ptr [ebp - 114h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 11ch], eax
        ; Exact mapped bytes 83 3D 6C 20 96 58 00: cmp dword ptr [0x5896206c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 63 01 00 00: je 0x584972cd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 344h]
        add eax, 0e10h
        mov dword ptr [ebp - 1bch], eax
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx + 33ch]
        mov dword ptr [ebp - 1c0h], edx
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 4ach]
        mov dword ptr [ebp - 1c4h], ecx
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 4a8h]
        mov dword ptr [ebp - 1c8h], eax
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 1cch], edx
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 1d0h], ecx
        mov edx, dword ptr [ebp - 124h]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 5D 52 FF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 76 D8 FE FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 1d4h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 92 E7 FF FF: call 0x58495990
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1d8h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 81 E4 FF FF: call 0x58495690
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1dch], eax
        mov eax, dword ptr [ebp - 144h]
        push eax
        mov ecx, dword ptr [ebp - 1bch]
        push ecx
        mov edx, dword ptr [ebp - 1c0h]
        push edx
        mov eax, dword ptr [ebp - 1c4h]
        push eax
        mov ecx, dword ptr [ebp - 1c8h]
        push ecx
        mov edx, dword ptr [ebp - 1cch]
        push edx
        mov eax, dword ptr [ebp - 1d0h]
        push eax
        mov ecx, dword ptr [ebp - 11ch]
        push ecx
        mov edx, dword ptr [ebp - 120h]
        push edx
        mov eax, dword ptr [ebp - 114h]
        push eax
        push 58895000h
        mov ecx, dword ptr [ebp - 1d4h]
        push ecx
        mov edx, dword ptr [ebp - 1d8h]
        push edx
        mov eax, dword ptr [ebp - 1dch]
        push eax
        push 58895008h
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 40h
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 1e0h], eax
        ; Exact mapped bytes A1 70 20 96 58: mov eax, dword ptr [0x58962070]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1e4h], eax
        push 0
        lea ecx, [ebp - 25ch]
        push ecx
        mov edx, dword ptr [ebp - 1e0h]
        push edx
        lea eax, [ebp - 110h]
        push eax
        mov ecx, dword ptr [ebp - 1e4h]
        push ecx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        push 26ch
        ; Exact mapped bytes E8 2D 9D 39 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x9d
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 178h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 178h], 0
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x58497393
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 33ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp - 124h]
        add eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 1e8h], eax
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 1ech], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF F6 FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1f0h], eax
        mov edx, dword ptr [ebp - 124h]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 0B 4E FF FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1f4h], eax
        push 40h
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 1e8h]
        push eax
        mov ecx, dword ptr [ebp - 1ech]
        push ecx
        mov edx, dword ptr [ebp - 1f0h]
        push edx
        lea eax, [ebp - 120h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 1f4h]
        push ecx
        push 1
        push 0
        push 0
        push 1
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 B5 1D 2B 00: call 0x58749140
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x1d
        __asm _emit 0x2b
        __asm _emit 0x00
        mov dword ptr [ebp - 17ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5849739d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 17ch], 0
        mov edx, dword ptr [ebp - 17ch]
        mov dword ptr [ebp - 218h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 218h]
        mov dword ptr [ebp - 13ch], eax
        push 3e8h
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 B4 EA FE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 124h]
        mov eax, dword ptr [ecx + 33ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        push eax
        push 0dh
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 12 79 2B 00: call 0x5874ed00
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x79
        __asm _emit 0x2b
        __asm _emit 0x00
        push 0
        push 0
        mov edx, dword ptr [ebp - 124h]
        add edx, 0bch
        push edx
        push 0
        push 0
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 74h]
        push ecx
        mov edx, dword ptr [ebp - 120h]
        add edx, dword ptr [ebp - 11ch]
        push edx
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 CB 71 2B 00: call 0x5874e5f0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x71
        __asm _emit 0x2b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BF E4 FF FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 34: jne 0x58497469
        __asm _emit 0x75
        __asm _emit 0x34
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F0 E4 FF FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 7
        ; Exact mapped bytes 75 24: jne 0x58497469
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 E3 FF FF: call 0x58495810
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1fch], eax
        mov eax, dword ptr [ebp - 13ch]
        push eax
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 58 BF FF FF: call 0x584933c0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 124h]
        cmp dword ptr [ecx + 478h], 0
        ; Exact mapped bytes 75 41: jne 0x584974b9
        __asm _emit 0x75
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 4d4h]
        mov dword ptr [ebp - 200h], eax
        push 0
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 79 83 00 00: call 0x5849f810
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [ecx + 4d4h], 0
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [edx + 4d8h], 0ffffffffh
        ; Exact mapped bytes EB 7A: jmp 0x58497533
        __asm _emit 0xeb
        __asm _emit 0x7a
        mov eax, dword ptr [ebp - 124h]
        mov dword ptr [eax + 478h], 0
        mov ecx, dword ptr [ebp - 124h]
        cmp dword ptr [ecx + 48ch], 0
        ; Exact mapped bytes 74 5B: je 0x58497533
        __asm _emit 0x74
        __asm _emit 0x5b
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 48ch]
        mov dword ptr [ebp - 148h], eax
        cmp dword ptr [ebp - 148h], 0
        ; Exact mapped bytes 74 26: je 0x58497519
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 148h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 204h], eax
        push 1
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes FF 95 FC FD FF FF: call dword ptr [ebp - 0x204]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 208h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58497523
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 208h], 0
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [ecx + 48ch], 0
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 7ch]
        push eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 36 13 00: call 0x585cac40
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x36
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 338h]
        mov dword ptr [ecx + 320h], eax
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [ecx + 318h], 2
        mov dword ptr [ebp - 238h], 190h
        mov dword ptr [ebp - 234h], 0
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 348h]
        push eax
        lea ecx, [ebp - 240h]
        push ecx
        lea edx, [ebp - 238h]
        push edx
        ; Exact mapped bytes E8 AC C5 04 00: call 0x584e3b50
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xc5
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [ebp - 240h]
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [edx + 49ch], ecx
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 8]
        sub ecx, dword ptr [ebp - 23ch]
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [edx + 4a0h], ecx
        ; Exact mapped bytes E9 51 01 00 00: jmp 0x58497733
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [eax + 33ch]
        cmp edx, dword ptr [ecx + 320h]
        ; Exact mapped bytes 0F 8F 33 01 00 00: jg 0x58497733
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 7ch]
        push ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2B 36 13 00: call 0x585cac40
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x36
        __asm _emit 0x13
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 338h]
        mov dword ptr [edx + 320h], ecx
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [edx + 318h], 2
        mov dword ptr [ebp - 248h], 190h
        mov dword ptr [ebp - 244h], 0
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 348h]
        push ecx
        lea edx, [ebp - 250h]
        push edx
        lea eax, [ebp - 248h]
        push eax
        ; Exact mapped bytes E8 DF C4 04 00: call 0x584e3b50
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xc4
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 250h]
        mov eax, dword ptr [ebp - 124h]
        mov dword ptr [eax + 49ch], edx
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx + 8]
        sub edx, dword ptr [ebp - 24ch]
        mov eax, dword ptr [ebp - 124h]
        mov dword ptr [eax + 4a0h], edx
        mov ecx, dword ptr [ebp - 124h]
        cmp dword ptr [ecx + 478h], 0
        ; Exact mapped bytes 74 7A: je 0x58497733
        __asm _emit 0x74
        __asm _emit 0x7a
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [edx + 478h], 0
        mov eax, dword ptr [ebp - 124h]
        cmp dword ptr [eax + 48ch], 0
        ; Exact mapped bytes 74 5B: je 0x58497733
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx + 48ch]
        mov dword ptr [ebp - 14ch], edx
        cmp dword ptr [ebp - 14ch], 0
        ; Exact mapped bytes 74 26: je 0x58497719
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 14ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 20ch], edx
        push 1
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes FF 95 F4 FD FF FF: call dword ptr [ebp - 0x20c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 210h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58497723
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 210h], 0
        mov eax, dword ptr [ebp - 124h]
        mov dword ptr [eax + 48ch], 0
        ; Exact mapped bytes E9 3F 02 00 00: jmp 0x58497977
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 124h]
        cmp dword ptr [ecx + 318h], 2
        ; Exact mapped bytes 0F 85 8E 01 00 00: jne 0x584978d9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 124h]
        imul eax, dword ptr [edx + 320h], 9
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 124h]
        cmp dword ptr [edx + 33ch], eax
        ; Exact mapped bytes 7D 5B: jge 0x584977c9
        __asm _emit 0x7d
        __asm _emit 0x5b
        mov eax, dword ptr [ebp - 124h]
        cmp dword ptr [eax + 344h], 190h
        ; Exact mapped bytes 7C 1C: jl 0x5849779c
        __asm _emit 0x7c
        __asm _emit 0x1c
        mov dword ptr [ebp - 134h], 0
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [ecx + 344h], 190h
        ; Exact mapped bytes EB 28: jmp 0x584977c4
        __asm _emit 0xeb
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [edx + 320h]
        sub ecx, dword ptr [eax + 33ch]
        imul eax, ecx, 50h
        cdq
        idiv dword ptr [ebp - 150h]
        mov dword ptr [ebp - 134h], eax
        ; Exact mapped bytes E9 BD 00 00 00: jmp 0x58497886
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 124h]
        imul eax, dword ptr [edx + 320h], 9
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 124h]
        cmp dword ptr [edx + 33ch], eax
        ; Exact mapped bytes 7E 56: jle 0x58497842
        __asm _emit 0x7e
        __asm _emit 0x56
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [eax + 33ch]
        cmp edx, dword ptr [ecx + 320h]
        ; Exact mapped bytes 7D 3C: jge 0x58497842
        __asm _emit 0x7d
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 344h]
        sub ecx, 0ah
        cmp ecx, 64h
        ; Exact mapped bytes 7F 1C: jg 0x58497836
        __asm _emit 0x7f
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [edx + 344h], 64h
        mov dword ptr [ebp - 134h], 0
        ; Exact mapped bytes EB 0A: jmp 0x58497840
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 134h], 0ffffffech
        ; Exact mapped bytes EB 44: jmp 0x58497886
        __asm _emit 0xeb
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [eax + 33ch]
        cmp edx, dword ptr [ecx + 320h]
        ; Exact mapped bytes 7C 2A: jl 0x58497886
        __asm _emit 0x7c
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 124h]
        mov dword ptr [eax + 318h], 3
        mov dword ptr [ebp - 134h], 0
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [ecx + 344h], 0
        mov edx, dword ptr [ebp - 124h]
        cmp dword ptr [edx + 4d4h], 0
        ; Exact mapped bytes 74 3F: je 0x584978d4
        __asm _emit 0x74
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 4d4h]
        mov dword ptr [ebp - 214h], ecx
        push 0
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 5C 7F 00 00: call 0x5849f810
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [edx + 4d4h], 0
        mov eax, dword ptr [ebp - 124h]
        mov dword ptr [eax + 4d8h], 0ffffffffh
        ; Exact mapped bytes E9 9E 00 00 00: jmp 0x58497977
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 124h]
        cmp dword ptr [ecx + 318h], 3
        ; Exact mapped bytes 0F 85 8B 00 00 00: jne 0x58497977
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 124h]
        cmp dword ptr [edx + 344h], 0
        ; Exact mapped bytes 7F 61: jg 0x5849795c
        __asm _emit 0x7f
        __asm _emit 0x61
        mov eax, dword ptr [ebp - 124h]
        mov dword ptr [eax + 344h], 0
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [ecx + 318h], 0
        mov edx, dword ptr [ebp - 124h]
        movzx eax, word ptr [edx + 2d2h]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x5849793e
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [ecx + 4c4h], 0
        ; Exact mapped bytes EB 1C: jmp 0x5849795a
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov byte ptr [ebp - 129h], 61h
        lea edx, [ebp - 129h]
        push edx
        push 5
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 E7 58 00 00: call 0x5849d240
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1B: jmp 0x58497977
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 344h]
        sub ecx, 64h
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [edx + 344h], ecx
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 344h]
        add ecx, dword ptr [ebp - 134h]
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [edx + 344h], ecx
        mov eax, dword ptr [ebp - 124h]
        cmp dword ptr [eax + 344h], 0fffffd12h
        ; Exact mapped bytes 7D 0C: jge 0x584979b3
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 184h], 0fffffd12h
        ; Exact mapped bytes EB 3C: jmp 0x584979ef
        __asm _emit 0xeb
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 124h]
        cmp dword ptr [ecx + 344h], 2eeh
        ; Exact mapped bytes 7E 0C: jle 0x584979d1
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov dword ptr [ebp - 180h], 2eeh
        ; Exact mapped bytes EB 12: jmp 0x584979e3
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + 344h]
        mov dword ptr [ebp - 180h], eax
        mov ecx, dword ptr [ebp - 180h]
        mov dword ptr [ebp - 184h], ecx
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [ebp - 184h]
        mov dword ptr [edx + 344h], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 37 96 39 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x96
        __asm _emit 0x39
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
