// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A5620 .. +0x118 bytes.
extern "C" __declspec(naked) void FUN_587a5620_587A5620() {
    __asm {
        sub esp, 48h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 44h], eax
        mov ecx, dword ptr [esp + 54h]
        push ebx
        mov ebx, dword ptr [esp + 50h]
        push ebp
        mov ebp, dword ptr [esp + 60h]
        push esi
        mov esi, ecx
        mov dword ptr [esp + 0ch], ebp
        push edi
        lea edx, [esi + 1]
        mov al, byte ptr [esi]
        inc esi
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x587a5647
        __asm _emit 0x75
        __asm _emit 0xf9
        mov edi, ebp
        sub esi, edx
        lea edx, [edi + 1]
        mov al, byte ptr [edi]
        inc edi
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x587a5655
        __asm _emit 0x75
        __asm _emit 0xf9
        sub edi, edx
        lea ebp, [edi + 2]
        add ebp, esi
        cmp ebp, 40h
        ; Exact mapped bytes 76 21: jbe 0x587a5689
        __asm _emit 0x76
        __asm _emit 0x21
        push 588b8ff8h
        push ebx
        ; Exact mapped bytes E8 BD 9D FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 44h]
        xor ecx, esp
        ; Exact mapped bytes E8 CB B9 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xb9
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 48h
        ret
        mov al, byte ptr [esp + 60h]
        mov byte ptr [esp + 14h], al
        lea eax, [esi + 1]
        push eax
        push ecx
        lea eax, [esp + 1dh]
        push eax
        ; Exact mapped bytes E8 F0 71 0A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x71
        __asm _emit 0x0a
        __asm _emit 0x00
        push edi
        push dword ptr [esp + 20h]
        lea eax, [esp + 2ah]
        add eax, esi
        push eax
        ; Exact mapped bytes E8 DF 71 0A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x71
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 18h
        test ebx, ebx
        ; Exact mapped bytes 74 6D: je 0x587a5725
        __asm _emit 0x74
        __asm _emit 0x6d
        push ebp
        push 7343414ch
        push ebx
        ; Exact mapped bytes E8 9C E6 FF FF: call 0x587a3d60
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test ebp, ebp
        ; Exact mapped bytes 74 1B: je 0x587a56e6
        __asm _emit 0x74
        __asm _emit 0x1b
        push ebp
        lea eax, [esp + 18h]
        push eax
        push ebx
        ; Exact mapped bytes E8 E9 11 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        lea eax, [esp + 24h]
        push eax
        push ebx
        ; Exact mapped bytes E8 CD 9E FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        mov ecx, dword ptr [ebx + 13ch]
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
        push ebx
        mov dword ptr [ebx + 2dch], 82h
        mov byte ptr [esp + 1fh], cl
        ; Exact mapped bytes E8 9E 11 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [esp + 54h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 1C B9 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xb9
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 48h
        ret
    }
}
