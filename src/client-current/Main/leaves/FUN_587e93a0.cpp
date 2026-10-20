// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E93A0 .. +0x220 bytes.
extern "C" __declspec(naked) void FUN_587e93a0() {
    __asm {
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 20d34h]
        push edi
        mov edi, 1
        mov eax, 8
        mov dword ptr [esi + 10474h], 10000000h
        mov dword ptr [esi + 10554h], ebx
        mov dword ptr [esi + 120h], edi
        mov dword ptr [esi + 380h], ebx
        mov dword ptr [esi + 384h], ebx
        mov dword ptr [esi + 3a0h], ebx
        mov dword ptr [esi + 38ch], edi
        mov dword ptr [esi + 3a4h], ebx
        mov dword ptr [esi + 10534h], ebx
        mov dword ptr [esi + 1053ch], ebx
        mov dword ptr [esi + 10538h], ebx
        mov dword ptr [esi + 37ch], ebx
        mov dword ptr [esi + 20d24h], ebx
        ; Exact mapped bytes 66 89 86 20 0D 02 00: mov word ptr [esi + 0x20d20], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [esi + 104ech], ebx
        mov dword ptr [esi + 104f0h], edi
        mov dword ptr [esi + 104f4h], ebx
        mov dword ptr [esi + 104e0h], ebx
        mov dword ptr [esi + 104e4h], 320h
        mov dword ptr [esi + 1049ch], ebx
        mov dword ptr [esi + 10a14h], 0ffffffffh
        ; Exact mapped bytes E8 A9 F3 11 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf3
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 20d34h]
        push 262h
        ; Exact mapped bytes E8 09 9F 11 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x9f
        __asm _emit 0x11
        __asm _emit 0x00
        lea ecx, [esi + 0e0h]
        lea edx, [ebx + 8]
        push ebp
        mov eax, dword ptr [ecx]
        mov ebp, 0fffeh
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        add ecx, 4
        sub edx, edi
        ; Exact mapped bytes 75 EE: jne 0x587e9461
        __asm _emit 0x75
        __asm _emit 0xee
        mov eax, 0aaaaaaaah
        mov dword ptr [esi + 109f4h], eax
        mov dword ptr [esi + 109f8h], eax
        mov dword ptr [esi + 109fch], eax
        mov dword ptr [esi + 10a00h], eax
        mov dword ptr [esi + 10a04h], eax
        mov dword ptr [esi + 10a08h], eax
        mov dword ptr [esi + 10a0ch], eax
        mov dword ptr [esi + 10a10h], eax
        lea edi, [esi + 10be8h]
        lea ebp, [edx + 4]
        mov ecx, dword ptr [edi - 14h]
        push ebx
        ; Exact mapped bytes E8 A6 DE 11 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xde
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push ebx
        ; Exact mapped bytes E8 9E DE 11 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xde
        __asm _emit 0x11
        __asm _emit 0x00
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 E7: jne 0x587e94b1
        __asm _emit 0x75
        __asm _emit 0xe7
        mov ecx, dword ptr [esi + 10be4h]
        push ebx
        ; Exact mapped bytes E8 8A DE 11 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xde
        __asm _emit 0x11
        __asm _emit 0x00
        push 200h
        lea ecx, [esi + 178h]
        push ebx
        push ecx
        ; Exact mapped bytes E8 60 37 19 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x37
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 10524h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        add esp, 0ch
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 10b94h]
        mov dword ptr [esi + 10b90h], ecx
        ; Exact mapped bytes 8B 0D 80 47 A2 58: mov ecx, dword ptr [0x58a24780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        pop ebp
        cmp ecx, ebx
        ; Exact mapped bytes 74 07: je 0x587e9516
        __asm _emit 0x74
        __asm _emit 0x07
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 10b90h]
        ; Exact mapped bytes 89 0D 80 47 A2 58: mov dword ptr [0x58a24780], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 1D FC 44 A2 58: cmp dword ptr [0x58a244fc], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 26: je 0x587e9550
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [esi + 10b90h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 1C: je 0x587e9550
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes A1 D4 48 A2 58: mov eax, dword ptr [0x58a248d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [edx + 0ch]
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 10b90h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 81 0D 0C 45 A2 58 00 00 01 00: or dword ptr [0x58a2450c], 0x10000
        __asm _emit 0x81
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 0d8h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        and cl, 1fh
        cmp cl, 2
        ; Exact mapped bytes 75 13: jne 0x587e9588
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 15 B4 45 A2 58: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 0d8h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 18h]
        add eax, 400h
        mov dword ptr [esi + 1ch], eax
        add ecx, 300h
        mov dword ptr [esi + 20h], ecx
        mov esi, dword ptr [esi + 10524h]
        mov edx, dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 18h]
        add edx, 400h
        add eax, 300h
        pop edi
        mov dword ptr [esi + 1ch], edx
        mov dword ptr [esi + 20h], eax
        pop esi
        pop ebx
        ret
    }
}
