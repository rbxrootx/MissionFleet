// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586B5F50 .. +0x11D1 bytes.
extern "C" __declspec(naked) void FUN_586b5f50_586B5F50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3d8h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 288h], ecx
        push 32h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0A EB DC FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xeb
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 3c4h], eax
        ; Exact mapped bytes A1 90 20 96 58: mov eax, dword ptr [0x58962090]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 380h], eax
        mov ecx, dword ptr [ebp - 380h]
        push ecx
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 27 5E 10 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x10
        __asm _emit 0x00
        push 32h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DA EA DC FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xea
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 2a0h], eax
        mov edx, dword ptr [ebp - 2a0h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 3c8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2a0h]
        ; Exact mapped bytes FF 95 38 FC FF FF: call dword ptr [ebp - 0x3c8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x38
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28ch], 0
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 3cch], eax
        push 0
        mov ecx, dword ptr [ebp - 3cch]
        ; Exact mapped bytes E8 EF FE DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xfe
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0c4h]
        mov dword ptr [ebp - 3d0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 3d0h]
        ; Exact mapped bytes E8 C7 FE DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xfe
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0c4h]
        mov dword ptr [ebp - 2b0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2b0h]
        ; Exact mapped bytes E8 9F FE DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xfe
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0bch]
        mov dword ptr [ebp - 2b4h], edx
        push 0
        mov ecx, dword ptr [ebp - 2b4h]
        ; Exact mapped bytes E8 77 FE DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0bch]
        mov dword ptr [ebp - 2b8h], edx
        push 0
        mov ecx, dword ptr [ebp - 2b8h]
        ; Exact mapped bytes E8 4F FE DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xfe
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0bch]
        mov dword ptr [ebp - 2bch], eax
        push 0
        mov ecx, dword ptr [ebp - 2bch]
        ; Exact mapped bytes E8 D7 50 10 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x50
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0bch]
        mov dword ptr [ebp - 2c0h], eax
        push 0
        mov ecx, dword ptr [ebp - 2c0h]
        ; Exact mapped bytes E8 AF 50 10 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x50
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 294h], ecx
        movzx edx, word ptr [ebp + 8]
        mov dword ptr [ebp - 298h], edx
        mov eax, dword ptr [ebp - 298h]
        sub eax, 2
        mov dword ptr [ebp - 298h], eax
        cmp dword ptr [ebp - 298h], 0bh
        ; Exact mapped bytes 0F 87 44 0F 00 00: ja 0x586b7054
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x44
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 298h]
        movzx edx, byte ptr [ecx + 586b713ch]
        ; Exact mapped bytes FF 24 95 24 71 6B 58: jmp dword ptr [edx*4 + 0x586b7124]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x24
        __asm _emit 0x71
        __asm _emit 0x6b
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 14h]
        add eax, 78h
        push eax
        mov ecx, dword ptr [ebp - 288h]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 A7 40 DF FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov dword ptr [ebp - 28ch], 0
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx + 98h]
        push eax
        push 588b0c50h
        lea ecx, [ebp - 204h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 7ch]
        mov dword ptr [ebp - 2c4h], edx
        lea eax, [ebp - 204h]
        push eax
        mov ecx, dword ptr [ebp - 2c4h]
        ; Exact mapped bytes E8 FA 7F E1 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x7f
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx + 9ch]
        push edx
        push 588b0c58h
        lea eax, [ebp - 204h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 7ch]
        mov dword ptr [ebp - 2c8h], eax
        lea ecx, [ebp - 204h]
        push ecx
        mov ecx, dword ptr [ebp - 2c8h]
        ; Exact mapped bytes E8 B1 7F E1 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x7f
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 288h]
        mov dword ptr [edx + 78h], 2
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 2d0h], ecx
        mov edx, dword ptr [ebp - 294h]
        movzx eax, word ptr [edx + 4]
        add eax, 1
        push eax
        ; Exact mapped bytes 8B 0D 3C 07 96 58: mov ecx, dword ptr [0x5896073c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC E8 DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 2cch], eax
        mov ecx, dword ptr [ebp - 2cch]
        push ecx
        mov ecx, dword ptr [ebp - 2d0h]
        ; Exact mapped bytes E8 34 0A DD FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x0a
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 2d4h], eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 8]
        add edx, 9bh
        push edx
        mov ecx, dword ptr [ebp - 2d4h]
        ; Exact mapped bytes E8 DA F4 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xf4
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 F8 0D 00 00: jmp 0x586b7054
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28ch], 1
        mov eax, dword ptr [ebp + 14h]
        add eax, 78h
        push eax
        mov ecx, dword ptr [ebp - 288h]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 65 3F DF FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x3f
        __asm _emit 0xdf
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov edx, dword ptr [ebp + 14h]
        movzx eax, word ptr [edx + 9ah]
        mov dword ptr [ebp - 29ch], eax
        mov eax, dword ptr [ebp - 29ch]
        imul eax, dword ptr [ebp + 18h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 2a4h], eax
        mov edx, dword ptr [ebp + 14h]
        movzx eax, word ptr [edx + 98h]
        imul eax, dword ptr [ebp + 18h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 3d8h], eax
        mov edx, dword ptr [ebp + 14h]
        movzx eax, word ptr [edx + 98h]
        push eax
        push 588b0c60h
        lea ecx, [ebp - 284h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 7ch]
        mov dword ptr [ebp - 2d8h], edx
        lea eax, [ebp - 284h]
        push eax
        mov ecx, dword ptr [ebp - 2d8h]
        ; Exact mapped bytes E8 7D 7E E1 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x7e
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2a4h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov eax, edx
        cdq
        mov ecx, 0ah
        idiv ecx
        push eax
        mov eax, dword ptr [ebp - 2a4h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        push eax
        mov eax, dword ptr [ebp - 29ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov eax, edx
        cdq
        mov ecx, 0ah
        idiv ecx
        push eax
        mov eax, dword ptr [ebp - 29ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        push eax
        push 588b0c64h
        lea edx, [ebp - 284h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 18h
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 7ch]
        mov dword ptr [ebp - 2dch], edx
        lea eax, [ebp - 284h]
        push eax
        mov ecx, dword ptr [ebp - 2dch]
        ; Exact mapped bytes E8 EE 7D E1 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x7d
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 288h]
        mov dword ptr [ecx + 78h], 2
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 2e4h], eax
        mov ecx, dword ptr [ebp - 294h]
        movzx edx, word ptr [ecx + 4]
        add edx, 1
        push edx
        ; Exact mapped bytes 8B 0D 38 07 96 58: mov ecx, dword ptr [0x58960738]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F9 E6 DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xe6
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 2e0h], eax
        mov eax, dword ptr [ebp - 2e0h]
        push eax
        mov ecx, dword ptr [ebp - 2e4h]
        ; Exact mapped bytes E8 71 08 DD FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x08
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 2e8h], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 0b9h
        push ecx
        mov ecx, dword ptr [ebp - 2e8h]
        ; Exact mapped bytes E8 17 F3 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 35 0C 00 00: jmp 0x586b7054
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28ch], 2
        mov edx, dword ptr [ebp + 14h]
        add edx, 78h
        push edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes E8 A2 3D DF FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x3d
        __asm _emit 0xdf
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0c4h]
        mov dword ptr [ebp - 2ech], ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 8]
        add eax, 81h
        push eax
        mov ecx, dword ptr [ebp - 2ech]
        ; Exact mapped bytes E8 B3 F2 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0bch]
        mov dword ptr [ebp - 2f0h], ecx
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 8]
        add eax, 7fh
        push eax
        mov ecx, dword ptr [ebp - 2f0h]
        ; Exact mapped bytes E8 80 F2 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0c4h]
        mov dword ptr [ebp - 2f4h], eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 8]
        add edx, 90h
        push edx
        mov ecx, dword ptr [ebp - 2f4h]
        ; Exact mapped bytes E8 4A F2 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0bch]
        mov dword ptr [ebp - 2f8h], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 8eh
        push ecx
        mov ecx, dword ptr [ebp - 2f8h]
        ; Exact mapped bytes E8 14 F2 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0bch]
        mov dword ptr [ebp - 2fch], edx
        push 1
        mov ecx, dword ptr [ebp - 2fch]
        ; Exact mapped bytes E8 9C F9 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xf9
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0bch]
        mov dword ptr [ebp - 300h], edx
        push 1
        mov ecx, dword ptr [ebp - 300h]
        ; Exact mapped bytes E8 74 F9 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xf9
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0c4h]
        mov dword ptr [ebp - 304h], eax
        push 1
        mov ecx, dword ptr [ebp - 304h]
        ; Exact mapped bytes E8 4C F9 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xf9
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0c4h]
        mov dword ptr [ebp - 308h], eax
        push 1
        mov ecx, dword ptr [ebp - 308h]
        ; Exact mapped bytes E8 24 F9 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xf9
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 18h]
        xor ecx, 55h
        ; Exact mapped bytes 74 76: je 0x586b663b
        __asm _emit 0x74
        __asm _emit 0x76
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 74 70: je 0x586b663b
        __asm _emit 0x74
        __asm _emit 0x70
        mov edx, dword ptr [ebp + 20h]
        add edx, 78h
        push edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 288h]
        mov ecx, dword ptr [edx + ecx + 0c4h]
        ; Exact mapped bytes E8 F4 3B DF FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x3b
        __asm _emit 0xdf
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0bch]
        mov dword ptr [ebp - 30ch], eax
        mov ecx, dword ptr [ebp + 18h]
        xor ecx, 55h
        mov edx, 0ffh
        mov eax, dword ptr [ebp + 20h]
        ; Exact mapped bytes 66 23 90 98 00 00 00: and dx, word ptr [eax + 0x98]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x90
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, dx
        imul ecx, edx
        push ecx
        mov ecx, dword ptr [ebp - 30ch]
        ; Exact mapped bytes E8 58 4B 10 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x4b
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2C: jmp 0x586b6667
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0c4h]
        mov dword ptr [ebp - 310h], eax
        push 588b0c7ch
        mov ecx, dword ptr [ebp - 310h]
        ; Exact mapped bytes E8 3A FA DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xfa
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 1ch]
        xor ecx, 55h
        ; Exact mapped bytes 0F 84 A2 00 00 00: je 0x586b6715
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 24h], 0
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x586b6715
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0c4h]
        mov dword ptr [ebp - 314h], ecx
        push 1
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 3B F8 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xf8
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 24h]
        add edx, 78h
        push edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 288h]
        mov ecx, dword ptr [ecx + eax + 0c4h]
        ; Exact mapped bytes E8 1A 3B DF FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x3b
        __asm _emit 0xdf
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0bch]
        mov dword ptr [ebp - 318h], ecx
        mov edx, dword ptr [ebp + 1ch]
        xor edx, 55h
        mov eax, 0ffh
        mov ecx, dword ptr [ebp + 24h]
        ; Exact mapped bytes 66 23 81 98 00 00 00: and ax, word ptr [ecx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, ax
        imul edx, eax
        push edx
        mov ecx, dword ptr [ebp - 318h]
        ; Exact mapped bytes E8 7E 4A 10 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x4a
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2C: jmp 0x586b6741
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0c4h]
        mov dword ptr [ebp - 31ch], eax
        push 588b0c88h
        mov ecx, dword ptr [ebp - 31ch]
        ; Exact mapped bytes E8 60 F9 DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xf9
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 66 8B 91 98 00 00 00: mov dx, word ptr [ecx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 07: and dx, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x07
        movzx eax, dx
        push eax
        ; Exact mapped bytes E8 88 B7 E6 FF: call 0x58521ee0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xb7
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        push eax
        push 588b0c94h
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 7ch]
        mov dword ptr [ebp - 320h], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 320h]
        ; Exact mapped bytes E8 F5 79 E1 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x79
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 14h]
        movzx edx, word ptr [ecx + 0a6h]
        mov dword ptr [ebp - 324h], edx
        push 588b0c98h
        ; Exact mapped bytes E8 3B B8 E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xb8
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 328h], eax
        mov eax, dword ptr [ebp - 324h]
        push eax
        mov ecx, dword ptr [ebp - 328h]
        push ecx
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 7ch]
        mov dword ptr [ebp - 32ch], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 32ch]
        ; Exact mapped bytes E8 8A 79 E1 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x79
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 14h]
        movzx edx, word ptr [ecx + 9eh]
        imul eax, edx, 28h
        mov dword ptr [ebp - 2a8h], eax
        mov eax, dword ptr [ebp - 2a8h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov eax, edx
        cdq
        mov ecx, 0ah
        idiv ecx
        push eax
        mov eax, dword ptr [ebp - 2a8h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        push eax
        push 588b0cb4h
        ; Exact mapped bytes E8 A5 B7 E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xb7
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 7ch]
        mov dword ptr [ebp - 330h], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 330h]
        ; Exact mapped bytes E8 08 79 E1 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x79
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 66 8B 91 9A 00 00 00: mov dx, word ptr [ecx + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 7F: and dx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x7f
        movzx eax, dx
        mov dword ptr [ebp - 334h], eax
        push 588b0ccch
        ; Exact mapped bytes E8 43 B7 E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xb7
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 338h], eax
        mov ecx, dword ptr [ebp - 334h]
        push ecx
        mov edx, dword ptr [ebp - 338h]
        push edx
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 7ch]
        mov dword ptr [ebp - 33ch], ecx
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 33ch]
        ; Exact mapped bytes E8 92 78 E1 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x78
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 66 8B 88 9C 00 00 00: mov cx, word ptr [eax + 0x9c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 7F: and cx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x7f
        movzx edx, cx
        push edx
        push 588b0ce4h
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 7ch]
        mov dword ptr [ebp - 340h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 340h]
        ; Exact mapped bytes E8 41 78 E1 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x78
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 288h]
        mov dword ptr [edx + 78h], 5
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 348h], ecx
        mov edx, dword ptr [ebp - 294h]
        movzx eax, word ptr [edx + 4]
        add eax, 2
        push eax
        ; Exact mapped bytes 8B 0D 70 75 94 58: mov ecx, dword ptr [0x58947570]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C E1 DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xe1
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 344h], eax
        mov ecx, dword ptr [ebp - 344h]
        push ecx
        mov ecx, dword ptr [ebp - 348h]
        ; Exact mapped bytes E8 C4 02 DD FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 34ch], eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 8]
        add edx, 0f5h
        push edx
        mov ecx, dword ptr [ebp - 34ch]
        ; Exact mapped bytes E8 6A ED 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xed
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 88 06 00 00: jmp 0x586b7054
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28ch], 3
        mov eax, dword ptr [ebp + 14h]
        add eax, 78h
        push eax
        mov ecx, dword ptr [ebp - 288h]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 F5 37 DF FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x37
        __asm _emit 0xdf
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0c4h]
        mov dword ptr [ebp - 350h], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 54h
        push ecx
        mov ecx, dword ptr [ebp - 350h]
        ; Exact mapped bytes E8 08 ED 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xed
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0bch]
        mov dword ptr [ebp - 354h], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 54h
        push ecx
        mov ecx, dword ptr [ebp - 354h]
        ; Exact mapped bytes E8 D5 EC 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xec
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0c4h]
        mov dword ptr [ebp - 358h], edx
        push 1
        mov ecx, dword ptr [ebp - 358h]
        ; Exact mapped bytes E8 5D F4 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf4
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 18h]
        xor eax, 55h
        ; Exact mapped bytes 74 33: je 0x586b6abf
        __asm _emit 0x74
        __asm _emit 0x33
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 74 2D: je 0x586b6abf
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp + 20h]
        add ecx, 78h
        push ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 288h]
        mov ecx, dword ptr [ecx + eax + 0c4h]
        ; Exact mapped bytes E8 2D 37 DF FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x37
        __asm _emit 0xdf
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes EB 4A: jmp 0x586b6b09
        __asm _emit 0xeb
        __asm _emit 0x4a
        push 588b0ce8h
        ; Exact mapped bytes E8 27 B5 E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xb5
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 35ch], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 288h]
        mov ecx, dword ptr [ecx + eax + 0c4h]
        ; Exact mapped bytes E8 F4 36 DF FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x36
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 360h], eax
        mov edx, dword ptr [ebp - 35ch]
        push edx
        mov eax, dword ptr [ebp - 360h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 0bch]
        mov dword ptr [ebp - 364h], ecx
        push 1
        mov ecx, dword ptr [ebp - 364h]
        ; Exact mapped bytes E8 AF F3 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf3
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0bch]
        mov dword ptr [ebp - 368h], edx
        mov eax, dword ptr [ebp + 18h]
        xor eax, 55h
        push eax
        mov ecx, dword ptr [ebp - 368h]
        ; Exact mapped bytes E8 32 46 10 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x46
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        movzx edx, word ptr [ecx + 0a0h]
        imul eax, edx, 28h
        mov dword ptr [ebp - 2ach], eax
        mov eax, dword ptr [ebp - 2ach]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov eax, edx
        cdq
        mov ecx, 0ah
        idiv ecx
        push eax
        mov eax, dword ptr [ebp - 2ach]
        cdq
        mov ecx, 3e8h
        idiv ecx
        push eax
        push 588b0d00h
        lea edx, [ebp - 184h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 7ch]
        mov dword ptr [ebp - 36ch], eax
        lea ecx, [ebp - 184h]
        push ecx
        mov ecx, dword ptr [ebp - 36ch]
        ; Exact mapped bytes E8 B8 75 E1 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x75
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 14h]
        movzx eax, byte ptr [edx + 9fh]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        movzx edx, byte ptr [ecx + 9eh]
        push edx
        push 588b0d0ch
        lea eax, [ebp - 184h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 7ch]
        mov dword ptr [ebp - 370h], eax
        lea ecx, [ebp - 184h]
        push ecx
        mov ecx, dword ptr [ebp - 370h]
        ; Exact mapped bytes E8 63 75 E1 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x75
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 288h]
        mov dword ptr [edx + 78h], 2
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 378h], ecx
        mov edx, dword ptr [ebp - 294h]
        movzx eax, word ptr [edx + 4]
        add eax, 5
        push eax
        ; Exact mapped bytes 8B 0D 34 07 96 58: mov ecx, dword ptr [0x58960734]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E DE DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xde
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 374h], eax
        mov ecx, dword ptr [ebp - 374h]
        push ecx
        mov ecx, dword ptr [ebp - 378h]
        ; Exact mapped bytes E8 E6 FF DC FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 37ch], eax
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 8]
        add edx, 0f5h
        push edx
        mov ecx, dword ptr [ebp - 37ch]
        ; Exact mapped bytes E8 8C EA 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xea
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 AA 03 00 00: jmp 0x586b7054
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28ch], 4
        mov eax, dword ptr [ebp + 14h]
        add eax, 78h
        push eax
        mov ecx, dword ptr [ebp - 288h]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 17 35 DF FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x35
        __asm _emit 0xdf
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0c4h]
        mov dword ptr [ebp - 3ach], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 7eh
        push ecx
        mov ecx, dword ptr [ebp - 3ach]
        ; Exact mapped bytes E8 2A EA 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xea
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0bch]
        mov dword ptr [ebp - 384h], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 7eh
        push ecx
        mov ecx, dword ptr [ebp - 384h]
        ; Exact mapped bytes E8 F7 E9 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 0bch]
        mov dword ptr [ebp - 388h], edx
        push 1
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 7F F1 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xf1
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + ecx + 0bch]
        mov dword ptr [ebp - 38ch], eax
        mov ecx, dword ptr [ebp + 18h]
        xor ecx, 55h
        push ecx
        mov ecx, dword ptr [ebp - 38ch]
        ; Exact mapped bytes E8 02 44 10 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        movzx eax, word ptr [edx + 0a8h]
        push eax
        push 588b0d18h
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 7ch]
        mov dword ptr [ebp - 390h], edx
        lea eax, [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 B8 73 E1 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x73
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, dword ptr [ebp + 14h]
        movzx ecx, word ptr [eax + edx + 9ah]
        push ecx
        push 588b0d1ch
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 7ch]
        mov dword ptr [ebp - 394h], edx
        lea eax, [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 65 73 E1 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x73
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 14h]
        movzx edx, word ptr [ecx + 0a6h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        movzx ecx, word ptr [eax + 0a4h]
        shl ecx, 1
        push ecx
        push 588b0d20h
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 7ch]
        mov dword ptr [ebp - 398h], edx
        lea eax, [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 398h]
        ; Exact mapped bytes E8 0F 73 E1 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 14h]
        movzx edx, word ptr [ecx + 0aah]
        push edx
        push 588b0d28h
        lea eax, [ebp - 84h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + edx + 7ch]
        mov dword ptr [ebp - 39ch], ecx
        lea edx, [ebp - 84h]
        push edx
        mov ecx, dword ptr [ebp - 39ch]
        ; Exact mapped bytes E8 C5 72 E1 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x72
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 14h]
        movzx ecx, word ptr [eax + 0aeh]
        push ecx
        push 588b0d34h
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 7ch]
        mov dword ptr [ebp - 3a0h], edx
        lea eax, [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 3a0h]
        ; Exact mapped bytes E8 7B 72 E1 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x72
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 74 78: je 0x586b6f94
        __asm _emit 0x74
        __asm _emit 0x78
        mov ecx, dword ptr [ebp + 20h]
        ; Exact mapped bytes 66 0F B6 11: movzx dx, byte ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x11
        ; Exact mapped bytes 66 89 95 70 FD FF FF: mov word ptr [ebp - 0x290], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, word ptr [ebp - 290h]
        cmp eax, 0bh
        ; Exact mapped bytes 75 29: jne 0x586b6f5f
        __asm _emit 0x75
        __asm _emit 0x29
        mov ecx, dword ptr [ebp + 20h]
        movzx edx, word ptr [ecx + 9ch]
        push edx
        mov eax, dword ptr [ebp + 20h]
        add eax, 78h
        push eax
        push 588b0d38h
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        ; Exact mapped bytes EB 33: jmp 0x586b6f92
        __asm _emit 0xeb
        __asm _emit 0x33
        movzx edx, word ptr [ebp - 290h]
        cmp edx, 0ch
        ; Exact mapped bytes 75 27: jne 0x586b6f92
        __asm _emit 0x75
        __asm _emit 0x27
        mov eax, dword ptr [ebp + 20h]
        movzx ecx, word ptr [eax + 0aah]
        push ecx
        mov edx, dword ptr [ebp + 20h]
        add edx, 78h
        push edx
        push 588b0d40h
        lea eax, [ebp - 84h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        ; Exact mapped bytes EB 1E: jmp 0x586b6fb2
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 588b0d48h
        ; Exact mapped bytes E8 52 B0 E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xb0
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov edx, 4
        imul eax, edx, 5
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + eax + 7ch]
        mov dword ptr [ebp - 3a4h], edx
        lea eax, [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 3a4h]
        ; Exact mapped bytes E8 B4 71 E1 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x71
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 288h]
        mov dword ptr [ecx + 78h], 6
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 3d4h], eax
        mov ecx, dword ptr [ebp - 294h]
        movzx edx, word ptr [ecx + 4]
        add edx, 2
        push edx
        ; Exact mapped bytes 8B 0D 30 07 96 58: mov ecx, dword ptr [0x58960730]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BF DA DC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xda
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 3a8h], eax
        mov eax, dword ptr [ebp - 3a8h]
        push eax
        mov ecx, dword ptr [ebp - 3d4h]
        ; Exact mapped bytes E8 37 FC DC FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xfc
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 3b0h], edx
        mov eax, dword ptr [ebp - 288h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 0f5h
        push ecx
        mov ecx, dword ptr [ebp - 3b0h]
        ; Exact mapped bytes E8 DD E6 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xe6
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 3b4h], eax
        mov ecx, dword ptr [ebp - 28ch]
        push ecx
        mov ecx, dword ptr [ebp - 3b4h]
        ; Exact mapped bytes E8 CB 87 DE FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x87
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 3b8h], eax
        mov ecx, dword ptr [ebp - 28ch]
        push ecx
        mov ecx, dword ptr [ebp - 3b8h]
        ; Exact mapped bytes E8 AA 87 DE FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x87
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 3bch], eax
        mov ecx, dword ptr [ebp - 28ch]
        push ecx
        mov ecx, dword ptr [ebp - 3bch]
        ; Exact mapped bytes E8 89 87 DE FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 3c0h], eax
        mov ecx, dword ptr [ebp - 28ch]
        push ecx
        mov ecx, dword ptr [ebp - 3c0h]
        ; Exact mapped bytes E8 68 87 DE FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x87
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 9D 14 E2 FF: call 0x584d8580
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x14
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 8]
        push eax
        push 306h
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 33 FD DF FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xfd
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 288h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 288h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 35 9F 17 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x9f
        __asm _emit 0x17
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
