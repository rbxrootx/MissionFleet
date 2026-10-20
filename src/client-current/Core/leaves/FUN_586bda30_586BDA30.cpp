// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586BDA30 .. +0x6F7 bytes.
extern "C" __declspec(naked) void FUN_586bda30_586BDA30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 6ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 28h], ecx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 C3 7C F2 FF: call 0x585e5710
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x7c
        __asm _emit 0xf2
        __asm _emit 0xff
        xor eax, eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 66 89 81 92 00 00 00: mov word ptr [ecx + 0x92], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 74 1F: je 0x586bda7e
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 28h]
        cmp dword ptr [edx + 68h], 1
        ; Exact mapped bytes 75 11: jne 0x586bda79
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 E8 66 00 00: call 0x586c4160
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 99 06 00 00: jmp 0x586be117
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        lea edx, [ebp + 10h]
        push edx
        lea eax, [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 03 EE 18 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xee
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 34h]
        add edx, 7ffd3effh
        mov dword ptr [ebp - 34h], edx
        cmp dword ptr [ebp - 34h], 5
        ; Exact mapped bytes 0F 87 6B 06 00 00: ja 0x586be117
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x6b
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 24 85 28 E1 6B 58: jmp dword ptr [eax*4 + 0x586be128]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0xe1
        __asm _emit 0x6b
        __asm _emit 0x58
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 20: je 0x586bdadc
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 84 F7 FF FF: call 0x586bd250
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        push 1004h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 E7 AD 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x586bdaea
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0fa2h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 D7 AD 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 28 06 00 00: jmp 0x586be117
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 13: jne 0x586bdb08
        __asm _emit 0x75
        __asm _emit 0x13
        push 0fa2h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 BE AD 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 0F 06 00 00: jmp 0x586be117
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 2ah]
        sub eax, 1
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        sub ecx, 1
        mov dword ptr [ebp - 38h], ecx
        cmp dword ptr [ebp - 38h], 0eh
        ; Exact mapped bytes 0F 87 00 01 00 00: ja 0x586bdc25
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 24 95 40 E1 6B 58: jmp dword ptr [edx*4 + 0x586be140]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x40
        __asm _emit 0xe1
        __asm _emit 0x6b
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 4ch], eax
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 09: jmp 0x586bdb47
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 1
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp - 30h], 8
        ; Exact mapped bytes 7D 13: jge 0x586bdb60
        __asm _emit 0x7d
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4ch]
        add edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp - 30h]
        mov cl, byte ptr [edx]
        mov byte ptr [eax + 5896055ch], cl
        ; Exact mapped bytes EB DE: jmp 0x586bdb3e
        __asm _emit 0xeb
        __asm _emit 0xde
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 A6 4F 00 00: call 0x586c2b10
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B B4 EF FF: call 0x585b8f80
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xb4
        __asm _emit 0xef
        __asm _emit 0xff
        push 1068h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 3E AD 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 9D 00 00 00: jmp 0x586bdc25
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 28: je 0x586bdbb6
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes E8 5D 96 E1 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        push 0
        push 0
        push 0
        push 1774h
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 C7 B1 E1 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xb1
        __asm _emit 0xe1
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 5D 4F 00 00: call 0x586c2b10
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 6F: jmp 0x586bdc25
        __asm _emit 0xeb
        __asm _emit 0x6f
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 44h], edx
        cmp dword ptr [ebp - 44h], 2
        ; Exact mapped bytes 74 0B: je 0x586bdbcd
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 44h], 0cbh
        ; Exact mapped bytes 74 20: je 0x586bdbeb
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes EB 3C: jmp 0x586bdc09
        __asm _emit 0xeb
        __asm _emit 0x3c
        ; Exact mapped bytes E8 1E 96 E1 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x96
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        push 0
        push 0
        push 0
        push 1775h
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 88 B1 E1 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xb1
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3A: jmp 0x586bdc25
        __asm _emit 0xeb
        __asm _emit 0x3a
        ; Exact mapped bytes E8 00 96 E1 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x96
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        push 0
        push 0
        push 0
        push 1776h
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 6A B1 E1 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xb1
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1C: jmp 0x586bdc25
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 E2 95 E1 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x95
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        push 0
        push 0
        push 0
        push 1776h
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 4C B1 E1 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xb1
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 ED 04 00 00: jmp 0x586be117
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 75: je 0x586bdca5
        __asm _emit 0x74
        __asm _emit 0x75
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB 31 0C 00: call 0x58780e20
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x31
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 A0 EE FF: call 0x585a7ca0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xa0
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 94 E1 FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x94
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EE DD FE FF: call 0x586aba50
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 A4 4E 00 00: call 0x586c2b10
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 3ch]
        cmp dword ptr [edx + 170h], 1
        ; Exact mapped bytes 74 0C: je 0x586bdc85
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 3ch]
        cmp dword ptr [eax + 170h], 2
        ; Exact mapped bytes 75 10: jne 0x586bdc95
        __asm _emit 0x75
        __asm _emit 0x10
        push 10cfh
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 2E AC 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x586bdca3
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 10cch
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 1E AC 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x586bdcb3
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0fa2h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 0E AC 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 5F 04 00 00: jmp 0x586be117
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 2ch]
        sub ecx, 1
        ; Exact mapped bytes 66 89 4D D4: mov word ptr [ebp - 0x2c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd4
        movzx edx, word ptr [ebp - 2ah]
        sub edx, 1
        ; Exact mapped bytes 66 89 55 D6: mov word ptr [ebp - 0x2a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xd6
        movzx eax, word ptr [ebp - 2ah]
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x586bdcee
        __asm _emit 0x75
        __asm _emit 0x18
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 12: je 0x586bdcee
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 C8 FB FF FF: call 0x586bd8b0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 8D 02 00 00: jmp 0x586bdf7b
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 2ah]
        cmp edx, 1
        ; Exact mapped bytes 75 1D: jne 0x586bdd14
        __asm _emit 0x75
        __asm _emit 0x1d
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 17: je 0x586bdd14
        __asm _emit 0x74
        __asm _emit 0x17
        push 0
        mov eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 52 F8 FF FF: call 0x586bd560
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 67 02 00 00: jmp 0x586bdf7b
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 2ah]
        cmp edx, 2
        ; Exact mapped bytes 75 1D: jne 0x586bdd3a
        __asm _emit 0x75
        __asm _emit 0x1d
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 17: je 0x586bdd3a
        __asm _emit 0x74
        __asm _emit 0x17
        push 1
        mov eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 2C F8 FF FF: call 0x586bd560
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 41 02 00 00: jmp 0x586bdf7b
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 2ah]
        cmp edx, 3
        ; Exact mapped bytes 75 1D: jne 0x586bdd60
        __asm _emit 0x75
        __asm _emit 0x1d
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 17: je 0x586bdd60
        __asm _emit 0x74
        __asm _emit 0x17
        push 0
        mov eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 26 F6 FF FF: call 0x586bd380
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 1B 02 00 00: jmp 0x586bdf7b
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 2ah]
        cmp edx, 4
        ; Exact mapped bytes 75 12: jne 0x586bdd7b
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 3B FA FF FF: call 0x586bd7b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 00 02 00 00: jmp 0x586bdf7b
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 2ah]
        cmp ecx, 5
        ; Exact mapped bytes 75 1D: jne 0x586bdda1
        __asm _emit 0x75
        __asm _emit 0x1d
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 17: je 0x586bdda1
        __asm _emit 0x74
        __asm _emit 0x17
        push 1
        mov edx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 E5 F5 FF FF: call 0x586bd380
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 DA 01 00 00: jmp 0x586bdf7b
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 2ah]
        cmp ecx, 18h
        ; Exact mapped bytes 7C 21: jl 0x586bddcb
        __asm _emit 0x7c
        __asm _emit 0x21
        movzx edx, word ptr [ebp - 2ah]
        cmp edx, 1fh
        ; Exact mapped bytes 7F 18: jg 0x586bddcb
        __asm _emit 0x7f
        __asm _emit 0x18
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 12: je 0x586bddcb
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 FB F0 FF FF: call 0x586bcec0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B0 01 00 00: jmp 0x586bdf7b
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 2ah]
        cmp ecx, 29h
        ; Exact mapped bytes 74 0F: je 0x586bdde3
        __asm _emit 0x74
        __asm _emit 0x0f
        movzx edx, word ptr [ebp - 2ah]
        cmp edx, 2ah
        ; Exact mapped bytes 75 20: jne 0x586bddfd
        __asm _emit 0x75
        __asm _emit 0x20
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 1A: je 0x586bddfd
        __asm _emit 0x74
        __asm _emit 0x1a
        movzx eax, word ptr [ebp - 2ah]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 79 F2 FF FF: call 0x586bd070
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 7E 01 00 00: jmp 0x586bdf7b
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 2ah]
        cmp eax, 2bh
        ; Exact mapped bytes 75 1D: jne 0x586bde23
        __asm _emit 0x75
        __asm _emit 0x1d
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 17: je 0x586bde23
        __asm _emit 0x74
        __asm _emit 0x17
        push 2
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 63 F5 FF FF: call 0x586bd380
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 58 01 00 00: jmp 0x586bdf7b
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 2ah]
        cmp eax, 10h
        ; Exact mapped bytes 75 1D: jne 0x586bde49
        __asm _emit 0x75
        __asm _emit 0x1d
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 17: je 0x586bde49
        __asm _emit 0x74
        __asm _emit 0x17
        push 2
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 1D F7 FF FF: call 0x586bd560
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 32 01 00 00: jmp 0x586bdf7b
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 2ah]
        cmp eax, 11h
        ; Exact mapped bytes 75 1D: jne 0x586bde6f
        __asm _emit 0x75
        __asm _emit 0x1d
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 17: je 0x586bde6f
        __asm _emit 0x74
        __asm _emit 0x17
        push 5
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 F7 F6 FF FF: call 0x586bd560
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 0C 01 00 00: jmp 0x586bdf7b
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 2ah]
        cmp eax, 12h
        ; Exact mapped bytes 75 1D: jne 0x586bde95
        __asm _emit 0x75
        __asm _emit 0x1d
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 17: je 0x586bde95
        __asm _emit 0x74
        __asm _emit 0x17
        push 8
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 D1 F6 FF FF: call 0x586bd560
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E6 00 00 00: jmp 0x586bdf7b
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 2ah]
        cmp eax, 13h
        ; Exact mapped bytes 75 1D: jne 0x586bdebb
        __asm _emit 0x75
        __asm _emit 0x1d
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 17: je 0x586bdebb
        __asm _emit 0x74
        __asm _emit 0x17
        push 3
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 AB F6 FF FF: call 0x586bd560
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C0 00 00 00: jmp 0x586bdf7b
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 2ah]
        cmp eax, 14h
        ; Exact mapped bytes 75 1D: jne 0x586bdee1
        __asm _emit 0x75
        __asm _emit 0x1d
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 17: je 0x586bdee1
        __asm _emit 0x74
        __asm _emit 0x17
        push 6
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 85 F6 FF FF: call 0x586bd560
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x586bdf7b
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 2ah]
        cmp eax, 15h
        ; Exact mapped bytes 75 1A: jne 0x586bdf04
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 14: je 0x586bdf04
        __asm _emit 0x74
        __asm _emit 0x14
        push 9
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 5F F6 FF FF: call 0x586bd560
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 77: jmp 0x586bdf7b
        __asm _emit 0xeb
        __asm _emit 0x77
        movzx eax, word ptr [ebp - 2ah]
        cmp eax, 2ch
        ; Exact mapped bytes 75 1A: jne 0x586bdf27
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 14: je 0x586bdf27
        __asm _emit 0x74
        __asm _emit 0x14
        push 4
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 3C F6 FF FF: call 0x586bd560
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 54: jmp 0x586bdf7b
        __asm _emit 0xeb
        __asm _emit 0x54
        movzx eax, word ptr [ebp - 2ah]
        cmp eax, 2dh
        ; Exact mapped bytes 75 1A: jne 0x586bdf4a
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 14: je 0x586bdf4a
        __asm _emit 0x74
        __asm _emit 0x14
        push 7
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 19 F6 FF FF: call 0x586bd560
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 31: jmp 0x586bdf7b
        __asm _emit 0xeb
        __asm _emit 0x31
        movzx eax, word ptr [ebp - 2ah]
        cmp eax, 2eh
        ; Exact mapped bytes 75 1A: jne 0x586bdf6d
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 14: je 0x586bdf6d
        __asm _emit 0x74
        __asm _emit 0x14
        push 0ah
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 F6 F5 FF FF: call 0x586bd560
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0E: jmp 0x586bdf7b
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0fa2h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 46 A9 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 0b0h]
        ; Exact mapped bytes E8 D7 B2 DF FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xb2
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 5
        ; Exact mapped bytes 74 7F: je 0x586be010
        __asm _emit 0x74
        __asm _emit 0x7f
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 0b0h]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 0b0h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + edx + 22ch]
        ; Exact mapped bytes E8 8F 81 E8 FF: call 0x58546150
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x81
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4D 32 0C 00: call 0x58781220
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x32
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 34: je 0x586be010
        __asm _emit 0x74
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 64h], eax
        push 0
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 FA 8E FE FF: call 0x586a6ef0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 0b0h]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 0b0h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 02 01 00 00: jmp 0x586be117
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        lea ecx, [ebp + 10h]
        push ecx
        lea edx, [ebp - 2ch]
        push edx
        ; Exact mapped bytes E8 6C E8 18 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x00
        add esp, 0ch
        movzx eax, word ptr [ebp - 2ch]
        sub eax, 1
        ; Exact mapped bytes 66 89 45 D4: mov word ptr [ebp - 0x2c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd4
        movzx ecx, word ptr [ebp - 2ah]
        sub ecx, 1
        ; Exact mapped bytes 66 89 4D D6: mov word ptr [ebp - 0x2a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd6
        mov edx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [edx + 24ch]
        ; Exact mapped bytes E8 65 77 DD FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x77
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        xor eax, eax
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        push 0ah
        push 20h
        lea ecx, [ebp - 24h]
        push ecx
        mov eax, dword ptr [ebp - 40h]
        cdq
        push 0
        push 3e8h
        push edx
        push eax
        ; Exact mapped bytes E8 CE 3A 17 00: call 0x58831b50
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x3a
        __asm _emit 0x17
        __asm _emit 0x00
        push edx
        push eax
        ; Exact mapped bytes E8 04 87 19 00: call 0x5885678d
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x87
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 14h
        push 20h
        lea edx, [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 E6 EC FF FF: call 0x586bcd80
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        movzx eax, word ptr [ebp - 2ah]
        cmp eax, 3
        ; Exact mapped bytes 75 36: jne 0x586be0da
        __asm _emit 0x75
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 60 4A 00 00: call 0x586c2b10
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 28h]
        cmp dword ptr [edx + 68h], 0
        ; Exact mapped bytes 74 1E: je 0x586be0d8
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes E8 31 91 E1 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x91
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        push 0
        push 0
        lea eax, [ebp - 24h]
        push eax
        push 1195h
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 99 AC E1 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xac
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3D: jmp 0x586be117
        __asm _emit 0xeb
        __asm _emit 0x3d
        movzx ecx, word ptr [ebp - 2ah]
        cmp ecx, 4
        ; Exact mapped bytes 75 34: jne 0x586be117
        __asm _emit 0x75
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 21 4A 00 00: call 0x586c2b10
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 28h]
        cmp dword ptr [eax + 68h], 0
        ; Exact mapped bytes 74 1E: je 0x586be117
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes E8 F2 90 E1 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x90
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        push 0
        push 0
        lea ecx, [ebp - 24h]
        push ecx
        push 1196h
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 5A AC E1 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xac
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 2F 2F 17 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x2f
        __asm _emit 0x17
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
