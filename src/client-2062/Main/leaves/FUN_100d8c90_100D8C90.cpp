// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D8C90 .. +0x358 bytes.
extern "C" __declspec(naked) void FUN_100d8c90_100D8C90() {
    __asm {
        push -1
        push 10173626h
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
        sub esp, 1ch
        push ebp
        mov ebp, ecx
        push esi
        push edi
        ; Exact mapped bytes 66 8B 85 7E 01 00 00: mov ax, word ptr [ebp + 0x17e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        mov dword ptr [esp + 20h], ebp
        mov dword ptr [esp + 14h], edi
        mov dword ptr [esp + 0ch], edi
        ; Exact mapped bytes 74 51: je 0x100d8d18
        __asm _emit 0x74
        __asm _emit 0x51
        xor esi, esi
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 76 2A: jbe 0x100d8cf8
        __asm _emit 0x76
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 188h]
        mov ecx, dword ptr [eax + esi*4]
        cmp ecx, edi
        ; Exact mapped bytes 74 0F: je 0x100d8cea
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 188h]
        mov dword ptr [eax + esi*4], edi
        xor ecx, ecx
        inc esi
        ; Exact mapped bytes 66 8B 8D 7E 01 00 00: mov cx, word ptr [ebp + 0x17e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, ecx
        ; Exact mapped bytes 7C D6: jl 0x100d8cce
        __asm _emit 0x7c
        __asm _emit 0xd6
        mov eax, dword ptr [ebp + 188h]
        cmp eax, edi
        ; Exact mapped bytes 74 0F: je 0x100d8d11
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 7C 3A 09 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x3a
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp + 188h], edi
        ; Exact mapped bytes 66 89 BD 7E 01 00 00: mov word ptr [ebp + 0x17e], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 85 80 01 00 00: mov ax, word ptr [ebp + 0x180]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 74 51: je 0x100d8d75
        __asm _emit 0x74
        __asm _emit 0x51
        xor esi, esi
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 76 2A: jbe 0x100d8d55
        __asm _emit 0x76
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 18ch]
        mov ecx, dword ptr [edx + esi*4]
        cmp ecx, edi
        ; Exact mapped bytes 74 0F: je 0x100d8d47
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 18ch]
        mov dword ptr [ecx + esi*4], edi
        xor edx, edx
        inc esi
        ; Exact mapped bytes 66 8B 95 80 01 00 00: mov dx, word ptr [ebp + 0x180]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, edx
        ; Exact mapped bytes 7C D6: jl 0x100d8d2b
        __asm _emit 0x7c
        __asm _emit 0xd6
        mov eax, dword ptr [ebp + 18ch]
        cmp eax, edi
        ; Exact mapped bytes 74 0F: je 0x100d8d6e
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 1F 3A 09 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x3a
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp + 18ch], edi
        ; Exact mapped bytes 66 89 BD 80 01 00 00: mov word ptr [ebp + 0x180], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 3ch]
        push ebx
        mov ebx, 6
        cmp eax, ebx
        ; Exact mapped bytes 0F 86 62 01 00 00: jbe 0x100d8ee9
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 3ch]
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 66 8B 56 02: mov dx, word ptr [esi + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x02
        lea ecx, [esi + 2]
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 66 89 44 24 1C: mov word ptr [esp + 0x1c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 66 89 54 24 40: mov word ptr [esp + 0x40], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 76 19: jbe 0x100d8dbd
        __asm _emit 0x76
        __asm _emit 0x19
        mov eax, dword ptr [esp + 1ch]
        and eax, 0ffffh
        shl eax, 2
        push eax
        ; Exact mapped bytes E8 EA 39 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x39
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        mov eax, dword ptr [esp + 1ch]
        lea ecx, [esi + 6]
        and eax, 0ffffh
        ; Exact mapped bytes 7E 7C: jle 0x100d8e47
        __asm _emit 0x7e
        __asm _emit 0x7c
        mov esi, eax
        mov dword ptr [esp + 14h], ecx
        mov edi, dword ptr [esp + 18h]
        lea ecx, [esi*8]
        sub ecx, esi
        shl ecx, 5
        sub ecx, esi
        lea ebx, [ecx*4 + 6]
        push 45ch
        ; Exact mapped bytes E8 AC 39 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x39
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 20h], eax
        test eax, eax
        mov dword ptr [esp + 34h], 0
        ; Exact mapped bytes 74 0E: je 0x100d8e15
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [esp + 14h]
        mov ecx, eax
        push edx
        ; Exact mapped bytes E8 FD CC F4 FF: call 0x10025b10
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xcc
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100d8e17
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 100h
        mov ecx, eax
        mov dword ptr [esp + 38h], 0ffffffffh
        mov dword ptr [edi], eax
        ; Exact mapped bytes E8 F3 62 02 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [esp + 14h]
        add edi, 4
        add edx, 37ch
        dec esi
        mov dword ptr [esp + 14h], edx
        ; Exact mapped bytes 75 A9: jne 0x100d8dea
        __asm _emit 0x75
        __asm _emit 0xa9
        mov esi, dword ptr [esp + 3ch]
        xor edi, edi
        ; Exact mapped bytes 66 39 7C 24 40: cmp word ptr [esp + 0x40], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes 76 19: jbe 0x100d8e67
        __asm _emit 0x76
        __asm _emit 0x19
        mov eax, dword ptr [esp + 40h]
        and eax, 0ffffh
        shl eax, 2
        push eax
        ; Exact mapped bytes E8 40 39 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x39
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 10h], eax
        mov eax, dword ptr [esp + 40h]
        and eax, 0ffffh
        ; Exact mapped bytes 7E 77: jle 0x100d8ee9
        __asm _emit 0x7e
        __asm _emit 0x77
        mov ecx, dword ptr [esp + 10h]
        mov dword ptr [esp + 20h], eax
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes EB 04: jmp 0x100d8e84
        __asm _emit 0xeb
        __asm _emit 0x04
        mov esi, dword ptr [esp + 3ch]
        lea edi, [ebx + esi]
        lea ebp, [esi + ebx + 5ch]
        push 0b74h
        mov esi, dword ptr [edi]
        shr esi, 1
        and esi, 1fh
        ; Exact mapped bytes E8 04 39 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x39
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov dword ptr [esp + 34h], 1
        ; Exact mapped bytes 74 0B: je 0x100d8eba
        __asm _emit 0x74
        __asm _emit 0x0b
        push ebp
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 E8 84 01 00: call 0x100f13a0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d8ebc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 14h]
        lea edx, [esi + esi*4]
        mov dword ptr [esp + 34h], 0ffffffffh
        mov dword ptr [ecx], eax
        mov eax, dword ptr [esp + 20h]
        add ecx, 4
        dec eax
        lea ebx, [ebx + edx*2 + 5ch]
        mov dword ptr [esp + 14h], ecx
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes 75 9D: jne 0x100d8e80
        __asm _emit 0x75
        __asm _emit 0x9d
        mov ebp, dword ptr [esp + 24h]
        xor edi, edi
        ; Exact mapped bytes 66 8B 85 78 01 00 00: mov ax, word ptr [ebp + 0x178]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 76 2D: jbe 0x100d8f22
        __asm _emit 0x76
        __asm _emit 0x2d
        xor esi, esi
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 76 26: jbe 0x100d8f22
        __asm _emit 0x76
        __asm _emit 0x26
        mov ecx, dword ptr [ebp + 0e4h]
        push esi
        ; Exact mapped bytes E8 08 AF 02 00: call 0x10103e10
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xaf
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 0C 20 02 00: call 0x100faf20
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        xor eax, eax
        inc esi
        ; Exact mapped bytes 66 8B 85 78 01 00 00: mov ax, word ptr [ebp + 0x178]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 7C DA: jl 0x100d8efc
        __asm _emit 0x7c
        __asm _emit 0xda
        ; Exact mapped bytes 66 8B 85 7A 01 00 00: mov ax, word ptr [ebp + 0x17a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 76 38: jbe 0x100d8f66
        __asm _emit 0x76
        __asm _emit 0x38
        xor esi, esi
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 76 31: jbe 0x100d8f66
        __asm _emit 0x76
        __asm _emit 0x31
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8D 78 01 00 00: mov cx, word ptr [ebp + 0x178]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add ecx, esi
        push ecx
        mov ecx, dword ptr [ebp + 0e4h]
        ; Exact mapped bytes E8 C4 AE 02 00: call 0x10103e10
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 D8 21 02 00: call 0x100fb130
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        xor edx, edx
        inc esi
        ; Exact mapped bytes 66 8B 95 7A 01 00 00: mov dx, word ptr [ebp + 0x17a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, edx
        ; Exact mapped bytes 7C CF: jl 0x100d8f35
        __asm _emit 0x7c
        __asm _emit 0xcf
        mov esi, dword ptr [esp + 18h]
        cmp esi, edi
        ; Exact mapped bytes 74 20: je 0x100d8f8e
        __asm _emit 0x74
        __asm _emit 0x20
        mov ebx, dword ptr [esp + 1ch]
        and ebx, 0ffffh
        ; Exact mapped bytes 7E 14: jle 0x100d8f8e
        __asm _emit 0x7e
        __asm _emit 0x14
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 68 1F 02 00: call 0x100faef0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        add esi, 4
        dec ebx
        ; Exact mapped bytes 75 EC: jne 0x100d8f7a
        __asm _emit 0x75
        __asm _emit 0xec
        mov eax, dword ptr [esp + 10h]
        pop ebx
        cmp eax, edi
        ; Exact mapped bytes 74 22: je 0x100d8fb9
        __asm _emit 0x74
        __asm _emit 0x22
        mov edi, dword ptr [esp + 3ch]
        and edi, 0ffffh
        ; Exact mapped bytes 7E 16: jle 0x100d8fb9
        __asm _emit 0x7e
        __asm _emit 0x16
        mov esi, eax
        mov ecx, dword ptr [esi]
        push ecx
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 2D 21 02 00: call 0x100fb0e0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 EC: jne 0x100d8fa5
        __asm _emit 0x75
        __asm _emit 0xec
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        ; Exact mapped bytes 66 C7 85 9C 01 00 00 0C 00: mov word ptr [ebp + 0x19c], 0xc
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp + 1cch], 1
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [esp + 28h]
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 28h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
