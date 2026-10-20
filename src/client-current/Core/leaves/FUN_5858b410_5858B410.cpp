// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858B410 .. +0x1EF bytes.
extern "C" __declspec(naked) void FUN_5858b410_5858B410() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 204h], 0
        ; Exact mapped bytes 0F 84 CC 01 00 00: je 0x5858b5f8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 204h]
        ; Exact mapped bytes E8 66 0F 00 00: call 0x5858c3a0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 88 01 00 00: jne 0x5858b5cb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 90h], 0
        ; Exact mapped bytes 0F 8E 47 01 00 00: jle 0x5858b59a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 90h], 0ah
        ; Exact mapped bytes 0F 85 CD 00 00 00: jne 0x5858b530
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcd
        __asm _emit 0x00
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
        ; Exact mapped bytes 0F 84 C0 00 00 00: je 0x5858b530
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 65 B5 EF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xb5
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3E 95 EF FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x95
        __asm _emit 0xef
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 A4 F0 FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xa4
        __asm _emit 0xf0
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
        ; Exact mapped bytes E8 3E B5 EF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xb5
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 67 A5 F0 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xa5
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        sub eax, esi
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + 8]
        neg esi
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 10 B5 EF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xb5
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 59 A2 F0 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xa2
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CC A3 F0 FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xa3
        __asm _emit 0xf0
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
        ; Exact mapped bytes E8 E9 B4 EF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 12 A5 F0 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xa5
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        mov eax, ebx
        cdq
        idiv ecx
        add edi, eax
        add esi, edi
        mov dword ptr [ebp - 1ch], esi
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2b8h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 91 26 FE FF: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x26
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2bch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        add eax, 4
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E5 3E F1 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x3e
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2bch]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 208h]
        ; Exact mapped bytes E8 5B 94 EF FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x94
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 CC 42 F1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x42
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 90h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 2bch]
        ; Exact mapped bytes E8 E9 42 F1 FF: call 0x5849f880
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2F: jmp 0x5858b5c9
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 90h], 0
        ; Exact mapped bytes 75 23: jne 0x5858b5c9
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2bch]
        mov dword ptr [ebp - 18h], edx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 24 A9 EF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xa9
        __asm _emit 0xef
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 90h], 0ffffffffh
        ; Exact mapped bytes EB 2D: jmp 0x5858b5f8
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 204h]
        ; Exact mapped bytes E8 C7 0D 00 00: call 0x5858c3a0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 75 1A: jne 0x5858b5f8
        __asm _emit 0x75
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 204h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 214h], 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
