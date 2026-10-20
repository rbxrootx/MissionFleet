// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58668860 .. +0x2E3 bytes.
extern "C" __declspec(naked) void FUN_58668860_58668860() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 94h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 F5 C0 E3 FF: call 0x584a4970
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xc0
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        add eax, 80h
        mov dword ptr [ebp - 20h], eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 ED F7 E1 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xf7
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x586688a5
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 6ch]
        push edx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 DC F1 E1 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xf1
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        add eax, 80h
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 70h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D4 F8 E1 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xf8
        __asm _emit 0xe1
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 0B F1 E1 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xf1
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 2A: je 0x586688f6
        __asm _emit 0x74
        __asm _emit 0x2a
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 6C F1 E1 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xf1
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 A5 C0 E1 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xc0
        __asm _emit 0xe1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x586688f4
        __asm _emit 0x74
        __asm _emit 0x15
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 59 F1 E1 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xf1
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes EB 02: jmp 0x586688f6
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB A0: jmp 0x58668896
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 85 DE 00 00 00: jne 0x586689e0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 D4 00 00 00: je 0x586689e0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 CA 00 00 00: je 0x586689e0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F0 78 FB FF: call 0x58620210
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x78
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        add eax, 80h
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        lea eax, [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 6E 16 E5 FF: call 0x584b9fb0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x16
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 80h
        mov dword ptr [ebp - 30h], ecx
        lea edx, [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 C5 F8 E1 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xf8
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        add eax, 80h
        mov dword ptr [ebp - 34h], eax
        lea ecx, [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 0D F7 E1 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xf7
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x58668985
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 78h]
        push edx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 FC F0 E1 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xf0
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        add eax, 80h
        mov dword ptr [ebp - 38h], eax
        lea ecx, [ebp - 7ch]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 F4 F7 E1 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xf7
        __asm _emit 0xe1
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 2B F0 E1 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xf0
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 2F: je 0x586689db
        __asm _emit 0x74
        __asm _emit 0x2f
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 8C F0 E1 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xf0
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 C5 BF E1 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xbf
        __asm _emit 0xe1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x586689d9
        __asm _emit 0x74
        __asm _emit 0x1a
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 79 F0 E1 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xf0
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 3ch], eax
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 3A 78 FB FF: call 0x58620210
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x78
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 02: jmp 0x586689db
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 9B: jmp 0x58668976
        __asm _emit 0xeb
        __asm _emit 0x9b
        ; Exact mapped bytes E9 5D 01 00 00: jmp 0x58668b3d
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 80h
        mov dword ptr [ebp - 40h], ecx
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 81 F6 E1 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xf6
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x58668a11
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea eax, [ebp - 80h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 70 F0 E1 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xf0
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 80h
        mov dword ptr [ebp - 44h], ecx
        lea edx, [ebp - 84h]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 64 F7 E1 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xf7
        __asm _emit 0xe1
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 9B EF E1 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xef
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 84 FD 00 00 00: je 0x58668b3d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F8 EF E1 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xef
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 85 E5 00 00 00: jne 0x58668b38
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E5 EF E1 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xef
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 49: je 0x58668aaf
        __asm _emit 0x74
        __asm _emit 0x49
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A0 77 FB FF: call 0x58620210
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x77
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        add eax, 80h
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        lea eax, [ebp - 88h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 1B 15 E5 FF: call 0x584b9fb0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x15
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 80h
        mov dword ptr [ebp - 50h], ecx
        lea edx, [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 72 F7 E1 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xf7
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        add eax, 80h
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 54h], ecx
        mov edx, dword ptr [ebp - 54h]
        push edx
        lea eax, [ebp - 8ch]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 DD 14 E5 FF: call 0x584b9fb0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x14
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 80h
        mov dword ptr [ebp - 64h], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 80h
        mov dword ptr [ebp - 5ch], edx
        lea eax, [ebp - 90h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 85 F5 E1 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xf5
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 60h], ecx
        lea edx, [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 60h]
        push eax
        lea ecx, [ebp - 94h]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 99 15 E5 FF: call 0x584ba0b0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x15
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 80h
        ; Exact mapped bytes E8 6A 15 E5 FF: call 0x584ba090
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x15
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 68h], edx
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 DB 76 FB FF: call 0x58620210
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x76
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 05: jmp 0x58668b3d
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 C5 FE FF FF: jmp 0x58668a02
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
