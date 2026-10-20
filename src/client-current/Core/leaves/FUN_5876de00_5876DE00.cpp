// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876DE00 .. +0x6C5 bytes.
extern "C" __declspec(naked) void FUN_5876de00_5876DE00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0c4h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 0
        shr eax, 18h
        mov dword ptr [ebp - 0c4h], eax
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0
        shr ecx, 10h
        mov dword ptr [ebp - 0c0h], ecx
        mov edx, dword ptr [ebp + 8]
        and edx, 0fff00h
        shr edx, 8
        mov dword ptr [ebp - 10h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 6388h]
        ; Exact mapped bytes E8 B0 6B D1 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x6b
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 1fh
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 43h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x5876de7f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 6
        ; Exact mapped bytes 7D 3D: jge 0x5876dec2
        __asm _emit 0x7d
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 6370h]
        mov dword ptr [ebp - 94h], edx
        push 0
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 8B 80 D1 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 6388h]
        mov dword ptr [ebp - 1ch], edx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D1 D2 04 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xd2
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB B4: jmp 0x5876de76
        __asm _emit 0xeb
        __asm _emit 0xb4
        mov dword ptr [ebp - 14h], 3
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 7C: jne 0x5876df4b
        __asm _emit 0x75
        __asm _emit 0x7c
        mov eax, 4
        imul ecx, eax, 5
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 6370h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 29 77 04 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x77
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 5
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 6370h]
        mov dword ptr [ebp - 28h], eax
        push 9f1h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 04 6C D1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x6c
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 05 80 D1 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 5
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 6370h]
        mov dword ptr [ebp - 2ch], edx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 96 7F D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x7f
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 10h], 0ah
        ; Exact mapped bytes 0F 8F 00 01 00 00: jg 0x5876e055
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 8E F6 00 00 00: jle 0x5876e055
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 6370h]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 99 76 04 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 6370h]
        mov dword ptr [ebp - 38h], eax
        push 9f6h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 74 6B D1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x6b
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 75 7F D1 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x7f
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1ch
        mov dword ptr [ebp - 0ch], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 6388h]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 4
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 34 76 04 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 6388h]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 83 D1 04 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xd1
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        add edx, 19h
        mov dword ptr [ebp - 0ch], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 6388h]
        mov dword ptr [ebp - 44h], eax
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 AB 7E D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x7e
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 6370h]
        mov dword ptr [ebp - 48h], ecx
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 8C 7E D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x7e
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 10h], 64h
        ; Exact mapped bytes 0F 8F 00 01 00 00: jg 0x5876e15f
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0ah
        ; Exact mapped bytes 0F 8E F6 00 00 00: jle 0x5876e15f
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 6370h]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 8F 75 04 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x75
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 6370h]
        mov dword ptr [ebp - 54h], eax
        push 9f5h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A 6A D1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x6a
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 6B 7E D1 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x7e
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1ch
        mov dword ptr [ebp - 0ch], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 6388h]
        mov dword ptr [ebp - 58h], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 4
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 2A 75 04 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x75
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 6388h]
        mov dword ptr [ebp - 5ch], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 79 D0 04 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xd0
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        add eax, 19h
        mov dword ptr [ebp - 0ch], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 6388h]
        mov dword ptr [ebp - 60h], eax
        push 1
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 A1 7D D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x7d
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 6370h]
        mov dword ptr [ebp - 64h], eax
        push 1
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 82 7D D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x7d
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 10h], 12ch
        ; Exact mapped bytes 0F 8F F1 00 00 00: jg 0x5876e25d
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 64h
        ; Exact mapped bytes 0F 8E E7 00 00 00: jle 0x5876e25d
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 6370h]
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 83 74 04 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 6370h]
        mov dword ptr [ebp - 70h], edx
        push 9f4h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5F 69 D1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x69
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        mov eax, dword ptr [ebp - 6ch]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 60 7D D1 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x7d
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1ch
        mov dword ptr [ebp - 0ch], ecx
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 6388h]
        mov dword ptr [ebp - 74h], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 4
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 20 74 04 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 6388h]
        mov dword ptr [ebp - 78h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 70 CF 04 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xcf
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 6388h]
        mov dword ptr [ebp - 7ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 A2 7C D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x7c
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 6370h]
        mov dword ptr [ebp - 80h], ecx
        push 1
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 84 7C D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x7c
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 10h], 1f4h
        ; Exact mapped bytes 0F 8F 24 01 00 00: jg 0x5876e38e
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 12ch
        ; Exact mapped bytes 0F 8E 17 01 00 00: jle 0x5876e38e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 6370h]
        mov dword ptr [ebp - 84h], edx
        mov eax, dword ptr [ebp - 8]
        sub eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 7B 73 04 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x73
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 6370h]
        mov dword ptr [ebp - 8ch], edx
        push 9f3h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 68 D1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x68
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        mov eax, dword ptr [ebp - 88h]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 4B 7C D1 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x7c
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1ch
        mov dword ptr [ebp - 0ch], ecx
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 6388h]
        mov dword ptr [ebp - 90h], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 4
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 04 73 04 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x73
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 6388h]
        mov dword ptr [ebp - 0ach], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 4D CE 04 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xce
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 6388h]
        mov dword ptr [ebp - 98h], ecx
        push 1
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 78 7B D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x7b
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 6370h]
        mov dword ptr [ebp - 9ch], edx
        push 1
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 53 7B D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x7b
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 10h], 258h
        ; Exact mapped bytes 0F 8F 24 01 00 00: jg 0x5876e4bf
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 1f4h
        ; Exact mapped bytes 0F 8E 17 01 00 00: jle 0x5876e4bf
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 6370h]
        mov dword ptr [ebp - 0a0h], edx
        mov eax, dword ptr [ebp - 8]
        sub eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 4A 72 04 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x72
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 6370h]
        mov dword ptr [ebp - 0a8h], ecx
        push 9f2h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 22 67 D1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x67
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        mov edx, dword ptr [ebp - 0a4h]
        push edx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 1A 7B D1 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x7b
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1ch
        mov dword ptr [ebp - 0ch], eax
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 6388h]
        mov dword ptr [ebp - 0bch], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 4
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 D3 71 04 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x71
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 6388h]
        mov dword ptr [ebp - 0b0h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 1C CD 04 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xcd
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 6388h]
        mov dword ptr [ebp - 0b4h], eax
        push 1
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 47 7A D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x7a
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 6370h]
        mov dword ptr [ebp - 0b8h], eax
        push 1
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 22 7A D1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x7a
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
