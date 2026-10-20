// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586EE4A0 .. +0x30C bytes.
extern "C" __declspec(naked) void FUN_586ee4a0_586EE4A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 5ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [eax + 0b75h]
        mov byte ptr [ebp - 0ch], cl
        cmp byte ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0F: je 0x586ee4ca
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp byte ptr [ebp - 0ch], 1
        ; Exact mapped bytes 0F 84 2C 02 00 00: je 0x586ee6f1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 DE 02 00 00: jmp 0x586ee7a8
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586ee4dc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x586ee581
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx*4 + 7]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B3 65 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x65
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 34 87 D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x87
        __asm _emit 0xd9
        __asm _emit 0xff
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 974h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 1ch], ecx
        push 7dh
        push 298h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 CA 70 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x70
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 974h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 20h], ecx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 65 79 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x79
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x586ee4d3
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586ee593
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x586ee638
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 974h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx*4 + 8]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 FC 64 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x64
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 7D 86 D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x86
        __asm _emit 0xd9
        __asm _emit 0xff
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 30h], edx
        push 9dh
        push 42h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 13 70 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x70
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 974h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 34h], ecx
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 AE 78 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x78
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x586ee58a
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586ee64a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D 98 00 00 00: jge 0x586ee6ec
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 8
        shl eax, 1
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 974h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx*4 + 8]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 46 64 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x64
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 C7 85 D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0xff
        mov ecx, 8
        shl ecx, 1
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 44h], edx
        push 0e1h
        push 12h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 5E 6F 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x6f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, 8
        shl eax, 1
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 974h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 48h], ecx
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 FA 77 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x77
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 55 FF FF FF: jmp 0x586ee641
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B7 00 00 00: jmp 0x586ee7a8
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586ee703
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x586ee7a8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx*4 + 10h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 8C 63 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x63
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 0D 85 D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0xff
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 974h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 58h], ecx
        push 0e1h
        push 12h
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 A3 6E 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x6e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 974h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 5ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 3E 77 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x77
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x586ee6fa
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
