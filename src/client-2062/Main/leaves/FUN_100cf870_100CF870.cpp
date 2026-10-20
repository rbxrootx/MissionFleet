// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100CF870 .. +0x1D9 bytes.
extern "C" __declspec(naked) void FUN_100cf870_100CF870() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        test cl, 4
        ; Exact mapped bytes 0F 84 C5 01 00 00: je 0x100cfa46
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ecx
        and eax, 1f00h
        ; Exact mapped bytes 66 3D 00 01: cmp ax, 0x100
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 A8 00 00 00: je 0x100cf93a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 00 04: cmp ax, 0x400
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x100cf93a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 00 02: cmp ax, 0x200
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 7C 01 00 00: jne 0x100cfa22
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        and cl, 2
        cmp cl, 2
        ; Exact mapped bytes 0F 85 70 01 00 00: jne 0x100cfa22
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6ch]
        mov edx, dword ptr [eax + 80h]
        test edx, edx
        ; Exact mapped bytes 0F 84 5F 01 00 00: je 0x100cfa22
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, edx
        or ecx, 0ffffffffh
        xor eax, eax
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        dec ecx
        cmp byte ptr [ecx + edx - 1], 20h
        ; Exact mapped bytes 0F 85 48 01 00 00: jne 0x100cfa22
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, edx
        or ecx, 0ffffffffh
        xor eax, eax
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        dec ecx
        test ecx, ecx
        ; Exact mapped bytes 7E 1F: jle 0x100cf909
        __asm _emit 0x7e
        __asm _emit 0x1f
        mov edx, dword ptr [esi + 6ch]
        inc eax
        cmp eax, ecx
        mov edx, dword ptr [edx + 80h]
        mov byte ptr [edx], 0
        mov edx, dword ptr [esi + 6ch]
        mov edx, dword ptr [edx + 80h]
        mov byte ptr [edx + eax - 1], 0
        ; Exact mapped bytes 7C E1: jl 0x100cf8ea
        __asm _emit 0x7c
        __asm _emit 0xe1
        mov ecx, dword ptr [esi + 6ch]
        ; Exact mapped bytes E8 AF C4 F4 FF: call 0x1001bdc0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xc4
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes A1 E4 56 1C 10: mov eax, dword ptr [0x101c56e4]
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 64h
        push eax
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push 0
        push 0
        push 8
        ; Exact mapped bytes E8 7B E1 F4 FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xe1
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes E9 E8 00 00 00: jmp 0x100cfa22
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [esi + 50h]
        cmp ecx, eax
        ; Exact mapped bytes 75 0A: jne 0x100cf94e
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edx, dword ptr [esi + 8]
        mov edi, dword ptr [esi + 54h]
        cmp edx, edi
        ; Exact mapped bytes 74 42: je 0x100cf990
        __asm _emit 0x74
        __asm _emit 0x42
        sub eax, ecx
        cmp eax, -8
        ; Exact mapped bytes 7E 2A: jle 0x100cf97f
        __asm _emit 0x7e
        __asm _emit 0x2a
        cmp eax, 8
        ; Exact mapped bytes 7D 25: jge 0x100cf97f
        __asm _emit 0x7d
        __asm _emit 0x25
        cmp eax, -4
        ; Exact mapped bytes 7E 19: jle 0x100cf978
        __asm _emit 0x7e
        __asm _emit 0x19
        cmp eax, 4
        ; Exact mapped bytes 7D 14: jge 0x100cf978
        __asm _emit 0x7d
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x100cf96d
        __asm _emit 0x7d
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 1B: jmp 0x100cf988
        __asm _emit 0xeb
        __asm _emit 0x1b
        xor ecx, ecx
        test eax, eax
        setg cl
        mov eax, ecx
        ; Exact mapped bytes EB 10: jmp 0x100cf988
        __asm _emit 0xeb
        __asm _emit 0x10
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 09: jmp 0x100cf988
        __asm _emit 0xeb
        __asm _emit 0x09
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F0 F4 02 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xf4
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [esi + 4]
        mov eax, dword ptr [esi + 50h]
        cmp edx, eax
        ; Exact mapped bytes 0F 85 84 00 00 00: jne 0x100cfa22
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, eax
        and ecx, 1f00h
        ; Exact mapped bytes 66 81 F9 00 01: cmp cx, 0x100
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 5E: jne 0x100cfa0f
        __asm _emit 0x75
        __asm _emit 0x5e
        and eax, 0e2ffh
        mov edx, 12ch
        or eax, 202h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, dword ptr [esi + 70h]
        or byte ptr [eax + 24h], 2
        mov eax, dword ptr [esi + 6ch]
        or byte ptr [eax + 24h], 2
        mov ecx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        sub edx, ecx
        ; Exact mapped bytes 8B 0D D4 57 1C 10: mov ecx, dword ptr [0x101c57d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        sub eax, 190h
        cmp dword ptr [ecx + 170h], 0ch
        ; Exact mapped bytes 7E 16: jle 0x100cfa04
        __asm _emit 0x7e
        __asm _emit 0x16
        mov ecx, dword ptr [ecx + 194h]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x100cfa04
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ecx + 30h]
        push edx
        push eax
        ; Exact mapped bytes E8 8E 8F F7 FF: call 0x10048990
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x8f
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 1E: jmp 0x100cfa22
        __asm _emit 0xeb
        __asm _emit 0x1e
        push edx
        xor ecx, ecx
        push eax
        ; Exact mapped bytes E8 83 8F F7 FF: call 0x10048990
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x8f
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x100cfa22
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes 66 81 F9 00 04: cmp cx, 0x400
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 75 0C: jne 0x100cfa22
        __asm _emit 0x75
        __asm _emit 0x0c
        and eax, 0e5f8h
        or ah, 5
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x100cfa46
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x100cfa41
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x100cfa29
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        pop edi
        pop esi
        ret
    }
}
