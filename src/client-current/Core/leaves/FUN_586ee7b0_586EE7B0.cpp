// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586EE7B0 .. +0xA8F bytes.
extern "C" __declspec(naked) void FUN_586ee7b0_586EE7B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 110h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 0b75h]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0bh
        ; Exact mapped bytes 0F 87 68 0A 00 00: ja 0x586ef23b
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x68
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 24 95 40 F2 6E 58: jmp dword ptr [edx*4 + 0x586ef240]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x40
        __asm _emit 0xf2
        __asm _emit 0x6e
        __asm _emit 0x58
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586ee7ef
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x586ee894
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 974h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax*4 + 11h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A0 62 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x62
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 21 84 D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0xff
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 1ch], edx
        push 25h
        push 8dh
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B7 6D 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x6d
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 20h], edx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 52 76 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x76
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x586ee7e6
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 A2 09 00 00: jmp 0x586ef23b
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586ee8ab
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D 98 00 00 00: jge 0x586ee94d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 974h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax*4 + 11h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 E4 61 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x61
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 65 83 D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x83
        __asm _emit 0xd9
        __asm _emit 0xff
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 30h], edx
        push 47h
        push 8
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 FE 6C 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x6c
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 34h], edx
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 99 75 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x75
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 55 FF FF FF: jmp 0x586ee8a2
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 E9 08 00 00: jmp 0x586ef23b
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586ee964
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x586eea09
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 974h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax*4 + 11h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 2B 61 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x61
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 AC 82 D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x82
        __asm _emit 0xd9
        __asm _emit 0xff
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 44h], edx
        push 47h
        push 19bh
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 42 6C 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x6c
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 48h], edx
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 DD 74 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x74
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x586ee95b
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 2D 08 00 00: jmp 0x586ef23b
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586eea20
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x586eeac5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 974h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax*4 + 11h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 6F 60 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x60
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov edx, dword ptr [ebp - 50h]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 F0 81 D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x81
        __asm _emit 0xd9
        __asm _emit 0xff
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 58h], edx
        push 47h
        push 258h
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 86 6B 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x6b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 5ch], edx
        push 1
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 21 74 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x74
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x586eea17
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 71 07 00 00: jmp 0x586ef23b
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586eeadc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x586eeb81
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 974h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax*4 + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 B3 5F D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x5f
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov edx, dword ptr [ebp - 64h]
        push edx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 34 81 D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x81
        __asm _emit 0xd9
        __asm _emit 0xff
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 6ch], edx
        push 22h
        push 2ddh
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 CA 6A 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x6a
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 70h], edx
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 65 73 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x73
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x586eead3
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B5 06 00 00: jmp 0x586ef23b
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586eeb98
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D A1 00 00 00: jge 0x586eec43
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 974h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 74h], edx
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax*4 + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 F7 5E D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x5e
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        mov edx, dword ptr [ebp - 78h]
        push edx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 78 80 D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x80
        __asm _emit 0xd9
        __asm _emit 0xff
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 80h], edx
        push 33h
        push 2ddh
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 0E 6A 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x6a
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 84h], edx
        push 1
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 A3 72 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x72
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 4C FF FF FF: jmp 0x586eeb8f
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 F3 05 00 00: jmp 0x586ef23b
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586eec5a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D BC 00 00 00: jge 0x586eed20
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 974h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 90h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 88h], edx
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax*4 + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 2C 5E D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x5e
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        mov edx, dword ptr [ebp - 8ch]
        push edx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 A4 7F D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x7f
        __asm _emit 0xd9
        __asm _emit 0xff
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 94h], edx
        push 2ach
        push 127h
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 31 69 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x69
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 98h], edx
        push 1
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 C6 71 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x71
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 31 FF FF FF: jmp 0x586eec51
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586eed32
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D B9 00 00 00: jge 0x586eedf5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 0a4h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 9ch], ecx
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx*4 + 0fh]
        push eax
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 54 5D D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x5d
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        mov ecx, dword ptr [ebp - 0a0h]
        push ecx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 CC 7E D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x7e
        __asm _emit 0xd9
        __asm _emit 0xff
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 974h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 0a8h], eax
        push 2ach
        push 22h
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 5C 68 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 0ach], edx
        push 1
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 F1 70 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x70
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 34 FF FF FF: jmp 0x586eed29
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 41 04 00 00: jmp 0x586ef23b
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586eee0c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D B9 00 00 00: jge 0x586eeecf
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 974h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 0b8h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 0b0h], edx
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax*4 + 12h]
        push ecx
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 7A 5C D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x5c
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        mov edx, dword ptr [ebp - 0b4h]
        push edx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 F2 7D D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x7d
        __asm _emit 0xd9
        __asm _emit 0xff
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 0bch], edx
        push 262h
        push 60h
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 82 67 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x67
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 0c0h], edx
        push 1
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 17 70 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x70
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 34 FF FF FF: jmp 0x586eee03
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 67 03 00 00: jmp 0x586ef23b
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586eeee6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D B9 00 00 00: jge 0x586eefa9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 974h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 0cch], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 0c4h], edx
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax*4 + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 A0 5B D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x5b
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        mov edx, dword ptr [ebp - 0c8h]
        push edx
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 18 7D D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x7d
        __asm _emit 0xd9
        __asm _emit 0xff
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 0d0h], edx
        push 2cfh
        push 10h
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 A8 66 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x66
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 0d4h], edx
        push 1
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 3D 6F D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x6f
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 34 FF FF FF: jmp 0x586eeedd
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586eefbb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D BC 00 00 00: jge 0x586ef081
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 0e0h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 0d8h], ecx
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx*4 + 0fh]
        push eax
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 CB 5A D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x5a
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        mov ecx, dword ptr [ebp - 0dch]
        push ecx
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 43 7C D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x7c
        __asm _emit 0xd9
        __asm _emit 0xff
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 974h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 0e4h], eax
        push 2c5h
        push 0ceh
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 D0 65 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x65
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 0e8h], edx
        push 1
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 65 6E D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x6e
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 31 FF FF FF: jmp 0x586eefb2
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B5 01 00 00: jmp 0x586ef23b
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586ef098
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D BC 00 00 00: jge 0x586ef15e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 974h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 0f4h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 0ech], edx
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax*4 + 12h]
        push ecx
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 EE 59 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x59
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 0f0h], eax
        mov edx, dword ptr [ebp - 0f0h]
        push edx
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 66 7B D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x7b
        __asm _emit 0xd9
        __asm _emit 0xff
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 0f8h], edx
        push 230h
        push 320h
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 F3 64 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x64
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 0fch], edx
        push 1
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 88 6D D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x6d
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 31 FF FF FF: jmp 0x586ef08f
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D8 00 00 00: jmp 0x586ef23b
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586ef175
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D BC 00 00 00: jge 0x586ef23b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 974h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 108h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 100h], edx
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax*4 + 12h]
        push ecx
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 11 59 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x59
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 104h], eax
        mov edx, dword ptr [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 89 7A D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x7a
        __asm _emit 0xd9
        __asm _emit 0xff
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 10ch], edx
        push 226h
        push 389h
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 16 64 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x64
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 110h], edx
        push 1
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 AB 6C D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x6c
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 31 FF FF FF: jmp 0x586ef16c
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
