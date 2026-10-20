// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100280D0 .. +0x1D2 bytes.
extern "C" __declspec(naked) void FUN_100280d0_100280D0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 43ch]
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x1002811f
        __asm _emit 0x74
        __asm _emit 0x42
        mov eax, dword ptr [esi + 0a4h]
        and al, 0feh
        cmp eax, 0a0h
        ; Exact mapped bytes 74 33: je 0x1002811f
        __asm _emit 0x74
        __asm _emit 0x33
        cmp eax, 0a2h
        ; Exact mapped bytes 74 2C: je 0x1002811f
        __asm _emit 0x74
        __asm _emit 0x2c
        cmp eax, 0a4h
        ; Exact mapped bytes 74 25: je 0x1002811f
        __asm _emit 0x74
        __asm _emit 0x25
        cmp eax, 0a6h
        ; Exact mapped bytes 74 1E: je 0x1002811f
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp eax, 0a8h
        ; Exact mapped bytes 74 17: je 0x1002811f
        __asm _emit 0x74
        __asm _emit 0x17
        cmp eax, 0ach
        ; Exact mapped bytes 74 10: je 0x1002811f
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and eax, 0e4ffh
        or ah, 4
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a4h]
        mov dword ptr [esi + 43ch], 0
        and al, 0feh
        cmp eax, 0a0h
        ; Exact mapped bytes 75 77: jne 0x100281af
        __asm _emit 0x75
        __asm _emit 0x77
        mov eax, dword ptr [esi + 3e0h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes A1 18 58 1C 10: mov eax, dword ptr [0x101c5818]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 2
        ; Exact mapped bytes 7E 11: jle 0x10028163
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x10028163
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 80h
        ; Exact mapped bytes EB 02: jmp 0x10028165
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3dch]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1002819a
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 3dch]
        push 101h
        ; Exact mapped bytes E8 B6 6F 0D 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x6f
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes E9 D9 00 00 00: jmp 0x10028288
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0a8h
        ; Exact mapped bytes 75 7E: jne 0x10028234
        __asm _emit 0x75
        __asm _emit 0x7e
        mov eax, dword ptr [esi + 3e0h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes A1 2C 58 1C 10: mov eax, dword ptr [0x101c582c]
        __asm _emit 0xa1
        __asm _emit 0x2c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x100281df
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100281df
        __asm _emit 0x74
        __asm _emit 0x05
        add eax, 40h
        ; Exact mapped bytes EB 02: jmp 0x100281e1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3dch]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x10028216
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 3dch]
        push 101h
        ; Exact mapped bytes E8 3A 6F 0D 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x6f
        __asm _emit 0x0d
        __asm _emit 0x00
        push 100h
        mov ecx, esi
        ; Exact mapped bytes E8 EE 6E 0D 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x6e
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 54: jmp 0x10028288
        __asm _emit 0xeb
        __asm _emit 0x54
        cmp eax, 0a2h
        ; Exact mapped bytes 74 31: je 0x1002826c
        __asm _emit 0x74
        __asm _emit 0x31
        cmp eax, 0a4h
        ; Exact mapped bytes 74 2A: je 0x1002826c
        __asm _emit 0x74
        __asm _emit 0x2a
        cmp eax, 0a6h
        ; Exact mapped bytes 74 23: je 0x1002826c
        __asm _emit 0x74
        __asm _emit 0x23
        cmp eax, 0aeh
        ; Exact mapped bytes 74 1C: je 0x1002826c
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 0d48h]
        mov ecx, dword ptr [edx + 9ch]
        cmp dword ptr [ecx + 84h], esi
        ; Exact mapped bytes 75 1E: jne 0x10028288
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes EB 17: jmp 0x10028283
        __asm _emit 0xeb
        __asm _emit 0x17
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 0d48h]
        mov ecx, dword ptr [edx + 0cch]
        cmp dword ptr [ecx + 60h], esi
        ; Exact mapped bytes 75 05: jne 0x10028288
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov eax, dword ptr [esi + 404h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, dword ptr [esi + 410h]
        ; Exact mapped bytes 66 81 66 24 F0 FF: and word ptr [esi + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        pop esi
        ret
    }
}
