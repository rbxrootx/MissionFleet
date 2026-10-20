// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FAEC0 .. +0x191 bytes.
extern "C" __declspec(naked) void FUN_584faec0_584FAEC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        movzx ecx, byte ptr [eax + 60h]
        sub ecx, 1
        mov byte ptr [ebp - 1], cl
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 42 5E: mov ax, word ptr [edx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 7F: and ax, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x7f
        movzx ecx, ax
        xor ecx, 55h
        mov dword ptr [ebp - 2ch], ecx
        movzx edx, byte ptr [ebp - 1]
        test edx, edx
        ; Exact mapped bytes 7C 09: jl 0x584faeff
        __asm _emit 0x7c
        __asm _emit 0x09
        movzx eax, byte ptr [ebp - 1]
        cmp eax, 7
        ; Exact mapped bytes 7E 07: jle 0x584faf06
        __asm _emit 0x7e
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 47 01 00 00: jmp 0x584fb04d
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 51 62: mov dx, word ptr [ecx + 0x62]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x62
        ; Exact mapped bytes 66 89 55 F4: mov word ptr [ebp - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        mov dword ptr [ebp - 10h], 0
        movzx eax, byte ptr [ebp - 1]
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 7
        ; Exact mapped bytes 77 50: ja 0x584faf75
        __asm _emit 0x77
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 24 8D 54 B0 4F 58: jmp dword ptr [ecx*4 + 0x584fb054]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0xb0
        __asm _emit 0x4f
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], 0fffffc18h
        ; Exact mapped bytes EB 3D: jmp 0x584faf75
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov dword ptr [ebp - 10h], 0fffff830h
        ; Exact mapped bytes EB 34: jmp 0x584faf75
        __asm _emit 0xeb
        __asm _emit 0x34
        mov dword ptr [ebp - 10h], 0fffff448h
        ; Exact mapped bytes EB 2B: jmp 0x584faf75
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov dword ptr [ebp - 10h], 0fffff060h
        ; Exact mapped bytes EB 22: jmp 0x584faf75
        __asm _emit 0xeb
        __asm _emit 0x22
        mov dword ptr [ebp - 10h], 0ffffec78h
        ; Exact mapped bytes EB 19: jmp 0x584faf75
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 10h], 0ffffe890h
        ; Exact mapped bytes EB 10: jmp 0x584faf75
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 10h], 0ffffe4a8h
        ; Exact mapped bytes EB 07: jmp 0x584faf75
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0ffffe0c0h
        mov edx, dword ptr [ebp - 18h]
        movzx eax, word ptr [edx + 62h]
        push eax
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 38 D0 FF FF: call 0x584f7fc0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 07: jne 0x584faf98
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 B5 00 00 00: jmp 0x584fb04d
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 360h
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes 75 07: jne 0x584fafad
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 A0 00 00 00: jmp 0x584fb04d
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x584fafbf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 8
        ; Exact mapped bytes 0F 8D 82 00 00 00: jge 0x584fb04b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 1ch]
        movzx edx, word ptr [ecx + eax*4 + 2]
        test edx, edx
        ; Exact mapped bytes 75 02: jne 0x584fafda
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB DC: jmp 0x584fafb6
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 66 8B 54 81 02: mov dx, word ptr [ecx + eax*4 + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x81
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 55 F8: mov word ptr [ebp - 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 1ch]
        movzx edx, word ptr [ecx + eax*4 + 2]
        push edx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 CF FF FF: call 0x584f7fc0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 3D: je 0x584fb046
        __asm _emit 0x74
        __asm _emit 0x3d
        movzx eax, byte ptr [ebp - 1]
        imul ecx, eax, 64h
        movzx edx, word ptr [ebp - 8]
        add ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 84 0A 40 D2 8F 58: movsx eax, byte ptr [edx + ecx + 0x588fd240]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x40
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        cmp eax, 1
        ; Exact mapped bytes 75 22: jne 0x584fb046
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 66 8B 51 0E: mov dx, word ptr [ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        mov eax, 0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        movzx ecx, dx
        cmp dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes 75 07: jne 0x584fb046
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 07: jmp 0x584fb04d
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes E9 6B FF FF FF: jmp 0x584fafb6
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
