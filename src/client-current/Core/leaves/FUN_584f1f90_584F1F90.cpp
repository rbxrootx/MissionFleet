// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F1F90 .. +0x2BB bytes.
extern "C" __declspec(naked) void FUN_584f1f90_584F1F90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 78h
        push esi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        add eax, 58h
        mov dword ptr [ebp - 28h], eax
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 D1 60 F9 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x60
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584f1fc1
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 5ch]
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 C0 5A F9 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x5a
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 0ch]
        add eax, 58h
        mov dword ptr [ebp - 2ch], eax
        lea ecx, [ebp - 60h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 BA 61 F9 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x61
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F1 59 F9 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x59
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 5E 02 00 00: je 0x584f2248
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 4E 5A F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x5a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 37 0F 00 00: call 0x584f2f30
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 78 60 F9 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x60
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584f201a
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea ecx, [ebp - 64h]
        push ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 67 5A F9 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x5a
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 1E 5A F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x5a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 07 0F 00 00: call 0x584f2f30
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        lea edx, [ebp - 68h]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 58 61 F9 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x61
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 8F 59 F9 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x59
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 84 F7 01 00 00: je 0x584f2243
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 EC 59 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x59
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 45 A4 F9 FF: call 0x5848c4a0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xa4
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 16 60 F9 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x60
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584f207c
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 6ch]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 05 5A F9 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x5a
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 BC 59 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x59
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 15 A4 F9 FF: call 0x5848c4a0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        lea eax, [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 F6 60 F9 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x60
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 2D 59 F9 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x59
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 84 90 01 00 00: je 0x584f223e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 0ch]
        add edx, 64h
        mov dword ptr [ebp - 40h], edx
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 B6 5F F9 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x5f
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584f20dc
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea ecx, [ebp - 74h]
        push ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 55 6F F9 FF: call 0x58489030
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x6f
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 0ch]
        add edx, 64h
        mov dword ptr [ebp - 44h], edx
        lea eax, [ebp - 78h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 9F 60 F9 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x60
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 D6 58 F9 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x58
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 84 12 01 00 00: je 0x584f2217
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 33 59 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x59
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 48h], edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 25 59 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x59
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 BE 9D F9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x9d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CB 06 00 00: call 0x584f2800
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 0F 85 D4 00 00 00: jne 0x584f2212
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 FA 58 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x58
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 93 9D F9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x9d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6C 48 F9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x48
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esi, eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 E2 58 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x58
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 7B AF F9 FF: call 0x5848d0e0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xaf
        __asm _emit 0xf9
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 1ch], esi
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 CE 58 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x58
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 67 9D F9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x9d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 30 9F F9 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x9f
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esi, eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 B6 58 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x58
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 6F AF F9 FF: call 0x5848d100
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xaf
        __asm _emit 0xf9
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 20h], esi
        mov edx, dword ptr [ebp - 1ch]
        imul edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 20h]
        imul eax, dword ptr [ebp - 20h]
        add edx, eax
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes F2 0F 2A 45 E8: cvtsi2sd xmm0, dword ptr [ebp - 0x18]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xe8
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 65 EE 35 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xee
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 CD F0 33 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xf0
        __asm _emit 0x33
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 72 58 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x58
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 0B 9D F9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x9d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D4 37 FA FF: call 0x584959b0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x37
        __asm _emit 0xfa
        __asm _emit 0xff
        shl eax, 1
        cmp dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 7D 2F: jge 0x584f2212
        __asm _emit 0x7d
        __asm _emit 0x2f
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 55 58 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x58
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 54h], ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 48 58 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x58
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 C7 18 00 00: call 0x584f3ad0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 1
        ; Exact mapped bytes EB 05: jmp 0x584f2217
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 B6 FE FF FF: jmp 0x584f20cd
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 04: je 0x584f2221
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes EB 1F: jmp 0x584f223e
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes EB 18: jmp 0x584f2239
        __asm _emit 0xeb
        __asm _emit 0x18
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 17 58 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x58
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 58h], ecx
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 98 18 00 00: call 0x584f3ad0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 2F FE FF FF: jmp 0x584f206d
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 C8 FD FF FF: jmp 0x584f200b
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 6A FD FF FF: jmp 0x584f1fb2
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov esp, ebp
    }
}
