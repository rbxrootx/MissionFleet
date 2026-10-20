// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B2C70 .. +0x2C3 bytes.
extern "C" __declspec(naked) void FUN_587b2c70_587B2C70() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5889204dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 4ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 70 52 CD FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x52
        __asm _emit 0xcd
        __asm _emit 0xff
        push eax
        movzx eax, byte ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 C2 63 CF FF: call 0x584a9070
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x63
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 61 52 CD FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x52
        __asm _emit 0xcd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 59 52 CD FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x52
        __asm _emit 0xcd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 14h]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 20h]
        add eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 3ch]
        sub ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes 77 06: ja 0x587b2d15
        __asm _emit 0x77
        __asm _emit 0x06
        mov byte ptr [ebp - 0dh], 1
        ; Exact mapped bytes EB 04: jmp 0x587b2d19
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebp - 0dh], 0
        mov dl, byte ptr [ebp - 0dh]
        mov byte ptr [ebp - 0fh], dl
        movzx eax, byte ptr [ebp - 0fh]
        test eax, eax
        ; Exact mapped bytes 74 61: je 0x587b2d88
        __asm _emit 0x74
        __asm _emit 0x61
        mov ecx, dword ptr [ebp - 40h]
        cmp ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 77 59: ja 0x587b2d88
        __asm _emit 0x77
        __asm _emit 0x59
        xor edx, edx
        mov byte ptr [ebp - 10h], dl
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 90 50 CD FF: call 0x58487dd0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x50
        __asm _emit 0xcd
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 B3 B1 D6 FF: call 0x5851df00
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xb1
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 AB FD D4 FF: call 0x58502b00
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xfd
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov edx, dword ptr [ebp - 28h]
        add edx, 1
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 99 FD D4 FF: call 0x58502b00
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xfd
        __asm _emit 0xd4
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 54h]
        lea edx, [ecx + eax*2]
        push edx
        ; Exact mapped bytes E8 29 00 D5 FF: call 0x58502da0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0xd5
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [eax + 10h], ecx
        ; Exact mapped bytes E9 90 01 00 00: jmp 0x587b2f18
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 40h]
        sub edx, dword ptr [ebp - 28h]
        cmp dword ptr [ebp - 20h], edx
        ; Exact mapped bytes 77 06: ja 0x587b2d99
        __asm _emit 0x77
        __asm _emit 0x06
        mov byte ptr [ebp - 0eh], 1
        ; Exact mapped bytes EB 04: jmp 0x587b2d9d
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebp - 0eh], 0
        mov al, byte ptr [ebp - 0eh]
        mov byte ptr [ebp - 11h], al
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 65 51 CD FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x51
        __asm _emit 0xcd
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 5C 51 CD FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x51
        __asm _emit 0xcd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 16 FA FF FF: call 0x587b27d0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 7B: je 0x587b2e3f
        __asm _emit 0x74
        __asm _emit 0x7b
        movzx edx, byte ptr [ebp - 11h]
        test edx, edx
        ; Exact mapped bytes 74 73: je 0x587b2e3f
        __asm _emit 0x74
        __asm _emit 0x73
        xor eax, eax
        mov byte ptr [ebp - 12h], al
        lea ecx, [ebp - 12h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 F3 4F CD FF: call 0x58487dd0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x4f
        __asm _emit 0xcd
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 16 B1 D6 FF: call 0x5851df00
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xb1
        __asm _emit 0xd6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 BB 44 CD FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x44
        __asm _emit 0xcd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov edx, dword ptr [ebp - 28h]
        add edx, 1
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 38h]
        lea eax, [edx + ecx*2]
        push eax
        ; Exact mapped bytes E8 8B FF D4 FF: call 0x58502da0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xd4
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 DC FC D4 FF: call 0x58502b00
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xfc
        __asm _emit 0xd4
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 38h]
        push edx
        ; Exact mapped bytes E8 72 FF D4 FF: call 0x58502da0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xd4
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [eax + 10h], ecx
        ; Exact mapped bytes E9 D9 00 00 00: jmp 0x587b2f18
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 C9 07 D5 FF: call 0x58503610
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x07
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov edx, dword ptr [ebp - 44h]
        sub edx, dword ptr [ebp - 20h]
        cmp edx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 73 06: jae 0x587b2e5b
        __asm _emit 0x73
        __asm _emit 0x06
        ; Exact mapped bytes E8 16 77 CF FF: call 0x584aa570
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x77
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 44h]
        push eax
        push 7
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        ; Exact mapped bytes E8 B6 FB D4 FF: call 0x58502a20
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xfb
        __asm _emit 0xd4
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 48h], eax
        xor edx, edx
        mov byte ptr [ebp - 15h], dl
        lea eax, [ebp - 16h]
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 58h]
        push edx
        lea ecx, [ebp - 13h]
        ; Exact mapped bytes E8 95 F4 CE FF: call 0x584a2320
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xce
        __asm _emit 0xff
        lea eax, [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 79 50 CD FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x50
        __asm _emit 0xcd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 D3 E3 D4 FF: call 0x58501270
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xe3
        __asm _emit 0xd4
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4ch], eax
        lea ecx, [ebp - 4ch]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 10 3F CD FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x3f
        __asm _emit 0xcd
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [eax + 10h], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [edx + 14h], eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        ; Exact mapped bytes E8 E2 43 CD FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x43
        __asm _emit 0xcd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 20 FC D4 FF: call 0x58502b00
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xfc
        __asm _emit 0xd4
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 50h]
        push eax
        ; Exact mapped bytes E8 B6 FE D4 FF: call 0x58502da0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xfe
        __asm _emit 0xd4
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 04 FC D4 FF: call 0x58502b00
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xfc
        __asm _emit 0xd4
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 50h]
        lea ecx, [eax + edx*2]
        push ecx
        ; Exact mapped bytes E8 94 FE D4 FF: call 0x58502da0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xd4
        __asm _emit 0xff
        add esp, 0ch
        lea ecx, [ebp - 13h]
        ; Exact mapped bytes E8 19 50 CD FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x50
        __asm _emit 0xcd
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
