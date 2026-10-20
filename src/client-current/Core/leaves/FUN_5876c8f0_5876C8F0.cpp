// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876C8F0 .. +0x283 bytes.
extern "C" __declspec(naked) void FUN_5876c8f0_5876C8F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push esi
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 14h], 0
        mov byte ptr [ebp - 1], 1
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x5876c917
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        movzx ecx, byte ptr [ebp + 0ch]
        cmp dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes 0F 8D 20 02 00 00: jge 0x5876cb44
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx]
        and eax, 1fh
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + eax*4 + 17ch], 0
        ; Exact mapped bytes 0F 84 F9 01 00 00: je 0x5876cb36
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx]
        and eax, 1fh
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax*4 + 17ch]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        and ecx, 1fh
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx*4 + 17ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 55 D8: call dword ptr [ebp - 0x28]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd8
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 10h], 3
        ; Exact mapped bytes 7D 25: jge 0x5876c9a4
        __asm _emit 0x7d
        __asm _emit 0x25
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        and edx, 1fh
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx*4 + 17ch]
        mov dword ptr [ebp - 2ch], ecx
        imul edx, dword ptr [ebp - 10h], 3
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 6F 95 D1 FF: call 0x58485f10
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x95
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 20: jmp 0x5876c9c4
        __asm _emit 0xeb
        __asm _emit 0x20
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        and ecx, 1fh
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx*4 + 17ch]
        mov dword ptr [ebp - 30h], eax
        push -1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 4D 95 D1 FF: call 0x58485f10
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x95
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F1 9F D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x9f
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F 85 AA 00 00 00: jne 0x5876ca82
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CB 2B F1 FF: call 0x5867f5b0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x2b
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 00 42 DE FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x42
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        and edx, 1fh
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 66 68 E6 FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x68
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 24h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CB 41 DE FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x41
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        and edx, 1fh
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 31 68 E6 FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x68
        __asm _emit 0xe6
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 28h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        add eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 8B 0D 60 06 96 58: mov ecx, dword ptr [0x58960660]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        sub ecx, 1
        ; Exact mapped bytes 89 0D 60 06 96 58: mov dword ptr [0x58960660], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        movzx edx, byte ptr [ebp - 1]
        test edx, edx
        ; Exact mapped bytes 74 16: je 0x5876ca82
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 A6 D6 FF: call 0x584d70b0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xa6
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 52 3A 00 00: call 0x587704d0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 1], 0
        mov eax, dword ptr [ebp - 0ch]
        add eax, 34ch
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        and edx, 1fh
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 C2 05 D2 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x05
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        movzx eax, word ptr [ebp - 8]
        cmp eax, 5
        ; Exact mapped bytes 75 42: jne 0x5876caed
        __asm _emit 0x75
        __asm _emit 0x42
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx + 1288h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov edx, dword ptr [ebp - 20h]
        lea eax, [ecx + edx*8]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, 8
        imul ecx, ecx, 0
        mov esi, dword ptr [ebp - 0ch]
        lea ecx, [esi + ecx + 1288h]
        mov dword ptr [ecx + edx], eax
        ; Exact mapped bytes EB 49: jmp 0x5876cb36
        __asm _emit 0xeb
        __asm _emit 0x49
        movzx edx, word ptr [ebp - 8]
        cmp edx, 6
        ; Exact mapped bytes 75 40: jne 0x5876cb36
        __asm _emit 0x75
        __asm _emit 0x40
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx + 1288h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov eax, dword ptr [ebp - 20h]
        lea ecx, [edx + eax*8]
        mov edx, 4
        shl edx, 0
        mov eax, 8
        imul eax, eax, 0
        mov esi, dword ptr [ebp - 0ch]
        lea eax, [esi + eax + 1288h]
        mov dword ptr [eax + edx], ecx
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 4
        mov dword ptr [ebp + 10h], ecx
        ; Exact mapped bytes E9 CA FD FF FF: jmp 0x5876c90e
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 14h], 14h
        ; Exact mapped bytes 7F 22: jg 0x5876cb6c
        __asm _emit 0x7f
        __asm _emit 0x22
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6B 9E D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x9e
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 12: jne 0x5876cb6c
        __asm _emit 0x75
        __asm _emit 0x12
        push 6dh
        push 6ah
        push 16h
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 51 00 00: call 0x58771c70
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
