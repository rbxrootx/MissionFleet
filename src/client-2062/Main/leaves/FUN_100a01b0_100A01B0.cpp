// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A01B0 .. +0x1B3 bytes.
extern "C" __declspec(naked) void FUN_100a01b0_100A01B0() {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0ch]
        push esi
        mov esi, ecx
        push edi
        test ebp, ebp
        mov dword ptr [esi + 0d0h], ebp
        ; Exact mapped bytes 7E 5D: jle 0x100a0221
        __asm _emit 0x7e
        __asm _emit 0x5d
        xor ebx, ebx
        lea edi, [esi + 9a4h]
        mov eax, dword ptr [edi]
        or byte ptr [eax + 24h], 0fh
        mov eax, dword ptr [esi + 4]
        lea ecx, [ebx + eax + 0fh]
        push ecx
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 6F EB 05 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xeb
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [esi + 4]
        mov ecx, dword ptr [edi - 20h]
        lea eax, [ebx + edx + 5]
        push eax
        ; Exact mapped bytes E8 5F EB 05 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xeb
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        lea edx, [ebx + ecx + 5]
        mov ecx, dword ptr [edi - 40h]
        push edx
        ; Exact mapped bytes E8 4F EB 05 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xeb
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        lea ecx, [ebx + eax + 5]
        push ecx
        mov ecx, dword ptr [edi - 88h]
        ; Exact mapped bytes E8 3C EB 05 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xeb
        __asm _emit 0x05
        __asm _emit 0x00
        add edi, 4
        add ebx, 27h
        dec ebp
        ; Exact mapped bytes 75 AF: jne 0x100a01cc
        __asm _emit 0x75
        __asm _emit 0xaf
        mov ebp, dword ptr [esp + 14h]
        cmp ebp, 8
        ; Exact mapped bytes 7D 55: jge 0x100a027b
        __asm _emit 0x7d
        __asm _emit 0x55
        mov ebx, 8
        lea edi, [esi + ebp*4 + 9a4h]
        sub ebx, ebp
        mov ebp, 0fff0h
        mov eax, dword ptr [edi]
        push 500h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 05 EB 05 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xeb
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi - 20h]
        push 500h
        ; Exact mapped bytes E8 F8 EA 05 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xea
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi - 40h]
        push 500h
        ; Exact mapped bytes E8 EB EA 05 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xea
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi - 88h]
        push 500h
        ; Exact mapped bytes E8 DB EA 05 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xea
        __asm _emit 0x05
        __asm _emit 0x00
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 BE: jne 0x100a0239
        __asm _emit 0x75
        __asm _emit 0xbe
        xor ebp, ebp
        lea ecx, [esi + 838h]
        mov edx, 4
        mov edi, 0fffeh
        mov ebx, 1
        mov eax, dword ptr [ecx + 19ch]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [ecx]
        mov dword ptr [ecx + 10h], eax
        xor eax, 0aah
        ; Exact mapped bytes 74 02: je 0x100a02aa
        __asm _emit 0x74
        __asm _emit 0x02
        mov ebp, ebx
        add ecx, 4
        dec edx
        ; Exact mapped bytes 75 E2: jne 0x100a0292
        __asm _emit 0x75
        __asm _emit 0xe2
        mov eax, dword ptr [esi + 9d4h]
        push ebx
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 9c8h]
        ; Exact mapped bytes E8 5A F4 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xf4
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 0e74h]
        mov dl, byte ptr [ecx + 0eh]
        mov ecx, dword ptr [esi + 9d0h]
        and edx, 0ffh
        push edx
        ; Exact mapped bytes E8 36 F4 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xf4
        __asm _emit 0x05
        __asm _emit 0x00
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 0D FB FF FF: call 0x1009fe00
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 914h]
        test ebp, ebp
        ; Exact mapped bytes 74 33: je 0x100a0330
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 918h]
        pop edi
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 9e4h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 9e8h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov esi, dword ptr [esi + 9ech]
        ; Exact mapped bytes 66 09 5E 24: or word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x5e
        __asm _emit 0x24
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 918h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 9e4h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 9e8h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov esi, dword ptr [esi + 9ech]
        ; Exact mapped bytes 66 21 7E 24: and word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7e
        __asm _emit 0x24
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
