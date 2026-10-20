// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B8F80 .. +0x33B bytes.
extern "C" __declspec(naked) void FUN_585b8f80_585B8F80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0bch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 88h], ecx
        xor eax, eax
        ; Exact mapped bytes 66 89 85 68 FF FF FF: mov word ptr [ebp - 0x98], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        ; Exact mapped bytes 66 89 8D 6C FF FF FF: mov word ptr [ebp - 0x94], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 1
        ; Exact mapped bytes 66 89 95 70 FF FF FF: mov word ptr [ebp - 0x90], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ffh
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 48 6F FF FF: call 0x585aff10
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 6B: je 0x585b9042
        __asm _emit 0x74
        __asm _emit 0x6b
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 9E B9 EC FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xb9
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 58: je 0x585b903e
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 6F BA EC FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xba
        __asm _emit 0xec
        __asm _emit 0xff
        mov esi, dword ptr [eax]
        shr esi, 0ah
        and esi, 3fffffh
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 99 B9 EC FF: call 0x584849a0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xb9
        __asm _emit 0xec
        __asm _emit 0xff
        movzx eax, ax
        cmp esi, eax
        ; Exact mapped bytes 75 02: jne 0x585b9010
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 32: jmp 0x585b9042
        __asm _emit 0xeb
        __asm _emit 0x32
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        push ecx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 4C 70 FF FF: call 0x585b0070
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes 66 8B 95 70 FF FF FF: mov dx, word ptr [ebp - 0x90]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 95 70 FF FF FF: mov word ptr [ebp - 0x90], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x585b9040
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x585b9042
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 8C: jmp 0x585b8fce
        __asm _emit 0xeb
        __asm _emit 0x8c
        push 0ffh
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 BE 6E FF FF: call 0x585aff10
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x585b90e9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 F0 B9 EC FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xb9
        __asm _emit 0xec
        __asm _emit 0xff
        movzx eax, word ptr [eax + 48h]
        mov dword ptr [ebp - 0bch], eax
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 5B B9 EC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xb9
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E9 05: shr cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 3
        ; Exact mapped bytes 74 1F: je 0x585b90b8
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 3C B9 EC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xb9
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E8 05: shr ax, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 5
        ; Exact mapped bytes 75 12: jne 0x585b90ca
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 66 8B 95 6C FF FF FF: mov dx, word ptr [ebp - 0x94]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 95 6C FF FF FF: mov word ptr [ebp - 0x94], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov eax, dword ptr [ebp - 8ch]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 92 6F FF FF: call 0x585b0070
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes E9 6F FF FF FF: jmp 0x585b9058
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes 66 8B 91 58 0D 00 00: mov dx, word ptr [ecx + 0xd58]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        test eax, eax
        ; Exact mapped bytes 0F 84 F1 00 00 00: je 0x585b91f6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes 66 8B 91 58 0D 00 00: mov dx, word ptr [ecx + 0xd58]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        sub eax, 1
        ; Exact mapped bytes 66 89 85 68 FF FF FF: mov word ptr [ebp - 0x98], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 52 B8 EC FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xb8
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 7D: je 0x585b91af
        __asm _emit 0x74
        __asm _emit 0x7d
        movzx ecx, word ptr [ebp - 94h]
        push ecx
        movzx edx, word ptr [ebp - 98h]
        movzx eax, byte ptr [edx + 5896055ch]
        add eax, 6
        push eax
        movzx ecx, word ptr [ebp - 90h]
        push ecx
        push 588ab1b4h
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 14h
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 5f8h]
        mov dword ptr [ebp - 9ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 58 CF EC FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xcf
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 5f8h]
        mov dword ptr [ebp - 0a0h], eax
        lea ecx, [ebp - 84h]
        push ecx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 F4 CE EC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xce
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 42: jmp 0x585b91f1
        __asm _emit 0xeb
        __asm _emit 0x42
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 5fch]
        mov dword ptr [ebp - 0a4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 12 CD EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xcd
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 5f8h]
        mov dword ptr [ebp - 0a8h], edx
        push 588ab149h
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 B0 CE EC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xce
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B6 00 00 00: jmp 0x585b92ac
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 7F B7 EC FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xb7
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 65: je 0x585b926a
        __asm _emit 0x74
        __asm _emit 0x65
        push 6
        movzx eax, word ptr [ebp - 90h]
        push eax
        push 588ab1c0h
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 5f8h]
        mov dword ptr [ebp - 0ach], eax
        push 0
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 9D CE EC FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xce
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 5f8h]
        mov dword ptr [ebp - 0b0h], edx
        lea eax, [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 39 CE EC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xce
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 42: jmp 0x585b92ac
        __asm _emit 0xeb
        __asm _emit 0x42
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx + 5fch]
        mov dword ptr [ebp - 0b4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 57 CC EC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xcc
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 5f8h]
        mov dword ptr [ebp - 0b8h], ecx
        push 588ab14ah
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 F5 CD EC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xcd
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 99 7D 27 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x7d
        __asm _emit 0x27
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
