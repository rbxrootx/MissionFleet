// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58790560 .. +0x218 bytes.
extern "C" __declspec(naked) void FUN_58790560() {
    __asm {
        push -1
        push 5898028eh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 108h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 104h], eax
        push ebx
        push ebp
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
        lea eax, [esp + 11ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov ecx, dword ptr [esi + 12198h]
        xor ebx, ebx
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x587905b7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 12198h], ebx
        mov ecx, esi
        ; Exact mapped bytes E8 22 CB FF FF: call 0x5878d0e0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 4E 24 02: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x02
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, word ptr [esi + 1219ch]
        ; Exact mapped bytes 8B 15 98 45 A2 58: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 14h]
        ; Exact mapped bytes 66 89 4A 60: mov word ptr [edx + 0x60], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x60
        mov dl, byte ptr [esi + 1219dh]
        mov edi, 0a9h
        cmp dl, bl
        ; Exact mapped bytes 76 33: jbe 0x5879061e
        __asm _emit 0x76
        __asm _emit 0x33
        cmp eax, ebx
        ; Exact mapped bytes 74 2F: je 0x5879061e
        __asm _emit 0x74
        __asm _emit 0x2f
        nop
        mov ecx, dword ptr [eax + 0ch]
        mov ebp, dword ptr [ecx + 0a4h]
        and ebp, 0fffffffeh
        cmp ebp, 2
        ; Exact mapped bytes 75 0A: jne 0x5879060b
        __asm _emit 0x75
        __asm _emit 0x0a
        mov cl, byte ptr [ecx + 5eh]
        and cl, 0fh
        cmp cl, dl
        ; Exact mapped bytes 74 09: je 0x58790614
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [eax + 8]
        cmp eax, ebx
        ; Exact mapped bytes 75 DE: jne 0x587905f0
        __asm _emit 0x75
        __asm _emit 0xde
        ; Exact mapped bytes EB 0A: jmp 0x5879061e
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 15 98 45 A2 58: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx edi, word ptr [edx + 60h]
        ; Exact mapped bytes A1 98 45 A2 58: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 78 60: mov word ptr [eax + 0x60], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x60
        mov eax, 40000000h
        mov dword ptr [esi + 90h], eax
        cmp dword ptr [esi + 94h], eax
        ; Exact mapped bytes 75 22: jne 0x5879065c
        __asm _emit 0x75
        __asm _emit 0x22
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 0e2ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 200h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        mov dword ptr [esi + 1213ch], 16h
        ; Exact mapped bytes 8B 0D 80 45 A2 58: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 89 0D 7C 45 A2 58: mov dword ptr [0x58a2457c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D BC 45 A2 58: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 30000h
        ; Exact mapped bytes E8 08 87 0F 00: call 0x58888d80
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x87
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 84 45 A2 58: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 ED 25 03 00: call 0x587c2c70
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 A0 45 A2 58: mov edx, dword ptr [0x58a245a0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 C4 B4 A0 58: mov eax, dword ptr [0x58a0b4c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 0adch]
        push eax
        ; Exact mapped bytes E8 C6 A0 08 00: call 0x5881a760
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xa0
        __asm _emit 0x08
        __asm _emit 0x00
        push 0ffh
        lea ecx, [esp + 1dh]
        push ebx
        push ecx
        mov dword ptr [esi + 0a4h], ebx
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes E8 94 C5 1E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xc5
        __asm _emit 0x1e
        __asm _emit 0x00
        mov edx, dword ptr [esi + 9a54h]
        push edx
        lea eax, [esi + 9954h]
        push eax
        lea ecx, [esp + 2ch]
        push 589977b0h
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 1ch
        cmp ecx, ebx
        ; Exact mapped bytes 75 3A: jne 0x58790719
        __asm _emit 0x75
        __asm _emit 0x3a
        push 1a0h
        ; Exact mapped bytes E8 65 C5 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xc5
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 124h], ebx
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x58790704
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, eax
        ; Exact mapped bytes E8 7E 6E 02 00: call 0x587b7580
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x6e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58790706
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, eax
        mov dword ptr [esp + 124h], 0ffffffffh
        ; Exact mapped bytes 89 0D 8C 45 A2 58: mov dword ptr [0x58a2458c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 F4 42 A2 58: mov eax, dword ptr [0x58a242f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x42
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        lea edx, [esp + 1ch]
        push edx
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 44 09 1E 00: call 0x58971070
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x09
        __asm _emit 0x1e
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b0h]
        mov dword ptr [eax + 50h], ebx
        mov ecx, dword ptr [esi + 0b4h]
        mov dword ptr [ecx + 50h], ebx
        mov edx, dword ptr [esi + 0c0h]
        mov dword ptr [edx + 50h], ebx
        mov eax, dword ptr [esi + 0c4h]
        mov dword ptr [eax + 50h], ebx
        mov ecx, dword ptr [esp + 11ch]
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
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 104h]
        xor ecx, esp
        ; Exact mapped bytes E8 69 C4 1E 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xc4
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 114h
        ret
    }
}
