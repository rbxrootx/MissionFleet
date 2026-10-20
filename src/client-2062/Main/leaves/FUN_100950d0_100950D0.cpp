// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100950D0 .. +0x167 bytes.
extern "C" __declspec(naked) void FUN_100950d0_100950D0() {
    __asm {
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esp + 10h]
        mov ebp, 1
        test ecx, ecx
        ; Exact mapped bytes 74 23: je 0x10095105
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 66 8B 87 E2 00 00 00: mov ax, word ptr [edi + 0xe2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 09: jne 0x100950f7
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 66 89 AF E2 00 00 00: mov word ptr [edi + 0xe2], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xaf
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x10095105
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes 66 3B C5: cmp ax, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 75 09: jne 0x10095105
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 66 C7 87 E2 00 00 00 00 00: mov word ptr [edi + 0xe2], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x87
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 87 E2 00 00 00: mov ax, word ptr [edi + 0xe2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 29: jne 0x1009513a
        __asm _emit 0x75
        __asm _emit 0x29
        mov esi, dword ptr [edi + 6ch]
        ; Exact mapped bytes 66 8B 87 E6 00 00 00: mov ax, word ptr [edi + 0xe6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 97 DE 00 00 00: mov dx, word ptr [edi + 0xde]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 74 48: je 0x1009516e
        __asm _emit 0x74
        __asm _emit 0x48
        mov ecx, dword ptr [edi + 0a0h]
        ; Exact mapped bytes 66 81 61 24 FE FF: and word ptr [ecx + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x61
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 9ch]
        ; Exact mapped bytes EB 30: jmp 0x1009516a
        __asm _emit 0xeb
        __asm _emit 0x30
        ; Exact mapped bytes 66 3B C5: cmp ax, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 85 EE 00 00 00: jne 0x10095231
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [edi + 64h]
        ; Exact mapped bytes 66 8B 87 E4 00 00 00: mov ax, word ptr [edi + 0xe4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 97 DC 00 00 00: mov dx, word ptr [edi + 0xdc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 74 16: je 0x1009516e
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [edi + 9ch]
        ; Exact mapped bytes 66 81 61 24 FE FF: and word ptr [ecx + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x61
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 0a0h]
        ; Exact mapped bytes 66 09 69 24: or word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x69
        __asm _emit 0x24
        test esi, esi
        ; Exact mapped bytes 0F 84 BB 00 00 00: je 0x10095231
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 7C 02: jl 0x1009517d
        __asm _emit 0x7c
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes 0F BF CA: movsx ecx, dx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xca
        push ebx
        sub ecx, 5
        ; Exact mapped bytes 0F BF D8: movsx ebx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd8
        cmp ebx, ecx
        ; Exact mapped bytes 7E 03: jle 0x1009518e
        __asm _emit 0x7e
        __asm _emit 0x03
        lea eax, [edx - 5]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7D 02: jge 0x10095195
        __asm _emit 0x7d
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        test eax, eax
        ; Exact mapped bytes 7E 1F: jle 0x100951bb
        __asm _emit 0x7e
        __asm _emit 0x1f
        mov ecx, eax
        ; Exact mapped bytes 66 81 66 24 FE FF: and word ptr [esi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 87 E2 00 00 00: mov ax, word ptr [edi + 0xe2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 05: je 0x100951b5
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 66 3B C5: cmp ax, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 75 03: jne 0x100951b8
        __asm _emit 0x75
        __asm _emit 0x03
        mov esi, dword ptr [esi + 54h]
        dec ecx
        ; Exact mapped bytes 75 E3: jne 0x1009519e
        __asm _emit 0x75
        __asm _emit 0xe3
        xor ebx, ebx
        mov edx, dword ptr [edi + 8]
        mov eax, dword ptr [edi + 4]
        add edx, ebx
        mov ecx, esi
        push edx
        push eax
        ; Exact mapped bytes E8 02 9B 06 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x9b
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 6E 24: or word ptr [esi + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x6e
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 87 E2 00 00 00: mov ax, word ptr [edi + 0xe2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 09: jne 0x100951e7
        __asm _emit 0x75
        __asm _emit 0x09
        mov esi, dword ptr [esi + 54h]
        test esi, esi
        ; Exact mapped bytes 74 19: je 0x100951fe
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes EB 0C: jmp 0x100951f3
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 66 3B C5: cmp ax, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 75 07: jne 0x100951f3
        __asm _emit 0x75
        __asm _emit 0x07
        mov esi, dword ptr [esi + 54h]
        test esi, esi
        ; Exact mapped bytes 74 0B: je 0x100951fe
        __asm _emit 0x74
        __asm _emit 0x0b
        add ebx, 1ch
        cmp ebx, 8ch
        ; Exact mapped bytes 7C BF: jl 0x100951bd
        __asm _emit 0x7c
        __asm _emit 0xbf
        ; Exact mapped bytes 66 83 BF E2 00 00 00 00: cmp word ptr [edi + 0xe2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebx
        ; Exact mapped bytes 75 17: jne 0x10095220
        __asm _emit 0x75
        __asm _emit 0x17
        test esi, esi
        ; Exact mapped bytes 74 24: je 0x10095231
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 66 81 66 24 FE FF: and word ptr [esi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, dword ptr [esi + 54h]
        test esi, esi
        ; Exact mapped bytes 75 F3: jne 0x1009520d
        __asm _emit 0x75
        __asm _emit 0xf3
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 74 0D: je 0x10095231
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 66 81 66 24 FE FF: and word ptr [esi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, dword ptr [esi + 54h]
        test esi, esi
        ; Exact mapped bytes 75 F3: jne 0x10095224
        __asm _emit 0x75
        __asm _emit 0xf3
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
