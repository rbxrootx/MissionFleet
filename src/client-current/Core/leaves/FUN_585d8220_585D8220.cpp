// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D8220 .. +0x1D8 bytes.
extern "C" __declspec(naked) void FUN_585d8220_585D8220() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585d823b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 0F 8D AF 01 00 00: jge 0x585d83f4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 220c8h], -1
        ; Exact mapped bytes 0F 84 9A 01 00 00: je 0x585d83ef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585d8267
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4E E7 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xe7
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C7 41 EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 60 C7 EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xc7
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0C: mov ax, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 E8 0A: shr ax, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 0F 8D 57 01 00 00: jge 0x585d83ef
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D E7 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xe7
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 96 41 EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x41
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2F C7 EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xc7
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, 80000000h
        mov ecx, dword ptr [ebp - 4]
        shr edx, cl
        and edx, dword ptr [eax + 268h]
        mov ecx, 1fh
        sub ecx, dword ptr [ebp - 4]
        shr edx, cl
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 85 10 01 00 00: jne 0x585d83ea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB E6 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xe6
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A4 AF FF FF: call 0x585d3290
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 85 F5 00 00 00: jne 0x585d83ea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 E6 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xe6
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 39 41 EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x41
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2A 4D EB FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x4d
        __asm _emit 0xeb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 CC 00 00 00: je 0x585d83ea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 97 E6 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xe6
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 10 41 EB FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x41
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 0
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 CF 4C EB FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x4c
        __asm _emit 0xeb
        __asm _emit 0xff
        movzx eax, ax
        test eax, eax
        ; Exact mapped bytes 0F 8E 9E 00 00 00: jle 0x585d83ea
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 8], 38h
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BF 84 0A 58 20 02 00: movsx eax, word ptr [edx + ecx + 0x22058]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x58
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 14: je 0x585d8374
        __asm _emit 0x74
        __asm _emit 0x14
        imul ecx, dword ptr [ebp - 8], 38h
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BF 84 0A 58 20 02 00: movsx eax, word ptr [edx + ecx + 0x22058]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x58
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 38: jne 0x585d83ac
        __asm _emit 0x75
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 21e48h], -1
        ; Exact mapped bytes 74 2A: je 0x585d83aa
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 20e74h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D0 AE FF FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 57 00 00 00: call 0x585d8400
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3E: jmp 0x585d83ea
        __asm _emit 0xeb
        __asm _emit 0x3e
        imul ecx, dword ptr [ebp - 8], 38h
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BF 84 0A 58 20 02 00: movsx eax, word ptr [edx + ecx + 0x22058]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x58
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 75 2A: jne 0x585d83ea
        __asm _emit 0x75
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 20e74h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 90 AE FF FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 37 06 00 00: call 0x585d8a20
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 6F FE FF FF: jmp 0x585d825e
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 3E FE FF FF: jmp 0x585d8232
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
