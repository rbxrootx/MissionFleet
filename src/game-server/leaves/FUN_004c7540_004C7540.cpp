// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C7540 .. +0x2E0 bytes.
extern "C" __declspec(naked) void FUN_004c7540_004C7540() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1F: je 0x4c756c
        __asm _emit 0x74
        __asm _emit 0x1f
        push 3dh
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 C8 59 FE FF: call 0x4acf20
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x59
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 08: je 0x4c756c
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 75 08: jne 0x4c7574
        __asm _emit 0x75
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 A7 02 00 00: jmp 0x4c781b
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 42 01: movsx eax, byte ptr [edx + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x01
        neg eax
        sbb eax, eax
        inc eax
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 8B 0D 78 ED 5D 00: mov ecx, dword ptr [0x5ded78]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 3B 0D 7C ED 5D 00: cmp ecx, dword ptr [0x5ded7c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 75 14: jne 0x4c75a5
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 15 78 ED 5D 00: mov edx, dword ptr [0x5ded78]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 03 03 00 00: call 0x4c78a0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes A3 78 ED 5D 00: mov dword ptr [0x5ded78], eax
        __asm _emit 0xa3
        __asm _emit 0x78
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 78 ED 5D 00 00: cmp dword ptr [0x5ded78], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 B3 00 00 00: jne 0x4c7665
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 1F: je 0x4c75d7
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes 83 3D 80 ED 5D 00 00: cmp dword ptr [0x5ded80], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 16: je 0x4c75d7
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes E8 7A E9 FF FF: call 0x4c5f40
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x4c75d2
        __asm _emit 0x74
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 49 02 00 00: jmp 0x4c781b
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x4c7665
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 07: je 0x4c75e4
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 37 02 00 00: jmp 0x4c781b
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 78 ED 5D 00 00: cmp dword ptr [0x5ded78], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 37: jne 0x4c7624
        __asm _emit 0x75
        __asm _emit 0x37
        push 87h
        push 58d5a0h
        push 2
        push 4
        ; Exact mapped bytes E8 30 2C FE FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes A3 78 ED 5D 00: mov dword ptr [0x5ded78], eax
        __asm _emit 0xa3
        __asm _emit 0x78
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 78 ED 5D 00 00: cmp dword ptr [0x5ded78], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 08: jne 0x4c7619
        __asm _emit 0x75
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 02 02 00 00: jmp 0x4c781b
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 78 ED 5D 00: mov eax, dword ptr [0x5ded78]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [eax], 0
        ; Exact mapped bytes 83 3D 80 ED 5D 00 00: cmp dword ptr [0x5ded80], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 38: jne 0x4c7665
        __asm _emit 0x75
        __asm _emit 0x38
        push 8eh
        push 58d5a0h
        push 2
        push 4
        ; Exact mapped bytes E8 F0 2B FE FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x2b
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes A3 80 ED 5D 00: mov dword ptr [0x5ded80], eax
        __asm _emit 0xa3
        __asm _emit 0x80
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 80 ED 5D 00 00: cmp dword ptr [0x5ded80], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 08: jne 0x4c7659
        __asm _emit 0x75
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 C2 01 00 00: jmp 0x4c781b
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 80 ED 5D 00: mov ecx, dword ptr [0x5ded80]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ecx], 0
        ; Exact mapped bytes 8B 15 78 ED 5D 00: mov edx, dword ptr [0x5ded78]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 18h]
        sub eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 A2 01 00 00: call 0x4c7820
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 8C 93 00 00 00: jl 0x4c7721
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x4c7721
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 73: je 0x4c7713
        __asm _emit 0x74
        __asm _emit 0x73
        push 2
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax*4]
        push edx
        ; Exact mapped bytes E8 0F 36 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x36
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 09: jmp 0x4c76bf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + ecx*4], 0
        ; Exact mapped bytes 74 15: je 0x4c76e0
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 0ch]
        mov edx, dword ptr [esi + edx*4 + 4]
        mov dword ptr [ecx + eax*4], edx
        ; Exact mapped bytes EB D6: jmp 0x4c76b6
        __asm _emit 0xeb
        __asm _emit 0xd6
        push 0b9h
        push 58d5a0h
        push 2
        mov eax, dword ptr [ebp - 8]
        shl eax, 2
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 C4 2F FE FF: call 0x4aa6c0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x2f
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 14h
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 09: je 0x4c7711
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 89 15 78 ED 5D 00: mov dword ptr [0x5ded78], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x4c771f
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + eax*4], edx
        ; Exact mapped bytes EB 73: jmp 0x4c7794
        __asm _emit 0xeb
        __asm _emit 0x73
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 66: jne 0x4c778d
        __asm _emit 0x75
        __asm _emit 0x66
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 08: jge 0x4c7735
        __asm _emit 0x7d
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        neg eax
        mov dword ptr [ebp - 8], eax
        push 0ceh
        push 58d5a0h
        push 2
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx*4 + 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 6B 2F FE FF: call 0x4aa6c0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x2f
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 14h
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 08: jne 0x4c7769
        __asm _emit 0x75
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 B2 00 00 00: jmp 0x4c781b
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + ecx*4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + ecx*4 + 4], 0
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes A3 78 ED 5D 00: mov dword ptr [0x5ded78], eax
        __asm _emit 0xa3
        __asm _emit 0x78
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x4c7794
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x4c781b
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 7F: je 0x4c7819
        __asm _emit 0x74
        __asm _emit 0x7f
        push 0e5h
        push 58d5a0h
        push 2
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 21 1C FE FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        add eax, 2
        push eax
        ; Exact mapped bytes E8 75 2A FE FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x2a
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 52: je 0x4c7819
        __asm _emit 0x74
        __asm _emit 0x52
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 6C 26 FE FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x26
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 18h]
        sub ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 10h]
        add edx, ecx
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax], 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 14h]
        neg edx
        sbb edx, edx
        not edx
        and edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 10 22 5E 00: call dword ptr [0x5e2210]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        push 2
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 AA 34 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
