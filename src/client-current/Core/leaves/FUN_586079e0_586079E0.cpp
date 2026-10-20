// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586079E0 .. +0x1C4D bytes.
extern "C" __declspec(naked) void FUN_586079e0_586079E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 314h
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 F6 EC FF: call 0x584d7010
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xf6
        __asm _emit 0xec
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 75 2B: jne 0x58607a29
        __asm _emit 0x75
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 0ch], ecx
        push 5bh
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 09 D1 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xd1
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 0A E5 E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xe5
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 38: jmp 0x58607a61
        __asm _emit 0xeb
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC F5 EC FF: call 0x584d7010
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xf5
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 29: jne 0x58607a61
        __asm _emit 0x75
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 14h], ecx
        push 5ah
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CF D0 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xd0
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D0 E4 E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xe4
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 69 E4 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xe4
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D EF E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xef
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 06 B8 FC FF: call 0x585d3290
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xb8
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 3C 0D 00 00: jne 0x586087ce
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b8h]
        mov dword ptr [ebp - 20h], eax
        push 5ch
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 75 D0 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xd0
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 76 E4 E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xe4
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0d4h]
        mov dword ptr [ebp - 24h], edx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 07 E4 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xe4
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0fch]
        mov dword ptr [ebp - 28h], eax
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 E8 E3 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 2ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 C9 E3 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xe3
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0e4h]
        mov dword ptr [ebp - 30h], edx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 AA E3 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xe3
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0d4h]
        mov dword ptr [ebp - 34h], edx
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 8B E3 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xe3
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0fch]
        mov dword ptr [ebp - 38h], edx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 6C E3 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xe3
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 3ch], edx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 4D E3 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xe3
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0e4h]
        mov dword ptr [ebp - 40h], edx
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 2E E3 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xe3
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0b4h]
        and ecx, 1
        ; Exact mapped bytes 0F 84 11 02 00 00: je 0x58607dd7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0c4h]
        mov dword ptr [ebp - 44h], edx
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 FB E2 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xe2
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0cch]
        mov dword ptr [ebp - 48h], eax
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 DC E2 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xe2
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0ech]
        mov dword ptr [ebp - 4ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 BD E2 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xe2
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0f4h]
        mov dword ptr [ebp - 50h], edx
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 9E E2 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xe2
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        push 0
        push 0
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE 8F F4 FF: call 0x58550c50
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x8f
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B7 8F F4 FF: call 0x58550c10
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x8f
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx eax, ax
        test eax, eax
        ; Exact mapped bytes 75 7E: jne 0x58607cde
        __asm _emit 0x75
        __asm _emit 0x7e
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 58h], ecx
        push 5fh
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E CE E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xce
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov edx, dword ptr [ebp - 54h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 9F E2 E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xe2
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0e4h]
        mov dword ptr [ebp - 64h], eax
        push 0
        push 0
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B 8F F4 FF: call 0x58550c50
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x8f
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 EE DA FF FF: call 0x586057b0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C7 F3 EC FF: call 0x584d7090
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xf3
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 B8 34 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x34
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 96 00 00 00: jmp 0x58607d74
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 63 8F F4 FF: call 0x58550c50
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x8f
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1C 8F F4 FF: call 0x58550c10
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x8f
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx edx, ax
        test edx, edx
        ; Exact mapped bytes 74 79: je 0x58607d74
        __asm _emit 0x74
        __asm _emit 0x79
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 6ch], eax
        push 60h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 03 CE E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xce
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 04 E2 E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xe2
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0e4h]
        mov dword ptr [ebp - 78h], edx
        push 0
        push 0
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 00 8F F4 FF: call 0x58550c50
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x8f
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 53 DA FF FF: call 0x586057b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2C F3 EC FF: call 0x584d7090
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf3
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        mov eax, dword ptr [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 1D 34 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x34
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0cch]
        mov dword ptr [ebp - 80h], ecx
        push 0
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A D7 FF FF: call 0x58605520
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        imul ecx, edx, 0
        mov ecx, dword ptr [eax + ecx]
        ; Exact mapped bytes E8 0A DA E8 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xda
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        mov edx, dword ptr [ebp - 7ch]
        push edx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 DB 33 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x33
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 84h], ecx
        push 1
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 0F E1 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xe1
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B3 03 00 00: jmp 0x5860818a
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0b4h]
        and eax, 10h
        ; Exact mapped bytes 0F 84 77 02 00 00: je 0x58608061
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0c4h]
        mov dword ptr [ebp - 88h], ecx
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 D1 E0 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xe0
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0cch]
        mov dword ptr [ebp - 8ch], edx
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 AC E0 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xe0
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0ech]
        mov dword ptr [ebp - 90h], eax
        push 1
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 87 E0 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xe0
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f4h]
        mov dword ptr [ebp - 94h], ecx
        push 1
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 62 E0 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xe0
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 9ch], edx
        push 5fh
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7D CC E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xcc
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        mov eax, dword ptr [ebp - 98h]
        push eax
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 75 E0 E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xe0
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0e4h]
        mov dword ptr [ebp - 0a4h], ecx
        push 1
        push 0
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E 8D F4 FF: call 0x58550c50
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 97 13 EB FF: call 0x584b9280
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x13
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A0 F1 EC FF: call 0x584d7090
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf1
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        mov edx, dword ptr [ebp - 0a0h]
        push edx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 88 32 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x32
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        push 0
        push 0
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 38 8D F4 FF: call 0x58550c50
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F1 8C F4 FF: call 0x58550c10
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x8c
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx eax, ax
        test eax, eax
        ; Exact mapped bytes 75 40: jne 0x58607f66
        __asm _emit 0x75
        __asm _emit 0x40
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f4h]
        mov dword ptr [ebp - 0ach], ecx
        push 67h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 CB E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xcb
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        mov edx, dword ptr [ebp - 0a8h]
        push edx
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 CD DF E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xdf
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3E: jmp 0x58607fa4
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0f4h]
        mov dword ptr [ebp - 0b4h], eax
        push 66h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 95 CB E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xcb
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        mov ecx, dword ptr [ebp - 0b0h]
        push ecx
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 8D DF E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xdf
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        push 0
        push 0
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9D 8C F4 FF: call 0x58550c50
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x8c
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D6 D7 FF FF: call 0x58605790
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, ax
        test edx, edx
        ; Exact mapped bytes 75 40: jne 0x58608001
        __asm _emit 0x75
        __asm _emit 0x40
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0ech]
        mov dword ptr [ebp - 0bch], eax
        push 65h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A CB E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xcb
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        mov ecx, dword ptr [ebp - 0b8h]
        push ecx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 32 DF E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xdf
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3E: jmp 0x5860803f
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0ech]
        mov dword ptr [ebp - 0c4h], edx
        push 64h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA CA E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xca
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        mov eax, dword ptr [ebp - 0c0h]
        push eax
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 F2 DE E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xde
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 0c8h], edx
        push 1
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 85 DE E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xde
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 29 01 00 00: jmp 0x5860818a
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0c4h]
        mov dword ptr [ebp - 0cch], eax
        push 0
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 5A DE E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xde
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0cch]
        mov dword ptr [ebp - 0d0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 35 DE E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xde
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0ech]
        mov dword ptr [ebp - 0d4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 10 DE E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xde
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0f4h]
        mov dword ptr [ebp - 0d8h], eax
        push 0
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 EB DD E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xdd
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0d4h]
        mov dword ptr [ebp - 0dch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 C6 DD E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xdd
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0fch]
        mov dword ptr [ebp - 0e0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 A1 DD E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xdd
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 0e4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 7C DD E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xdd
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0e4h]
        mov dword ptr [ebp - 0e8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 57 DD E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xdd
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0b4h]
        and eax, 2
        ; Exact mapped bytes 0F 84 79 02 00 00: je 0x58608416
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0c4h]
        mov dword ptr [ebp - 0ech], eax
        push 1
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 1E DD E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xdd
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0cch]
        mov dword ptr [ebp - 0f0h], eax
        push 1
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 F9 DC E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xdc
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0ech]
        mov dword ptr [ebp - 0f4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 D4 DC E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xdc
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0f4h]
        mov dword ptr [ebp - 0f8h], eax
        push 0
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 AF DC E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xdc
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        push 0
        push 1
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0F 8A F4 FF: call 0x58550c50
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x8a
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C8 89 F4 FF: call 0x58550c10
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x89
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x586082ef
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 100h], ecx
        push 5fh
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A8 C8 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xc8
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0fch], eax
        mov edx, dword ptr [ebp - 0fch]
        push edx
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 A0 DC E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xdc
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0e4h]
        mov dword ptr [ebp - 10ch], edx
        push 0
        push 1
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 99 89 F4 FF: call 0x58550c50
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x89
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 104h], eax
        push 0
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 E6 D4 FF FF: call 0x586057b0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BF ED EC FF: call 0x584d7090
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xed
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 108h], eax
        mov eax, dword ptr [ebp - 108h]
        push eax
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 A7 2E 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x2e
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x586083a7
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 1
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 52 89 F4 FF: call 0x58550c50
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0B 89 F4 FF: call 0x58550c10
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x89
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 0F 84 97 00 00 00: je 0x586083a7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 114h], ecx
        push 60h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EB C7 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xc7
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        mov edx, dword ptr [ebp - 110h]
        push edx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 E3 DB E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xdb
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0e4h]
        mov dword ptr [ebp - 120h], edx
        push 0
        push 1
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC 88 F4 FF: call 0x58550c50
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x88
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        push 1
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 29 D4 FF FF: call 0x586057b0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 02 ED EC FF: call 0x584d7090
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xed
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        mov eax, dword ptr [ebp - 11ch]
        push eax
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 EA 2D 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x2d
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0cch]
        mov dword ptr [ebp - 128h], eax
        push 0
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 D1 FF FF: call 0x58605520
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov ecx, dword ptr [eax + ecx]
        ; Exact mapped bytes E8 D4 D3 E8 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xd3
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        mov edx, dword ptr [ebp - 124h]
        push edx
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 9C 2D 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x2d
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 12ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 D0 DA E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xda
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B3 03 00 00: jmp 0x586087c9
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0b4h]
        and eax, 20h
        ; Exact mapped bytes 0F 84 77 02 00 00: je 0x586086a0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0c4h]
        mov dword ptr [ebp - 130h], eax
        push 0
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 92 DA E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xda
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0cch]
        mov dword ptr [ebp - 134h], eax
        push 0
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 6D DA E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xda
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0ech]
        mov dword ptr [ebp - 138h], eax
        push 1
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 48 DA E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xda
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0f4h]
        mov dword ptr [ebp - 13ch], eax
        push 1
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 23 DA E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xda
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 144h], eax
        push 5fh
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E C6 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xc6
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], eax
        mov ecx, dword ptr [ebp - 140h]
        push ecx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 36 DA E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xda
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0e4h]
        mov dword ptr [ebp - 14ch], ecx
        push 1
        push 1
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F 87 F4 FF: call 0x58550c50
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x87
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 58 0D EB FF: call 0x584b9280
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 61 EB EC FF: call 0x584d7090
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xeb
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 148h], eax
        mov edx, dword ptr [ebp - 148h]
        push edx
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 49 2C 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x2c
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        push 1
        push 1
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F9 86 F4 FF: call 0x58550c50
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B2 86 F4 FF: call 0x58550c10
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx eax, ax
        test eax, eax
        ; Exact mapped bytes 75 40: jne 0x586085a5
        __asm _emit 0x75
        __asm _emit 0x40
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0f4h]
        mov dword ptr [ebp - 154h], eax
        push 67h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 96 C5 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xc5
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 150h], eax
        mov ecx, dword ptr [ebp - 150h]
        push ecx
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 8E D9 E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xd9
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3E: jmp 0x586085e3
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f4h]
        mov dword ptr [ebp - 15ch], ecx
        push 66h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 C5 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xc5
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 158h], eax
        mov edx, dword ptr [ebp - 158h]
        push edx
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 4E D9 E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xd9
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        push 1
        push 1
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E 86 F4 FF: call 0x58550c50
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 97 D1 FF FF: call 0x58605790
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, ax
        test eax, eax
        ; Exact mapped bytes 75 40: jne 0x58608640
        __asm _emit 0x75
        __asm _emit 0x40
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0ech]
        mov dword ptr [ebp - 164h], eax
        push 65h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FB C4 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xc4
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        mov ecx, dword ptr [ebp - 160h]
        push ecx
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 F3 D8 E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xd8
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3E: jmp 0x5860867e
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0ech]
        mov dword ptr [ebp - 16ch], ecx
        push 64h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB C4 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xc4
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 168h], eax
        mov edx, dword ptr [ebp - 168h]
        push edx
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 B3 D8 E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xd8
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 170h], ecx
        push 1
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 46 D8 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xd8
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 29 01 00 00: jmp 0x586087c9
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0c4h]
        mov dword ptr [ebp - 174h], ecx
        push 0
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 1B D8 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xd8
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0cch]
        mov dword ptr [ebp - 178h], ecx
        push 0
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 F6 D7 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xd7
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0ech]
        mov dword ptr [ebp - 17ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 D1 D7 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xd7
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f4h]
        mov dword ptr [ebp - 180h], ecx
        push 0
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 AC D7 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xd7
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0d4h]
        mov dword ptr [ebp - 184h], ecx
        push 0
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 87 D7 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xd7
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0fch]
        mov dword ptr [ebp - 188h], ecx
        push 0
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 62 D7 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xd7
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 18ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 3D D7 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xd7
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0e4h]
        mov dword ptr [ebp - 190h], ecx
        push 0
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 18 D7 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xd7
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F8 0D 00 00: jmp 0x586095c6
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 E1 E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xe1
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B0 AA FC FF: call 0x585d3290
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xaa
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 DD 0D 00 00: jne 0x586095c6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdd
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b8h]
        mov dword ptr [ebp - 198h], eax
        push 5dh
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B C3 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xc3
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        mov ecx, dword ptr [ebp - 194h]
        push ecx
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 13 D7 E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xd7
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0d4h]
        mov dword ptr [ebp - 19ch], edx
        push 1
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 9E D6 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xd6
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0fch]
        mov dword ptr [ebp - 1a0h], eax
        push 1
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 79 D6 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xd6
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 1a4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 54 D6 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xd6
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0e4h]
        mov dword ptr [ebp - 1a8h], edx
        push 1
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 2F D6 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xd6
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0d4h]
        mov dword ptr [ebp - 1ach], edx
        push 1
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 0A D6 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xd6
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0fch]
        mov dword ptr [ebp - 1b0h], edx
        push 1
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 E5 D5 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xd5
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 1b4h], edx
        push 1
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 C0 D5 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xd5
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0e4h]
        mov dword ptr [ebp - 1b8h], edx
        push 1
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 9B D5 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xd5
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0b4h]
        and ecx, 4
        ; Exact mapped bytes 0F 84 79 02 00 00: je 0x58608bd2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0c4h]
        mov dword ptr [ebp - 1bch], edx
        push 1
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 62 D5 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xd5
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0cch]
        mov dword ptr [ebp - 1c0h], eax
        push 1
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 3D D5 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xd5
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0ech]
        mov dword ptr [ebp - 1c4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 18 D5 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xd5
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0f4h]
        mov dword ptr [ebp - 1c8h], edx
        push 0
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 F3 D4 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xd4
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        push 0
        push 2
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 82 F4 FF: call 0x58550c50
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x82
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0C 82 F4 FF: call 0x58550c10
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x82
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx eax, ax
        test eax, eax
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x58608aab
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 1d0h], ecx
        push 5fh
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EC C0 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xc0
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 1cch], eax
        mov edx, dword ptr [ebp - 1cch]
        push edx
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 E4 D4 E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xd4
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0e4h]
        mov dword ptr [ebp - 1dch], eax
        push 0
        push 2
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DD 81 F4 FF: call 0x58550c50
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x81
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 1d4h], eax
        push 0
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 2A CD FF FF: call 0x586057b0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 03 E6 EC FF: call 0x584d7090
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xe6
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 1d8h], eax
        mov ecx, dword ptr [ebp - 1d8h]
        push ecx
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 EB 26 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x26
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x58608b63
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 2
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 96 81 F4 FF: call 0x58550c50
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x81
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4F 81 F4 FF: call 0x58550c10
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x81
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx edx, ax
        test edx, edx
        ; Exact mapped bytes 0F 84 97 00 00 00: je 0x58608b63
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 1e4h], eax
        push 60h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F C0 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xc0
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 1e0h], eax
        mov ecx, dword ptr [ebp - 1e0h]
        push ecx
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 27 D4 E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xd4
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0e4h]
        mov dword ptr [ebp - 1f0h], edx
        push 0
        push 2
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 20 81 F4 FF: call 0x58550c50
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x81
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 1e8h], eax
        push 1
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 6D CC FF FF: call 0x586057b0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 46 E5 EC FF: call 0x584d7090
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xe5
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 1ech], eax
        mov eax, dword ptr [ebp - 1ech]
        push eax
        mov ecx, dword ptr [ebp - 1f0h]
        ; Exact mapped bytes E8 2E 26 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x26
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0cch]
        mov dword ptr [ebp - 1f8h], ecx
        push 1
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 98 C9 FF FF: call 0x58605520
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        imul ecx, edx, 0
        mov ecx, dword ptr [eax + ecx]
        ; Exact mapped bytes E8 18 CC E8 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xcc
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 1f4h], eax
        mov edx, dword ptr [ebp - 1f4h]
        push edx
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes E8 E0 25 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x25
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 1fch], ecx
        push 1
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 14 D3 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xd3
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B3 03 00 00: jmp 0x58608f85
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0b4h]
        and eax, 40h
        ; Exact mapped bytes 0F 84 77 02 00 00: je 0x58608e5c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0c4h]
        mov dword ptr [ebp - 200h], ecx
        push 0
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 D6 D2 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xd2
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0cch]
        mov dword ptr [ebp - 204h], edx
        push 0
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes E8 B1 D2 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xd2
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0ech]
        mov dword ptr [ebp - 208h], eax
        push 1
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 8C D2 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xd2
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f4h]
        mov dword ptr [ebp - 20ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 67 D2 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xd2
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0dch]
        mov dword ptr [ebp - 214h], edx
        push 5fh
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 BE E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xbe
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 210h], eax
        mov eax, dword ptr [ebp - 210h]
        push eax
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 7A D2 E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xd2
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0e4h]
        mov dword ptr [ebp - 21ch], ecx
        push 1
        push 2
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 7F F4 FF: call 0x58550c50
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x7f
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9C 05 EB FF: call 0x584b9280
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x05
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A5 E3 EC FF: call 0x584d7090
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xe3
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 218h], eax
        mov edx, dword ptr [ebp - 218h]
        push edx
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes E8 8D 24 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x24
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        push 1
        push 2
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D 7F F4 FF: call 0x58550c50
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x7f
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F6 7E F4 FF: call 0x58550c10
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x7e
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx eax, ax
        test eax, eax
        ; Exact mapped bytes 75 40: jne 0x58608d61
        __asm _emit 0x75
        __asm _emit 0x40
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f4h]
        mov dword ptr [ebp - 224h], ecx
        push 67h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DA BD E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xbd
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 220h], eax
        mov edx, dword ptr [ebp - 220h]
        push edx
        mov ecx, dword ptr [ebp - 224h]
        ; Exact mapped bytes E8 D2 D1 E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xd1
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3E: jmp 0x58608d9f
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0f4h]
        mov dword ptr [ebp - 22ch], eax
        push 66h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A BD E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xbd
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 228h], eax
        mov ecx, dword ptr [ebp - 228h]
        push ecx
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 92 D1 E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xd1
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        push 1
        push 2
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A2 7E F4 FF: call 0x58550c50
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x7e
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DB C9 FF FF: call 0x58605790
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, ax
        test edx, edx
        ; Exact mapped bytes 75 40: jne 0x58608dfc
        __asm _emit 0x75
        __asm _emit 0x40
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0ech]
        mov dword ptr [ebp - 234h], eax
        push 65h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3F BD E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xbd
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 230h], eax
        mov ecx, dword ptr [ebp - 230h]
        push ecx
        mov ecx, dword ptr [ebp - 234h]
        ; Exact mapped bytes E8 37 D1 E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xd1
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3E: jmp 0x58608e3a
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0ech]
        mov dword ptr [ebp - 23ch], edx
        push 64h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF BC E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xbc
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 238h], eax
        mov eax, dword ptr [ebp - 238h]
        push eax
        mov ecx, dword ptr [ebp - 23ch]
        ; Exact mapped bytes E8 F7 D0 E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xd0
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 240h], edx
        push 1
        mov ecx, dword ptr [ebp - 240h]
        ; Exact mapped bytes E8 8A D0 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xd0
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 29 01 00 00: jmp 0x58608f85
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0c4h]
        mov dword ptr [ebp - 244h], eax
        push 0
        mov ecx, dword ptr [ebp - 244h]
        ; Exact mapped bytes E8 5F D0 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xd0
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0cch]
        mov dword ptr [ebp - 248h], ecx
        push 0
        mov ecx, dword ptr [ebp - 248h]
        ; Exact mapped bytes E8 3A D0 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xd0
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0ech]
        mov dword ptr [ebp - 24ch], edx
        push 0
        mov ecx, dword ptr [ebp - 24ch]
        ; Exact mapped bytes E8 15 D0 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0f4h]
        mov dword ptr [ebp - 250h], eax
        push 0
        mov ecx, dword ptr [ebp - 250h]
        ; Exact mapped bytes E8 F0 CF E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xcf
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0d4h]
        mov dword ptr [ebp - 254h], ecx
        push 0
        mov ecx, dword ptr [ebp - 254h]
        ; Exact mapped bytes E8 CB CF E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xcf
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0fch]
        mov dword ptr [ebp - 258h], edx
        push 0
        mov ecx, dword ptr [ebp - 258h]
        ; Exact mapped bytes E8 A6 CF E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xcf
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 25ch], eax
        push 0
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 81 CF E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xcf
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0e4h]
        mov dword ptr [ebp - 260h], ecx
        push 0
        mov ecx, dword ptr [ebp - 260h]
        ; Exact mapped bytes E8 5C CF E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xcf
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0b4h]
        and eax, 8
        ; Exact mapped bytes 0F 84 79 02 00 00: je 0x58609211
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0c4h]
        mov dword ptr [ebp - 264h], eax
        push 1
        mov ecx, dword ptr [ebp - 264h]
        ; Exact mapped bytes E8 23 CF E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xcf
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0cch]
        mov dword ptr [ebp - 268h], eax
        push 1
        mov ecx, dword ptr [ebp - 268h]
        ; Exact mapped bytes E8 FE CE E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xce
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0ech]
        mov dword ptr [ebp - 26ch], eax
        push 0
        mov ecx, dword ptr [ebp - 26ch]
        ; Exact mapped bytes E8 D9 CE E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xce
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0f4h]
        mov dword ptr [ebp - 270h], eax
        push 0
        mov ecx, dword ptr [ebp - 270h]
        ; Exact mapped bytes E8 B4 CE E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xce
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        push 0
        push 3
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 7C F4 FF: call 0x58550c50
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x7c
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CD 7B F4 FF: call 0x58550c10
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x7b
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x586090ea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 278h], ecx
        push 5fh
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AD BA E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xba
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 274h], eax
        mov edx, dword ptr [ebp - 274h]
        push edx
        mov ecx, dword ptr [ebp - 278h]
        ; Exact mapped bytes E8 A5 CE E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xce
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0e4h]
        mov dword ptr [ebp - 284h], edx
        push 0
        push 3
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E 7B F4 FF: call 0x58550c50
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x7b
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 27ch], eax
        push 0
        mov ecx, dword ptr [ebp - 27ch]
        ; Exact mapped bytes E8 EB C6 FF FF: call 0x586057b0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C4 DF EC FF: call 0x584d7090
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xdf
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 280h], eax
        mov eax, dword ptr [ebp - 280h]
        push eax
        mov ecx, dword ptr [ebp - 284h]
        ; Exact mapped bytes E8 AC 20 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x20
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x586091a2
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 3
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 57 7B F4 FF: call 0x58550c50
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x7b
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 10 7B F4 FF: call 0x58550c10
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x7b
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 0F 84 97 00 00 00: je 0x586091a2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 28ch], ecx
        push 60h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F0 B9 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xb9
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 288h], eax
        mov edx, dword ptr [ebp - 288h]
        push edx
        mov ecx, dword ptr [ebp - 28ch]
        ; Exact mapped bytes E8 E8 CD E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0e4h]
        mov dword ptr [ebp - 298h], edx
        push 0
        push 3
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E1 7A F4 FF: call 0x58550c50
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x7a
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 290h], eax
        push 1
        mov ecx, dword ptr [ebp - 290h]
        ; Exact mapped bytes E8 2E C6 FF FF: call 0x586057b0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 07 DF EC FF: call 0x584d7090
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xdf
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 294h], eax
        mov eax, dword ptr [ebp - 294h]
        push eax
        mov ecx, dword ptr [ebp - 298h]
        ; Exact mapped bytes E8 EF 1F 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x1f
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0cch]
        mov dword ptr [ebp - 2a0h], eax
        push 1
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 59 C3 FF FF: call 0x58605520
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov ecx, dword ptr [eax + ecx]
        ; Exact mapped bytes E8 D9 C5 E8 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xc5
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 29ch], eax
        mov edx, dword ptr [ebp - 29ch]
        push edx
        mov ecx, dword ptr [ebp - 2a0h]
        ; Exact mapped bytes E8 A1 1F 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x1f
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 2a4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 2a4h]
        ; Exact mapped bytes E8 D5 CC E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xcc
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B5 03 00 00: jmp 0x586095c6
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0b4h]
        and eax, 80h
        ; Exact mapped bytes 0F 84 77 02 00 00: je 0x5860949d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0c4h]
        mov dword ptr [ebp - 2a8h], eax
        push 0
        mov ecx, dword ptr [ebp - 2a8h]
        ; Exact mapped bytes E8 95 CC E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xcc
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0cch]
        mov dword ptr [ebp - 2ach], eax
        push 0
        mov ecx, dword ptr [ebp - 2ach]
        ; Exact mapped bytes E8 70 CC E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xcc
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0ech]
        mov dword ptr [ebp - 2b0h], eax
        push 1
        mov ecx, dword ptr [ebp - 2b0h]
        ; Exact mapped bytes E8 4B CC E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xcc
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0f4h]
        mov dword ptr [ebp - 2b4h], eax
        push 1
        mov ecx, dword ptr [ebp - 2b4h]
        ; Exact mapped bytes E8 26 CC E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xcc
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0dch]
        mov dword ptr [ebp - 2bch], eax
        push 5fh
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 B8 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xb8
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 2b8h], eax
        mov ecx, dword ptr [ebp - 2b8h]
        push ecx
        mov ecx, dword ptr [ebp - 2bch]
        ; Exact mapped bytes E8 39 CC E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xcc
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0e4h]
        mov dword ptr [ebp - 2c4h], ecx
        push 1
        push 3
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 32 79 F4 FF: call 0x58550c50
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x79
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5B FF EA FF: call 0x584b9280
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 64 DD EC FF: call 0x584d7090
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xdd
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 2c0h], eax
        mov edx, dword ptr [ebp - 2c0h]
        push edx
        mov ecx, dword ptr [ebp - 2c4h]
        ; Exact mapped bytes E8 4C 1E 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x1e
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        push 1
        push 3
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC 78 F4 FF: call 0x58550c50
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x78
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B5 78 F4 FF: call 0x58550c10
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x78
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx eax, ax
        test eax, eax
        ; Exact mapped bytes 75 40: jne 0x586093a2
        __asm _emit 0x75
        __asm _emit 0x40
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0f4h]
        mov dword ptr [ebp - 2cch], eax
        push 67h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 99 B7 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xb7
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 2c8h], eax
        mov ecx, dword ptr [ebp - 2c8h]
        push ecx
        mov ecx, dword ptr [ebp - 2cch]
        ; Exact mapped bytes E8 91 CB E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xcb
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3E: jmp 0x586093e0
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f4h]
        mov dword ptr [ebp - 2d4h], ecx
        push 66h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 59 B7 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xb7
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 2d0h], eax
        mov edx, dword ptr [ebp - 2d0h]
        push edx
        mov ecx, dword ptr [ebp - 2d4h]
        ; Exact mapped bytes E8 51 CB E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xcb
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        push 1
        push 3
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 61 78 F4 FF: call 0x58550c50
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x78
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9A C3 FF FF: call 0x58605790
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, ax
        test eax, eax
        ; Exact mapped bytes 75 40: jne 0x5860943d
        __asm _emit 0x75
        __asm _emit 0x40
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0ech]
        mov dword ptr [ebp - 2dch], eax
        push 65h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE B6 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xb6
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 2d8h], eax
        mov ecx, dword ptr [ebp - 2d8h]
        push ecx
        mov ecx, dword ptr [ebp - 2dch]
        ; Exact mapped bytes E8 F6 CA E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xca
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3E: jmp 0x5860947b
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0ech]
        mov dword ptr [ebp - 2e4h], ecx
        push 64h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BE B6 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xb6
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 2e0h], eax
        mov edx, dword ptr [ebp - 2e0h]
        push edx
        mov ecx, dword ptr [ebp - 2e4h]
        ; Exact mapped bytes E8 B6 CA E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xca
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 2e8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 2e8h]
        ; Exact mapped bytes E8 49 CA E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xca
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 29 01 00 00: jmp 0x586095c6
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0c4h]
        mov dword ptr [ebp - 2ech], ecx
        push 0
        mov ecx, dword ptr [ebp - 2ech]
        ; Exact mapped bytes E8 1E CA E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xca
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0cch]
        mov dword ptr [ebp - 2f0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2f0h]
        ; Exact mapped bytes E8 F9 C9 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xc9
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0ech]
        mov dword ptr [ebp - 2f4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2f4h]
        ; Exact mapped bytes E8 D4 C9 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xc9
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f4h]
        mov dword ptr [ebp - 2f8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2f8h]
        ; Exact mapped bytes E8 AF C9 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xc9
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0d4h]
        mov dword ptr [ebp - 2fch], ecx
        push 0
        mov ecx, dword ptr [ebp - 2fch]
        ; Exact mapped bytes E8 8A C9 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xc9
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0fch]
        mov dword ptr [ebp - 300h], ecx
        push 0
        mov ecx, dword ptr [ebp - 300h]
        ; Exact mapped bytes E8 65 C9 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xc9
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0dch]
        mov dword ptr [ebp - 304h], ecx
        push 0
        mov ecx, dword ptr [ebp - 304h]
        ; Exact mapped bytes E8 40 C9 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xc9
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0e4h]
        mov dword ptr [ebp - 308h], ecx
        push 0
        mov ecx, dword ptr [ebp - 308h]
        ; Exact mapped bytes E8 1B C9 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xc9
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0b4h]
        test eax, eax
        ; Exact mapped bytes 75 55: jne 0x58609629
        __asm _emit 0x75
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 30ch], edx
        push 0
        mov ecx, dword ptr [ebp - 30ch]
        ; Exact mapped bytes E8 F0 C8 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xc8
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 310h], ecx
        push 0
        mov ecx, dword ptr [ebp - 310h]
        ; Exact mapped bytes E8 D4 C8 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xc8
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 314h], eax
        push 0
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 B8 C8 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xc8
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
