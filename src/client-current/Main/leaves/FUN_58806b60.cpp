// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58806B60 .. +0x2D0 bytes.
extern "C" __declspec(naked) void FUN_58806b60() {
    __asm {
        push -1
        push 58982c9bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        push ebx
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 14h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov eax, dword ptr [esi + 174h]
        ; Exact mapped bytes 66 83 48 24 02: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov dword ptr [esi + 300h], 190h
        xor ebx, ebx
        mov dword ptr [esi + 2f0h], ebx
        mov dword ptr [esi + 2f4h], ebx
        mov dword ptr [esi + 2fch], ebx
        mov ecx, 0e1ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 100h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 4E 24 05: or word ptr [esi + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x05
        ; Exact mapped bytes A1 80 45 A2 58: mov eax, dword ptr [0x58a24580]
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        or edi, 0ffffffffh
        ; Exact mapped bytes A3 7C 45 A2 58: mov dword ptr [0x58a2457c], eax
        __asm _emit 0xa3
        __asm _emit 0x7c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 89 35 80 45 A2 58: mov dword ptr [0x58a24580], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 1D 34 90 9C 58: cmp dword ptr [0x589c9034], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0x34
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 74 34: je 0x58806c1b
        __asm _emit 0x74
        __asm _emit 0x34
        cmp dword ptr [esi + 60h], ebx
        ; Exact mapped bytes 75 2F: jne 0x58806c1b
        __asm _emit 0x75
        __asm _emit 0x2f
        push 30h
        ; Exact mapped bytes E8 5B 60 17 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x60
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 1ch], ebx
        cmp eax, ebx
        ; Exact mapped bytes 74 10: je 0x58806c12
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D E4 8F 9C 58: mov ecx, dword ptr [0x589c8fe4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x8f
        __asm _emit 0x9c
        __asm _emit 0x58
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 E0 37 10 00: call 0x5890a3f0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x37
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58806c14
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esp + 1ch], edi
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes 8B 0D 80 47 A2 58: mov ecx, dword ptr [0x58a24780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, ebx
        ; Exact mapped bytes 74 07: je 0x58806c2c
        __asm _emit 0x74
        __asm _emit 0x07
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 60h]
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
        ; Exact mapped bytes 74 20: je 0x58806c5d
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [esi + 60h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 19: je 0x58806c5d
        __asm _emit 0x74
        __asm _emit 0x19
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
        mov ecx, dword ptr [esi + 60h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 7B C0 0F 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xc0
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [esi + 58h], 100h
        ; Exact mapped bytes 8B 0D FC 47 A2 58: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push 40000h
        ; Exact mapped bytes E8 54 9F 0B 00: call 0x588c0bd0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x9f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [esi + 0b0h], ebx
        mov dword ptr [esi + 0b4h], ebx
        mov dword ptr [esi + 0b8h], ebx
        mov dword ptr [esi + 6ch], ebx
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 220000h
        ; Exact mapped bytes E8 BF CB 08 00: call 0x58893860
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xcb
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes A1 C0 45 A2 58: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 150h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        movzx ecx, word ptr [esi + 110h]
        push ecx
        mov ecx, dword ptr [esi + 174h]
        ; Exact mapped bytes E8 2A E7 09 00: call 0x588a53f0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xe7
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 174h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes A1 6C 45 A2 58: mov eax, dword ptr [0x58a2456c]
        __asm _emit 0xa1
        __asm _emit 0x6c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, word ptr [eax + 24h]
        add eax, 24h
        mov edx, 0fffeh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes A1 70 45 A2 58: mov eax, dword ptr [0x58a24570]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, word ptr [eax + 24h]
        add eax, 24h
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes A1 10 48 A2 58: mov eax, dword ptr [0x58a24810]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 4], ebx
        ; Exact mapped bytes 75 1C: jne 0x58806d22
        __asm _emit 0x75
        __asm _emit 0x1c
        mov dword ptr [eax + 4], 1
        cmp dword ptr [eax + 482ch], edi
        ; Exact mapped bytes 74 0D: je 0x58806d22
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 4820h]
        push eax
        ; Exact mapped bytes FF 15 C0 C0 98 58: call dword ptr [0x5898c0c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [ecx + 21c38h], ebx
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [edx + 21c34h], ebx
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 202h
        ; Exact mapped bytes E8 16 C6 0F 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xc6
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE 10 01 00 00 0A: cmp word ptr [esi + 0x110], 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0a
        mov eax, dword ptr [esi + 248h]
        mov byte ptr [esi + 278h], bl
        ; Exact mapped bytes 75 07: jne 0x58806d67
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes EB 09: jmp 0x58806d70
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 8
        mov dword ptr [esi + 2c4h], ebx
        mov dword ptr [esi + 2c8h], 0fah
        mov dword ptr [esi + 2cch], ebx
        mov dword ptr [esi + 2d0h], ebx
        mov dword ptr [esi + 2d4h], ebx
        mov dword ptr [esi + 2d8h], ebx
        mov dword ptr [esi + 2dch], ebx
        mov dword ptr [esi + 2e4h], ebx
        mov dword ptr [esi + 2e8h], ebx
        mov dword ptr [esi + 2ech], ebx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 2
        ; Exact mapped bytes E8 C1 EE FD FF: call 0x587e5c80
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xee
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 C0 45 A2 58: mov edx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [edx + 0b8h], 2
        ; Exact mapped bytes A1 C0 45 A2 58: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [eax + 154h]
        mov ecx, dword ptr [edi + 80h]
        push 5898d61ch
        push ecx
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [edi + 80h]
        lea edx, [eax + 1]
        mov cl, byte ptr [eax]
        inc eax
        cmp cl, bl
        ; Exact mapped bytes 75 F9: jne 0x58806df5
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        mov dword ptr [edi + 8ch], eax
        mov dword ptr [edi + 94h], eax
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 1
        ; Exact mapped bytes E8 D9 5F 08 00: call 0x5888cdf0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x5f
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [esi + 2c0h], ebx
        mov ecx, dword ptr [esp + 14h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        add esp, 10h
        ret
    }
}
