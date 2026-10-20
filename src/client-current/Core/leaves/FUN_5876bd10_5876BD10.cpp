// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876BD10 .. +0x3A0 bytes.
extern "C" __declspec(naked) void FUN_5876bd10_5876BD10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 58h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 80h], 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F 63 FF FF: call 0x58762060
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 13: jne 0x5876bd48
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F0 9C D2 FF: call 0x58495a30
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x9c
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 A5 00 00 00: je 0x5876bded
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 5ecch], 0
        ; Exact mapped bytes 74 32: je 0x5876bd86
        __asm _emit 0x74
        __asm _emit 0x32
        push 4
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E2 06 D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x06
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7B 8C D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x8c
        __asm _emit 0xd1
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 21 0B 0E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x0b
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 14h]
        push eax
        push 3
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D 21 E1 FF: call 0x5857dec0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x21
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1F: jmp 0x5876bda5
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C2 03 D2 FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x03
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 FE: mov word ptr [ebp - 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfe
        push 1
        movzx ecx, word ptr [ebp - 2]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C 1D E1 FF: call 0x5857db40
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x1d
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 9C D2 FF: call 0x58495a30
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x9c
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x5876bded
        __asm _emit 0x74
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 6214h], 0
        ; Exact mapped bytes 74 2D: je 0x5876bded
        __asm _emit 0x74
        __asm _emit 0x2d
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x5876bdd2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 8
        ; Exact mapped bytes 7D 15: jge 0x5876bded
        __asm _emit 0x7d
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx*4 + 6224h]
        ; Exact mapped bytes E8 E6 D3 DA FF: call 0x585191d0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xd3
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB DC: jmp 0x5876bdc9
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx + 1150h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 68 2F D4 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x2f
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx + 1150h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4D 2F D4 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x2f
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 12b0h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3B 2F D4 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x2f
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx + 1150h]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 8C A0 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xa0
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx + 1150h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 6D A0 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xa0
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1148h]
        mov dword ptr [ebp - 20h], edx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 57 A0 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xa0
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 114ch]
        mov dword ptr [ebp - 24h], ecx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 41 A0 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xa0
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 1110h]
        mov dword ptr [ebp - 28h], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 2B A0 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xa0
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1114h]
        mov dword ptr [ebp - 2ch], edx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 15 A0 D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1118h]
        mov dword ptr [ebp - 30h], ecx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 FF 9F D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x9f
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 111ch]
        mov dword ptr [ebp - 34h], eax
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 E9 9F D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1140h]
        mov dword ptr [ebp - 38h], edx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 D3 9F D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x9f
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1144h]
        mov dword ptr [ebp - 3ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 BD 9F D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x9f
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5876bf36
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 6
        ; Exact mapped bytes 7D 37: jge 0x5876bf73
        __asm _emit 0x7d
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 6370h]
        mov dword ptr [ebp - 40h], edx
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 8A 9F D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x9f
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 6388h]
        mov dword ptr [ebp - 44h], edx
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 70 9F D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x9f
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BA: jmp 0x5876bf2d
        __asm _emit 0xeb
        __asm _emit 0xba
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1164h]
        mov dword ptr [ebp - 48h], ecx
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 57 9F D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x9f
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 12b0h]
        mov dword ptr [ebp - 4ch], eax
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 F1 9F D1 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x9f
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 5e7ch]
        ; Exact mapped bytes E8 B3 4C FF FF: call 0x58760c60
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 5e80h]
        ; Exact mapped bytes E8 A5 4C FF FF: call 0x58760c60
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 5ed8h], 55555554h
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 5ed4h], 55555555h
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 5edch], 55555555h
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 5ee0h], 55555555h
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 5f20h], 0
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0A 38 D3 FF: call 0x5849f810
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x38
        __asm _emit 0xd3
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C0 2A D3 FF: call 0x5849ead0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x2a
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 08 21 FF FF: call 0x5875e120
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC B2 D6 FF: call 0x584d72d0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xb2
        __asm _emit 0xd6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x5876c065
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8D A9 D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xa9
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 2D: jne 0x5876c065
        __asm _emit 0x75
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 5e7ch]
        mov dword ptr [ebp - 50h], eax
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 42 9F D1 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x9f
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 5e80h]
        mov dword ptr [ebp - 54h], edx
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 2C 9F D1 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x9f
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C E6 E7 FF: call 0x585ea700
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xe6
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 90 98 D2 FF: call 0x58495910
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x98
        __asm _emit 0xd2
        __asm _emit 0xff
        and eax, 1
        ; Exact mapped bytes 74 27: je 0x5876c0ac
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 93 10 D2 FF: call 0x5848d120
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x10
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x5876c0ac
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C4 FE D1 FF: call 0x5848bf60
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 05 7D D8 FF: call 0x584f3db0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x7d
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
