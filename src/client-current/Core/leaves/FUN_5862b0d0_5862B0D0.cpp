// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862B0D0 .. +0x55A bytes.
extern "C" __declspec(naked) void FUN_5862b0d0_5862B0D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 148h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 10ch], ecx
        mov dword ptr [ebp - 110h], 0
        mov dword ptr [ebp - 114h], 0
        mov dword ptr [ebp - 108h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5862b119
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 108h]
        add eax, 1
        mov dword ptr [ebp - 108h], eax
        cmp dword ptr [ebp - 108h], 3
        ; Exact mapped bytes 0F 8D 82 00 00 00: jge 0x5862b1a8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3F FD FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        movzx edx, byte ptr [eax + ecx + 274h]
        test edx, edx
        ; Exact mapped bytes 75 04: jne 0x5862b147
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes EB 63: jmp 0x5862b1a8
        __asm _emit 0xeb
        __asm _emit 0x63
        ; Exact mapped bytes EB 5C: jmp 0x5862b1a3
        __asm _emit 0xeb
        __asm _emit 0x5c
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E FD FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        movzx edx, byte ptr [eax + ecx + 274h]
        cmp edx, 1
        ; Exact mapped bytes 75 11: jne 0x5862b176
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 110h]
        add eax, 1
        mov dword ptr [ebp - 110h], eax
        ; Exact mapped bytes EB 2D: jmp 0x5862b1a3
        __asm _emit 0xeb
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EF FC FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        movzx edx, byte ptr [eax + ecx + 274h]
        cmp edx, 2
        ; Exact mapped bytes 75 0F: jne 0x5862b1a3
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 114h]
        add eax, 1
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes E9 62 FF FF FF: jmp 0x5862b10a
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 110h]
        add ecx, dword ptr [ebp - 114h]
        push ecx
        push 588aea1ch
        ; Exact mapped bytes E8 31 6E EF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x6e
        __asm _emit 0xef
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
        add esp, 0ch
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 22ch]
        mov dword ptr [ebp - 11ch], ecx
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 A9 AE E5 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xae
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 110h]
        push eax
        push 588aea44h
        ; Exact mapped bytes E8 E8 6D EF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 4
        push eax
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
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 230h]
        mov dword ptr [ebp - 120h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 60 AE E5 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xae
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 114h]
        push edx
        push 588aea70h
        ; Exact mapped bytes E8 9F 6D EF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x6d
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 4
        push eax
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
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + 234h]
        mov dword ptr [ebp - 124h], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 17 AE E5 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xae
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 10ch]
        movzx edx, byte ptr [ecx + 264h]
        test edx, edx
        ; Exact mapped bytes 0F 8E D0 00 00 00: jle 0x5862b36f
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 108h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5862b2ba
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 108h]
        add eax, 1
        mov dword ptr [ebp - 108h], eax
        mov ecx, dword ptr [ebp - 10ch]
        movzx edx, byte ptr [ecx + 264h]
        cmp dword ptr [ebp - 108h], edx
        ; Exact mapped bytes 7D 60: jge 0x5862b32f
        __asm _emit 0x7d
        __asm _emit 0x60
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 268h]
        mov edx, dword ptr [ebp - 108h]
        cmp dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes 74 43: je 0x5862b32a
        __asm _emit 0x74
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 268h]
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 128h], eax
        mov ecx, dword ptr [ebp - 128h]
        push ecx
        ; Exact mapped bytes E8 3D 5D 20 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x5d
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 268h]
        mov ecx, dword ptr [ebp - 108h]
        mov dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes E9 7C FF FF FF: jmp 0x5862b2ab
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10ch]
        cmp dword ptr [edx + 268h], 0
        ; Exact mapped bytes 74 31: je 0x5862b36f
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 268h]
        mov dword ptr [ebp - 12ch], ecx
        mov edx, dword ptr [ebp - 12ch]
        push edx
        ; Exact mapped bytes E8 EF 5C 20 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x5c
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 10ch]
        mov dword ptr [eax + 268h], 0
        mov ecx, dword ptr [ebp - 110h]
        add ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ebp - 10ch]
        mov byte ptr [edx + 264h], cl
        mov eax, dword ptr [ebp - 10ch]
        movzx eax, byte ptr [eax + 264h]
        mov ecx, 4
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 99 5C 20 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x5c
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 130h], eax
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [ebp - 130h]
        mov dword ptr [eax + 268h], ecx
        mov dword ptr [ebp - 108h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5862b3df
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 108h]
        add edx, 1
        mov dword ptr [ebp - 108h], edx
        mov eax, dword ptr [ebp - 10ch]
        movzx ecx, byte ptr [eax + 264h]
        cmp dword ptr [ebp - 108h], ecx
        ; Exact mapped bytes 0F 8D 19 02 00 00: jge 0x5862b611
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6D FA FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 108h]
        movzx eax, byte ptr [eax + edx + 274h]
        cmp eax, 1
        ; Exact mapped bytes 0F 85 22 01 00 00: jne 0x5862b53c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 118h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5862b435
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 118h]
        add ecx, 1
        mov dword ptr [ebp - 118h], ecx
        cmp dword ptr [ebp - 118h], 9
        ; Exact mapped bytes 0F 8D F5 00 00 00: jge 0x5862b537
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 118h], 0e84h
        movzx esi, word ptr [edx + 588f4f90h]
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 12 FA FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        cmp esi, dword ptr [eax + ecx*4 + 1f4h]
        ; Exact mapped bytes 0F 85 C1 00 00 00: jne 0x5862b532
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F4 F9 FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        imul edx, dword ptr [ebp - 108h], 18h
        lea eax, [eax + edx + 294h]
        mov dword ptr [ebp - 134h], eax
        push 588aea9ch
        ; Exact mapped bytes E8 56 6B EF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x6b
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 138h], eax
        imul ecx, dword ptr [ebp - 118h], 0e84h
        add ecx, 588f4f78h
        push ecx
        mov edx, dword ptr [ebp - 134h]
        push edx
        mov eax, dword ptr [ebp - 138h]
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        add eax, 1
        push eax
        ; Exact mapped bytes E8 5A 5B 20 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x5b
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 13ch], eax
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 268h]
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [ebp - 13ch]
        mov dword ptr [ecx + edx*4], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 268h]
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [eax + ecx*4]
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 05: jmp 0x5862b537
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 EF FE FF FF: jmp 0x5862b426
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D0 00 00 00: jmp 0x5862b60c
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 29 F9 FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        movzx edx, byte ptr [eax + ecx + 274h]
        cmp edx, 2
        ; Exact mapped bytes 0F 85 AE 00 00 00: jne 0x5862b60c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 F9 FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        imul ecx, dword ptr [ebp - 108h], 18h
        lea edx, [eax + ecx + 294h]
        mov dword ptr [ebp - 140h], edx
        push 588aeac8h
        ; Exact mapped bytes E8 69 6A EF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x6a
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 144h], eax
        mov eax, dword ptr [ebp - 140h]
        push eax
        mov ecx, dword ptr [ebp - 144h]
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
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        add eax, 1
        push eax
        ; Exact mapped bytes E8 7E 5A 20 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x5a
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 148h], eax
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + 268h]
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [ebp - 148h]
        mov dword ptr [edx + eax*4], ecx
        lea edx, [ebp - 104h]
        push edx
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 268h]
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [ecx + edx*4]
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 BF FD FF FF: jmp 0x5862b3d0
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 74 F8 FF FF: call 0x5862ae90
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 28 5A 20 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5a
        __asm _emit 0x20
        __asm _emit 0x00
        mov esp, ebp
    }
}
