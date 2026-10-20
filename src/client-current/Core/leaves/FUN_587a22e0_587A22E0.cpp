// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A22E0 .. +0x26E bytes.
extern "C" __declspec(naked) void FUN_587a22e0_587A22E0() {
    __asm {
        sub esp, 50h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 4ch], eax
        push esi
        mov esi, dword ptr [esp + 58h]
        mov ecx, dword ptr [esi + 80h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x587a23a0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 5ch]
        mov eax, edx
        shr eax, 18h
        mov byte ptr [esp + 10h], al
        mov eax, edx
        shr eax, 10h
        mov byte ptr [esp + 11h], al
        mov eax, edx
        shr eax, 8
        mov byte ptr [esp + 12h], al
        mov eax, ecx
        shr eax, 18h
        mov byte ptr [esp + 16h], al
        mov eax, ecx
        shr eax, 10h
        mov byte ptr [esp + 17h], al
        mov eax, ecx
        push 588b89c8h
        shr eax, 8
        push 0ah
        mov byte ptr [esp + 20h], al
        lea eax, [esp + 18h]
        push 40h
        push eax
        mov byte ptr [esp + 23h], dl
        ; Exact mapped bytes 66 C7 44 24 24 3A 20: mov word ptr [esp + 0x24], 0x203a
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x3a
        __asm _emit 0x20
        mov byte ptr [esp + 29h], cl
        ; Exact mapped bytes E8 B3 CF FF FF: call 0x5879f310
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esp + 20h]
        push eax
        push esi
        ; Exact mapped bytes E8 C8 D0 FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        cmp dword ptr [esi + 80h], 49444154h
        ; Exact mapped bytes 75 1F: jne 0x587a2396
        __asm _emit 0x75
        __asm _emit 0x1f
        mov dword ptr [esi + 9ch], 588b89d8h
        mov eax, 0fffffffeh
        pop esi
        mov ecx, dword ptr [esp + 4ch]
        xor ecx, esp
        ; Exact mapped bytes E8 BE EC 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xec
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 50h
        ret
        mov dword ptr [esi + 80h], 0
        mov eax, dword ptr [esi + 0c4h]
        push ebx
        mov dword ptr [esp + 8], eax
        mov eax, dword ptr [esi + 0c8h]
        push ebp
        mov ebp, dword ptr [esp + 64h]
        mov dword ptr [esp + 14h], eax
        mov eax, dword ptr [esi + 0d0h]
        mov dword ptr [esp + 10h], eax
        push edi
        mov edi, dword ptr [esi + 0cch]
        cmp ebp, 49444154h
        ; Exact mapped bytes 75 1C: jne 0x587a23ef
        __asm _emit 0x75
        __asm _emit 0x1c
        test byte ptr [esi + 78h], 1
        ; Exact mapped bytes 74 08: je 0x587a23e1
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebx, dword ptr [esi + 0d4h]
        ; Exact mapped bytes EB 38: jmp 0x587a2419
        __asm _emit 0xeb
        __asm _emit 0x38
        xor ebx, ebx
        cmp byte ptr [esi + 152h], 8
        setne bl
        ; Exact mapped bytes EB 2A: jmp 0x587a2419
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov eax, dword ptr [esi + 0d8h]
        mov edi, dword ptr [esi + 0e0h]
        mov ebx, dword ptr [esi + 0e8h]
        mov dword ptr [esp + 10h], eax
        mov eax, dword ptr [esi + 0dch]
        mov dword ptr [esp + 18h], eax
        mov eax, dword ptr [esi + 0e4h]
        mov dword ptr [esp + 14h], eax
        mov edx, dword ptr [esp + 6ch]
        cmp edx, 4000h
        ; Exact mapped bytes 77 22: ja 0x587a2447
        __asm _emit 0x77
        __asm _emit 0x22
        lea ecx, [edi - 1]
        mov eax, 1
        shl eax, cl
        lea ecx, [edx + 106h]
        cmp ecx, eax
        ; Exact mapped bytes 77 0E: ja 0x587a2447
        __asm _emit 0x77
        __asm _emit 0x0e
        ; Exact mapped bytes 0F 1F 80 00 00 00 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        shr eax, 1
        dec edi
        cmp ecx, eax
        ; Exact mapped bytes 76 F9: jbe 0x587a2440
        __asm _emit 0x76
        __asm _emit 0xf9
        mov eax, dword ptr [esi + 78h]
        mov edx, dword ptr [esp + 10h]
        test al, 2
        ; Exact mapped bytes 74 5C: je 0x587a24ae
        __asm _emit 0x74
        __asm _emit 0x5c
        cmp dword ptr [esi + 0ech], edx
        ; Exact mapped bytes 75 28: jne 0x587a2482
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, dword ptr [esp + 18h]
        cmp dword ptr [esi + 0f0h], ecx
        ; Exact mapped bytes 75 1C: jne 0x587a2482
        __asm _emit 0x75
        __asm _emit 0x1c
        cmp dword ptr [esi + 0f4h], edi
        ; Exact mapped bytes 75 14: jne 0x587a2482
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [esp + 14h]
        cmp dword ptr [esi + 0f8h], ecx
        ; Exact mapped bytes 75 08: jne 0x587a2482
        __asm _emit 0x75
        __asm _emit 0x08
        cmp dword ptr [esi + 0fch], ebx
        ; Exact mapped bytes 74 2C: je 0x587a24ae
        __asm _emit 0x74
        __asm _emit 0x2c
        lea eax, [esi + 84h]
        push eax
        ; Exact mapped bytes E8 22 AA 00 00: call 0x587aceb0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x587a24a3
        __asm _emit 0x74
        __asm _emit 0x0e
        push 588b89e8h
        push esi
        ; Exact mapped bytes E8 90 CF FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        and dword ptr [esi + 78h], 0fffffffdh
        mov eax, dword ptr [esi + 78h]
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [esi + 84h], 0
        lea ecx, [esi + 84h]
        mov dword ptr [esi + 88h], 0
        mov dword ptr [esi + 90h], 0
        mov dword ptr [esi + 94h], 0
        test al, 2
        ; Exact mapped bytes 74 2E: je 0x587a250e
        __asm _emit 0x74
        __asm _emit 0x2e
        push ecx
        ; Exact mapped bytes E8 4A AD 00 00: call 0x587ad230
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        test edi, edi
        ; Exact mapped bytes 74 44: je 0x587a2533
        __asm _emit 0x74
        __asm _emit 0x44
        push edi
        push esi
        ; Exact mapped bytes E8 8A E5 FF FF: call 0x587a0a80
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov eax, edi
        pop edi
        pop ebp
        pop ebx
        pop esi
        mov ecx, dword ptr [esp + 4ch]
        xor ecx, esp
        ; Exact mapped bytes E8 46 EB 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xeb
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 50h
        ret
        push 38h
        push 588b8a04h
        push ebx
        push dword ptr [esp + 20h]
        push edi
        push dword ptr [esp + 2ch]
        push edx
        push ecx
        ; Exact mapped bytes E8 BA AA 00 00: call 0x587acfe0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        add esp, 20h
        test edi, edi
        ; Exact mapped bytes 75 C0: jne 0x587a24ef
        __asm _emit 0x75
        __asm _emit 0xc0
        or dword ptr [esi + 78h], 2
        mov ecx, dword ptr [esp + 5ch]
        mov eax, edi
        pop edi
        mov dword ptr [esi + 80h], ebp
        pop ebp
        pop ebx
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 06 EB 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xeb
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 50h
        ret
    }
}
