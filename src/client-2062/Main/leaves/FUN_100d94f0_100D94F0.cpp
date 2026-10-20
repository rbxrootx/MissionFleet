// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D94F0 .. +0x135 bytes.
extern "C" __declspec(naked) void FUN_100d94f0_100D94F0() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ebp, ebp
        push edi
        mov ecx, dword ptr [esi + 9ch]
        push ebp
        ; Exact mapped bytes E8 1C 62 02 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a0h]
        push ebp
        ; Exact mapped bytes E8 10 62 02 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 94h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 89 AE C0 01 00 00: mov word ptr [esi + 0x1c0], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + 0ech]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 98h]
        mov ebx, 3
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 CE B1 02 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xb1
        __asm _emit 0x02
        __asm _emit 0x00
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 F3: jne 0x100d953b
        __asm _emit 0x75
        __asm _emit 0xf3
        xor edi, edi
        ; Exact mapped bytes 66 39 AE 7E 01 00 00: cmp word ptr [esi + 0x17e], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xae
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, 1
        ; Exact mapped bytes 76 20: jbe 0x100d9578
        __asm _emit 0x76
        __asm _emit 0x20
        mov eax, dword ptr [esi + 188h]
        mov ecx, dword ptr [eax + edi*4]
        cmp ecx, ebp
        ; Exact mapped bytes 74 05: je 0x100d956a
        __asm _emit 0x74
        __asm _emit 0x05
        mov edx, dword ptr [ecx]
        push ebx
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        xor eax, eax
        inc edi
        ; Exact mapped bytes 66 8B 86 7E 01 00 00: mov ax, word ptr [esi + 0x17e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, eax
        ; Exact mapped bytes 7C E0: jl 0x100d9558
        __asm _emit 0x7c
        __asm _emit 0xe0
        xor edi, edi
        ; Exact mapped bytes 66 39 AE 80 01 00 00: cmp word ptr [esi + 0x180], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xae
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 AE 7E 01 00 00: mov word ptr [esi + 0x17e], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 20: jbe 0x100d95aa
        __asm _emit 0x76
        __asm _emit 0x20
        mov ecx, dword ptr [esi + 18ch]
        mov ecx, dword ptr [ecx + edi*4]
        cmp ecx, ebp
        ; Exact mapped bytes 74 05: je 0x100d959c
        __asm _emit 0x74
        __asm _emit 0x05
        mov edx, dword ptr [ecx]
        push ebx
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        xor eax, eax
        inc edi
        ; Exact mapped bytes 66 8B 86 80 01 00 00: mov ax, word ptr [esi + 0x180]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, eax
        ; Exact mapped bytes 7C E0: jl 0x100d958a
        __asm _emit 0x7c
        __asm _emit 0xe0
        mov ecx, dword ptr [esi + 188h]
        ; Exact mapped bytes 66 89 AE 80 01 00 00: mov word ptr [esi + 0x180], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 C7 31 09 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x31
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [esi + 18ch]
        push edx
        ; Exact mapped bytes E8 BB 31 09 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x31
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 144h]
        mov ecx, 0fffeh
        mov dword ptr [esi + 188h], ebp
        mov dword ptr [esi + 18ch], ebp
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        add esp, 8
        ; Exact mapped bytes 66 83 BE 9C 01 00 00 07: cmp word ptr [esi + 0x19c], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        ; Exact mapped bytes 75 2F: jne 0x100d9620
        __asm _emit 0x75
        __asm _emit 0x2f
        mov eax, dword ptr [esi + 0bch]
        ; Exact mapped bytes 66 C7 86 9C 01 00 00 04 00: mov word ptr [esi + 0x19c], 4
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0bch]
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 0b8h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0b8h]
        mov dword ptr [ecx + 50h], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
