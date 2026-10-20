// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585FB200 .. +0x3FE bytes.
extern "C" __declspec(naked) void FUN_585fb200_585FB200() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 56 03 00 00: jne 0x585fb569
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x56
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 42ch]
        ; Exact mapped bytes 75 17: jne 0x585fb238
        __asm _emit 0x75
        __asm _emit 0x17
        push 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8E 2F 00 00: call 0x585fe1c0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 87 02 00 00: jmp 0x585fb4bf
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 430h]
        ; Exact mapped bytes 75 17: jne 0x585fb25d
        __asm _emit 0x75
        __asm _emit 0x17
        push -1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 69 2F 00 00: call 0x585fe1c0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 62 02 00 00: jmp 0x585fb4bf
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 3ach]
        ; Exact mapped bytes 0F 85 82 00 00 00: jne 0x585fb2f1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 68h], -1
        ; Exact mapped bytes 74 74: je 0x585fb2ec
        __asm _emit 0x74
        __asm _emit 0x74
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585fb28a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 7D 1D: jge 0x585fb2ad
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 374h]
        mov dword ptr [ebp - 18h], edx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 96 45 EA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x45
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x585fb281
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 68h], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ach]
        mov dword ptr [ebp - 1ch], edx
        push 5
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 73 45 EA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x45
        __asm _emit 0xea
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3a8h]
        mov dword ptr [ebp - 20h], ecx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 5D 45 EA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x45
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 15 4F 00 00: call 0x58600200
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 CE 01 00 00: jmp 0x585fb4bf
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 3a8h]
        ; Exact mapped bytes 0F 85 D4 00 00 00: jne 0x585fb3d7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 68h], -1
        ; Exact mapped bytes 0F 84 C2 00 00 00: je 0x585fb3d2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x585fb322
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes 7D 1D: jge 0x585fb34a
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 374h]
        mov dword ptr [ebp - 24h], ecx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 F9 44 EA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x44
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CF: jmp 0x585fb319
        __asm _emit 0xeb
        __asm _emit 0xcf
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 374h]
        mov dword ptr [ebp - 28h], edx
        push 5
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 D9 44 EA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0xea
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 68h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3a8h]
        mov dword ptr [ebp - 2ch], edx
        push 5
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 B9 44 EA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x44
        __asm _emit 0xea
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ach]
        mov dword ptr [ebp - 30h], ecx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 A3 44 EA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x44
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C7 07 00 00: call 0x585fbb70
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x585fb3c2
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D1 3D 00 00: call 0x585ff190
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 10: jmp 0x585fb3d2
        __asm _emit 0xeb
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1F 42 00 00: call 0x585ff5f0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 E8 00 00 00: jmp 0x585fb4bf
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 3b0h]
        ; Exact mapped bytes 75 56: jne 0x585fb43b
        __asm _emit 0x75
        __asm _emit 0x56
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 68h], -1
        ; Exact mapped bytes 74 48: je 0x585fb436
        __asm _emit 0x74
        __asm _emit 0x48
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x585fb400
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 8
        ; Exact mapped bytes 7D 1D: jge 0x585fb423
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 374h]
        mov dword ptr [ebp - 34h], ecx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 20 44 EA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x44
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x585fb3f7
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 68h], 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FB 34 00 00: call 0x585fe930
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x585fb4bf
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 428h]
        ; Exact mapped bytes 75 76: jne 0x585fb4bf
        __asm _emit 0x75
        __asm _emit 0x76
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 68h], -1
        ; Exact mapped bytes 74 6D: je 0x585fb4bf
        __asm _emit 0x74
        __asm _emit 0x6d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8cch]
        ; Exact mapped bytes E8 A0 AF EE FF: call 0x584e6400
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xaf
        __asm _emit 0xee
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 4E: jne 0x585fb4b6
        __asm _emit 0x75
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8cch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 8cch]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8d0h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 8d0h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8d4h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 8d4h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 09: jmp 0x585fb4bf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E2 04 00 00: call 0x585fb9a0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585fb4d1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 74h]
        ; Exact mapped bytes 0F 8D 84 00 00 00: jge 0x585fb564
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 68h], 0
        ; Exact mapped bytes 75 5B: jne 0x585fb544
        __asm _emit 0x75
        __asm _emit 0x5b
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx*4 + 374h]
        ; Exact mapped bytes 75 49: jne 0x585fb544
        __asm _emit 0x75
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + eax*4 + 90h]
        mov dword ptr [edx + 70h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 57 06 00 00: call 0x585fbb70
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x585fb532
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 61 3C 00 00: call 0x585ff190
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 10: jmp 0x585fb542
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 70h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AF 40 00 00: call 0x585ff5f0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1B: jmp 0x585fb55f
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 374h]
        mov dword ptr [ebp - 38h], edx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 E2 42 EA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x42
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 64 FF FF FF: jmp 0x585fb4c8
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x585fb5f6
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0ch
        ; Exact mapped bytes 0F 85 83 00 00 00: jne 0x585fb5f6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 1F: jne 0x585fb598
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 60h], 0
        ; Exact mapped bytes 74 14: je 0x585fb596
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 60h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 5E: jmp 0x585fb5f6
        __asm _emit 0xeb
        __asm _emit 0x5e
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 75 58: jne 0x585fb5f6
        __asm _emit 0x75
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 60h], 0
        ; Exact mapped bytes 74 4F: je 0x585fb5f6
        __asm _emit 0x74
        __asm _emit 0x4f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        ; Exact mapped bytes A3 F8 1F 96 58: mov dword ptr [0x58961ff8], eax
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes 8B 0D 64 20 96 58: mov ecx, dword ptr [0x58962064]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 55 C0: call dword ptr [ebp - 0x40]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 48h], ecx
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 55 B8: call dword ptr [ebp - 0x48]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb8
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
