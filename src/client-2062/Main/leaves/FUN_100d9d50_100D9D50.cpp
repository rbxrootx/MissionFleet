// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D9D50 .. +0x59A bytes.
extern "C" __declspec(naked) void FUN_100d9d50_100D9D50() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ecx, ecx
        push edi
        ; Exact mapped bytes 66 8B 86 9E 01 00 00: mov ax, word ptr [esi + 0x19e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 85 12 05 00 00: jne 0x100da27a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x12
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        mov ebx, 2
        cmp eax, ebx
        ; Exact mapped bytes 0F 85 68 05 00 00: jne 0x100da2e1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0b0h]
        mov eax, dword ptr [esp + 14h]
        cmp eax, edx
        ; Exact mapped bytes 0F 85 F7 01 00 00: jne 0x100d9f82
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 70h]
        mov edx, dword ptr [esi + 74h]
        mov ebx, dword ptr [eax + 64h]
        mov eax, dword ptr [esi + 0a4h]
        mov edi, dword ptr [edx + 64h]
        cmp ebx, ecx
        mov edx, dword ptr [eax + 64h]
        mov eax, dword ptr [esi + 0a8h]
        mov dword ptr [esp + 14h], ebx
        mov dword ptr [esp + 18h], edi
        mov ebp, dword ptr [eax + 64h]
        ; Exact mapped bytes 75 2E: jne 0x100d9de3
        __asm _emit 0x75
        __asm _emit 0x2e
        cmp edi, ecx
        ; Exact mapped bytes 75 2A: jne 0x100d9de3
        __asm _emit 0x75
        __asm _emit 0x2a
        mov eax, dword ptr [esi + 0e0h]
        cmp dword ptr [eax + 88h], ecx
        ; Exact mapped bytes 75 1C: jne 0x100d9de3
        __asm _emit 0x75
        __asm _emit 0x1c
        push ecx
        push ecx
        push ecx
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 194h
        ; Exact mapped bytes E8 D6 3C F4 FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x3c
        __asm _emit 0xf4
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 00 D1 1A 10: mov ecx, dword ptr [0x101ad100]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        lea eax, [edx + ebx]
        xor ecx, 0aaaaaaaah
        cmp ecx, eax
        ; Exact mapped bytes 0F 82 69 01 00 00: jb 0x100d9f63
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 04 D1 1A 10: mov eax, dword ptr [0x101ad104]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        add edi, ebp
        xor eax, 0aaaaaaaah
        cmp eax, edi
        ; Exact mapped bytes 0F 82 55 01 00 00: jb 0x100d9f63
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, edx
        ; Exact mapped bytes 0F 84 2E 01 00 00: je 0x100d9f44
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, ebp
        ; Exact mapped bytes 0F 84 26 01 00 00: je 0x100d9f44
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b0h]
        xor edi, edi
        mov dword ptr [eax + 50h], edi
        mov ecx, dword ptr [esi + 0b0h]
        mov eax, 0fffdh
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0c4h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0c8h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0cch]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0d0h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 198h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 190h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0e0h]
        mov eax, dword ptr [ecx + 88h]
        cmp eax, edi
        ; Exact mapped bytes 0F 8E A0 00 00 00: jle 0x100d9f28
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [eax + eax*2]
        lea eax, [edx + edx + 2]
        push eax
        ; Exact mapped bytes E8 0B 29 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x29
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e0h]
        mov ebp, eax
        add esp, 4
        mov edx, dword ptr [ecx + 88h]
        ; Exact mapped bytes 66 89 55 00: mov word ptr [ebp], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e0h]
        cmp dword ptr [ecx + 88h], edi
        ; Exact mapped bytes 7E 38: jle 0x100d9ef0
        __asm _emit 0x7e
        __asm _emit 0x38
        lea ebx, [ebp + 4]
        push edi
        ; Exact mapped bytes E8 4F 9F 02 00: call 0x10103e10
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x9f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 43 FE: mov word ptr [ebx - 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0xfe
        mov ecx, dword ptr [esi + 0e4h]
        push edi
        ; Exact mapped bytes E8 3F 9F 02 00: call 0x10103e10
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x9f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 03: mov word ptr [ebx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x03
        ; Exact mapped bytes 66 C7 43 02 00 00: mov word ptr [ebx + 2], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e0h]
        inc edi
        add ebx, 6
        cmp edi, dword ptr [ecx + 88h]
        ; Exact mapped bytes 7C CF: jl 0x100d9ebb
        __asm _emit 0x7c
        __asm _emit 0xcf
        mov ebx, dword ptr [esp + 14h]
        mov eax, dword ptr [esi + 0e0h]
        mov eax, dword ptr [eax + 88h]
        lea ecx, [eax + eax*2]
        mov eax, dword ptr [esp + 18h]
        lea edx, [ecx + ecx + 2]
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push ebp
        push eax
        push ebx
        ; Exact mapped bytes E8 7A 2B F7 FF: call 0x1004ca90
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x2b
        __asm _emit 0xf7
        __asm _emit 0xff
        push ebp
        ; Exact mapped bytes E8 68 28 09 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
        push edi
        push edi
        push ecx
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        ; Exact mapped bytes E8 55 2B F7 FF: call 0x1004ca90
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x2b
        __asm _emit 0xf7
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 193h
        ; Exact mapped bytes E8 56 3B F4 FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x3b
        __asm _emit 0xf4
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 198h
        ; Exact mapped bytes E8 37 3B F4 FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x3b
        __asm _emit 0xf4
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        cmp eax, ecx
        ; Exact mapped bytes 75 67: jne 0x100d9ff3
        __asm _emit 0x75
        __asm _emit 0x67
        ; Exact mapped bytes 66 81 61 24 F0 FF: and word ptr [ecx + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x61
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [esi + 0b8h]
        mov dword ptr [edx + 50h], 0
        mov eax, dword ptr [esi + 0b8h]
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 86 9C 01 00 00: mov ax, word ptr [esi + 0x19c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 04 00: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 75 14: jne 0x100d9fcc
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 0D 2B F7 FF: call 0x1004cad0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x2b
        __asm _emit 0xf7
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 07 00: cmp ax, 7
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 0B 03 00 00: jne 0x100da2e1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 86 9C 01 00 00 0A 00: mov word ptr [esi + 0x19c], 0xa
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 56 2B F7 FF: call 0x1004cb40
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x2b
        __asm _emit 0xf7
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        cmp eax, ecx
        ; Exact mapped bytes 75 31: jne 0x100da02e
        __asm _emit 0x75
        __asm _emit 0x31
        mov eax, dword ptr [esi + 1d0h]
        test eax, eax
        ; Exact mapped bytes 0F 85 D6 02 00 00: jne 0x100da2e1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 61 24 FD FF: and word ptr [ecx + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x61
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 C7 86 9C 01 00 00 08 00: mov word ptr [esi + 0x19c], 8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 FB 2A F7 FF: call 0x1004cb20
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x2a
        __asm _emit 0xf7
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        cmp eax, ecx
        ; Exact mapped bytes 75 23: jne 0x100da05b
        __asm _emit 0x75
        __asm _emit 0x23
        ; Exact mapped bytes 66 81 61 24 FD FF: and word ptr [ecx + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x61
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 C7 86 9C 01 00 00 09 00: mov word ptr [esi + 0x19c], 9
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 EE 2A F7 FF: call 0x1004cb40
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x2a
        __asm _emit 0xf7
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 0c0h]
        ; Exact mapped bytes 75 3F: jne 0x100da0a2
        __asm _emit 0x75
        __asm _emit 0x3f
        ; Exact mapped bytes 66 8B 86 9C 01 00 00: mov ax, word ptr [esi + 0x19c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 23: je 0x100da092
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 66 3D 01 00: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 74 1D: je 0x100da092
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 66 C7 86 9C 01 00 00 06 00: mov word ptr [esi + 0x19c], 6
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 77 2A F7 FF: call 0x1004cb00
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x2a
        __asm _emit 0xf7
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 0c4h]
        ; Exact mapped bytes 75 4F: jne 0x100da0f9
        __asm _emit 0x75
        __asm _emit 0x4f
        ; Exact mapped bytes 66 83 BE 9C 01 00 00 03: cmp word ptr [esi + 0x19c], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 29 02 00 00: jne 0x100da2e1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x29
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a4h]
        ; Exact mapped bytes A1 00 D1 1A 10: mov eax, dword ptr [0x101ad100]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        xor eax, 0aaaaaaaah
        sub eax, dword ptr [ecx + 64h]
        test eax, eax
        ; Exact mapped bytes 0F 8E 0E 02 00 00: jle 0x100da2e1
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 70h]
        mov edx, dword ptr [ecx + 64h]
        cmp edx, eax
        ; Exact mapped bytes 0F 84 00 02 00 00: je 0x100da2e1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        inc edx
        cmp edx, eax
        ; Exact mapped bytes 0F 8C 8B 00 00 00: jl 0x100da175
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 30 56 02 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x56
        __asm _emit 0x02
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 0c8h]
        ; Exact mapped bytes 75 21: jne 0x100da122
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes 66 83 BE 9C 01 00 00 03: cmp word ptr [esi + 0x19c], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 D2 01 00 00: jne 0x100da2e1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 70h]
        push 1
        ; Exact mapped bytes E8 17 54 02 00: call 0x100ff530
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 0cch]
        ; Exact mapped bytes 75 5B: jne 0x100da185
        __asm _emit 0x75
        __asm _emit 0x5b
        ; Exact mapped bytes 66 83 BE 9C 01 00 00 03: cmp word ptr [esi + 0x19c], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 A9 01 00 00: jne 0x100da2e1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0a8h]
        ; Exact mapped bytes A1 04 D1 1A 10: mov eax, dword ptr [0x101ad104]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        xor eax, 0aaaaaaaah
        sub eax, dword ptr [edx + 64h]
        test eax, eax
        ; Exact mapped bytes 0F 8E 8E 01 00 00: jle 0x100da2e1
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        mov edx, dword ptr [ecx + 64h]
        cmp edx, eax
        ; Exact mapped bytes 0F 84 80 01 00 00: je 0x100da2e1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        inc edx
        cmp edx, eax
        ; Exact mapped bytes 7C 0F: jl 0x100da175
        __asm _emit 0x7c
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 B4 55 02 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x55
        __asm _emit 0x02
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes E8 54 53 02 00: call 0x100ff4d0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 0d0h]
        ; Exact mapped bytes 75 21: jne 0x100da1ae
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes 66 83 BE 9C 01 00 00 03: cmp word ptr [esi + 0x19c], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 46 01 00 00: jne 0x100da2e1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        push 1
        ; Exact mapped bytes E8 8B 53 02 00: call 0x100ff530
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 198h]
        ; Exact mapped bytes 75 6A: jne 0x100da220
        __asm _emit 0x75
        __asm _emit 0x6a
        ; Exact mapped bytes 66 83 BE 9C 01 00 00 03: cmp word ptr [esi + 0x19c], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 1D 01 00 00: jne 0x100da2e1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 170h]
        xor eax, eax
        ; Exact mapped bytes 66 C7 86 9E 01 00 00 01 00: mov word ptr [esi + 0x19e], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        mov al, byte ptr [ecx + 25h]
        and al, 1fh
        cmp al, 1
        ; Exact mapped bytes 74 04: je 0x100da1e2
        __asm _emit 0x74
        __asm _emit 0x04
        cmp al, bl
        ; Exact mapped bytes 75 05: jne 0x100da1e7
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 16ch]
        xor eax, eax
        mov al, byte ptr [ecx + 25h]
        and al, 1fh
        cmp al, 1
        ; Exact mapped bytes 74 04: je 0x100da1fc
        __asm _emit 0x74
        __asm _emit 0x04
        cmp al, bl
        ; Exact mapped bytes 75 05: jne 0x100da201
        __asm _emit 0x75
        __asm _emit 0x05
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 164h]
        ; Exact mapped bytes E8 94 DE F6 FF: call 0x100480a0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xde
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 164h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 190h]
        ; Exact mapped bytes 0F 85 B5 00 00 00: jne 0x100da2e1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE 9C 01 00 00 03: cmp word ptr [esi + 0x19c], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 A7 00 00 00: jne 0x100da2e1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 16ch]
        xor eax, eax
        ; Exact mapped bytes 66 89 9E 9E 01 00 00: mov word ptr [esi + 0x19e], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ecx + 25h]
        and al, 1fh
        cmp al, 1
        ; Exact mapped bytes 74 04: je 0x100da256
        __asm _emit 0x74
        __asm _emit 0x04
        cmp al, bl
        ; Exact mapped bytes 75 05: jne 0x100da25b
        __asm _emit 0x75
        __asm _emit 0x05
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 160h]
        ; Exact mapped bytes E8 3A DE F6 FF: call 0x100480a0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xde
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 160h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 01 00: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x100da28c
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 66 3D 02 00: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x100da28c
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 3D 03 00: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 75 55: jne 0x100da2e1
        __asm _emit 0x75
        __asm _emit 0x55
        cmp dword ptr [esp + 18h], 0ee48h
        ; Exact mapped bytes 75 4B: jne 0x100da2e1
        __asm _emit 0x75
        __asm _emit 0x4b
        mov eax, dword ptr [esp + 14h]
        mov edx, dword ptr [esi + 164h]
        cmp eax, edx
        ; Exact mapped bytes 75 1F: jne 0x100da2c3
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, dword ptr [esp + 1ch]
        ; Exact mapped bytes 66 89 8E 9E 01 00 00: mov word ptr [esi + 0x19e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, ecx
        ; Exact mapped bytes 74 2E: je 0x100da2e1
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, esi
        ; Exact mapped bytes E8 86 0E 00 00: call 0x100db140
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 160h]
        ; Exact mapped bytes 75 16: jne 0x100da2e1
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [esp + 1ch]
        ; Exact mapped bytes 66 89 8E 9E 01 00 00: mov word ptr [esi + 0x19e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, ecx
        ; Exact mapped bytes 74 07: je 0x100da2e1
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 5F 0E 00 00: call 0x100db140
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
