// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BC4F0 .. +0x136 bytes.
extern "C" __declspec(naked) void FUN_100bc4f0_100BC4F0() {
    __asm {
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 1a0h]
        mov edi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 3A 79 04 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        sub edi, eax
        cmp edi, 6
        ; Exact mapped bytes 7D 17: jge 0x100bc524
        __asm _emit 0x7d
        __asm _emit 0x17
        mov ecx, dword ptr [esi + 1a0h]
        mov edi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 22 79 04 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        sub edi, eax
        mov ebp, edi
        ; Exact mapped bytes EB 05: jmp 0x100bc529
        __asm _emit 0xeb
        __asm _emit 0x05
        mov ebp, 6
        xor edi, edi
        test ebp, ebp
        ; Exact mapped bytes 0F 8E D3 00 00 00: jle 0x100bc606
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        lea ebx, [esi + 1a4h]
        mov ecx, dword ptr [esi + 1a0h]
        ; Exact mapped bytes E8 FB 78 04 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1a0h]
        add eax, edi
        push eax
        ; Exact mapped bytes E8 BD 78 04 00: call 0x10103e10
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x100bc5eb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1a0h]
        ; Exact mapped bytes E8 D9 78 04 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1a0h]
        add eax, edi
        push eax
        ; Exact mapped bytes E8 9B 78 04 00: call 0x10103e10
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add eax, 68eh
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 13: jle 0x100bc59b
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x100bc59b
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100bc59b
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x100bc59d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100bc5ce
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
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
        mov eax, dword ptr [esi + 120h]
        cmp eax, 120000h
        mov eax, dword ptr [ebx]
        ; Exact mapped bytes 75 06: jne 0x100bc5e3
        __asm _emit 0x75
        __asm _emit 0x06
        or byte ptr [eax + 24h], 0fh
        ; Exact mapped bytes EB 11: jmp 0x100bc5f4
        __asm _emit 0xeb
        __asm _emit 0x11
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 09: jmp 0x100bc5f4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebx]
        mov dword ptr [eax + 50h], 0
        inc edi
        add ebx, 4
        cmp edi, ebp
        ; Exact mapped bytes 0F 8C 3A FF FF FF: jl 0x100bc53a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edi, 6
        pop ebx
        ; Exact mapped bytes 7D 1C: jge 0x100bc622
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov edx, 6
        lea ecx, [esi + edi*4 + 1a4h]
        sub edx, edi
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        dec edx
        ; Exact mapped bytes 75 F2: jne 0x100bc614
        __asm _emit 0x75
        __asm _emit 0xf2
        pop edi
        pop esi
        pop ebp
        ret
    }
}
