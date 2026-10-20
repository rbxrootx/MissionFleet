// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58495AC0 .. +0xB85 bytes.
extern "C" __declspec(naked) void FUN_58495ac0_58495AC0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887d9d4h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 84h
        push esi
        push edi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0fffeh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 48 24: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0fffbh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 7ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4c4h], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 344h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 328h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 32ch], 0
        mov edi, dword ptr [ebp - 10h]
        add edi, 230h
        mov ecx, 35h
        mov esi, dword ptr [ebp + 0ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC FD FF FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 0ah
        ; Exact mapped bytes 0F 85 BF 00 00 00: jne 0x58495c3c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 2c8h]
        cmp eax, 1
        ; Exact mapped bytes 75 24: jne 0x58495bb0
        __asm _emit 0x75
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 2deh]
        imul eax, edx, 6
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 82 DE 02 00 00: mov word ptr [edx + 0x2de], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0xde
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 8C 00 00 00: jmp 0x58495c3c
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 2c8h]
        cmp ecx, 2
        ; Exact mapped bytes 75 2E: jne 0x58495bed
        __asm _emit 0x75
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 2deh]
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 59 05 C8 50 89 58: mulsd xmm0, qword ptr [0x588950c8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xc8
        __asm _emit 0x50
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 5E 05 D0 50 89 58: divsd xmm0, qword ptr [0x588950d0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0xd0
        __asm _emit 0x50
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 2C C8: cvttsd2si ecx, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 8A DE 02 00 00: mov word ptr [edx + 0x2de], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xde
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 4F: jmp 0x58495c3c
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 2c8h]
        cmp ecx, 3
        ; Exact mapped bytes 75 21: jne 0x58495c1d
        __asm _emit 0x75
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 2deh]
        imul eax, eax, 7
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 82 DE 02 00 00: mov word ptr [edx + 0x2de], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0xde
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1F: jmp 0x58495c3c
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 2deh]
        imul eax, ecx, 9
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 82 DE 02 00 00: mov word ptr [edx + 0x2de], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0xde
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 2c8h]
        cmp ecx, 2
        ; Exact mapped bytes 75 50: jne 0x58495c9b
        __asm _emit 0x75
        __asm _emit 0x50
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 2dah]
        imul eax, eax, 6eh
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 82 DA 02 00 00: mov word ptr [edx + 0x2da], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0xda
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 2
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + ecx + 2cah]
        imul eax, eax, 6eh
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, 2
        imul ecx, edx, 0
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 84 0A CA 02 00 00: mov word ptr [edx + ecx + 0x2ca], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 91 D8 02 00 00: mov dx, word ptr [ecx + 0x2d8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 90 28 05 00 00: mov word ptr [eax + 0x528], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 530h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 528h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 528h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 37 E3 06 00: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xe3
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 534h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 528h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 528h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 0D E3 06 00: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xe3
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 530h]
        mov dword ptr [ebp - 30h], ecx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 C7 01 FF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 534h]
        mov dword ptr [ebp - 34h], eax
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 B1 01 FF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 52ch]
        mov dword ptr [ebp - 38h], edx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 9B 01 FF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 2c8h]
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x58495ded
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 2
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        movzx eax, word ptr [ecx + eax + 2cah]
        mov edx, 2
        imul ecx, edx, 5
        mov edx, dword ptr [ebp + 18h]
        movzx ecx, word ptr [edx + ecx + 8]
        add ecx, 64h
        imul eax, ecx
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, 2
        imul ecx, edx, 0
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 84 0A CA 02 00 00: mov word ptr [edx + ecx + 0x2ca], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        movzx eax, word ptr [eax + 2d4h]
        mov ecx, 2
        imul edx, ecx, 5
        mov ecx, dword ptr [ebp + 18h]
        movzx edx, word ptr [ecx + edx + 8]
        add edx, 64h
        imul eax, edx
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 82 D4 02 00 00: mov word ptr [edx + 0x2d4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 2
        imul ecx, eax, 5
        mov edx, dword ptr [ebp + 18h]
        movzx eax, word ptr [edx + ecx + 8]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4c0h], eax
        ; Exact mapped bytes E9 58 01 00 00: jmp 0x58495f45
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 2c8h]
        cmp eax, 2
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x58495e94
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        movzx eax, word ptr [eax + edx + 2cah]
        mov ecx, 2
        imul edx, ecx, 3
        mov ecx, dword ptr [ebp + 18h]
        movzx edx, word ptr [ecx + edx + 8]
        add edx, 64h
        imul eax, edx
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, 2
        imul ecx, edx, 0
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 84 0A CA 02 00 00: mov word ptr [edx + ecx + 0x2ca], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        movzx eax, word ptr [eax + 2d4h]
        mov ecx, 2
        imul edx, ecx, 3
        mov ecx, dword ptr [ebp + 18h]
        movzx edx, word ptr [ecx + edx + 8]
        add edx, 64h
        imul eax, edx
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 82 D4 02 00 00: mov word ptr [edx + 0x2d4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 2
        imul ecx, eax, 3
        mov edx, dword ptr [ebp + 18h]
        movzx eax, word ptr [edx + ecx + 8]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4c0h], eax
        ; Exact mapped bytes E9 B1 00 00 00: jmp 0x58495f45
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 2c8h]
        cmp eax, 3
        ; Exact mapped bytes 74 13: je 0x58495eb6
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 2c8h]
        cmp edx, 4
        ; Exact mapped bytes 0F 85 8F 00 00 00: jne 0x58495f45
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 2
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + ecx + 2cah]
        mov ecx, 2
        shl ecx, 2
        mov edx, dword ptr [ebp + 18h]
        movzx ecx, word ptr [edx + ecx + 8]
        add ecx, 64h
        imul eax, ecx
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, 2
        imul ecx, edx, 0
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 84 0A CA 02 00 00: mov word ptr [edx + ecx + 0x2ca], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        movzx eax, word ptr [eax + 2d4h]
        mov ecx, 2
        shl ecx, 2
        mov edx, dword ptr [ebp + 18h]
        movzx ecx, word ptr [edx + ecx + 8]
        add ecx, 64h
        imul eax, ecx
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 82 D4 02 00 00: mov word ptr [edx + 0x2d4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 2
        shl eax, 2
        mov ecx, dword ptr [ebp + 18h]
        movzx edx, word ptr [ecx + eax + 8]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4c0h], edx
        xor ecx, ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 8A D2 02 00 00: mov word ptr [edx + 0x2d2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 2deh]
        imul eax, ecx, 3
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0b0h], eax
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 2deh]
        imul edx, ecx, 56h
        imul eax, edx, 3
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0b4h], eax
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 2c8h]
        cmp ecx, 1
        ; Exact mapped bytes 75 20: jne 0x58495fbf
        __asm _emit 0x75
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 2deh]
        imul eax, eax, 6
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 548h], eax
        ; Exact mapped bytes EB 13: jmp 0x58495fd2
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 2deh]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 548h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 510h]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 2d2h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 9F 51 32 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x51
        __asm _emit 0x32
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C3 09 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x09
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x58496024
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B4 09 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x09
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9D 6F FF FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 90 6F FF FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 59: jne 0x5849607d
        __asm _emit 0x75
        __asm _emit 0x59
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 500h]
        mov dword ptr [ebp - 44h], eax
        push 25h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 EA FE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 14 0C FF FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 500h]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 DC 97 00 00: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 510h]
        mov dword ptr [ebp - 4ch], eax
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 66 FE FE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xfe
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x58496094
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 510h]
        mov dword ptr [ebp - 50h], edx
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 4D FE FE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xfe
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4f8h]
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 234h]
        push eax
        ; Exact mapped bytes 8B 0D 30 07 96 58: mov ecx, dword ptr [0x58960730]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1A EA FE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 9B 0B FF FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4fch]
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 234h]
        add edx, 1
        push edx
        ; Exact mapped bytes 8B 0D 30 07 96 58: mov ecx, dword ptr [0x58960730]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E6 E9 FE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov eax, dword ptr [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 67 0B FF FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 508h]
        mov dword ptr [ebp - 68h], edx
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 234h]
        add ecx, 6
        push ecx
        ; Exact mapped bytes 8B 0D 30 07 96 58: mov ecx, dword ptr [0x58960730]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 E9 FE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov edx, dword ptr [ebp - 64h]
        push edx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 33 0B FF FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 2dah]
        imul edx, ecx, 0fh
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 90 DA 02 00 00: mov word ptr [eax + 0x2da], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xda
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 2dah]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 22ch], edx
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + edx + 2ceh]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4bch], ecx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 348h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 76 E8 FE FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4], ecx
        mov dword ptr [eax + 8], edx
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4d4h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4d8h], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4dch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4e0h], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 45ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 468h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 470h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 34ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 324h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 318h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 314h], 0
        mov eax, dword ptr [ebp - 10h]
        imul ecx, dword ptr [eax + 334h], 3e8h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 33ch], ecx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 33ch]
        mov dword ptr [eax + 320h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4e8h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4d0h], 0ah
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 51ch], 0
        ; Exact mapped bytes 74 27: je 0x5849629c
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 51ch]
        mov dword ptr [ebp - 6ch], ecx
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [eax + 4]
        push edx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 65 78 0D 00: call 0x5856db00
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x78
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, byte ptr [eax + 9ch]
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 E5 00 00 00: jne 0x58496394
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 51ch], 0
        ; Exact mapped bytes 74 63: je 0x5849631e
        __asm _emit 0x74
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 51ch]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 51ch]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 51ch], 0
        ; Exact mapped bytes 74 3D: je 0x5849631e
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 51ch]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 17: je 0x5849630a
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 70h], edx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 90: call dword ptr [ebp - 0x70]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x90
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x58496311
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 51ch], 0
        ; Exact mapped bytes 83 3D C8 35 90 58 00: cmp dword ptr [0x589035c8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 6D: je 0x58496394
        __asm _emit 0x74
        __asm _emit 0x6d
        push 20h
        ; Exact mapped bytes E8 D6 AC 39 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xac
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 33: je 0x58496374
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 84 F3 FF FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8D E6 FE FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xe6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        push 26h
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 20 E7 FE FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp - 7ch]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B1 76 0D 00: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x76
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x5849637b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 80h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 80h]
        mov dword ptr [eax + 51ch], ecx
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 51ch], 0
        ; Exact mapped bytes 74 6F: je 0x5849640f
        __asm _emit 0x74
        __asm _emit 0x6f
        ; Exact mapped bytes A1 90 20 96 58: mov eax, dword ptr [0x58962090]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x584963ba
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 6
        ; Exact mapped bytes 7D 25: jge 0x584963e5
        __asm _emit 0x7d
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 14h]
        imul edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 39 15 90 20 96 58: cmp dword ptr [0x58962090], edx
        __asm _emit 0x39
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 14: jne 0x584963e3
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 14h]
        add eax, 2
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 2
        imul eax, ecx
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 02: jmp 0x584963e5
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB CC: jmp 0x584963b1
        __asm _emit 0xeb
        __asm _emit 0xcc
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 51ch]
        mov dword ptr [ebp - 84h], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [edx + 4]
        push ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 F2 76 0D 00: call 0x5856db00
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x76
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 2deh]
        cdq
        mov ecx, 64h
        idiv ecx
        shl eax, 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0a4h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 0a4h]
        imul edx, dword ptr [ecx + 0a4h]
        push edx
        ; Exact mapped bytes E8 FD AB 39 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xab
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [eax + 0a0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 0a4h]
        imul ecx, dword ptr [eax + 0a4h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a0h]
        push eax
        ; Exact mapped bytes E8 8E 69 3B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x69
        __asm _emit 0x3b
        __asm _emit 0x00
        add esp, 0ch
        push 2
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a0h]
        push eax
        ; Exact mapped bytes E8 B6 E0 04 00: call 0x584e4560
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx + 0a4h]
        imul eax, dword ptr [edx + 0a4h]
        push eax
        ; Exact mapped bytes E8 7C AB 39 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xab
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 8ch]
        mov dword ptr [ecx + 0b8h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 0a4h]
        imul edx, dword ptr [ecx + 0a4h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0b8h]
        push ecx
        ; Exact mapped bytes E8 0D 69 3B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x69
        __asm _emit 0x3b
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 2deh]
        imul eax, eax, 3
        cdq
        mov ecx, 0ah
        idiv ecx
        cdq
        mov ecx, 64h
        idiv ecx
        shl eax, 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0ach], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 0a4h]
        imul edx, dword ptr [ecx + 0a4h]
        push edx
        ; Exact mapped bytes E8 FB AA 39 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xaa
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 90h]
        mov dword ptr [eax + 0a8h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 0a4h]
        imul ecx, dword ptr [eax + 0a4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a8h]
        push edx
        ; Exact mapped bytes E8 04 63 3B 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x63
        __asm _emit 0x3b
        __asm _emit 0x00
        add esp, 0ch
        push 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ach]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a8h]
        push edx
        ; Exact mapped bytes E8 AC DF 04 00: call 0x584e4560
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xdf
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 10h
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 2c8h]
        cmp ecx, 1
        ; Exact mapped bytes 75 10: jne 0x584965d6
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes A1 84 20 96 58: mov eax, dword ptr [0x58962084]
        __asm _emit 0xa1
        __asm _emit 0x84
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [edx + 554h], eax
        ; Exact mapped bytes EB 4F: jmp 0x58496625
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 2c8h]
        cmp edx, 2
        ; Exact mapped bytes 75 11: jne 0x584965f6
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 8B 0D 80 20 96 58: mov ecx, dword ptr [0x58962080]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [eax + 554h], ecx
        ; Exact mapped bytes EB 2F: jmp 0x58496625
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 2c8h]
        cmp eax, 3
        ; Exact mapped bytes 75 11: jne 0x58496616
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 8B 15 8C 20 96 58: mov edx, dword ptr [0x5896208c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ecx + 554h], edx
        ; Exact mapped bytes EB 0F: jmp 0x58496625
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 8B 0D 88 20 96 58: mov ecx, dword ptr [0x58962088]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [eax + 554h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 558h], 3
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
