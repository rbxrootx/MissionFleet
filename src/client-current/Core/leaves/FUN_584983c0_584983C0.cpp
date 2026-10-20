// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584983C0 .. +0xD41 bytes.
extern "C" __declspec(naked) void FUN_584983c0_584983C0() {
    __asm {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0fffffff8h
        add esp, 4
        push ebp
        mov ebp, dword ptr [ebx + 4]
        mov dword ptr [esp + 4], ebp
        mov ebp, esp
        push -1
        push 5887dae7h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ebx
        sub esp, 130h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 14h], eax
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
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp - 28h]
        cmp dword ptr [eax + 4d4h], 0
        ; Exact mapped bytes 74 48: je 0x58498458
        __asm _emit 0x74
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 4d4h]
        mov dword ptr [ebp - 88h], edx
        push 1
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 E4 73 00 00: call 0x5849f810
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x73
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
        ; Exact mapped bytes E8 88 E5 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xe5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        cmp dword ptr [ecx + 4d4h], eax
        ; Exact mapped bytes 75 15: jne 0x58498458
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
        ; Exact mapped bytes E8 69 96 2D 00: call 0x58771ac0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x96
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 28h]
        cmp dword ptr [edx + 318h], 0
        ; Exact mapped bytes 0F 85 F6 01 00 00: jne 0x5849865e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 4d4h]
        ; Exact mapped bytes E8 DA 91 03 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x91
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 B4 01 00 00: je 0x58498632
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ecx + 4d4h]
        ; Exact mapped bytes E8 74 C5 FE FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 44h], edx
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 28h]
        mov eax, dword ptr [eax + 4ach]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        mov dword ptr [ebp - 5ch], eax
        mov edx, dword ptr [ebp - 44h]
        sub edx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 84h], edx
        mov eax, dword ptr [ebp - 40h]
        sub eax, dword ptr [ebp - 5ch]
        imul eax, eax, 0c8h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 80h], eax
        mov edx, dword ptr [ebp - 84h]
        imul edx, dword ptr [ebp - 84h]
        mov eax, dword ptr [ebp - 80h]
        imul eax, dword ptr [ebp - 80h]
        add edx, eax
        ; Exact mapped bytes F2 0F 2A C2: cvtsi2sd xmm0, edx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc2
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 22 8B 3B 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x8b
        __asm _emit 0x3b
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 8A 8D 39 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x8d
        __asm _emit 0x39
        __asm _emit 0x00
        mov dword ptr [ebp - 8ch], eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 4d4h]
        mov dword ptr [ebp - 90h], edx
        lea eax, [ebp - 44h]
        push eax
        imul eax, dword ptr [ebp - 8ch], 0c8h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 66 8B 91 00 02 00 00: mov dx, word ptr [ecx + 0x200]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 3F: and dx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x3f
        movzx ecx, dx
        imul ecx, ecx, 0ah
        cdq
        idiv ecx
        mov edx, dword ptr [ebp - 28h]
        add eax, dword ptr [edx + 4e4h]
        push eax
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 8B BD 2C 00: call 0x587642e0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xbd
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 5ch]
        push edx
        mov eax, dword ptr [ebp - 60h]
        push eax
        ; Exact mapped bytes E8 95 B9 04 00: call 0x584e3f00
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 10h
        imul ecx, eax, 0ah
        mov dword ptr [ebp - 94h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 98h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 120h], ecx
        mov dword ptr [ebp - 11ch], edx
        mov eax, dword ptr [ebp - 94h]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        push ecx
        mov edx, dword ptr [ebp - 11ch]
        push edx
        mov eax, dword ptr [ebp - 120h]
        push eax
        push 1
        lea ecx, [ebp - 138h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 7E 65 00 00: call 0x5849eb40
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 49ch], edx
        mov dword ptr [ecx + 4a0h], eax
        mov edx, dword ptr [ebp - 28h]
        movzx eax, word ptr [edx + 2dah]
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 22ch], eax
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 33ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        cmp eax, 32h
        ; Exact mapped bytes 7D 0C: jge 0x5849860b
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 28h]
        cmp dword ptr [edx + 344h], 0
        ; Exact mapped bytes 74 0B: je 0x58498616
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 7D FB FF FF: call 0x58498190
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1A: jmp 0x58498630
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 318h], 1
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 4e8h], 0
        ; Exact mapped bytes EB 27: jmp 0x58498659
        __asm _emit 0xeb
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 318h], 2
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 4d4h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 4d8h], 0ffffffffh
        ; Exact mapped bytes E9 85 0A 00 00: jmp 0x584990e3
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        cmp dword ptr [edx + 318h], 1
        ; Exact mapped bytes 0F 85 FB 08 00 00: jne 0x58498f69
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfb
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        cmp dword ptr [eax + 480h], 0
        ; Exact mapped bytes 0F 85 2F 02 00 00: jne 0x584988ad
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        cmp dword ptr [ecx + 4d4h], 0
        ; Exact mapped bytes 0F 84 D4 00 00 00: je 0x58498762
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [edx + 4d4h]
        ; Exact mapped bytes E8 A4 3D FF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3D C3 FE FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xc3
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 9
        ; Exact mapped bytes 0F 85 AB 00 00 00: jne 0x58498762
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [edx + 4d4h]
        ; Exact mapped bytes E8 BB 3D FF FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 6
        ; Exact mapped bytes 74 26: je 0x584986f3
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 4d4h]
        mov dword ptr [ebp - 9ch], edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 74h]
        push ecx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 22 5B 2C 00: call 0x5875e210
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x5b
        __asm _emit 0x2c
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 6F: je 0x58498762
        __asm _emit 0x74
        __asm _emit 0x6f
        mov edx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [edx + 4d4h]
        ; Exact mapped bytes E8 7F 3D FF FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, ax
        test eax, eax
        ; Exact mapped bytes 74 5A: je 0x58498762
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 4d4h]
        mov dword ptr [ebp - 0a0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 EC 70 00 00: call 0x5849f810
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 4d8h], 0ffffffffh
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 4d4h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 318h], 2
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 338h]
        mov dword ptr [eax + 320h], edx
        ; Exact mapped bytes E9 81 09 00 00: jmp 0x584990e3
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 4d4h]
        ; Exact mapped bytes E8 90 C2 FE FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 3ch], ecx
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 70h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 4ach]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        mov dword ptr [ebp - 6ch], eax
        mov edx, dword ptr [ebp - 3ch]
        sub edx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 68h], edx
        mov eax, dword ptr [ebp - 38h]
        sub eax, dword ptr [ebp - 6ch]
        imul eax, eax, 0c8h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 64h], eax
        mov edx, dword ptr [ebp - 68h]
        imul edx, dword ptr [ebp - 68h]
        mov eax, dword ptr [ebp - 64h]
        imul eax, dword ptr [ebp - 64h]
        add edx, eax
        ; Exact mapped bytes F2 0F 2A C2: cvtsi2sd xmm0, edx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc2
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 47 88 3B 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x88
        __asm _emit 0x3b
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 AF 8A 39 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x8a
        __asm _emit 0x39
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 4d4h]
        mov dword ptr [ebp - 0a4h], edx
        lea eax, [ebp - 3ch]
        push eax
        imul eax, dword ptr [ebp - 34h], 0c8h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 66 8B 91 00 02 00 00: mov dx, word ptr [ecx + 0x200]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 3F: and dx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x3f
        movzx ecx, dx
        imul ecx, ecx, 0ah
        cdq
        idiv ecx
        mov edx, dword ptr [ebp - 28h]
        add eax, dword ptr [edx + 4e4h]
        push eax
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 B6 BA 2C 00: call 0x587642e0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xba
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov edx, dword ptr [ebp - 6ch]
        push edx
        mov eax, dword ptr [ebp - 70h]
        push eax
        ; Exact mapped bytes E8 C0 B6 04 00: call 0x584e3f00
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xb6
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 10h
        imul ecx, eax, 0ah
        mov dword ptr [ebp - 0a8h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 0ach], eax
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 110h], ecx
        mov dword ptr [ebp - 10ch], edx
        mov eax, dword ptr [ebp - 0a8h]
        push eax
        mov ecx, dword ptr [ebp - 0ach]
        push ecx
        mov edx, dword ptr [ebp - 10ch]
        push edx
        mov eax, dword ptr [ebp - 110h]
        push eax
        push 1
        lea ecx, [ebp - 140h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 A9 62 00 00: call 0x5849eb40
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 49ch], edx
        mov dword ptr [ecx + 4a0h], eax
        ; Exact mapped bytes EB 07: jmp 0x584988b4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 1f4h
        cmp dword ptr [ebp - 34h], 0c8h
        ; Exact mapped bytes 7D 24: jge 0x584988e1
        __asm _emit 0x7d
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 318h], 2
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 338h]
        mov dword ptr [eax + 320h], edx
        ; Exact mapped bytes E9 EB 05 00 00: jmp 0x58498ecc
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        cmp dword ptr [eax + 468h], 0
        ; Exact mapped bytes 0F 84 DB 05 00 00: je 0x58498ecc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        cmp dword ptr [ecx + 4e8h], 0
        ; Exact mapped bytes 75 09: jne 0x58498906
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 BB C1 FF FF: call 0x58494ac0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 34h]
        shl eax, 3
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 28h]
        cmp dword ptr [edx + 4e8h], eax
        ; Exact mapped bytes 7D 10: jge 0x5849892f
        __asm _emit 0x7d
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 28h]
        cmp dword ptr [eax + 480h], 0
        ; Exact mapped bytes 0F 84 9D 05 00 00: je 0x58498ecc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x05
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
        ; Exact mapped bytes 0F 84 71 01 00 00: je 0x58498aad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x71
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
        ; Exact mapped bytes E8 99 E0 FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 72 C0 FE FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xc0
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
        ; Exact mapped bytes E8 75 CF FF FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xcf
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
        ; Exact mapped bytes E8 72 E0 FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9B D0 FF FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 4]
        sub eax, esi
        mov dword ptr [ebp - 118h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov esi, dword ptr [ecx + 8]
        neg esi
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 E0 FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8A CD FF FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xcd
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
        ; Exact mapped bytes E8 FD CE FF FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        sar eax, 1
        imul eax, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes E8 14 E0 FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3D D0 FF FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        mov eax, dword ptr [ebp - 0b0h]
        cdq
        idiv ecx
        add edi, eax
        add esi, edi
        mov dword ptr [ebp - 114h], esi
        mov edx, dword ptr [ebp - 28h]
        cmp dword ptr [edx + 524h], 0
        ; Exact mapped bytes 74 30: je 0x58498a24
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 524h]
        mov dword ptr [ebp - 0b4h], ecx
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp - 114h]
        push eax
        mov ecx, dword ptr [ebp - 118h]
        push ecx
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 9D 51 0D 00: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x51
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
        ; Exact mapped bytes E8 C1 CE FF FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 7A: jne 0x58498aad
        __asm _emit 0x75
        __asm _emit 0x7a
        mov edx, dword ptr [ebp - 28h]
        cmp dword ptr [edx + 470h], 0
        ; Exact mapped bytes 74 6E: je 0x58498aad
        __asm _emit 0x74
        __asm _emit 0x6e
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 DF FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        cmp dword ptr [ecx + 74h], eax
        ; Exact mapped bytes 75 5B: jne 0x58498aad
        __asm _emit 0x75
        __asm _emit 0x5b
        push 1fh
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 C0 FE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes 8B 15 94 20 96 58: mov edx, dword ptr [0x58962094]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0b8h], edx
        mov eax, dword ptr [ebp - 0b8h]
        push eax
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 3D 33 32 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x33
        __asm _emit 0x32
        __asm _emit 0x00
        push 1fh
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F0 BF FE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 4ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 0c0h], eax
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes FF 95 40 FF FF FF: call dword ptr [ebp - 0xc0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 468h], 0
        mov edx, dword ptr [ebp - 28h]
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
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 66 89 81 D2 02 00 00: mov word ptr [ecx + 0x2d2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 510h]
        mov dword ptr [ebp - 0c4h], eax
        mov ecx, dword ptr [ebp - 28h]
        movzx edx, word ptr [ecx + 2d2h]
        push edx
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 99 26 32 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x26
        __asm _emit 0x32
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov eax, dword ptr [eax + 4d0h]
        xor edx, edx
        mov ecx, 0ah
        div ecx
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 46 38 FF FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 8B 31 FF FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        div dword ptr [ebp - 0ech]
        mov dword ptr [ebp - 0e8h], edx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 348h]
        add eax, dword ptr [ebp - 0e8h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 48h], edx
        mov edx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 66 8B 82 00 02 00 00: mov ax, word ptr [edx + 0x200]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E8 06: shr ax, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 E0 3F: and ax, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x3f
        movzx ecx, ax
        imul edx, ecx, 0ah
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ebp - 18h]
        imul ecx, dword ptr [eax*4 + 5894c930h]
        mov eax, ecx
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [ebp - 18h]
        imul eax, dword ptr [edx*4 + 589490f0h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], 0
        push 440h
        ; Exact mapped bytes E8 57 84 39 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x84
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 0F 84 BA 00 00 00: je 0x58498c7e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 4ach]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        mov dword ptr [ebp - 104h], eax
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EE DD FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        mov ecx, 2
        shl ecx, 0
        mov edx, dword ptr [ebp - 28h]
        movzx eax, word ptr [edx + ecx + 20eh]
        mov dword ptr [ebp - 0f8h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 34 35 FF FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0fch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 37 FF FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        push 40h
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 104h]
        push edx
        mov eax, dword ptr [ebp - 0f0h]
        push eax
        mov ecx, dword ptr [ebp - 0f4h]
        push ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov eax, dword ptr [ebp - 0f8h]
        push eax
        lea ecx, [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 0fch]
        push edx
        push 1
        push 0
        mov eax, dword ptr [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 67 92 2E 00: call 0x58781ee0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x92
        __asm _emit 0x2e
        __asm _emit 0x00
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58498c85
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov ecx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 0c8h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 0c8h]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 28h]
        mov eax, dword ptr [eax + 4ach]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        push eax
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 71 B9 2E 00: call 0x58784630
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xb9
        __asm _emit 0x2e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 74h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 F2 44 00 00: call 0x5849d1c0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        push 64h
        mov eax, dword ptr [ebp - 28h]
        add eax, 168h
        push eax
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 BD B7 2E 00: call 0x587844a0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xb7
        __asm _emit 0x2e
        __asm _emit 0x00
        push 6eh
        mov ecx, dword ptr [ebp - 28h]
        movzx edx, word ptr [ecx + 212h]
        push edx
        push 32c8h
        ; Exact mapped bytes E8 F6 B2 04 00: call 0x584e3ff0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xb2
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 0A 45 00 00: call 0x5849d210
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DE CB FF FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 31: jne 0x58498d47
        __asm _emit 0x75
        __asm _emit 0x31
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0F CC FF FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 7
        ; Exact mapped bytes 75 21: jne 0x58498d47
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DF CA FF FF: call 0x58495810
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 AA A6 FF FF: call 0x584933f0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xa6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 318h], 2
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 338h]
        mov dword ptr [edx + 320h], ecx
        mov edx, dword ptr [ebp - 28h]
        cmp dword ptr [edx + 480h], 0
        ; Exact mapped bytes 75 38: jne 0x58498daa
        __asm _emit 0x75
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 4d4h]
        mov dword ptr [ebp - 0d0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 82 6A 00 00: call 0x5849f810
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 4d4h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 4d8h], 0ffffffffh
        ; Exact mapped bytes EB 0D: jmp 0x58498db7
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 480h], 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E DC FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F7 BB FE FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xbb
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
        ; Exact mapped bytes E8 0A DC FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 33 CC FF FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        mov eax, 7d000h
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 28h]
        sub esi, dword ptr [edx + 4]
        mov dword ptr [ebp - 78h], esi
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 DB FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xdb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2C C9 FF FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xc9
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
        ; Exact mapped bytes E8 CF DB FE FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xdb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F8 CB FF FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        mov eax, 5dc00h
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 28h]
        sub esi, dword ptr [edx + 8]
        mov dword ptr [ebp - 74h], esi
        mov eax, dword ptr [ebp - 78h]
        imul eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [ebp - 74h]
        imul ecx, dword ptr [ebp - 74h]
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
        ; Exact mapped bytes E8 D2 81 3B 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x81
        __asm _emit 0x3b
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 3A 84 39 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x84
        __asm _emit 0x39
        __asm _emit 0x00
        mov dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 69 CA FF FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        sar eax, 1
        cmp dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes 7D 5B: jge 0x58498ecc
        __asm _emit 0x7d
        __asm _emit 0x5b
        push 3
        ; Exact mapped bytes 8B 0D 14 07 96 58: mov ecx, dword ptr [0x58960714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 02 BC FE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0d8h], edx
        mov eax, dword ptr [ebp - 0d8h]
        push eax
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 1E 2F 32 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x2f
        __asm _emit 0x32
        __asm _emit 0x00
        push 3
        ; Exact mapped bytes 8B 0D 14 07 96 58: mov ecx, dword ptr [0x58960714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D1 BB FE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xbb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 0e0h], eax
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes FF 95 20 FF FF FF: call dword ptr [ebp - 0xe0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 28h]
        cmp dword ptr [ecx + 318h], 2
        ; Exact mapped bytes 0F 85 88 00 00 00: jne 0x58498f64
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 130h], 190h
        mov dword ptr [ebp - 12ch], 0
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 348h]
        sub eax, 384h
        ; Exact mapped bytes 79 14: jns 0x58498f14
        __asm _emit 0x79
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 348h]
        add edx, 0e10h
        mov dword ptr [ebp - 58h], edx
        ; Exact mapped bytes EB 0C: jmp 0x58498f20
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 348h]
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp - 58h]
        push edx
        lea eax, [ebp - 128h]
        push eax
        lea ecx, [ebp - 130h]
        push ecx
        ; Exact mapped bytes E8 19 AC 04 00: call 0x584e3b50
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 4]
        add eax, dword ptr [ebp - 128h]
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 49ch], eax
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 8]
        sub eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 4a0h], eax
        ; Exact mapped bytes E9 7A 01 00 00: jmp 0x584990e3
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        cmp dword ptr [edx + 318h], 2
        ; Exact mapped bytes 0F 85 6A 01 00 00: jne 0x584990e3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        imul eax, dword ptr [eax + 320h], 9
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 28h]
        cmp dword ptr [edx + 33ch], eax
        ; Exact mapped bytes 7D 38: jge 0x58498fce
        __asm _emit 0x7d
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 28h]
        cmp dword ptr [eax + 344h], 1c2h
        ; Exact mapped bytes 7D 17: jge 0x58498fbc
        __asm _emit 0x7d
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 344h]
        add edx, 0ah
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 344h], edx
        ; Exact mapped bytes EB 0D: jmp 0x58498fc9
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 344h], 1c2h
        ; Exact mapped bytes E9 D3 00 00 00: jmp 0x584990a1
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        imul eax, dword ptr [edx + 320h], 9
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 28h]
        cmp dword ptr [edx + 33ch], eax
        ; Exact mapped bytes 7E 4B: jle 0x58499036
        __asm _emit 0x7e
        __asm _emit 0x4b
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax + 33ch]
        cmp edx, dword ptr [ecx + 320h]
        ; Exact mapped bytes 7D 37: jge 0x58499036
        __asm _emit 0x7d
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 344h]
        sub ecx, 0ah
        cmp ecx, 64h
        ; Exact mapped bytes 7F 0F: jg 0x5849901f
        __asm _emit 0x7f
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 344h], 64h
        ; Exact mapped bytes EB 15: jmp 0x58499034
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 344h]
        sub ecx, 14h
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 344h], ecx
        ; Exact mapped bytes EB 6B: jmp 0x584990a1
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax + 33ch]
        cmp edx, dword ptr [ecx + 320h]
        ; Exact mapped bytes 7C 57: jl 0x584990a1
        __asm _emit 0x7c
        __asm _emit 0x57
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 344h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 318h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 4c4h], 0
        mov eax, dword ptr [ebp - 28h]
        movzx ecx, word ptr [eax + 2d2h]
        test ecx, ecx
        ; Exact mapped bytes 74 0F: je 0x5849908e
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 4c4h], 0
        ; Exact mapped bytes EB 13: jmp 0x584990a1
        __asm _emit 0xeb
        __asm _emit 0x13
        mov byte ptr [ebp - 29h], 61h
        lea eax, [ebp - 29h]
        push eax
        push 5
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 A0 41 00 00: call 0x5849d240
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 28h]
        cmp dword ptr [ecx + 4d4h], 0
        ; Exact mapped bytes 74 36: je 0x584990e3
        __asm _emit 0x74
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 4d4h]
        mov dword ptr [ebp - 0e4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 47 67 00 00: call 0x5849f810
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 4d4h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 4d8h], 0ffffffffh
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
        mov ecx, dword ptr [ebp - 14h]
        xor ecx, ebp
        ; Exact mapped bytes E8 56 7F 39 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x7f
        __asm _emit 0x39
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ret
    }
}
