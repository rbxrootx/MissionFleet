// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10076E30 .. +0x3E9 bytes.
extern "C" __declspec(naked) void FUN_10076e30_10076E30() {
    __asm {
        push -1
        push 1016f8c6h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 8
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov ecx, 8
        xor eax, eax
        lea edi, [ebp + 84h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, 8
        lea edi, [ebp + 0a4h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        lea edi, [ebp + 408h]
        mov ecx, 2eh
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 3E 53 FB FF: call 0x1002c1c0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x53
        __asm _emit 0xfb
        __asm _emit 0xff
        xor esi, esi
        mov dword ptr [ebp + 0c4h], eax
        mov dword ptr [ebp + 70h], esi
        mov edi, 140h
        mov dword ptr [esp + 10h], 101ace60h
        lea edx, [ebp + 368h]
        mov eax, dword ptr [edx]
        mov dword ptr [eax + 50h], 1
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [eax]
        test byte ptr [ecx + 30h], 1
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x10076f41
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 70h]
        mov eax, dword ptr [ebp + eax*4 + 368h]
        or byte ptr [eax + 24h], 0fh
        ; Exact mapped bytes 8B 0D 9C 57 1C 10: mov ecx, dword ptr [0x101c579c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [esi + 5]
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 12: jle 0x10076eea
        __asm _emit 0x7e
        __asm _emit 0x12
        test eax, eax
        ; Exact mapped bytes 7C 0E: jl 0x10076eea
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [ecx + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x10076eea
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x10076eec
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp + 70h]
        test eax, eax
        mov ecx, dword ptr [ebp + ecx*4 + 368h]
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x10076f25
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], ebx
        mov ebx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], ebx
        mov ebx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], ebx
        mov ebx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebx
        mov ebx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp + 70h]
        mov dword ptr [edx - 2c4h], ecx
        mov eax, dword ptr [ebp + 70h]
        mov dword ptr [ebp + eax*4 + 84h], esi
        mov eax, dword ptr [ebp + 70h]
        inc eax
        mov dword ptr [ebp + 70h], eax
        ; Exact mapped bytes EB 08: jmp 0x10076f49
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ebx, dword ptr [esp + 10h]
        add edi, 40h
        inc esi
        add ebx, 4
        add edx, 4
        cmp edi, 340h
        mov dword ptr [esp + 10h], ebx
        ; Exact mapped bytes 0F 8C 39 FF FF FF: jl 0x10076ea0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 0c4h]
        lea edi, [ebp + 408h]
        xor ebx, ebx
        lea esi, [ecx + 107dch]
        lea edx, [eax + eax*4]
        mov ecx, 2eh
        shl edx, 1
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp + 3d8h]
        push edx
        push ebx
        ; Exact mapped bytes E8 B6 33 FB FF: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x33
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0c4h]
        mov ecx, dword ptr [ebp + 3dch]
        lea eax, [eax + eax*4]
        shl eax, 1
        push eax
        push ebx
        ; Exact mapped bytes E8 9E 33 FB FF: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x33
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0c4h]
        lea ecx, [eax + eax*4]
        shl ecx, 1
        push ecx
        mov ecx, dword ptr [ebp + 3e0h]
        push ebx
        ; Exact mapped bytes E8 86 33 FB FF: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x33
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0c4h]
        mov ecx, dword ptr [ebp + 3e4h]
        lea edx, [eax + eax*4]
        shl edx, 1
        push edx
        push ebx
        ; Exact mapped bytes E8 6E 33 FB FF: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x33
        __asm _emit 0xfb
        __asm _emit 0xff
        xor eax, eax
        mov ecx, dword ptr [ebp + 3d8h]
        mov al, byte ptr [ebp + 4a8h]
        lea eax, [eax + eax*4]
        shl eax, 1
        push eax
        ; Exact mapped bytes E8 F5 32 FB FF: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x32
        __asm _emit 0xfb
        __asm _emit 0xff
        xor eax, eax
        mov al, byte ptr [ebp + 4a9h]
        lea ecx, [eax + eax*4]
        shl ecx, 1
        push ecx
        mov ecx, dword ptr [ebp + 3dch]
        ; Exact mapped bytes E8 DC 32 FB FF: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x32
        __asm _emit 0xfb
        __asm _emit 0xff
        xor eax, eax
        mov ecx, dword ptr [ebp + 3e0h]
        mov al, byte ptr [ebp + 4aah]
        lea edx, [eax + eax*4]
        shl edx, 1
        push edx
        ; Exact mapped bytes E8 C3 32 FB FF: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x32
        __asm _emit 0xfb
        __asm _emit 0xff
        xor eax, eax
        mov ecx, dword ptr [ebp + 3e4h]
        mov al, byte ptr [ebp + 4abh]
        lea eax, [eax + eax*4]
        shl eax, 1
        push eax
        ; Exact mapped bytes E8 AA 32 FB FF: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x32
        __asm _emit 0xfb
        __asm _emit 0xff
        xor ecx, ecx
        mov cl, byte ptr [ebp + 4a8h]
        push ecx
        mov ecx, dword ptr [ebp + 3b8h]
        ; Exact mapped bytes E8 C6 86 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 3bch]
        xor edx, edx
        mov dl, byte ptr [ebp + 4a9h]
        push edx
        ; Exact mapped bytes E8 B2 86 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 3c0h]
        xor eax, eax
        mov al, byte ptr [ebp + 4aah]
        push eax
        ; Exact mapped bytes E8 9E 86 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [ebp + 4abh]
        push ecx
        mov ecx, dword ptr [ebp + 3c4h]
        ; Exact mapped bytes E8 8A 86 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 4]
        cmp eax, ebx
        ; Exact mapped bytes 74 0C: je 0x100770af
        __asm _emit 0x74
        __asm _emit 0x0c
        xor ecx, ecx
        mov cl, byte ptr [eax + 330h]
        mov eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x100770b1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push eax
        mov ecx, ebp
        ; Exact mapped bytes E8 17 02 00 00: call 0x100772d0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0c4h]
        mov dword ptr [esp + 10h], ebx
        cmp eax, ebx
        ; Exact mapped bytes 0F 8E 93 00 00 00: jle 0x1007715e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [ebp + 0c8h]
        push 0f4h
        ; Exact mapped bytes E8 C5 56 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x56
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        xor esi, esi
        cmp eax, esi
        mov dword ptr [esp + 20h], esi
        ; Exact mapped bytes 74 1E: je 0x1007710a
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 8]
        push 40h
        lea ecx, [edx + ebx + 0f3h]
        mov edx, dword ptr [ebp + 4]
        add edx, 73h
        push ecx
        push edx
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 38 B8 06 00: call 0x100e2940
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, eax
        mov dword ptr [edi], esi
        ; Exact mapped bytes 66 8B 45 26: mov ax, word ptr [ebp + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x26
        mov ecx, dword ptr [esi + 40h]
        ; Exact mapped bytes 66 05 E8 03: add ax, 0x3e8
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0xe8
        __asm _emit 0x03
        test ecx, ecx
        mov dword ptr [esp + 20h], 0ffffffffh
        ; Exact mapped bytes 66 89 46 26: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x1007712d
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 73 7E 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x7e
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1007713a
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 C6 7D 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 FF BE 06 00: call 0x100e3040
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xbe
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 0c4h]
        inc eax
        add edi, 4
        add ebx, 14h
        cmp eax, ecx
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 0F 8C 73 FF FF FF: jl 0x100770d1
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 70h]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr [esp + 10h], ebx
        ; Exact mapped bytes 0F 8E 97 00 00 00: jle 0x10077206
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [ebp + 2c8h]
        push 0f4h
        ; Exact mapped bytes E8 21 56 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        test eax, eax
        mov dword ptr [esp + 20h], 1
        ; Exact mapped bytes 74 20: je 0x100771b2
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp + 8]
        push 40h
        lea edx, [ecx + ebx + 8fh]
        mov ecx, dword ptr [ebp + 4]
        add ecx, 6eh
        push edx
        push ecx
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 92 B7 06 00: call 0x100e2940
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xb7
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes EB 02: jmp 0x100771b4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov dword ptr [edi], esi
        ; Exact mapped bytes 66 8B 55 26: mov dx, word ptr [ebp + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x26
        mov ecx, dword ptr [esi + 40h]
        ; Exact mapped bytes 66 81 C2 E8 03: add dx, 0x3e8
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xe8
        __asm _emit 0x03
        test ecx, ecx
        mov dword ptr [esp + 20h], 0ffffffffh
        ; Exact mapped bytes 66 89 56 26: mov word ptr [esi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100771d8
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 C8 7D 08 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100771e5
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 1B 7D 08 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 54 BE 06 00: call 0x100e3040
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xbe
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 70h]
        inc eax
        add edi, 4
        add ebx, 14h
        cmp eax, ecx
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 0F 8C 6F FF FF FF: jl 0x10077175
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 18h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        ret
    }
}
