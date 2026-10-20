// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586B3F00 .. +0xC20 bytes.
extern "C" __declspec(naked) void FUN_586b3f00_586B3F00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1d8h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 114h], ecx
        push 54h
        push 0
        lea eax, [ebp - 0d8h]
        push eax
        ; Exact mapped bytes E8 E7 8E 19 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x8e
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 114h]
        movzx edx, word ptr [ecx + 142h]
        mov dword ptr [ebp - 148h], edx
        cmp dword ptr [ebp - 148h], 10h
        ; Exact mapped bytes 0F 87 71 06 00 00: ja 0x586b45bd
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x71
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 148h]
        movzx ecx, byte ptr [eax + 586b4b34h]
        ; Exact mapped bytes FF 24 8D 20 4B 6B 58: jmp dword ptr [ecx*4 + 0x586b4b20]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x20
        __asm _emit 0x4b
        __asm _emit 0x6b
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 148h]
        shr eax, 3
        and eax, 1
        ; Exact mapped bytes 0F 84 64 01 00 00: je 0x586b40dc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 38h
        push 0
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes E8 88 8E 19 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x8e
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 118h], 0
        ; Exact mapped bytes EB 0F: jmp 0x586b3fa6
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 118h]
        add edx, 1
        mov dword ptr [ebp - 118h], edx
        cmp dword ptr [ebp - 118h], 0ah
        ; Exact mapped bytes 7D 5D: jge 0x586b400c
        __asm _emit 0x7d
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 118h]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 3F FE FF FF: call 0x586b3e00
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], eax
        mov ecx, dword ptr [ebp - 114h]
        add ecx, dword ptr [ebp - 118h]
        movzx edx, byte ptr [ecx + 170h]
        mov eax, 1ch
        imul ecx, eax, 0
        lea eax, [ebp + ecx - 110h]
        mov ecx, dword ptr [ebp - 14ch]
        add edx, dword ptr [eax + ecx*4]
        mov eax, 1ch
        imul ecx, eax, 0
        lea eax, [ebp + ecx - 110h]
        mov ecx, dword ptr [ebp - 14ch]
        mov dword ptr [eax + ecx*4], edx
        ; Exact mapped bytes EB 8B: jmp 0x586b3f97
        __asm _emit 0xeb
        __asm _emit 0x8b
        mov dword ptr [ebp - 118h], 0
        ; Exact mapped bytes EB 0F: jmp 0x586b4027
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 118h]
        add edx, 1
        mov dword ptr [ebp - 118h], edx
        cmp dword ptr [ebp - 118h], 7
        ; Exact mapped bytes 0F 8D A3 00 00 00: jge 0x586b40d7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        add eax, dword ptr [ebp - 118h]
        movzx ecx, byte ptr [eax + 15bh]
        mov edx, 1ch
        shl edx, 0
        lea eax, [ebp + edx - 110h]
        mov edx, dword ptr [ebp - 118h]
        mov dword ptr [eax + edx*4], ecx
        mov eax, 1ch
        shl eax, 0
        lea ecx, [ebp + eax - 110h]
        mov edx, dword ptr [ebp - 118h]
        mov eax, dword ptr [ecx + edx*4]
        push eax
        mov ecx, 1ch
        imul edx, ecx, 0
        lea eax, [ebp + edx - 110h]
        mov ecx, dword ptr [ebp - 118h]
        mov edx, dword ptr [eax + ecx*4]
        push edx
        push 588b0be8h
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
        mov ecx, dword ptr [ebp - 118h]
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + ecx*4 + 90h]
        mov dword ptr [ebp - 1a0h], eax
        lea ecx, [ebp - 84h]
        push ecx
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 BF A0 E1 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xa0
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 41 FF FF FF: jmp 0x586b4018
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 08 01 00 00: jmp 0x586b41e4
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 134h], 0
        ; Exact mapped bytes EB 0F: jmp 0x586b40f7
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 134h]
        add edx, 1
        mov dword ptr [ebp - 134h], edx
        cmp dword ptr [ebp - 134h], 0ah
        ; Exact mapped bytes 0F 8D E0 00 00 00: jge 0x586b41e4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 134h]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 EA FC FF FF: call 0x586b3e00
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        mov ecx, dword ptr [ebp - 114h]
        add ecx, dword ptr [ebp - 134h]
        movzx edx, byte ptr [ecx + 170h]
        mov eax, dword ptr [ebp - 124h]
        shl eax, 1
        add edx, dword ptr [ebp + eax*4 - 0d8h]
        mov ecx, dword ptr [ebp - 124h]
        shl ecx, 1
        mov dword ptr [ebp + ecx*4 - 0d8h], edx
        mov edx, dword ptr [ebp - 114h]
        add edx, dword ptr [ebp - 134h]
        movzx eax, byte ptr [edx + 17ah]
        mov ecx, dword ptr [ebp - 124h]
        shl ecx, 1
        add eax, dword ptr [ebp + ecx*4 - 0d4h]
        mov edx, dword ptr [ebp - 124h]
        shl edx, 1
        mov dword ptr [ebp + edx*4 - 0d4h], eax
        mov eax, dword ptr [ebp - 124h]
        shl eax, 1
        mov ecx, dword ptr [ebp + eax*4 - 0d4h]
        push ecx
        mov edx, dword ptr [ebp - 124h]
        shl edx, 1
        mov eax, dword ptr [ebp + edx*4 - 0d8h]
        push eax
        push 588b0bf0h
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
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + edx*4 + 90h]
        mov dword ptr [ebp - 1d0h], ecx
        lea edx, [ebp - 84h]
        push edx
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 B2 9F E1 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x9f
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 04 FF FF FF: jmp 0x586b40e8
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 DC 04 00 00: jmp 0x586b46c5
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 138h], 0
        ; Exact mapped bytes EB 0F: jmp 0x586b4204
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 138h]
        add eax, 1
        mov dword ptr [ebp - 138h], eax
        cmp dword ptr [ebp - 138h], 0ah
        ; Exact mapped bytes 0F 8D E3 00 00 00: jge 0x586b42f4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 138h]
        push ecx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 DD FB FF FF: call 0x586b3e00
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], eax
        mov edx, dword ptr [ebp - 114h]
        add edx, dword ptr [ebp - 138h]
        movzx eax, byte ptr [edx + 170h]
        mov ecx, dword ptr [ebp - 128h]
        shl ecx, 1
        add eax, dword ptr [ebp + ecx*4 - 0d8h]
        mov edx, dword ptr [ebp - 128h]
        shl edx, 1
        mov dword ptr [ebp + edx*4 - 0d8h], eax
        mov eax, dword ptr [ebp - 114h]
        add eax, dword ptr [ebp - 138h]
        movzx ecx, byte ptr [eax + 17ah]
        mov edx, dword ptr [ebp - 128h]
        shl edx, 1
        mov eax, dword ptr [ebp + edx*4 - 0d4h]
        lea ecx, [eax + ecx*2]
        mov edx, dword ptr [ebp - 128h]
        shl edx, 1
        mov dword ptr [ebp + edx*4 - 0d4h], ecx
        mov eax, dword ptr [ebp - 128h]
        shl eax, 1
        mov ecx, dword ptr [ebp + eax*4 - 0d4h]
        push ecx
        mov edx, dword ptr [ebp - 128h]
        shl edx, 1
        mov eax, dword ptr [ebp + edx*4 - 0d8h]
        push eax
        push 588b0bf8h
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
        mov edx, dword ptr [ebp - 128h]
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + edx*4 + 90h]
        mov dword ptr [ebp - 1d4h], ecx
        lea edx, [ebp - 84h]
        push edx
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 A2 9E E1 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x9e
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 01 FF FF FF: jmp 0x586b41f5
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 CC 03 00 00: jmp 0x586b46c5
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x586b4314
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 12ch]
        add eax, 1
        mov dword ptr [ebp - 12ch], eax
        cmp dword ptr [ebp - 12ch], 0ah
        ; Exact mapped bytes 0F 8D 18 01 00 00: jge 0x586b4439
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 12ch]
        push ecx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 CD FA FF FF: call 0x586b3e00
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        mov edx, dword ptr [ebp - 114h]
        add edx, dword ptr [ebp - 12ch]
        movzx eax, byte ptr [edx + 170h]
        imul ecx, dword ptr [ebp - 120h], 3
        add eax, dword ptr [ebp + ecx*4 - 0d8h]
        imul edx, dword ptr [ebp - 120h], 3
        mov dword ptr [ebp + edx*4 - 0d8h], eax
        mov eax, dword ptr [ebp - 114h]
        add eax, dword ptr [ebp - 12ch]
        movzx ecx, byte ptr [eax + 184h]
        imul edx, dword ptr [ebp - 120h], 3
        add ecx, dword ptr [ebp + edx*4 - 0d4h]
        imul eax, dword ptr [ebp - 120h], 3
        mov dword ptr [ebp + eax*4 - 0d4h], ecx
        mov ecx, dword ptr [ebp - 114h]
        add ecx, dword ptr [ebp - 12ch]
        movzx edx, byte ptr [ecx + 17ah]
        imul eax, dword ptr [ebp - 120h], 3
        add edx, dword ptr [ebp + eax*4 - 0d0h]
        imul ecx, dword ptr [ebp - 120h], 3
        mov dword ptr [ebp + ecx*4 - 0d0h], edx
        imul edx, dword ptr [ebp - 120h], 3
        mov eax, dword ptr [ebp + edx*4 - 0d0h]
        push eax
        imul ecx, dword ptr [ebp - 120h], 3
        mov edx, dword ptr [ebp + ecx*4 - 0d4h]
        push edx
        imul eax, dword ptr [ebp - 120h], 3
        mov ecx, dword ptr [ebp + eax*4 - 0d8h]
        push ecx
        push 588b0c00h
        lea edx, [ebp - 84h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 14h
        mov eax, dword ptr [ebp - 120h]
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + eax*4 + 90h]
        mov dword ptr [ebp - 158h], edx
        lea eax, [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 5D 9D E1 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x9d
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 CC FE FF FF: jmp 0x586b4305
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 87 02 00 00: jmp 0x586b46c5
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 140h], 0
        ; Exact mapped bytes EB 0F: jmp 0x586b4459
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 140h]
        add ecx, 1
        mov dword ptr [ebp - 140h], ecx
        cmp dword ptr [ebp - 140h], 0ah
        ; Exact mapped bytes 0F 8D 52 01 00 00: jge 0x586b45b8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 140h]
        push edx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 88 F9 FF FF: call 0x586b3e00
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        mov eax, dword ptr [ebp - 114h]
        add eax, dword ptr [ebp - 140h]
        movzx ecx, byte ptr [eax + 170h]
        mov edx, dword ptr [ebp - 11ch]
        shl edx, 1
        add ecx, dword ptr [ebp + edx*4 - 0d8h]
        mov eax, dword ptr [ebp - 11ch]
        shl eax, 1
        mov dword ptr [ebp + eax*4 - 0d8h], ecx
        mov ecx, dword ptr [ebp - 114h]
        movzx edx, word ptr [ecx + 142h]
        cmp edx, 0fh
        ; Exact mapped bytes 0F 85 8D 00 00 00: jne 0x586b4552
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 75 27: jne 0x586b44f5
        __asm _emit 0x75
        __asm _emit 0x27
        mov eax, 1
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 114h]
        movzx eax, byte ptr [edx + ecx + 162h]
        mov ecx, dword ptr [ebp - 11ch]
        shl ecx, 1
        mov dword ptr [ebp + ecx*4 - 0d4h], eax
        ; Exact mapped bytes EB 5D: jmp 0x586b4552
        __asm _emit 0xeb
        __asm _emit 0x5d
        cmp dword ptr [ebp - 11ch], 1
        ; Exact mapped bytes 75 27: jne 0x586b4525
        __asm _emit 0x75
        __asm _emit 0x27
        mov edx, 1
        shl edx, 0
        mov eax, dword ptr [ebp - 114h]
        movzx ecx, byte ptr [eax + edx + 162h]
        mov edx, dword ptr [ebp - 11ch]
        shl edx, 1
        mov dword ptr [ebp + edx*4 - 0d4h], ecx
        ; Exact mapped bytes EB 2D: jmp 0x586b4552
        __asm _emit 0xeb
        __asm _emit 0x2d
        cmp dword ptr [ebp - 11ch], 6
        ; Exact mapped bytes 75 24: jne 0x586b4552
        __asm _emit 0x75
        __asm _emit 0x24
        mov eax, 1
        shl eax, 1
        mov ecx, dword ptr [ebp - 114h]
        movzx edx, byte ptr [ecx + eax + 162h]
        mov eax, dword ptr [ebp - 11ch]
        shl eax, 1
        mov dword ptr [ebp + eax*4 - 0d4h], edx
        mov ecx, dword ptr [ebp - 11ch]
        shl ecx, 1
        mov edx, dword ptr [ebp + ecx*4 - 0d4h]
        push edx
        mov eax, dword ptr [ebp - 11ch]
        shl eax, 1
        mov ecx, dword ptr [ebp + eax*4 - 0d8h]
        push ecx
        push 588b0c0ch
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
        mov eax, dword ptr [ebp - 11ch]
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + eax*4 + 90h]
        mov dword ptr [ebp - 15ch], edx
        lea eax, [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 DE 9B E1 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x9b
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 92 FE FF FF: jmp 0x586b444a
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 08 01 00 00: jmp 0x586b46c5
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 13ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x586b45d8
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 13ch]
        add ecx, 1
        mov dword ptr [ebp - 13ch], ecx
        cmp dword ptr [ebp - 13ch], 0ah
        ; Exact mapped bytes 0F 8D E0 00 00 00: jge 0x586b46c5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 13ch]
        push edx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 09 F8 FF FF: call 0x586b3e00
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        mov eax, dword ptr [ebp - 114h]
        add eax, dword ptr [ebp - 13ch]
        movzx ecx, byte ptr [eax + 170h]
        mov edx, dword ptr [ebp - 130h]
        shl edx, 1
        add ecx, dword ptr [ebp + edx*4 - 0d8h]
        mov eax, dword ptr [ebp - 130h]
        shl eax, 1
        mov dword ptr [ebp + eax*4 - 0d8h], ecx
        mov ecx, dword ptr [ebp - 114h]
        add ecx, dword ptr [ebp - 13ch]
        movzx edx, byte ptr [ecx + 17ah]
        mov eax, dword ptr [ebp - 130h]
        shl eax, 1
        add edx, dword ptr [ebp + eax*4 - 0d4h]
        mov ecx, dword ptr [ebp - 130h]
        shl ecx, 1
        mov dword ptr [ebp + ecx*4 - 0d4h], edx
        mov edx, dword ptr [ebp - 130h]
        shl edx, 1
        mov eax, dword ptr [ebp + edx*4 - 0d4h]
        push eax
        mov ecx, dword ptr [ebp - 130h]
        shl ecx, 1
        mov edx, dword ptr [ebp + ecx*4 - 0d8h]
        push edx
        push 588b0c14h
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
        mov ecx, dword ptr [ebp - 130h]
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + ecx*4 + 90h]
        mov dword ptr [ebp - 160h], eax
        lea ecx, [ebp - 84h]
        push ecx
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 D1 9A E1 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x9a
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 04 FF FF FF: jmp 0x586b45c9
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 114h]
        movzx eax, word ptr [edx + 142h]
        cmp eax, 0eh
        ; Exact mapped bytes 7F 3B: jg 0x586b4712
        __asm _emit 0x7f
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 8ch]
        mov dword ptr [ebp - 168h], edx
        push 97h
        ; Exact mapped bytes 8B 0D 78 07 96 58: mov ecx, dword ptr [0x58960778]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 27 04 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x04
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        mov eax, dword ptr [ebp - 164h]
        push eax
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 1F 18 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x18
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 114h]
        movzx edx, word ptr [ecx + 142h]
        cmp edx, 0fh
        ; Exact mapped bytes 75 3D: jne 0x586b4761
        __asm _emit 0x75
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 170h], ecx
        push 0bah
        ; Exact mapped bytes 8B 0D D8 06 96 58: mov ecx, dword ptr [0x589606d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DA 03 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x03
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        mov edx, dword ptr [ebp - 16ch]
        push edx
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 D2 17 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x17
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4A: jmp 0x586b47ab
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 114h]
        movzx ecx, word ptr [eax + 142h]
        cmp ecx, 10h
        ; Exact mapped bytes 75 38: jne 0x586b47ab
        __asm _emit 0x75
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 8ch]
        mov dword ptr [ebp - 178h], eax
        push 0ah
        ; Exact mapped bytes 8B 0D D0 07 96 58: mov ecx, dword ptr [0x589607d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E 03 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x03
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 174h], eax
        mov ecx, dword ptr [ebp - 174h]
        push ecx
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 86 17 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x17
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 144h], 0
        ; Exact mapped bytes EB 0F: jmp 0x586b47c6
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 144h]
        add edx, 1
        mov dword ptr [ebp - 144h], edx
        cmp dword ptr [ebp - 144h], 7
        ; Exact mapped bytes 7D 1B: jge 0x586b47ea
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 144h]
        mov ecx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [ecx + eax*4 + 90h]
        ; Exact mapped bytes E8 D9 9D E1 FF: call 0x584ce5c0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x9d
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CD: jmp 0x586b47b7
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + eax + 0ach]
        mov dword ptr [ebp - 17ch], edx
        mov eax, dword ptr [ebp - 114h]
        movzx ecx, byte ptr [eax + 152h]
        push ecx
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 72 69 10 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x69
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + edx + 0ach]
        mov dword ptr [ebp - 180h], ecx
        mov edx, dword ptr [ebp - 114h]
        movzx eax, byte ptr [edx + 153h]
        push eax
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 3E 69 10 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x69
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 190h]
        mov dword ptr [ebp - 184h], edx
        mov eax, dword ptr [ebp - 114h]
        add eax, 0ech
        push eax
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 15 99 E1 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x99
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [ecx + 190h]
        ; Exact mapped bytes E8 34 01 DD FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 150h], eax
        mov edx, dword ptr [ebp - 150h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 18ch], ecx
        mov edx, dword ptr [ebp - 114h]
        add edx, 0ech
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 188h], eax
        lea eax, [ebp - 1c4h]
        push eax
        mov ecx, dword ptr [ebp - 188h]
        push ecx
        mov edx, dword ptr [ebp - 114h]
        add edx, 0ech
        push edx
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes FF 95 74 FE FF FF: call dword ptr [ebp - 0x18c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 1c4h], 47h
        ; Exact mapped bytes 7E 71: jle 0x586b495e
        __asm _emit 0x7e
        __asm _emit 0x71
        mov dword ptr [ebp - 190h], 0beh
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 190h]
        mov dword ptr [ebp - 194h], ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp - 190h]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 4]
        add edx, 7ch
        sub edx, dword ptr [ebp - 1c4h]
        push edx
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 E9 0C 10 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 190h]
        mov dword ptr [ebp - 198h], ecx
        mov edx, dword ptr [ebp - 1c4h]
        push edx
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 45 25 E0 FF: call 0x584b6ea0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x25
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 59: jmp 0x586b49b7
        __asm _emit 0xeb
        __asm _emit 0x59
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 190h]
        mov dword ptr [ebp - 19ch], ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 8]
        add eax, 0beh
        push eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 4]
        add edx, 33h
        push edx
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 89 0C 10 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 190h]
        mov dword ptr [ebp - 1b8h], ecx
        push 49h
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 EA 24 E0 FF: call 0x584b6ea0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x24
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 194h]
        mov dword ptr [ebp - 1a4h], eax
        mov ecx, dword ptr [ebp - 114h]
        add ecx, 122h
        push ecx
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 AF 97 E1 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x97
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [edx + 194h]
        ; Exact mapped bytes E8 CE FF DC FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        mov eax, dword ptr [ebp - 154h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 1ach], edx
        mov eax, dword ptr [ebp - 114h]
        add eax, 122h
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 1a8h], eax
        lea ecx, [ebp - 1cch]
        push ecx
        mov edx, dword ptr [ebp - 1a8h]
        push edx
        mov eax, dword ptr [ebp - 114h]
        add eax, 122h
        push eax
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes FF 95 54 FE FF FF: call dword ptr [ebp - 0x1ac]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 1cch], 47h
        ; Exact mapped bytes 7E 67: jle 0x586b4ab8
        __asm _emit 0x7e
        __asm _emit 0x67
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 194h]
        mov dword ptr [ebp - 1b0h], edx
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 0d2h
        push ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 4]
        add eax, 7ch
        sub eax, dword ptr [ebp - 1cch]
        push eax
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 8F 0B 10 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x0b
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 194h]
        mov dword ptr [ebp - 1b4h], edx
        mov eax, dword ptr [ebp - 1cch]
        push eax
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 EB 23 E0 FF: call 0x584b6ea0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x23
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 5A: jmp 0x586b4b12
        __asm _emit 0xeb
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 194h]
        mov dword ptr [ebp - 1d8h], edx
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 0d2h
        push ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 4]
        add eax, 33h
        push eax
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 2E 0B 10 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x0b
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 194h]
        mov dword ptr [ebp - 1bch], edx
        push 49h
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 8F 23 E0 FF: call 0x584b6ea0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x23
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 34 C5 17 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xc5
        __asm _emit 0x17
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
