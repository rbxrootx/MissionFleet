// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C1150 .. +0x394 bytes.
extern "C" __declspec(naked) void FUN_584c1150_584C1150() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0c0h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 28h], 0
        lea eax, [ebp - 24h]
        push eax
        lea ecx, [ebp - 28h]
        push ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 CF FC FD FF: call 0x584a0e50
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        push 38h
        push 0
        lea edx, [ebp - 88h]
        push edx
        ; Exact mapped bytes E8 7E BC 38 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xbc
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 0ch
        push 38h
        push 0
        lea eax, [ebp - 0c0h]
        push eax
        ; Exact mapped bytes E8 6B BC 38 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xbc
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 0F 84 18 03 00 00: je 0x584c14cd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 96 BE FC FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 5
        ; Exact mapped bytes 75 1A: jne 0x584c11ec
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 59 BE FC FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 16: jmp 0x584c1202
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 DC 02 00 00: jmp 0x584c14de
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 34h], ecx
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 F7 EA FE FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 3F 01 00 00: je 0x584c1360
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 38h], ecx
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 D8 EA FE FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 1B 01 00 00: je 0x584c1360
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 88 9A 00 00 00: mov cx, word ptr [eax + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 75 1F: jne 0x584c127d
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 3ch], ecx
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 9B BD FC FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xbd
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, ax
        xor eax, 55h
        ; Exact mapped bytes 7F 41: jg 0x584c12be
        __asm _emit 0x7f
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 91 9A 00 00 00: mov dx, word ptr [ecx + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        cmp eax, 2
        ; Exact mapped bytes 0F 85 C5 00 00 00: jne 0x584c1360
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 40h], edx
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 5E BD FC FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xbd
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, ax
        xor ecx, 55h
        ; Exact mapped bytes 0F 8E A2 00 00 00: jle 0x584c1360
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 1
        ; Exact mapped bytes 66 89 95 78 FF FF FF: mov word ptr [ebp - 0x88], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 88 9A 00 00 00: mov cx, word ptr [eax + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 7F: and cx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x7f
        movzx edx, cx
        imul eax, edx, 0ah
        mov dword ptr [ebp - 80h], eax
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 0a8h]
        mov dword ptr [ebp - 70h], edx
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 88 9A 00 00 00: mov cx, word ptr [eax + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        cmp edx, 2
        ; Exact mapped bytes 75 18: jne 0x584c1324
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 8]
        movzx ecx, word ptr [eax + 0a2h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 61 1E 00 00: call 0x584c3180
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 06: jmp 0x584c132a
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 6ch], eax
        mov ecx, dword ptr [ebp - 8]
        movzx edx, word ptr [ecx + 0a0h]
        mov dword ptr [ebp - 68h], edx
        mov eax, dword ptr [ebp - 8]
        movzx ecx, word ptr [eax + 9eh]
        mov dword ptr [ebp - 64h], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 88h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 73 20 00 00: call 0x584c33d0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 44h], edx
        push 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 99 E9 FE FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 4E 01 00 00: je 0x584c14cd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 48h], edx
        push 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 7A E9 FE FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 2A 01 00 00: je 0x584c14cd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 91 9A 00 00 00: mov dx, word ptr [ecx + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        test eax, eax
        ; Exact mapped bytes 75 1F: jne 0x584c13db
        __asm _emit 0x75
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 4ch], edx
        push 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 3D BC FC FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xbc
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, ax
        xor ecx, 55h
        ; Exact mapped bytes 7F 41: jg 0x584c141c
        __asm _emit 0x7f
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 82 9A 00 00 00: mov ax, word ptr [edx + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 D4 00 00 00: jne 0x584c14cd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 50h], eax
        push 1
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 00 BC FC FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xbc
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, ax
        xor edx, 55h
        ; Exact mapped bytes 0F 8E B1 00 00 00: jle 0x584c14cd
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes 66 89 85 40 FF FF FF: mov word ptr [ebp - 0xc0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 91 9A 00 00 00: mov dx, word ptr [ecx + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 7F: and dx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x7f
        movzx eax, dx
        imul ecx, eax, 0ah
        mov dword ptr [ebp - 0b8h], ecx
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 0a8h]
        mov dword ptr [ebp - 0a8h], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 91 9A 00 00 00: mov dx, word ptr [ecx + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        cmp eax, 2
        ; Exact mapped bytes 75 18: jne 0x584c1488
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + 0a2h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FD 1C 00 00: call 0x584c3180
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 06: jmp 0x584c148e
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 0a4h], ecx
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + 0a0h]
        mov dword ptr [ebp - 0a0h], eax
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + 9eh]
        mov dword ptr [ebp - 9ch], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 0c0h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 06 1F 00 00: call 0x584c33d0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [edx], eax
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
