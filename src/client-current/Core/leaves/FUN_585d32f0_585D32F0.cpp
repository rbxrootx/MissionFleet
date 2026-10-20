// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D32F0 .. +0x13B2 bytes.
extern "C" __declspec(naked) void FUN_585d32f0_585D32F0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58885c8fh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 538h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 41ch], ecx
        mov eax, dword ptr [ebp - 41ch]
        cmp dword ptr [eax + 106fch], 0
        ; Exact mapped bytes 75 05: jne 0x585d3335
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 52 13 00 00: jmp 0x585d4687
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 41ch]
        mov dword ptr [ecx + 21aach], 0
        push 0
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E 3D 01 00: call 0x585e70b0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 41ch]
        mov dword ptr [edx + 21ab4h], 0
        mov eax, dword ptr [ebp - 41ch]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 DD 62 F1 FF: call 0x584e9650
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x62
        __asm _emit 0xf1
        __asm _emit 0xff
        movzx ecx, al
        mov dword ptr [ebp - 504h], ecx
        mov edx, dword ptr [ebp - 41ch]
        mov eax, dword ptr [edx + 106fch]
        mov dword ptr [ebp - 488h], eax
        push 0
        mov ecx, dword ptr [ebp - 488h]
        ; Exact mapped bytes E8 F5 2B EB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x2b
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 41ch]
        mov ecx, dword ptr [ecx + 106fch]
        ; Exact mapped bytes E8 84 1D 1E 00: call 0x587b5130
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x1d
        __asm _emit 0x1e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 41ch]
        ; Exact mapped bytes E8 69 D4 FF FF: call 0x585d0820
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 41ch]
        mov dword ptr [edx + 20f38h], 0
        mov eax, dword ptr [ebp - 41ch]
        cmp dword ptr [eax + 21a9ch], 0
        ; Exact mapped bytes 0F 84 F2 03 00 00: je 0x585d37cc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 444h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585d33f5
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 444h]
        add ecx, 1
        mov dword ptr [ebp - 444h], ecx
        cmp dword ptr [ebp - 444h], 9
        ; Exact mapped bytes 0F 8D C5 03 00 00: jge 0x585d37c7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 444h], 0e84h
        movzx eax, word ptr [edx + 588f4f90h]
        mov ecx, dword ptr [ebp - 41ch]
        movzx edx, word ptr [ecx + 21aa4h]
        cmp eax, edx
        ; Exact mapped bytes 0F 85 9A 03 00 00: jne 0x585d37c2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FD 23 EC FF: call 0x58495830
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x23
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 448h], eax
        mov eax, dword ptr [ebp - 448h]
        sub eax, 1
        mov dword ptr [ebp - 448h], eax
        cmp dword ptr [ebp - 448h], 15h
        ; Exact mapped bytes 0F 87 D0 00 00 00: ja 0x585d3525
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 448h]
        movzx edx, byte ptr [ecx + 585d46c8h]
        ; Exact mapped bytes FF 24 95 A4 46 5D 58: jmp dword ptr [edx*4 + 0x585d46a4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0x5d
        __asm _emit 0x58
        push 588acaf0h
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes E9 A2 00 00 00: jmp 0x585d3525
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588acb08h
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x585d3525
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588acb20h
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes EB 71: jmp 0x585d3525
        __asm _emit 0xeb
        __asm _emit 0x71
        push 588acb38h
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes EB 5A: jmp 0x585d3525
        __asm _emit 0xeb
        __asm _emit 0x5a
        push 588acb50h
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes EB 43: jmp 0x585d3525
        __asm _emit 0xeb
        __asm _emit 0x43
        push 588acb68h
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes EB 2C: jmp 0x585d3525
        __asm _emit 0xeb
        __asm _emit 0x2c
        push 588acb80h
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes EB 15: jmp 0x585d3525
        __asm _emit 0xeb
        __asm _emit 0x15
        push 588acb98h
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        push 588acbb0h
        lea edx, [ebp - 210h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes 83 3D E0 06 96 58 00: cmp dword ptr [0x589606e0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 6A: jne 0x585d35ad
        __asm _emit 0x75
        __asm _emit 0x6a
        push 198h
        ; Exact mapped bytes E8 B7 DA 25 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xda
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 464h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 464h], 0
        ; Exact mapped bytes 74 1E: je 0x585d3584
        __asm _emit 0x74
        __asm _emit 0x1e
        push 1
        push 0
        lea eax, [ebp - 210h]
        push eax
        mov ecx, dword ptr [ebp - 464h]
        ; Exact mapped bytes E8 34 CE 1A 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 468h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585d358e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 468h], 0
        mov ecx, dword ptr [ebp - 468h]
        mov dword ptr [ebp - 48ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 48ch]
        ; Exact mapped bytes 89 15 E0 06 96 58: mov dword ptr [0x589606e0], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 83 3D E4 06 96 58 00: cmp dword ptr [0x589606e4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 1D: je 0x585d35d3
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6F 22 EC FF: call 0x58495830
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x22
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 41ch]
        cmp eax, dword ptr [ecx + 106cch]
        ; Exact mapped bytes 0F 84 ED 01 00 00: je 0x585d37c0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 52 22 EC FF: call 0x58495830
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x22
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 44ch], eax
        mov edx, dword ptr [ebp - 44ch]
        sub edx, 1
        mov dword ptr [ebp - 44ch], edx
        cmp dword ptr [ebp - 44ch], 15h
        ; Exact mapped bytes 0F 87 56 01 00 00: ja 0x585d3756
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44ch]
        movzx ecx, byte ptr [eax + 585d4704h]
        ; Exact mapped bytes FF 24 8D E0 46 5D 58: jmp dword ptr [ecx*4 + 0x585d46e0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xe0
        __asm _emit 0x46
        __asm _emit 0x5d
        __asm _emit 0x58
        push 588acbc4h
        lea edx, [ebp - 190h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov eax, dword ptr [ebp - 41ch]
        mov dword ptr [eax + 106cch], 1
        ; Exact mapped bytes E9 18 01 00 00: jmp 0x585d3756
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 588acbd8h
        lea ecx, [ebp - 190h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov edx, dword ptr [ebp - 41ch]
        mov dword ptr [edx + 106cch], 2
        ; Exact mapped bytes E9 EE 00 00 00: jmp 0x585d3756
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588acbech
        lea eax, [ebp - 190h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov ecx, dword ptr [ebp - 41ch]
        mov dword ptr [ecx + 106cch], 3
        ; Exact mapped bytes E9 C4 00 00 00: jmp 0x585d3756
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588acc00h
        lea edx, [ebp - 190h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov eax, dword ptr [ebp - 41ch]
        mov dword ptr [eax + 106cch], 0ah
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x585d3756
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588acc14h
        lea ecx, [ebp - 190h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov edx, dword ptr [ebp - 41ch]
        mov dword ptr [edx + 106cch], 0fh
        ; Exact mapped bytes EB 73: jmp 0x585d3756
        __asm _emit 0xeb
        __asm _emit 0x73
        push 588acc28h
        lea eax, [ebp - 190h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov ecx, dword ptr [ebp - 41ch]
        mov dword ptr [ecx + 106cch], 10h
        ; Exact mapped bytes EB 4C: jmp 0x585d3756
        __asm _emit 0xeb
        __asm _emit 0x4c
        push 588acc3ch
        lea edx, [ebp - 190h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov eax, dword ptr [ebp - 41ch]
        mov dword ptr [eax + 106cch], 16h
        ; Exact mapped bytes EB 25: jmp 0x585d3756
        __asm _emit 0xeb
        __asm _emit 0x25
        push 588acc50h
        lea ecx, [ebp - 190h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov edx, dword ptr [ebp - 41ch]
        mov dword ptr [edx + 106cch], 5
        push 198h
        ; Exact mapped bytes E8 A4 D8 25 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xd8
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 46ch], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 46ch], 0
        ; Exact mapped bytes 74 1E: je 0x585d3797
        __asm _emit 0x74
        __asm _emit 0x1e
        push 1
        push 0
        lea eax, [ebp - 190h]
        push eax
        mov ecx, dword ptr [ebp - 46ch]
        ; Exact mapped bytes E8 21 CC 1A 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xcc
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 470h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585d37a1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 470h], 0
        mov ecx, dword ptr [ebp - 470h]
        mov dword ptr [ebp - 490h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 490h]
        ; Exact mapped bytes 89 15 E4 06 96 58: mov dword ptr [0x589606e4], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes EB 05: jmp 0x585d37c7
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 1F FC FF FF: jmp 0x585d33e6
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 33 01 00 00: jmp 0x585d38ff
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 2710h
        ; Exact mapped bytes 72 27: jb 0x585d37fc
        __asm _emit 0x72
        __asm _emit 0x27
        cmp dword ptr [ebp + 8], 3a97h
        ; Exact mapped bytes 77 1E: ja 0x585d37fc
        __asm _emit 0x77
        __asm _emit 0x1e
        mov eax, dword ptr [ebp + 8]
        push eax
        push 588acc64h
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        ; Exact mapped bytes E9 03 01 00 00: jmp 0x585d38ff
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 1388h
        ; Exact mapped bytes 72 27: jb 0x585d382c
        __asm _emit 0x72
        __asm _emit 0x27
        cmp dword ptr [ebp + 8], 270fh
        ; Exact mapped bytes 77 1E: ja 0x585d382c
        __asm _emit 0x77
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 8]
        push edx
        push 588acc80h
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        ; Exact mapped bytes E9 D3 00 00 00: jmp 0x585d38ff
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0fa0h
        ; Exact mapped bytes 0F 82 8D 00 00 00: jb 0x585d38c6
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0fa3h
        ; Exact mapped bytes 0F 87 80 00 00 00: ja 0x585d38c6
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0fa0h
        ; Exact mapped bytes 75 17: jne 0x585d3866
        __asm _emit 0x75
        __asm _emit 0x17
        push 588acc98h
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes EB 5E: jmp 0x585d38c4
        __asm _emit 0xeb
        __asm _emit 0x5e
        cmp dword ptr [ebp + 8], 0fa1h
        ; Exact mapped bytes 75 17: jne 0x585d3886
        __asm _emit 0x75
        __asm _emit 0x17
        push 588accach
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes EB 3E: jmp 0x585d38c4
        __asm _emit 0xeb
        __asm _emit 0x3e
        cmp dword ptr [ebp + 8], 0fa2h
        ; Exact mapped bytes 75 17: jne 0x585d38a6
        __asm _emit 0x75
        __asm _emit 0x17
        push 588accc0h
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes EB 1E: jmp 0x585d38c4
        __asm _emit 0xeb
        __asm _emit 0x1e
        cmp dword ptr [ebp + 8], 0fa3h
        ; Exact mapped bytes 75 15: jne 0x585d38c4
        __asm _emit 0x75
        __asm _emit 0x15
        push 588accd4h
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes EB 39: jmp 0x585d38ff
        __asm _emit 0xeb
        __asm _emit 0x39
        cmp dword ptr [ebp + 8], 0bb8h
        ; Exact mapped bytes 75 17: jne 0x585d38e6
        __asm _emit 0x75
        __asm _emit 0x17
        push 588acce8h
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes EB 19: jmp 0x585d38ff
        __asm _emit 0xeb
        __asm _emit 0x19
        mov eax, dword ptr [ebp + 8]
        push eax
        push 588accfch
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov dword ptr [ebp - 420h], 0
        lea edx, [ebp - 110h]
        push edx
        lea ecx, [ebp - 228h]
        ; Exact mapped bytes E8 B5 61 ED FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x61
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 41ch]
        add eax, 106f4h
        mov dword ptr [ebp - 494h], eax
        lea ecx, [ebp - 228h]
        push ecx
        lea edx, [ebp - 544h]
        push edx
        mov ecx, dword ptr [ebp - 494h]
        ; Exact mapped bytes E8 24 6E ED FF: call 0x584aa770
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x6e
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 474h], eax
        mov ecx, dword ptr [ebp - 41ch]
        add ecx, 106f4h
        mov dword ptr [ebp - 498h], ecx
        lea edx, [ebp - 540h]
        push edx
        mov ecx, dword ptr [ebp - 498h]
        ; Exact mapped bytes E8 F8 FD EC FF: call 0x584a3770
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xec
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 474h]
        ; Exact mapped bytes E8 9C EC EC FF: call 0x584a2620
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xec
        __asm _emit 0xec
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x585d39a4
        __asm _emit 0x74
        __asm _emit 0x19
        lea ecx, [ebp - 474h]
        ; Exact mapped bytes E8 3A C5 FE FF: call 0x585bfed0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 420h], ecx
        ; Exact mapped bytes E9 95 00 00 00: jmp 0x585d3a39
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 98h
        ; Exact mapped bytes E8 56 D6 25 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xd6
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 478h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 478h], 0
        ; Exact mapped bytes 74 1A: je 0x585d39de
        __asm _emit 0x74
        __asm _emit 0x1a
        lea edx, [ebp - 110h]
        push edx
        mov ecx, dword ptr [ebp - 478h]
        ; Exact mapped bytes E8 CA 75 F6 FF: call 0x5853afa0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x75
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 47ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x585d39e8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 47ch], 0
        mov eax, dword ptr [ebp - 47ch]
        mov dword ptr [ebp - 49ch], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 49ch]
        mov dword ptr [ebp - 420h], ecx
        cmp dword ptr [ebp - 420h], 0
        ; Exact mapped bytes 74 2C: je 0x585d3a39
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 41ch]
        add edx, 106f4h
        mov dword ptr [ebp - 4a0h], edx
        lea eax, [ebp - 228h]
        push eax
        mov ecx, dword ptr [ebp - 4a0h]
        ; Exact mapped bytes E8 FF 63 ED FF: call 0x584a9e30
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x63
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 420h]
        mov dword ptr [eax], ecx
        cmp dword ptr [ebp + 8], 1388h
        ; Exact mapped bytes 72 2E: jb 0x585d3a70
        __asm _emit 0x72
        __asm _emit 0x2e
        cmp dword ptr [ebp + 8], 270fh
        ; Exact mapped bytes 77 25: ja 0x585d3a70
        __asm _emit 0x77
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 41ch]
        mov eax, dword ptr [edx + 220dch]
        mov dword ptr [ebp - 53ch], eax
        mov ecx, dword ptr [ebp - 420h]
        push ecx
        mov ecx, dword ptr [ebp - 53ch]
        ; Exact mapped bytes E8 A1 C1 FB FF: call 0x5858fc10
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xc1
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 41ch]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 220e4h], eax
        mov dword ptr [ebp - 518h], 80h
        mov dword ptr [ebp - 514h], 20h
        mov dword ptr [ebp - 460h], 64h
        mov dword ptr [ebp - 45ch], 0c8h
        mov dword ptr [ebp - 520h], 40h
        mov dword ptr [ebp - 51ch], 0
        push 7ch
        push 0
        mov ecx, dword ptr [ebp - 41ch]
        mov ecx, dword ptr [ecx + 106fch]
        ; Exact mapped bytes E8 D0 ED FF FF: call 0x585d28a0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 3A 93 27 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x93
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 41ch]
        mov eax, dword ptr [edx + 106fch]
        mov dword ptr [ebp - 538h], eax
        mov ecx, dword ptr [ebp - 45ch]
        push ecx
        mov edx, dword ptr [ebp - 460h]
        push edx
        mov ecx, dword ptr [ebp - 538h]
        ; Exact mapped bytes E8 8C 39 01 00: call 0x585e7490
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 41ch]
        mov ecx, dword ptr [eax + 106fch]
        mov dword ptr [ebp - 534h], ecx
        mov edx, dword ptr [ebp - 514h]
        push edx
        mov eax, dword ptr [ebp - 518h]
        push eax
        mov ecx, dword ptr [ebp - 534h]
        ; Exact mapped bytes E8 D1 38 01 00: call 0x585e7400
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 41ch]
        mov edx, dword ptr [ecx + 106fch]
        mov dword ptr [ebp - 530h], edx
        push 10h
        push 20h
        mov ecx, dword ptr [ebp - 530h]
        ; Exact mapped bytes E8 10 39 01 00: call 0x585e7460
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 41ch]
        mov ecx, dword ptr [eax + 106fch]
        mov dword ptr [ebp - 52ch], ecx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 52ch]
        ; Exact mapped bytes E8 BF 32 EE FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x32
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 41ch]
        mov eax, dword ptr [edx + 106fch]
        mov dword ptr [ebp - 50ch], eax
        mov ecx, dword ptr [ebp - 51ch]
        push ecx
        mov edx, dword ptr [ebp - 520h]
        push edx
        mov ecx, dword ptr [ebp - 50ch]
        ; Exact mapped bytes E8 94 38 01 00: call 0x585e7430
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 41ch]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 83 BF 1E 00: call 0x587bfb30
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0x1e
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 460h], 14h
        imul ecx, dword ptr [ebp - 45ch]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 41ch]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 71 DA F9 FF: call 0x58571640
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xda
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 3B 92 27 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x92
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes A1 C4 06 96 58: mov eax, dword ptr [0x589606c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 458h], eax
        cmp dword ptr [ebp + 8], 2710h
        ; Exact mapped bytes 72 2C: jb 0x585d3c18
        __asm _emit 0x72
        __asm _emit 0x2c
        cmp dword ptr [ebp + 8], 3a97h
        ; Exact mapped bytes 77 23: ja 0x585d3c18
        __asm _emit 0x77
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 420h]
        ; Exact mapped bytes E8 B0 0E F6 FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x0e
        __asm _emit 0xf6
        __asm _emit 0xff
        cmp eax, 0ah
        ; Exact mapped bytes 75 13: jne 0x585d3c18
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D 74 06 96 58: mov ecx, dword ptr [0x58960674]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 EA FF FF: call 0x585d2680
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 458h], eax
        ; Exact mapped bytes EB 33: jmp 0x585d3c4b
        __asm _emit 0xeb
        __asm _emit 0x33
        cmp dword ptr [ebp + 8], 7d0h
        ; Exact mapped bytes 72 2A: jb 0x585d3c4b
        __asm _emit 0x72
        __asm _emit 0x2a
        cmp dword ptr [ebp + 8], 1387h
        ; Exact mapped bytes 77 21: ja 0x585d3c4b
        __asm _emit 0x77
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 420h]
        ; Exact mapped bytes E8 7B 0E F6 FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x0e
        __asm _emit 0xf6
        __asm _emit 0xff
        cmp eax, 0ah
        ; Exact mapped bytes 75 11: jne 0x585d3c4b
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 8B 0D 74 06 96 58: mov ecx, dword ptr [0x58960674]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3B EA FF FF: call 0x585d2680
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 458h], eax
        mov dword ptr [ebp - 42ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x585d3c66
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 42ch]
        add ecx, 1
        mov dword ptr [ebp - 42ch], ecx
        mov edx, dword ptr [ebp - 460h]
        imul edx, dword ptr [ebp - 45ch]
        cmp dword ptr [ebp - 42ch], edx
        ; Exact mapped bytes 7D 50: jge 0x585d3ccb
        __asm _emit 0x7d
        __asm _emit 0x50
        ; Exact mapped bytes E8 EC CF 27 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xcf
        __asm _emit 0x27
        __asm _emit 0x00
        cdq
        mov ecx, 9
        idiv ecx
        add edx, 1
        push edx
        mov ecx, dword ptr [ebp - 458h]
        ; Exact mapped bytes E8 39 0E EB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x0e
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 4ech], eax
        mov edx, dword ptr [ebp - 41ch]
        mov eax, dword ptr [edx + 106fch]
        mov dword ptr [ebp - 524h], eax
        mov ecx, dword ptr [ebp - 42ch]
        push ecx
        mov ecx, dword ptr [ebp - 524h]
        ; Exact mapped bytes E8 BF 33 FF FF: call 0x585c7080
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4ech]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB 8C: jmp 0x585d3c57
        __asm _emit 0xeb
        __asm _emit 0x8c
        mov dword ptr [ebp - 43ch], 0
        mov dword ptr [ebp - 480h], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 510h], eax
        cmp dword ptr [ebp - 510h], 12h
        ; Exact mapped bytes 74 02: je 0x585d3cf3
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0E: jmp 0x585d3d01
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 0D CC 06 96 58: mov ecx, dword ptr [0x589606cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 43ch], ecx
        ; Exact mapped bytes EB 0C: jmp 0x585d3d0d
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 15 C4 06 96 58: mov edx, dword ptr [0x589606c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 43ch], edx
        mov eax, dword ptr [ebp - 41ch]
        cmp dword ptr [eax + 21a9ch], 0
        ; Exact mapped bytes 74 18: je 0x585d3d34
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 8B 0D E0 06 96 58: mov ecx, dword ptr [0x589606e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 43ch], ecx
        ; Exact mapped bytes 8B 15 E4 06 96 58: mov edx, dword ptr [0x589606e4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 480h], edx
        mov dword ptr [ebp - 42ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x585d3d4f
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 42ch]
        add eax, 1
        mov dword ptr [ebp - 42ch], eax
        cmp dword ptr [ebp - 42ch], 8
        ; Exact mapped bytes 7D 19: jge 0x585d3d71
        __asm _emit 0x7d
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 42ch]
        mov edx, dword ptr [ebp - 41ch]
        mov dword ptr [edx + ecx*4 + 63ch], 0
        ; Exact mapped bytes EB CF: jmp 0x585d3d40
        __asm _emit 0xeb
        __asm _emit 0xcf
        mov dword ptr [ebp - 430h], 3
        mov ecx, dword ptr [ebp - 420h]
        ; Exact mapped bytes E8 2A 0D F6 FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x0d
        __asm _emit 0xf6
        __asm _emit 0xff
        cmp eax, 0ah
        ; Exact mapped bytes 0F 85 AC 01 00 00: jne 0x585d3f3b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 41ch]
        mov ecx, dword ptr [eax + 106fch]
        mov dword ptr [ebp - 4a4h], ecx
        push 0
        push 100h
        mov edx, dword ptr [ebp - 41ch]
        mov eax, dword ptr [edx + 106fch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 420h]
        push ecx
        mov ecx, dword ptr [ebp - 4a4h]
        ; Exact mapped bytes E8 B7 FF FA FF: call 0x58583d80
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 41ch]
        mov eax, dword ptr [edx + 106fch]
        mov dword ptr [ebp - 4a8h], eax
        push 0
        push 100h
        mov ecx, dword ptr [ebp - 41ch]
        mov edx, dword ptr [ecx + 106fch]
        push edx
        push 1
        mov eax, dword ptr [ebp - 420h]
        push eax
        mov ecx, dword ptr [ebp - 4a8h]
        ; Exact mapped bytes E8 7D FF FA FF: call 0x58583d80
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 41ch]
        mov edx, dword ptr [ecx + 106fch]
        mov dword ptr [ebp - 4ach], edx
        push 0
        push 100h
        mov eax, dword ptr [ebp - 41ch]
        mov ecx, dword ptr [eax + 106fch]
        push ecx
        push 2
        mov edx, dword ptr [ebp - 420h]
        push edx
        mov ecx, dword ptr [ebp - 4ach]
        ; Exact mapped bytes E8 43 FF FA FF: call 0x58583d80
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 41ch]
        mov ecx, dword ptr [eax + 106fch]
        mov dword ptr [ebp - 4b0h], ecx
        push 0
        push 100h
        mov edx, dword ptr [ebp - 41ch]
        mov eax, dword ptr [edx + 106fch]
        push eax
        push 3
        mov ecx, dword ptr [ebp - 420h]
        push ecx
        mov ecx, dword ptr [ebp - 4b0h]
        ; Exact mapped bytes E8 09 FF FA FF: call 0x58583d80
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xff
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 41ch]
        mov eax, dword ptr [edx + 106fch]
        mov dword ptr [ebp - 4b4h], eax
        push 0
        push 100h
        mov ecx, dword ptr [ebp - 41ch]
        mov edx, dword ptr [ecx + 106fch]
        push edx
        push 4
        mov eax, dword ptr [ebp - 420h]
        push eax
        mov ecx, dword ptr [ebp - 4b4h]
        ; Exact mapped bytes E8 CF FE FA FF: call 0x58583d80
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xfe
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 41ch]
        mov edx, dword ptr [ecx + 106fch]
        mov dword ptr [ebp - 4b8h], edx
        push 101h
        push 100h
        mov eax, dword ptr [ebp - 41ch]
        mov ecx, dword ptr [eax + 106fch]
        push ecx
        push 7
        mov edx, dword ptr [ebp - 420h]
        push edx
        mov ecx, dword ptr [ebp - 4b8h]
        ; Exact mapped bytes E8 92 FE FA FF: call 0x58583d80
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 41ch]
        mov ecx, dword ptr [eax + 106fch]
        mov dword ptr [ebp - 4c0h], ecx
        ; Exact mapped bytes 8B 0D 74 06 96 58: mov ecx, dword ptr [0x58960674]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 75 E7 FF FF: call 0x585d2680
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4bch], eax
        mov edx, dword ptr [ebp - 4bch]
        push edx
        push 8
        mov eax, dword ptr [ebp - 420h]
        push eax
        mov ecx, dword ptr [ebp - 4c0h]
        ; Exact mapped bytes E8 A4 08 FB FF: call 0x585847d0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x08
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 430h], 9
        ; Exact mapped bytes E9 72 02 00 00: jmp 0x585d41ad
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 41ch]
        cmp dword ptr [ecx + 21a9ch], 0
        ; Exact mapped bytes 0F 85 4B 01 00 00: jne 0x585d4099
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 41ch]
        cmp dword ptr [edx + 106fch], 0
        ; Exact mapped bytes 0F 84 38 01 00 00: je 0x585d4099
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 41ch]
        mov ecx, dword ptr [eax + 106fch]
        mov dword ptr [ebp - 4c4h], ecx
        push 0
        push 100h
        mov edx, dword ptr [ebp - 41ch]
        mov eax, dword ptr [edx + 106fch]
        push eax
        mov ecx, dword ptr [ebp - 43ch]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 420h]
        push edx
        mov ecx, dword ptr [ebp - 4c4h]
        ; Exact mapped bytes E8 7E 1B 1F 00: call 0x587c5b20
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x1b
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 41ch]
        mov ecx, dword ptr [eax + 106fch]
        mov dword ptr [ebp - 4c8h], ecx
        push 101h
        push 100h
        mov edx, dword ptr [ebp - 41ch]
        mov eax, dword ptr [edx + 106fch]
        push eax
        mov ecx, dword ptr [ebp - 43ch]
        push ecx
        push 1
        mov edx, dword ptr [ebp - 420h]
        push edx
        mov ecx, dword ptr [ebp - 4c8h]
        ; Exact mapped bytes E8 3A 1B 1F 00: call 0x587c5b20
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x1b
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 41ch]
        mov ecx, dword ptr [eax + 106fch]
        mov dword ptr [ebp - 4cch], ecx
        ; Exact mapped bytes 8B 15 C4 06 96 58: mov edx, dword ptr [0x589606c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 2
        mov eax, dword ptr [ebp - 420h]
        push eax
        mov ecx, dword ptr [ebp - 4cch]
        ; Exact mapped bytes E8 BD 07 FB FF: call 0x585847d0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x07
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 31 F0 FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x31
        __asm _emit 0xf0
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 84h]
        cmp ecx, 0fh
        ; Exact mapped bytes 75 69: jne 0x585d4094
        __asm _emit 0x75
        __asm _emit 0x69
        mov edx, dword ptr [ebp - 41ch]
        mov ecx, dword ptr [edx + 21e24h]
        ; Exact mapped bytes E8 24 B9 F3 FF: call 0x5850f960
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xb9
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 41ch]
        mov ecx, dword ptr [eax + 21e24h]
        mov dword ptr [ebp - 4d0h], ecx
        mov edx, dword ptr [ebp - 41ch]
        mov eax, dword ptr [edx + 106fch]
        push eax
        mov ecx, dword ptr [ebp - 4d0h]
        ; Exact mapped bytes E8 0A D4 F3 FF: call 0x58511470
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xd4
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 41ch]
        mov ecx, dword ptr [ecx + 21e24h]
        ; Exact mapped bytes E8 79 C9 F3 FF: call 0x585109f0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xc9
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 41ch]
        mov byte ptr [edx + 21a8dh], 0
        mov eax, dword ptr [ebp - 41ch]
        mov dword ptr [eax + 21a90h], 0
        ; Exact mapped bytes E9 14 01 00 00: jmp 0x585d41ad
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 41ch]
        mov edx, dword ptr [ecx + 106fch]
        mov dword ptr [ebp - 4d4h], edx
        push 0
        push 100h
        mov eax, dword ptr [ebp - 41ch]
        mov ecx, dword ptr [eax + 106fch]
        push ecx
        mov edx, dword ptr [ebp - 43ch]
        push edx
        push 0
        mov eax, dword ptr [ebp - 420h]
        push eax
        mov ecx, dword ptr [ebp - 4d4h]
        ; Exact mapped bytes E8 46 1A 1F 00: call 0x587c5b20
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x1a
        __asm _emit 0x1f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 41ch]
        mov edx, dword ptr [ecx + 106fch]
        mov dword ptr [ebp - 4d8h], edx
        push 0
        push 100h
        mov eax, dword ptr [ebp - 41ch]
        mov ecx, dword ptr [eax + 106fch]
        push ecx
        mov edx, dword ptr [ebp - 480h]
        push edx
        push 1
        mov eax, dword ptr [ebp - 420h]
        push eax
        mov ecx, dword ptr [ebp - 4d8h]
        ; Exact mapped bytes E8 05 1A 1F 00: call 0x587c5b20
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x1a
        __asm _emit 0x1f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 41ch]
        mov edx, dword ptr [ecx + 106fch]
        mov dword ptr [ebp - 4dch], edx
        ; Exact mapped bytes A1 C4 06 96 58: mov eax, dword ptr [0x589606c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 2
        mov ecx, dword ptr [ebp - 420h]
        push ecx
        mov ecx, dword ptr [ebp - 4dch]
        ; Exact mapped bytes E8 89 06 FB FF: call 0x585847d0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x06
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 41ch]
        mov eax, dword ptr [edx + 21e24h]
        mov dword ptr [ebp - 4e0h], eax
        mov ecx, dword ptr [ebp - 41ch]
        mov edx, dword ptr [ecx + 106fch]
        push edx
        mov ecx, dword ptr [ebp - 4e0h]
        ; Exact mapped bytes E8 FF D2 F3 FF: call 0x58511470
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xd2
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 41ch]
        mov ecx, dword ptr [eax + 21e24h]
        ; Exact mapped bytes E8 6E C8 F3 FF: call 0x585109f0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xc8
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 41ch]
        mov edx, dword ptr [ecx + 21e24h]
        mov dword ptr [ebp - 4e4h], edx
        ; Exact mapped bytes A1 C4 06 96 58: mov eax, dword ptr [0x589606c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 420h]
        push ecx
        mov ecx, dword ptr [ebp - 4e4h]
        ; Exact mapped bytes E8 44 A8 F3 FF: call 0x5850e9f0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xa8
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 430h]
        push edx
        mov ecx, dword ptr [ebp - 420h]
        ; Exact mapped bytes E8 01 A9 1E 00: call 0x587beac0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xa9
        __asm _emit 0x1e
        __asm _emit 0x00
        mov dword ptr [ebp - 424h], eax
        cmp dword ptr [ebp - 424h], 0
        ; Exact mapped bytes 0F 84 14 02 00 00: je 0x585d43e6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 434h], 0
        cmp dword ptr [ebp - 430h], 9
        ; Exact mapped bytes 75 0C: jne 0x585d41f1
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 484h], 0fffffff5h
        ; Exact mapped bytes EB 0A: jmp 0x585d41fb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 484h], 0
        mov eax, dword ptr [ebp - 484h]
        mov dword ptr [ebp - 434h], eax
        push 10000h
        push 0
        mov ecx, dword ptr [ebp - 41ch]
        add ecx, 65ch
        push ecx
        ; Exact mapped bytes E8 F0 8B 27 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x8b
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 454h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585d423e
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 454h]
        add edx, 1
        mov dword ptr [ebp - 454h], edx
        mov eax, dword ptr [ebp - 430h]
        push eax
        lea ecx, [ebp - 418h]
        push ecx
        mov ecx, dword ptr [ebp - 420h]
        ; Exact mapped bytes E8 99 A8 1E 00: call 0x587beaf0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xa8
        __asm _emit 0x1e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 454h]
        cmp edx, dword ptr [eax + 3ch]
        ; Exact mapped bytes 0F 8D 7B 01 00 00: jge 0x585d43e1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 450h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585d4281
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 450h]
        add eax, 1
        mov dword ptr [ebp - 450h], eax
        mov ecx, dword ptr [ebp - 430h]
        push ecx
        lea edx, [ebp - 39ch]
        push edx
        mov ecx, dword ptr [ebp - 420h]
        ; Exact mapped bytes E8 56 A8 1E 00: call 0x587beaf0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xa8
        __asm _emit 0x1e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 450h]
        cmp ecx, dword ptr [eax + 38h]
        ; Exact mapped bytes 0F 8D 33 01 00 00: jge 0x585d43dc
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 424h]
        cmp dword ptr [edx], -1
        ; Exact mapped bytes 0F 84 10 01 00 00: je 0x585d43c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 430h]
        push eax
        lea ecx, [ebp - 320h]
        push ecx
        mov ecx, dword ptr [ebp - 420h]
        ; Exact mapped bytes E8 1F A8 1E 00: call 0x587beaf0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xa8
        __asm _emit 0x1e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 450h]
        imul edx, dword ptr [eax + 40h]
        mov dword ptr [ebp - 4e8h], edx
        mov eax, dword ptr [ebp - 424h]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp - 434h]
        shl ecx, 0dh
        mov edx, dword ptr [ebp - 41ch]
        lea eax, [edx + ecx + 65ch]
        mov ecx, dword ptr [ebp - 424h]
        mov edx, dword ptr [ecx]
        add edx, dword ptr [ebp - 434h]
        mov ecx, dword ptr [ebp - 41ch]
        mov edx, dword ptr [ecx + edx*4 + 63ch]
        mov ecx, dword ptr [ebp - 4e8h]
        mov dword ptr [eax + edx*8], ecx
        mov edx, dword ptr [ebp - 430h]
        push edx
        lea eax, [ebp - 2a4h]
        push eax
        mov ecx, dword ptr [ebp - 420h]
        ; Exact mapped bytes E8 B4 A7 1E 00: call 0x587beaf0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xa7
        __asm _emit 0x1e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 454h]
        imul ecx, dword ptr [eax + 44h]
        mov dword ptr [ebp - 528h], ecx
        mov edx, dword ptr [ebp - 424h]
        mov eax, dword ptr [edx]
        add eax, dword ptr [ebp - 434h]
        shl eax, 0dh
        mov ecx, dword ptr [ebp - 41ch]
        lea edx, [ecx + eax + 65ch]
        mov eax, dword ptr [ebp - 424h]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp - 434h]
        mov eax, dword ptr [ebp - 41ch]
        mov ecx, dword ptr [eax + ecx*4 + 63ch]
        mov eax, dword ptr [ebp - 528h]
        mov dword ptr [edx + ecx*8 + 4], eax
        mov ecx, dword ptr [ebp - 424h]
        mov edx, dword ptr [ecx]
        add edx, dword ptr [ebp - 434h]
        mov eax, dword ptr [ebp - 41ch]
        mov ecx, dword ptr [eax + edx*4 + 63ch]
        add ecx, 1
        mov edx, dword ptr [ebp - 424h]
        mov eax, dword ptr [edx]
        add eax, dword ptr [ebp - 434h]
        mov edx, dword ptr [ebp - 41ch]
        mov dword ptr [edx + eax*4 + 63ch], ecx
        mov eax, dword ptr [ebp - 424h]
        add eax, 14h
        mov dword ptr [ebp - 424h], eax
        ; Exact mapped bytes E9 96 FE FF FF: jmp 0x585d4272
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 4E FE FF FF: jmp 0x585d422f
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 77 01 00 00: jmp 0x585d455d
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 428h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585d4401
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 428h]
        add ecx, 1
        mov dword ptr [ebp - 428h], ecx
        cmp dword ptr [ebp - 428h], 8
        ; Exact mapped bytes 0F 8D 4F 01 00 00: jge 0x585d455d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 428h]
        mov eax, dword ptr [ebp - 41ch]
        mov dword ptr [eax + edx*4 + 63ch], 0
        mov dword ptr [ebp - 438h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585d4440
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 438h]
        add ecx, 1
        mov dword ptr [ebp - 438h], ecx
        cmp dword ptr [ebp - 438h], 14h
        ; Exact mapped bytes 0F 8D 0B 01 00 00: jge 0x585d4558
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 440h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585d4468
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 440h]
        add edx, 1
        mov dword ptr [ebp - 440h], edx
        cmp dword ptr [ebp - 440h], 8
        ; Exact mapped bytes 0F 8D DE 00 00 00: jge 0x585d4553
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax*2 + 58902dd0h]
        shl ecx, 6
        imul edx, dword ptr [ebp - 440h], 0b4h
        mov eax, dword ptr [ebp - 428h]
        mov ecx, dword ptr [ecx + eax*8 + 58902150h]
        add ecx, edx
        mov edx, dword ptr [ebp - 438h]
        and edx, 1
        imul eax, edx, 0b4h
        cdq
        sub eax, edx
        sar eax, 1
        add ecx, eax
        mov eax, dword ptr [ebp - 428h]
        shl eax, 0dh
        mov edx, dword ptr [ebp - 41ch]
        lea eax, [edx + eax + 65ch]
        mov edx, dword ptr [ebp - 438h]
        shl edx, 5
        add edx, dword ptr [ebp - 440h]
        mov dword ptr [eax + edx*8], ecx
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax*2 + 58902dd0h]
        shl ecx, 6
        imul edx, dword ptr [ebp - 438h], 28h
        mov eax, dword ptr [ebp - 428h]
        add edx, dword ptr [ecx + eax*8 + 58902154h]
        mov ecx, dword ptr [ebp - 428h]
        shl ecx, 0dh
        mov eax, dword ptr [ebp - 41ch]
        lea ecx, [eax + ecx + 65ch]
        mov eax, dword ptr [ebp - 438h]
        shl eax, 5
        add eax, dword ptr [ebp - 440h]
        mov dword ptr [ecx + eax*8 + 4], edx
        mov ecx, dword ptr [ebp - 428h]
        mov edx, dword ptr [ebp - 41ch]
        mov eax, dword ptr [edx + ecx*4 + 63ch]
        add eax, 1
        mov ecx, dword ptr [ebp - 428h]
        mov edx, dword ptr [ebp - 41ch]
        mov dword ptr [edx + ecx*4 + 63ch], eax
        ; Exact mapped bytes E9 06 FF FF FF: jmp 0x585d4459
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D9 FE FF FF: jmp 0x585d4431
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 95 FE FF FF: jmp 0x585d43f2
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 41ch]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 02 12 EC FF: call 0x58495770
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x12
        __asm _emit 0xec
        __asm _emit 0xff
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp - 41ch]
        mov dword ptr [ecx + 106c4h], eax
        mov edx, dword ptr [ebp - 41ch]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 C0 11 EC FF: call 0x58495750
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x11
        __asm _emit 0xec
        __asm _emit 0xff
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp - 41ch]
        mov dword ptr [ecx + 106c8h], eax
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F4 B5 F3 FF: call 0x5850fba0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xb5
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 4f8h], eax
        mov edx, dword ptr [ebp - 41ch]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 8D 11 EC FF: call 0x58495750
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x11
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 4f0h], eax
        mov eax, dword ptr [ebp - 41ch]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 96 11 EC FF: call 0x58495770
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x11
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 4f4h], eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4f0h]
        push ecx
        mov edx, dword ptr [ebp - 4f4h]
        push edx
        mov ecx, dword ptr [ebp - 4f8h]
        ; Exact mapped bytes E8 43 13 11 00: call 0x586e5940
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x13
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 41ch]
        mov dword ptr [eax + 10700h], 3e8h
        mov ecx, dword ptr [ebp - 41ch]
        mov edx, dword ptr [ecx + 106fch]
        mov dword ptr [ebp - 4fch], edx
        mov eax, dword ptr [ebp - 41ch]
        mov ecx, dword ptr [eax + 106fch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 20h]
        mov dword ptr [ebp - 500h], eax
        mov ecx, dword ptr [ebp - 41ch]
        mov edx, dword ptr [ecx + 10700h]
        push edx
        mov ecx, dword ptr [ebp - 4fch]
        ; Exact mapped bytes FF 95 00 FB FF FF: call dword ptr [ebp - 0x500]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 41ch]
        mov ecx, dword ptr [eax + 106fch]
        mov dword ptr [ebp - 508h], ecx
        movzx edx, byte ptr [ebp - 504h]
        push edx
        mov ecx, dword ptr [ebp - 508h]
        ; Exact mapped bytes E8 1C 19 EB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x19
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 228h]
        ; Exact mapped bytes E8 AA 56 ED FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x56
        __asm _emit 0xed
        __asm _emit 0xff
        nop
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
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 B4 C9 25 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xc9
        __asm _emit 0x25
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
