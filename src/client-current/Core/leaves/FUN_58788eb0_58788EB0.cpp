// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58788EB0 .. +0xDE8 bytes.
extern "C" __declspec(naked) void FUN_58788eb0_58788EB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1d4h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 20h], ecx
        push 0ah
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B BC CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xbc
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 4C D0 CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xd0
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 28h], ecx
        push 0bh
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 23 BC CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xbc
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 24 D0 CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xd0
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 74h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 68 22 03 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 83 3D 48 24 96 58 00: cmp dword ptr [0x58962448], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 0E 01 00 00: jne 0x58789044
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d0h]
        mov dword ptr [ebp - 30h], edx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 14 DD CF FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xdd
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d0h]
        mov dword ptr [ebp - 34h], ecx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 7E CF CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xcf
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0cch]
        mov dword ptr [ebp - 38h], eax
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 E8 DC CF FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0cch]
        mov dword ptr [ebp - 3ch], edx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 52 CF CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xcf
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d8h]
        mov dword ptr [ebp - 40h], ecx
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 8C CF CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xcf
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d8h]
        mov dword ptr [ebp - 44h], eax
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 26 CF CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xcf
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d4h]
        mov dword ptr [ebp - 48h], edx
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 60 CF CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xcf
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d4h]
        mov dword ptr [ebp - 4ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 FA CE CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xce
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e0h]
        mov dword ptr [ebp - 50h], eax
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 34 CF CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xcf
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e0h]
        mov dword ptr [ebp - 54h], edx
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 CE CE CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xce
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0dch]
        mov dword ptr [ebp - 58h], ecx
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 08 CF CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xcf
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0dch]
        mov dword ptr [ebp - 5ch], eax
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 A2 CE CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xce
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F5 03 00 00: jmp 0x58789439
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 6ch]
        imul edx, ecx, 6900h
        imul eax, dword ptr [ebp - 0ch], 0e0h
        cmp dword ptr [edx + eax + 5890c098h], 4bh
        ; Exact mapped bytes 0F 8D 25 01 00 00: jge 0x58789194
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d8h]
        mov dword ptr [ebp - 64h], edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 6ch]
        imul edx, ecx, 6900h
        imul eax, dword ptr [ebp - 0ch], 0e0h
        mov ecx, dword ptr [edx + eax + 5890c098h]
        add ecx, 25ah
        push ecx
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 78 BA CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xba
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov edx, dword ptr [ebp - 60h]
        push edx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 79 CE CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xce
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d4h]
        mov dword ptr [ebp - 6ch], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 6ch]
        imul ecx, eax, 6900h
        imul edx, dword ptr [ebp - 0ch], 0e0h
        mov eax, dword ptr [ecx + edx + 5890c098h]
        add eax, 2a5h
        push eax
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 31 BA CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xba
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 32 CE CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xce
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e0h]
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 6ch]
        imul eax, edx, 6900h
        imul ecx, dword ptr [ebp - 0ch], 0e0h
        mov edx, dword ptr [eax + ecx + 5890c098h]
        add edx, 2f0h
        push edx
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E9 B9 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        mov eax, dword ptr [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 EA CD CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xcd
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0dch]
        mov dword ptr [ebp - 7ch], edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 6ch]
        imul edx, ecx, 6900h
        imul eax, dword ptr [ebp - 0ch], 0e0h
        mov ecx, dword ptr [edx + eax + 5890c098h]
        add ecx, 33bh
        push ecx
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A1 B9 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xb9
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        mov edx, dword ptr [ebp - 78h]
        push edx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 A2 CD CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xcd
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 3F 01 00 00: jmp 0x587892d3
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d8h]
        mov dword ptr [ebp - 84h], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 6ch]
        imul ecx, eax, 6900h
        imul edx, dword ptr [ebp - 0ch], 0e0h
        mov eax, dword ptr [ecx + edx + 5890c098h]
        sub eax, 19h
        push eax
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 B9 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xb9
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        mov ecx, dword ptr [ebp - 80h]
        push ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 51 CD CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xcd
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d4h]
        mov dword ptr [ebp - 8ch], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 6ch]
        imul eax, edx, 6900h
        imul ecx, dword ptr [ebp - 0ch], 0e0h
        mov edx, dword ptr [eax + ecx + 5890c098h]
        add edx, 19h
        push edx
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 B9 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xb9
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        mov eax, dword ptr [ebp - 88h]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 00 CD CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xcd
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e0h]
        mov dword ptr [ebp - 94h], edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 6ch]
        imul edx, ecx, 6900h
        imul eax, dword ptr [ebp - 0ch], 0e0h
        mov ecx, dword ptr [edx + eax + 5890c098h]
        add ecx, 4bh
        push ecx
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B7 B8 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xb8
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        mov edx, dword ptr [ebp - 90h]
        push edx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 AF CC CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xcc
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0dch]
        mov dword ptr [ebp - 9ch], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 6ch]
        imul ecx, eax, 6900h
        imul edx, dword ptr [ebp - 0ch], 0e0h
        mov eax, dword ptr [ecx + edx + 5890c098h]
        add eax, 7dh
        push eax
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 66 B8 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xb8
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        mov ecx, dword ptr [ebp - 98h]
        push ecx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 5E CC CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xcc
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d0h]
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 6ch]
        imul eax, edx, 6900h
        imul ecx, dword ptr [ebp - 0ch], 0e0h
        lea edx, [eax + ecx + 5890bfd0h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx + 0cch]
        push edx
        ; Exact mapped bytes 8B 0D 48 24 96 58: mov ecx, dword ptr [0x58962448]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B8 B7 CF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        mov eax, dword ptr [ebp - 0a0h]
        push eax
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 30 D9 CF FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xd9
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0cch]
        mov dword ptr [ebp - 0ach], edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 6ch]
        imul edx, ecx, 6900h
        imul eax, dword ptr [ebp - 0ch], 0e0h
        lea ecx, [edx + eax + 5890bfd0h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax + 0cch]
        add ecx, 1
        push ecx
        ; Exact mapped bytes 8B 0D 48 24 96 58: mov ecx, dword ptr [0x58962448]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 58 B7 CF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xb7
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        mov edx, dword ptr [ebp - 0a8h]
        push edx
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 D0 D8 CF FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xd8
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d0h]
        mov dword ptr [ebp - 0b0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 34 CB CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xcb
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0cch]
        mov dword ptr [ebp - 0b4h], eax
        push 1
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 18 CB CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xcb
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d8h]
        mov dword ptr [ebp - 0b8h], edx
        push 1
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 FC CA CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xca
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d4h]
        mov dword ptr [ebp - 0bch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 E0 CA CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xca
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e0h]
        mov dword ptr [ebp - 0c0h], eax
        push 1
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 C4 CA CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xca
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0dch]
        mov dword ptr [ebp - 0c4h], edx
        push 1
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 A8 CA CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xca
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 6ch]
        test ecx, ecx
        ; Exact mapped bytes 74 5D: je 0x587894a1
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 0c8h], eax
        push 1
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 80 CA CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xca
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ach]
        mov dword ptr [ebp - 0cch], edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 6ch]
        push ecx
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 BE 63 D1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x63
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ach]
        mov dword ptr [ebp - 0d0h], eax
        push 1
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 42 CA CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xca
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 39: jmp 0x587894da
        __asm _emit 0xeb
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ach]
        mov dword ptr [ebp - 0d4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 23 CA CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xca
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 0d8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 07 CA CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xca
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 10h], eax
        mov byte ptr [ebp - 5], 0
        cmp dword ptr [ebp - 10h], 11h
        ; Exact mapped bytes 76 13: jbe 0x58789503
        __asm _emit 0x76
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        xor edx, 20h
        mov dword ptr [ebp - 10h], edx
        mov byte ptr [ebp - 5], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 10h
        ; Exact mapped bytes 0F 87 22 02 00 00: ja 0x58789735
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 24 8D 98 9C 78 58: jmp dword ptr [ecx*4 + 0x58789c98]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x98
        __asm _emit 0x9c
        __asm _emit 0x78
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 0dch], eax
        push 0ffffffh
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 A4 CB CF FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xcb
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F3 01 00 00: jmp 0x58789735
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 0e0h], edx
        push 0ffffh
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 7F CB CF FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xcb
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 CE 01 00 00: jmp 0x58789735
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 0e4h], ecx
        push 0ff00h
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 5A CB CF FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xcb
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 A9 01 00 00: jmp 0x58789735
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 0e8h], eax
        push 0ff6612h
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 35 CB CF FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xcb
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 84 01 00 00: jmp 0x58789735
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 0ech], edx
        push 96f0h
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 10 CB CF FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 5F 01 00 00: jmp 0x58789735
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 0f0h], ecx
        push 0ff2483h
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 EB CA CF FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xca
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 3A 01 00 00: jmp 0x58789735
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 0f4h], eax
        push 1
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 C9 C8 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xc8
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ach]
        mov dword ptr [ebp - 0f8h], edx
        push 9
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 0D 62 D1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x62
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 0fch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 91 C8 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xc8
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E0 00 00 00: jmp 0x58789735
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 100h], eax
        push 1
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 6F C8 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xc8
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ach]
        mov dword ptr [ebp - 104h], edx
        push 0ah
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 B3 61 D1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x61
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 108h], ecx
        push 1
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 37 C8 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xc8
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x58789735
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 10ch], eax
        push 0d00ffh
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 12 CA CF FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xca
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 64: jmp 0x58789735
        __asm _emit 0xeb
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 110h], edx
        push 239fc8h
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 F0 C9 CF FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xc9
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 42: jmp 0x58789735
        __asm _emit 0xeb
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 114h], ecx
        push 96f0h
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 CE C9 CF FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xc9
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 20: jmp 0x58789735
        __asm _emit 0xeb
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 118h], eax
        push 0d7ffh
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 AC C9 CF FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xc9
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 11ch], edx
        mov eax, dword ptr [ebp - 4]
        add eax, 75h
        push eax
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 4A C9 CF FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xc9
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ech]
        mov dword ptr [ebp - 120h], edx
        push 0
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 6E C7 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xc7
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e8h]
        mov dword ptr [ebp - 124h], ecx
        push 0
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 52 C7 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xc7
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov dword ptr [ebp - 128h], eax
        push 0
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 36 C7 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xc7
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f0h]
        mov dword ptr [ebp - 12ch], edx
        push 0
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 1A C7 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xc7
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        sub ecx, 2
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0eh
        ; Exact mapped bytes 0F 87 F5 03 00 00: ja 0x58789bd5
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 24 95 DC 9C 78 58: jmp dword ptr [edx*4 + 0x58789cdc]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xdc
        __asm _emit 0x9c
        __asm _emit 0x78
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ech]
        mov dword ptr [ebp - 134h], ecx
        push 3dh
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1A B3 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xb3
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        mov edx, dword ptr [ebp - 130h]
        push edx
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 12 C7 CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xc7
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e8h]
        mov dword ptr [ebp - 13ch], ecx
        push 3ch
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E6 B2 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xb2
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], eax
        mov edx, dword ptr [ebp - 138h]
        push edx
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 DE C6 CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xc6
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ech]
        mov dword ptr [ebp - 140h], ecx
        push 1
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 72 C6 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xc6
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e8h]
        mov dword ptr [ebp - 144h], eax
        push 1
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 56 C6 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xc6
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 45 03 00 00: jmp 0x58789bd5
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ech]
        mov dword ptr [ebp - 14ch], edx
        push 119h
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 71 B2 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xb2
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 148h], eax
        mov eax, dword ptr [ebp - 148h]
        push eax
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 69 C6 CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xc6
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e8h]
        mov dword ptr [ebp - 154h], edx
        push 11ah
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A B2 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xb2
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 150h], eax
        mov eax, dword ptr [ebp - 150h]
        push eax
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 32 C6 CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xc6
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ech]
        mov dword ptr [ebp - 158h], edx
        push 1
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 C6 C5 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xc5
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e8h]
        mov dword ptr [ebp - 15ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 AA C5 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xc5
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 99 02 00 00: jmp 0x58789bd5
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ech]
        mov dword ptr [ebp - 164h], eax
        push 11bh
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C5 B1 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xb1
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        mov ecx, dword ptr [ebp - 160h]
        push ecx
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 BD C5 CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xc5
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e8h]
        mov dword ptr [ebp - 16ch], eax
        push 11ch
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E B1 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xb1
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 168h], eax
        mov ecx, dword ptr [ebp - 168h]
        push ecx
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 86 C5 CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xc5
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ech]
        mov dword ptr [ebp - 170h], eax
        push 1
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 1A C5 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xc5
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e8h]
        mov dword ptr [ebp - 174h], edx
        push 1
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 FE C4 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xc4
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 ED 01 00 00: jmp 0x58789bd5
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ech]
        mov dword ptr [ebp - 17ch], ecx
        push 3dh
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C B1 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xb1
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 178h], eax
        mov edx, dword ptr [ebp - 178h]
        push edx
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 14 C5 CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e8h]
        mov dword ptr [ebp - 184h], ecx
        push 3ch
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 B0 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 180h], eax
        mov edx, dword ptr [ebp - 180h]
        push edx
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 E0 C4 CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xc4
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ech]
        mov dword ptr [ebp - 188h], ecx
        push 1
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 74 C4 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xc4
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e8h]
        mov dword ptr [ebp - 18ch], eax
        push 1
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 58 C4 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xc4
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 47 01 00 00: jmp 0x58789bd5
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ech]
        mov dword ptr [ebp - 194h], edx
        push 36h
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 B0 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xb0
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 190h], eax
        mov eax, dword ptr [ebp - 190h]
        push eax
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 6E C4 CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xc4
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e8h]
        mov dword ptr [ebp - 19ch], edx
        push 35h
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 42 B0 CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xb0
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 198h], eax
        mov eax, dword ptr [ebp - 198h]
        push eax
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 3A C4 CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xc4
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ech]
        mov dword ptr [ebp - 1a0h], edx
        push 1
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 CE C3 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xc3
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e8h]
        mov dword ptr [ebp - 1a4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 B2 C3 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xc3
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x58789bd5
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ech]
        mov dword ptr [ebp - 1ach], eax
        push 38h
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D0 AF CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xaf
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 1a8h], eax
        mov ecx, dword ptr [ebp - 1a8h]
        push ecx
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 C8 C3 CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xc3
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e8h]
        mov dword ptr [ebp - 1b4h], eax
        push 37h
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C AF CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xaf
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 1b0h], eax
        mov ecx, dword ptr [ebp - 1b0h]
        push ecx
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 94 C3 CF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xc3
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ech]
        mov dword ptr [ebp - 1b8h], eax
        push 1
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 28 C3 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xc3
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e8h]
        mov dword ptr [ebp - 1bch], edx
        push 1
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 0C C3 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xc3
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        movzx eax, byte ptr [ebp - 5]
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x58789c16
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        mov dword ptr [ebp - 1c0h], edx
        push 1
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 E7 C2 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xc2
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f0h]
        mov dword ptr [ebp - 1c4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 CB C2 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xc2
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0fch]
        mov dword ptr [ebp - 1c8h], eax
        push 0
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 AE C2 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xc2
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f8h]
        mov dword ptr [ebp - 1cch], edx
        push 0
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 92 C2 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xc2
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 69h]
        cmp ecx, 1
        ; Exact mapped bytes 75 39: jne 0x58789c94
        __asm _emit 0x75
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0fch]
        mov dword ptr [ebp - 1d0h], eax
        push 1
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 69 C2 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xc2
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f8h]
        mov dword ptr [ebp - 1d4h], edx
        push 1
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 4D C2 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xc2
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
