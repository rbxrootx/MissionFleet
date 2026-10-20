// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585506A0 .. +0x232 bytes.
extern "C" __declspec(naked) void FUN_585506a0_585506A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 54h
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 19 02 00 00: je 0x585508cc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 0F 84 0F 02 00 00: je 0x585508cc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 18h]
        cmp dword ptr [eax], 0bh
        ; Exact mapped bytes 0F 85 03 02 00 00: jne 0x585508cc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, 4
        mov dword ptr [ebp - 10h], ecx
        lea edx, [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A2 79 F3 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x79
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x585506f0
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea eax, [ebp - 40h]
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 91 73 F3 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x73
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        add ecx, 4
        mov dword ptr [ebp - 14h], ecx
        lea edx, [ebp - 44h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 8B 7A F3 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x7a
        __asm _emit 0xf3
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 C2 72 F3 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x72
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 84 B3 01 00 00: je 0x585508cc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 1F 73 F3 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x73
        __asm _emit 0xf3
        __asm _emit 0xff
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 0F 84 9D 01 00 00: je 0x585508c7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 0E 73 F3 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x73
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 B7 5A 00 00: call 0x585561f0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x5a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 86 01 00 00: je 0x585508c7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 F7 72 F3 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x72
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 82 01 00 00: call 0x585508e0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 5C: je 0x585507be
        __asm _emit 0x74
        __asm _emit 0x5c
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 D6 72 F3 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x72
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 91 4B 00 00: call 0x58555310
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x585507b9
        __asm _emit 0x74
        __asm _emit 0x36
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0B: je 0x58550794
        __asm _emit 0x74
        __asm _emit 0x0b
        push 0bh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DD D7 20 00: call 0x5875df70
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xd7
        __asm _emit 0x20
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 8]
        add ecx, 4
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        lea ecx, [ebp - 48h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 FD 97 F6 FF: call 0x584b9fb0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x97
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 13 01 00 00: jmp 0x585508cc
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 09 01 00 00: jmp 0x585508c7
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 7A 72 F3 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x72
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 F3 61 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x61
        __asm _emit 0xf3
        __asm _emit 0xff
        sub eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 54h], eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 65 72 F3 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x72
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 CE B8 F3 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xb8
        __asm _emit 0xf3
        __asm _emit 0xff
        sub eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 50h], eax
        mov edx, dword ptr [ebp - 54h]
        imul edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [ebp - 50h]
        imul eax, dword ptr [ebp - 50h]
        add edx, eax
        mov dword ptr [ebp - 0ch], edx
        mov ecx, dword ptr [ebp + 14h]
        imul ecx, dword ptr [ebp + 14h]
        cmp dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 0F 8D BC 00 00 00: jge 0x585508c7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 2A 45 F4: cvtsi2sd xmm0, dword ptr [ebp - 0xc]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xf4
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 03 08 30 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x08
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 6B 0A 2E 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x0a
        __asm _emit 0x2e
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [edx + 8]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes E8 99 3B F9 FF: call 0x584e43e0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x3b
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [eax + 14h], 0
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ecx + 10h], 0ffffffffh
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [edx + 0ch], 2
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [edx + 4], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 43: je 0x585508c7
        __asm _emit 0x74
        __asm _emit 0x43
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 B4 71 F3 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x71
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 6F 4A 00 00: call 0x58555310
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x585508c7
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 8]
        add eax, 4
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        lea eax, [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 EC 96 F6 FF: call 0x584b9fb0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x96
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 05: jmp 0x585508cc
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 15 FE FF FF: jmp 0x585506e1
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
