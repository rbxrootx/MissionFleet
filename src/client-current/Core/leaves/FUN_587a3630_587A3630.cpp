// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A3630 .. +0x114 bytes.
extern "C" __declspec(naked) void FUN_587a3630_587A3630() {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 0ch]
        push edi
        mov dl, byte ptr [esi + 153h]
        cmp dl, 3
        ; Exact mapped bytes 75 0F: jne 0x587a3651
        __asm _emit 0x75
        __asm _emit 0x0f
        mov cl, byte ptr [esi + 154h]
        mov eax, 1
        shl eax, cl
        ; Exact mapped bytes EB 05: jmp 0x587a3656
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 100h
        test byte ptr [esi + 284h], 1
        mov edi, dword ptr [esp + 18h]
        ; Exact mapped bytes 75 04: jne 0x587a3667
        __asm _emit 0x75
        __asm _emit 0x04
        test edi, edi
        ; Exact mapped bytes 74 04: je 0x587a366b
        __asm _emit 0x74
        __asm _emit 0x04
        cmp edi, eax
        ; Exact mapped bytes 76 11: jbe 0x587a367c
        __asm _emit 0x76
        __asm _emit 0x11
        push 588b8ba4h
        push esi
        cmp dl, 3
        ; Exact mapped bytes 0F 84 CA 00 00 00: je 0x587a3744
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x587a3687
        __asm _emit 0xeb
        __asm _emit 0x0b
        test dl, 2
        ; Exact mapped bytes 75 12: jne 0x587a3693
        __asm _emit 0x75
        __asm _emit 0x12
        push 588b8bc8h
        push esi
        ; Exact mapped bytes E8 A4 BD FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        pop edi
        pop esi
        pop ecx
        ret
        lea eax, [edi + edi*2]
        ; Exact mapped bytes 66 89 BE 44 01 00 00: mov word ptr [esi + 0x144], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 504c5445h
        push esi
        ; Exact mapped bytes E8 B7 06 00 00: call 0x587a3d60
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test edi, edi
        ; Exact mapped bytes 74 4D: je 0x587a36fd
        __asm _emit 0x74
        __asm _emit 0x4d
        push ebx
        mov ebx, dword ptr [esp + 18h]
        add ebx, 2
        ; Exact mapped bytes 0F 1F 84 00 00 00 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebx - 2]
        mov byte ptr [esp + 0ch], al
        movzx eax, byte ptr [ebx - 1]
        mov byte ptr [esp + 0dh], al
        movzx eax, byte ptr [ebx]
        mov byte ptr [esp + 0eh], al
        lea eax, [esp + 0ch]
        push 3
        push eax
        push esi
        ; Exact mapped bytes E8 DC 31 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        push 3
        lea eax, [esp + 1ch]
        push eax
        push esi
        ; Exact mapped bytes E8 BF BE FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        lea ebx, [ebx + 3]
        sub edi, 1
        ; Exact mapped bytes 75 C4: jne 0x587a36c0
        __asm _emit 0x75
        __asm _emit 0xc4
        pop ebx
        mov ecx, dword ptr [esi + 13ch]
        mov eax, ecx
        shr eax, 18h
        mov byte ptr [esp + 10h], al
        mov eax, ecx
        shr eax, 10h
        mov byte ptr [esp + 11h], al
        mov eax, ecx
        shr eax, 8
        mov byte ptr [esp + 12h], al
        lea eax, [esp + 10h]
        push 4
        push eax
        push esi
        mov dword ptr [esi + 2dch], 82h
        mov byte ptr [esp + 1fh], cl
        ; Exact mapped bytes E8 87 31 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        or dword ptr [esi + 74h], 2
        pop edi
        pop esi
        pop ecx
        ret
    }
}
