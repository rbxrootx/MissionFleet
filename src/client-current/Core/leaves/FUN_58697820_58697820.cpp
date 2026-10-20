// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58697820 .. +0x2251 bytes.
extern "C" __declspec(naked) void FUN_58697820_58697820() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2c8h
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 644h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1f40h], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 7cch], 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BD 99 0E 00: call 0x58781220
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x99
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 06 BB E2 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xbb
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edi, dword ptr [ebp - 4]
        add edi, 648h
        mov ecx, 60h
        mov esi, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 7c8h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7c8h]
        shl edx, 2
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 7d0h
        push ecx
        ; Exact mapped bytes E8 E8 4F 1B 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586978bd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0bh
        ; Exact mapped bytes 7D 61: jge 0x58697924
        __asm _emit 0x7d
        __asm _emit 0x61
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 130h]
        mov dword ptr [ebp - 4ch], edx
        push 171h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D D2 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xd2
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 218h], eax
        mov eax, dword ptr [ebp - 218h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 38 E6 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xe6
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 104h]
        mov dword ptr [ebp - 54h], eax
        push 0
        ; Exact mapped bytes E8 FE 96 1B 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x96
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 6F 38 12 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x38
        __asm _emit 0x12
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 90: jmp 0x586978b4
        __asm _emit 0xeb
        __asm _emit 0x90
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58697936
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0bh
        ; Exact mapped bytes 0F 8D 96 00 00 00: jge 0x586979d6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0d8h]
        mov dword ptr [ebp - 5ch], edx
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 88 74 06 00 00: movsx ecx, byte ptr [eax + 0x674]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x88
        __asm _emit 0x74
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, 55h
        ; Exact mapped bytes 0F BE D1: movsx edx, cl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xd1
        test edx, edx
        ; Exact mapped bytes 7D 09: jge 0x58697970
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 38h], 172h
        ; Exact mapped bytes EB 07: jmp 0x58697977
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 171h
        mov eax, dword ptr [ebp - 38h]
        push eax
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A D1 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xd1
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 9B E5 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xe5
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0ach]
        mov dword ptr [ebp - 64h], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 82 74 06 00 00: movsx eax, byte ptr [edx + 0x674]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x82
        __asm _emit 0x74
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, 55h
        ; Exact mapped bytes 0F BE C8: movsx ecx, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc8
        push ecx
        ; Exact mapped bytes E8 4F 96 1B 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x96
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov edx, dword ptr [ebp - 60h]
        push edx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 C0 37 12 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x37
        __asm _emit 0x12
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 57 FF FF FF: jmp 0x5869792d
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 254h]
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        add edx, 0a2h
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 16dh
        push ecx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 13 DC 11 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xdc
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 56 06 00 00: mov ax, word ptr [edx + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        imul edx, ecx, 6900h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 69ch]
        shr ecx, 1
        and ecx, 7fffffffh
        imul eax, ecx, 0e0h
        cmp dword ptr [edx + eax + 5890c098h], 4bh
        ; Exact mapped bytes 0F 8D DA 00 00 00: jge 0x58697b24
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 34ch]
        mov dword ptr [ebp - 70h], ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 56 06 00 00: mov ax, word ptr [edx + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        imul edx, ecx, 6900h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 69ch]
        shr ecx, 1
        and ecx, 7fffffffh
        imul eax, ecx, 0e0h
        mov ecx, dword ptr [edx + eax + 5890c098h]
        add ecx, 2a5h
        push ecx
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7A D0 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xd0
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        mov edx, dword ptr [ebp - 6ch]
        push edx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 7B E4 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xe4
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 2d0h]
        mov dword ptr [ebp - 78h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 56 06 00 00: mov dx, word ptr [ecx + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 69ch]
        shr eax, 1
        and eax, 7fffffffh
        imul edx, eax, 0e0h
        mov eax, dword ptr [ecx + edx + 5890c098h]
        add eax, 25ah
        push eax
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 11 D0 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xd0
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 74h]
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 12 E4 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xe4
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 DD 00 00 00: jmp 0x58697c01
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 34ch]
        mov dword ptr [ebp - 80h], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 56 06 00 00: mov cx, word ptr [eax + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, edx, 6900h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 69ch]
        shr edx, 1
        and edx, 7fffffffh
        imul ecx, edx, 0e0h
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
        ; Exact mapped bytes E8 A3 CF DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xcf
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        mov eax, dword ptr [ebp - 7ch]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 A4 E3 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xe3
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 2d0h]
        mov dword ptr [ebp - 88h], ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 56 06 00 00: mov ax, word ptr [edx + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        imul edx, ecx, 6900h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 69ch]
        shr ecx, 1
        and ecx, 7fffffffh
        imul eax, ecx, 0e0h
        mov ecx, dword ptr [edx + eax + 5890c098h]
        sub ecx, 19h
        push ecx
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 38 CF DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xcf
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        mov edx, dword ptr [ebp - 84h]
        push edx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 30 E3 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xe3
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 254h]
        mov dword ptr [ebp - 90h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 56 06 00 00: mov dx, word ptr [ecx + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 69ch]
        shr eax, 1
        and eax, 7fffffffh
        imul edx, eax, 0e0h
        lea eax, [ecx + edx + 5890bfd0h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx + 0cch]
        add eax, 1
        push eax
        ; Exact mapped bytes 8B 0D 48 24 96 58: mov ecx, dword ptr [0x58962448]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 65 CE DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xce
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        mov ecx, dword ptr [ebp - 8ch]
        push ecx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 DD EF DE FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xef
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 1d8h]
        mov dword ptr [ebp - 98h], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 56 06 00 00: mov cx, word ptr [eax + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, edx, 6900h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 69ch]
        shr edx, 1
        and edx, 7fffffffh
        imul ecx, edx, 0e0h
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
        ; Exact mapped bytes E8 E5 CD DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xcd
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        mov eax, dword ptr [ebp - 94h]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 5D EF DE FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xef
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 56 06 00 00: mov dx, word ptr [ecx + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 69ch]
        shr eax, 1
        and eax, 7fffffffh
        imul edx, eax, 0e0h
        cmp dword ptr [ecx + edx + 5890c098h], 4bh
        ; Exact mapped bytes 0F 8D F2 00 00 00: jge 0x58697e31
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 444h]
        mov dword ptr [ebp - 0a0h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 56 06 00 00: mov dx, word ptr [ecx + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 69ch]
        shr eax, 1
        and eax, 7fffffffh
        imul edx, eax, 0e0h
        mov eax, dword ptr [ecx + edx + 5890c098h]
        add eax, 33bh
        push eax
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 84 CD DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xcd
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        mov ecx, dword ptr [ebp - 9ch]
        push ecx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 7C E1 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xe1
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 3c8h]
        mov dword ptr [ebp - 0a8h], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 56 06 00 00: mov cx, word ptr [eax + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, edx, 6900h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 69ch]
        shr edx, 1
        and edx, 7fffffffh
        imul ecx, edx, 0e0h
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
        ; Exact mapped bytes E8 0D CD DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xcd
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        mov eax, dword ptr [ebp - 0a4h]
        push eax
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 05 E1 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xe1
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E8 00 00 00: jmp 0x58697f19
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 444h]
        mov dword ptr [ebp - 0b0h], ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 56 06 00 00: mov ax, word ptr [edx + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        imul edx, ecx, 6900h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 69ch]
        shr ecx, 1
        and ecx, 7fffffffh
        imul eax, ecx, 0e0h
        mov ecx, dword ptr [edx + eax + 5890c098h]
        add ecx, 7dh
        push ecx
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 CC DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xcc
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        mov edx, dword ptr [ebp - 0ach]
        push edx
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 8B E0 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xe0
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 3c8h]
        mov dword ptr [ebp - 0b8h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 56 06 00 00: mov dx, word ptr [ecx + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 69ch]
        shr eax, 1
        and eax, 7fffffffh
        imul edx, eax, 0e0h
        mov eax, dword ptr [ecx + edx + 5890c098h]
        add eax, 4bh
        push eax
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 20 CC DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xcc
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        mov ecx, dword ptr [ebp - 0b4h]
        push ecx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 18 E0 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xe0
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 56 06 00 00: mov ax, word ptr [edx + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 0F 84 AE 00 00 00: je 0x58697fe0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 53ch]
        mov dword ptr [ebp - 0bch], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 56 06 00 00: mov cx, word ptr [eax + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, edx, 6900h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 69ch]
        shr edx, 1
        and edx, 7fffffffh
        imul ecx, edx, 0e0h
        ; Exact mapped bytes 66 8B 94 08 10 C0 90 58: mov dx, word ptr [eax + ecx + 0x5890c010]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x10
        __asm _emit 0xc0
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 E2 3F: and dx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x3f
        movzx eax, dx
        push eax
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 AD 78 E0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x78
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 53ch]
        mov dword ptr [ebp - 0c0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 28 DF DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xdf
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 4c0h]
        mov dword ptr [ebp - 0c4h], edx
        push 1
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 03 DF DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xdf
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4B: jmp 0x5869802b
        __asm _emit 0xeb
        __asm _emit 0x4b
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 53ch]
        mov dword ptr [ebp - 0c8h], eax
        push 0
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 8B DF DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xdf
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 4c0h]
        mov dword ptr [ebp - 0cch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 66 DF DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xdf
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 15ch]
        mov dword ptr [ebp - 0d8h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 254h]
        ; Exact mapped bytes E8 56 40 DF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        add eax, 34h
        mov dword ptr [ebp - 0d0h], eax
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 254h]
        ; Exact mapped bytes E8 46 E9 DE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0xff
        add eax, 1fh
        mov dword ptr [ebp - 0d4h], eax
        mov eax, dword ptr [ebp - 0d0h]
        push eax
        mov ecx, dword ptr [ebp - 0d4h]
        push ecx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 84 D5 11 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 15ch]
        mov dword ptr [ebp - 0e0h], edx
        push 1c2h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5C CA DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xca
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        mov eax, dword ptr [ebp - 0dch]
        push eax
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 54 DE DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xde
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 254h]
        mov dword ptr [ebp - 0e4h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 8F DE DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xde
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 1d8h]
        mov dword ptr [ebp - 0e8h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 6A DE DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xde
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 2d0h]
        mov dword ptr [ebp - 0ech], eax
        push 0fh
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 45 DE DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xde
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 3c8h]
        mov dword ptr [ebp - 0f0h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 20 DE DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xde
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 15ch]
        mov dword ptr [ebp - 0f4h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 FB DD DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xdd
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 1d8h]
        ; Exact mapped bytes E8 54 C8 DE FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xc8
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 48h], ecx
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 44h]
        sub eax, 6
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        mov dword ptr [ebp - 0f8h], edx
        lea eax, [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 52 72 E0 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x72
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 69ch]
        shr edx, 1
        and edx, 7fffffffh
        ; Exact mapped bytes 74 16: je 0x58698208
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 69ch]
        shr ecx, 1
        and ecx, 7fffffffh
        cmp ecx, 4ch
        ; Exact mapped bytes 75 20: jne 0x58698228
        __asm _emit 0x75
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 56 06 00 00: mov ax, word ptr [edx + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 75 0B: jne 0x58698228
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, 4eh
        ; Exact mapped bytes 66 89 55 D8: mov word ptr [ebp - 0x28], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xd8
        ; Exact mapped bytes EB 09: jmp 0x58698231
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, 60h
        ; Exact mapped bytes 66 89 45 D8: mov word ptr [ebp - 0x28], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 69ch]
        shr edx, 1
        and edx, 7fffffffh
        ; Exact mapped bytes 74 16: je 0x5869825a
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 69ch]
        shr ecx, 1
        and ecx, 7fffffffh
        cmp ecx, 4ch
        ; Exact mapped bytes 75 65: jne 0x586982bf
        __asm _emit 0x75
        __asm _emit 0x65
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 56 06 00 00: mov ax, word ptr [edx + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 75 50: jne 0x586982bf
        __asm _emit 0x75
        __asm _emit 0x50
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        add eax, 1b8h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 56 06 00 00: mov dx, word ptr [ecx + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx ecx, dx
        imul edx, ecx, 6900h
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 69ch]
        shr ecx, 1
        and ecx, 7fffffffh
        imul ecx, ecx, 0e0h
        mov edx, dword ptr [edx + ecx + 5890c038h]
        sub edx, 1
        imul ecx, edx, 30h
        sub eax, ecx
        sub eax, 4eh
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 4E: jmp 0x5869830d
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        add eax, 16dh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 56 06 00 00: mov dx, word ptr [ecx + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx ecx, dx
        imul edx, ecx, 6900h
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 69ch]
        shr ecx, 1
        and ecx, 7fffffffh
        imul ecx, ecx, 0e0h
        mov edx, dword ptr [edx + ecx + 5890c038h]
        sub edx, 1
        imul ecx, edx, 30h
        sub eax, ecx
        sub eax, 60h
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        add eax, 100h
        mov dword ptr [ebp - 3ch], eax
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 09: jmp 0x5869832d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 56 06 00 00: mov ax, word ptr [edx + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        imul edx, ecx, 6900h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 69ch]
        shr ecx, 1
        and ecx, 7fffffffh
        imul eax, ecx, 0e0h
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [edx + eax + 5890c038h]
        ; Exact mapped bytes 0F 83 2A 09 00 00: jae 0x58698c95
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x2a
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 254h]
        mov dword ptr [ebp - 0fch], ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        movzx eax, word ptr [ebp - 28h]
        imul eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 87 D2 11 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xd2
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 56 06 00 00: mov dx, word ptr [ecx + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 69ch]
        shr eax, 1
        and eax, 7fffffffh
        imul edx, eax, 0e0h
        lea eax, [ecx + edx + 5890bfd0h]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 54 48 6A: mov dx, word ptr [eax + ecx*2 + 0x6a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x48
        __asm _emit 0x6a
        ; Exact mapped bytes 66 83 E2 3F: and dx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x3f
        movzx eax, dx
        imul ecx, eax, 6900h
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 56 06 00 00: mov ax, word ptr [edx + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx edx, ax
        imul eax, edx, 6900h
        mov edx, dword ptr [ebp - 4]
        mov edx, dword ptr [edx + 69ch]
        shr edx, 1
        and edx, 7fffffffh
        imul edx, edx, 0e0h
        lea eax, [eax + edx + 5890bfd0h]
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 44 50 6A: mov ax, word ptr [eax + edx*2 + 0x6a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x50
        __asm _emit 0x6a
        ; Exact mapped bytes 66 C1 E8 06: shr ax, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x06
        mov edx, 3ffh
        ; Exact mapped bytes 66 23 C2: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc2
        movzx eax, ax
        imul edx, eax, 0e0h
        lea eax, [ecx + edx + 5890bfd0h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 0c8h], 4bh
        ; Exact mapped bytes 0F 8D 90 00 00 00: jge 0x586984de
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 34ch]
        mov dword ptr [ebp - 104h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0c8h]
        add eax, 2a5h
        push eax
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 C6 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xc6
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        mov ecx, dword ptr [ebp - 100h]
        push ecx
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 9D DA DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xda
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 2d0h]
        mov dword ptr [ebp - 10ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0c8h]
        add eax, 25ah
        push eax
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 60 C6 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xc6
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 108h], eax
        mov ecx, dword ptr [ebp - 108h]
        push ecx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 58 DA DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xda
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x58698565
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 34ch]
        mov dword ptr [ebp - 114h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0c8h]
        add eax, 19h
        push eax
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 17 C6 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xc6
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        mov ecx, dword ptr [ebp - 110h]
        push ecx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 0F DA DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xda
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 2d0h]
        mov dword ptr [ebp - 11ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0c8h]
        sub eax, 19h
        push eax
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D4 C5 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xc5
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        mov ecx, dword ptr [ebp - 118h]
        push ecx
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 CC D9 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xd9
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 254h]
        mov dword ptr [ebp - 124h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax + 0cch]
        add edx, 1
        push edx
        ; Exact mapped bytes 8B 0D 48 24 96 58: mov ecx, dword ptr [0x58962448]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 37 C5 DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xc5
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        mov eax, dword ptr [ebp - 120h]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 AF E6 DE FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xe6
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1d8h]
        mov dword ptr [ebp - 12ch], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx + 0cch]
        push ecx
        ; Exact mapped bytes 8B 0D 48 24 96 58: mov ecx, dword ptr [0x58962448]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EE C4 DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xc4
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], eax
        mov edx, dword ptr [ebp - 128h]
        push edx
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 66 E6 DE FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xe6
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 0c8h], 4bh
        ; Exact mapped bytes 0F 8D 92 00 00 00: jge 0x5869869d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 444h]
        mov dword ptr [ebp - 134h], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0c8h]
        add edx, 33bh
        push edx
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 C4 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xc4
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        mov eax, dword ptr [ebp - 130h]
        push eax
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 DF D8 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xd8
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 3c8h]
        mov dword ptr [ebp - 13ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0c8h]
        add edx, 2f0h
        push edx
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A1 C4 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], eax
        mov eax, dword ptr [ebp - 138h]
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 99 D8 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xd8
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x58698724
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 444h]
        mov dword ptr [ebp - 144h], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0c8h]
        add edx, 7dh
        push edx
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 58 C4 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xc4
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], eax
        mov eax, dword ptr [ebp - 140h]
        push eax
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 50 D8 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xd8
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 3c8h]
        mov dword ptr [ebp - 14ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0c8h]
        add edx, 4bh
        push edx
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 C4 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 148h], eax
        mov eax, dword ptr [ebp - 148h]
        push eax
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 0D D8 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 56 06 00 00: mov dx, word ptr [ecx + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 69ch]
        shr eax, 1
        and eax, 7fffffffh
        imul edx, eax, 0e0h
        lea eax, [ecx + edx + 5890bfd0h]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 54 48 6A: mov dx, word ptr [eax + ecx*2 + 0x6a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x48
        __asm _emit 0x6a
        ; Exact mapped bytes 66 83 E2 3F: and dx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x3f
        movzx eax, dx
        test eax, eax
        ; Exact mapped bytes 0F 84 A5 00 00 00: je 0x58698814
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 53ch]
        mov dword ptr [ebp - 150h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 56 06 00 00: mov dx, word ptr [ecx + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 69ch]
        shr eax, 1
        and eax, 7fffffffh
        imul edx, eax, 0e0h
        lea eax, [ecx + edx + 5890bfd0h]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 54 48 6A: mov dx, word ptr [eax + ecx*2 + 0x6a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x48
        __asm _emit 0x6a
        ; Exact mapped bytes 66 83 E2 3F: and dx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x3f
        movzx eax, dx
        push eax
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 6F 70 E0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x70
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 53ch]
        mov dword ptr [ebp - 154h], eax
        push 1
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 EF D6 DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xd6
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 4c0h]
        mov dword ptr [ebp - 158h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 CF D6 DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xd6
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 41: jmp 0x58698855
        __asm _emit 0xeb
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 53ch]
        mov dword ptr [ebp - 15ch], eax
        push 0
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 5C D7 DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xd7
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 4c0h]
        mov dword ptr [ebp - 160h], eax
        push 0
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 3C D7 DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xd7
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 15ch]
        mov dword ptr [ebp - 16ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 254h]
        ; Exact mapped bytes E8 36 38 DF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x38
        __asm _emit 0xdf
        __asm _emit 0xff
        sub eax, 15h
        mov dword ptr [ebp - 164h], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 254h]
        ; Exact mapped bytes E8 2B E1 DE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xe1
        __asm _emit 0xde
        __asm _emit 0xff
        add eax, 1fh
        mov dword ptr [ebp - 168h], eax
        mov edx, dword ptr [ebp - 164h]
        push edx
        mov eax, dword ptr [ebp - 168h]
        push eax
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 69 CD 11 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xcd
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 69ch]
        shr edx, 1
        and edx, 7fffffffh
        ; Exact mapped bytes 74 16: je 0x586988e1
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 69ch]
        shr ecx, 1
        and ecx, 7fffffffh
        cmp ecx, 4ch
        ; Exact mapped bytes 75 53: jne 0x58698934
        __asm _emit 0x75
        __asm _emit 0x53
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 56 06 00 00: mov ax, word ptr [edx + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 75 3E: jne 0x58698934
        __asm _emit 0x75
        __asm _emit 0x3e
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 15ch]
        mov dword ptr [ebp - 174h], ecx
        push 40eh
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 C2 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xc2
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 170h], eax
        mov edx, dword ptr [ebp - 170h]
        push edx
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 FF D5 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xd5
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3C: jmp 0x58698970
        __asm _emit 0xeb
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 15ch]
        mov dword ptr [ebp - 17ch], edx
        push 1bch
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C9 C1 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xc1
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 178h], eax
        mov eax, dword ptr [ebp - 178h]
        push eax
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 C1 D5 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xd5
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 15ch]
        mov dword ptr [ebp - 180h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 00 D6 DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xd6
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 254h]
        mov dword ptr [ebp - 184h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 E0 D5 DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xd5
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1d8h]
        mov dword ptr [ebp - 188h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 C0 D5 DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xd5
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 2d0h]
        mov dword ptr [ebp - 18ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 A0 D5 DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xd5
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 3c8h]
        mov dword ptr [ebp - 190h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 80 D5 DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xd5
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 56 06 00 00: mov dx, word ptr [ecx + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x56
        __asm _emit 0x06
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
        xor eax, 55h
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 4ch], eax
        ; Exact mapped bytes 0F 8F 72 01 00 00: jg 0x58698ba7
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 644h], -1
        ; Exact mapped bytes 0F 85 A1 00 00 00: jne 0x58698ae6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 100h
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 79ch]
        and eax, 0ffffh
        movzx ecx, ax
        cmp ecx, 19h
        ; Exact mapped bytes 75 76: jne 0x58698ae1
        __asm _emit 0x75
        __asm _emit 0x76
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 44h]
        and eax, 10000000h
        ; Exact mapped bytes 74 1E: je 0x58698a96
        __asm _emit 0x74
        __asm _emit 0x1e
        mov dword ptr [ebp - 14h], 64h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7cch]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 7cch], edx
        ; Exact mapped bytes EB 4B: jmp 0x58698ae1
        __asm _emit 0xeb
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 44h], 41h
        ; Exact mapped bytes 75 42: jne 0x58698ae1
        __asm _emit 0x75
        __asm _emit 0x42
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 42 40: mov ax, word ptr [edx + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x40
        ; Exact mapped bytes 66 C1 E8 06: shr ax, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x06
        mov ecx, 3ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        movzx edx, ax
        test edx, edx
        ; Exact mapped bytes 74 28: je 0x58698ae1
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 7cch], 3
        ; Exact mapped bytes 7D 1C: jge 0x58698ae1
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov dword ptr [ebp - 14h], 64h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7cch]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 7cch], edx
        ; Exact mapped bytes E9 BF 00 00 00: jmp 0x58698ba5
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 644h], 0
        ; Exact mapped bytes 75 34: jne 0x58698b26
        __asm _emit 0x75
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 44h]
        and eax, 10000000h
        ; Exact mapped bytes 74 09: je 0x58698b08
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 100h
        ; Exact mapped bytes EB 1C: jmp 0x58698b24
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov dword ptr [ebp - 14h], 64h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7cch]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 7cch], edx
        ; Exact mapped bytes EB 7F: jmp 0x58698ba5
        __asm _emit 0xeb
        __asm _emit 0x7f
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 644h], 1
        ; Exact mapped bytes 7C 41: jl 0x58698b73
        __asm _emit 0x7c
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 644h], 4
        ; Exact mapped bytes 7F 35: jg 0x58698b73
        __asm _emit 0x7f
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 44h]
        and ecx, 10000000h
        ; Exact mapped bytes 74 1E: je 0x58698b6a
        __asm _emit 0x74
        __asm _emit 0x1e
        mov dword ptr [ebp - 14h], 64h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7cch]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 7cch], eax
        ; Exact mapped bytes EB 07: jmp 0x58698b71
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 100h
        ; Exact mapped bytes EB 32: jmp 0x58698ba5
        __asm _emit 0xeb
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 44h]
        and eax, 10000000h
        ; Exact mapped bytes 74 1E: je 0x58698b9e
        __asm _emit 0x74
        __asm _emit 0x1e
        mov dword ptr [ebp - 14h], 64h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7cch]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 7cch], edx
        ; Exact mapped bytes EB 07: jmp 0x58698ba5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 100h
        ; Exact mapped bytes EB 1C: jmp 0x58698bc3
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov dword ptr [ebp - 14h], 64h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7cch]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 7cch], edx
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 254h]
        mov dword ptr [ebp - 194h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 5B C9 11 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xc9
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1d8h]
        mov dword ptr [ebp - 198h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 39 C9 11 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xc9
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 2d0h]
        mov dword ptr [ebp - 19ch], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 17 C9 11 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xc9
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 3c8h]
        mov dword ptr [ebp - 1a0h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 F5 C8 11 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xc8
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 4c0h]
        mov dword ptr [ebp - 1a4h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 D3 C8 11 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xc8
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 53ch]
        mov dword ptr [ebp - 1a8h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 B1 C8 11 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xc8
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 8F F6 FF FF: jmp 0x58698324
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 254h]
        mov dword ptr [ebp - 1ach], eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        movzx edx, word ptr [ebp - 28h]
        imul edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 5D C9 11 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xc9
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 56 06 00 00: mov cx, word ptr [eax + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, edx, 6900h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 69ch]
        shr edx, 1
        and edx, 7fffffffh
        imul ecx, edx, 0e0h
        lea edx, [eax + ecx + 5890bfd0h]
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 4C 42 6A: mov cx, word ptr [edx + eax*2 + 0x6a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x42
        __asm _emit 0x6a
        ; Exact mapped bytes 66 83 E1 3F: and cx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x3f
        movzx edx, cx
        imul eax, edx, 6900h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 56 06 00 00: mov dx, word ptr [ecx + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx ecx, dx
        imul edx, ecx, 6900h
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 69ch]
        shr ecx, 1
        and ecx, 7fffffffh
        imul ecx, ecx, 0e0h
        lea edx, [edx + ecx + 5890bfd0h]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 54 4A 6A: mov dx, word ptr [edx + ecx*2 + 0x6a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x4a
        __asm _emit 0x6a
        ; Exact mapped bytes 66 C1 EA 06: shr dx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        mov ecx, 3ffh
        ; Exact mapped bytes 66 23 D1: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd1
        movzx edx, dx
        imul ecx, edx, 0e0h
        lea edx, [eax + ecx + 5890bfd0h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0c8h], 4bh
        ; Exact mapped bytes 0F 8D 92 00 00 00: jge 0x58698e0b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 34ch]
        mov dword ptr [ebp - 1b4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c8h]
        add edx, 2a5h
        push edx
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 79 BD DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xbd
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 1b0h], eax
        mov eax, dword ptr [ebp - 1b0h]
        push eax
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 71 D1 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 2d0h]
        mov dword ptr [ebp - 1bch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c8h]
        add edx, 25ah
        push edx
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 BD DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xbd
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 1b8h], eax
        mov eax, dword ptr [ebp - 1b8h]
        push eax
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 2B D1 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xd1
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x58698e92
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 34ch]
        mov dword ptr [ebp - 1c4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c8h]
        add edx, 19h
        push edx
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EA BC DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xbc
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 1c0h], eax
        mov eax, dword ptr [ebp - 1c0h]
        push eax
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 E2 D0 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xd0
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 2d0h]
        mov dword ptr [ebp - 1cch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c8h]
        sub edx, 19h
        push edx
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A7 BC DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xbc
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 1c8h], eax
        mov eax, dword ptr [ebp - 1c8h]
        push eax
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 9F D0 DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xd0
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 254h]
        mov dword ptr [ebp - 1d4h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0cch]
        add ecx, 1
        push ecx
        ; Exact mapped bytes 8B 0D 48 24 96 58: mov ecx, dword ptr [0x58962448]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0A BC DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xbc
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 1d0h], eax
        mov edx, dword ptr [ebp - 1d0h]
        push edx
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 82 DD DE FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xdd
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1d8h]
        mov dword ptr [ebp - 1dch], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0cch]
        push eax
        ; Exact mapped bytes 8B 0D 48 24 96 58: mov ecx, dword ptr [0x58962448]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C1 BB DE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xbb
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 1d8h], eax
        mov ecx, dword ptr [ebp - 1d8h]
        push ecx
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 39 DD DE FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xdd
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 0c8h], 4bh
        ; Exact mapped bytes 0F 8D 92 00 00 00: jge 0x58698fca
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 444h]
        mov dword ptr [ebp - 1e4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0c8h]
        add ecx, 33bh
        push ecx
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BA BB DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xbb
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 1e0h], eax
        mov edx, dword ptr [ebp - 1e0h]
        push edx
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 B2 CF DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xcf
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 3c8h]
        mov dword ptr [ebp - 1ech], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0c8h]
        add ecx, 2f0h
        push ecx
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 74 BB DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xbb
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 1e8h], eax
        mov edx, dword ptr [ebp - 1e8h]
        push edx
        mov ecx, dword ptr [ebp - 1ech]
        ; Exact mapped bytes E8 6C CF DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xcf
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x58699051
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 444h]
        mov dword ptr [ebp - 1f4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0c8h]
        add ecx, 7dh
        push ecx
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2B BB DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xbb
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 1f0h], eax
        mov edx, dword ptr [ebp - 1f0h]
        push edx
        mov ecx, dword ptr [ebp - 1f4h]
        ; Exact mapped bytes E8 23 CF DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xcf
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 3c8h]
        mov dword ptr [ebp - 1fch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0c8h]
        add ecx, 4bh
        push ecx
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 BA DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 1f8h], eax
        mov edx, dword ptr [ebp - 1f8h]
        push edx
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 E0 CE DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xce
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 56 06 00 00: mov cx, word ptr [eax + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, edx, 6900h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 69ch]
        shr edx, 1
        and edx, 7fffffffh
        imul ecx, edx, 0e0h
        lea edx, [eax + ecx + 5890bfd0h]
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 4C 42 6A: mov cx, word ptr [edx + eax*2 + 0x6a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x42
        __asm _emit 0x6a
        ; Exact mapped bytes 66 83 E1 3F: and cx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x3f
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 A6 00 00 00: je 0x58699143
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 53ch]
        mov dword ptr [ebp - 200h], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 56 06 00 00: mov cx, word ptr [eax + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, edx, 6900h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 69ch]
        shr edx, 1
        and edx, 7fffffffh
        imul ecx, edx, 0e0h
        lea edx, [eax + ecx + 5890bfd0h]
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 4C 42 6A: mov cx, word ptr [edx + eax*2 + 0x6a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x42
        __asm _emit 0x6a
        ; Exact mapped bytes 66 83 E1 3F: and cx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x3f
        movzx edx, cx
        push edx
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 40 67 E0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x67
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 53ch]
        mov dword ptr [ebp - 204h], edx
        push 1
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes E8 C0 CD DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xcd
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 4c0h]
        mov dword ptr [ebp - 208h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 A0 CD DE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xcd
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 41: jmp 0x58699184
        __asm _emit 0xeb
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 53ch]
        mov dword ptr [ebp - 20ch], edx
        push 0
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 2D CE DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xce
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 4c0h]
        mov dword ptr [ebp - 210h], edx
        push 0
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 0D CE DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xce
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 15ch]
        mov dword ptr [ebp - 21ch], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 254h]
        ; Exact mapped bytes E8 07 2F DF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x2f
        __asm _emit 0xdf
        __asm _emit 0xff
        sub eax, 14h
        mov dword ptr [ebp - 214h], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 254h]
        ; Exact mapped bytes E8 FC D7 DE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xd7
        __asm _emit 0xde
        __asm _emit 0xff
        add eax, 1fh
        mov dword ptr [ebp - 270h], eax
        mov ecx, dword ptr [ebp - 214h]
        push ecx
        mov edx, dword ptr [ebp - 270h]
        push edx
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes E8 3A C4 11 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xc4
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 15ch]
        mov dword ptr [ebp - 224h], edx
        push 1c2h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 17 B9 DE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xb9
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 220h], eax
        mov eax, dword ptr [ebp - 220h]
        push eax
        mov ecx, dword ptr [ebp - 224h]
        ; Exact mapped bytes E8 0F CD DE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xcd
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 254h]
        mov dword ptr [ebp - 228h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 4F CD DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xcd
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1d8h]
        mov dword ptr [ebp - 22ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 2F CD DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xcd
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 2d0h]
        mov dword ptr [ebp - 230h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 230h]
        ; Exact mapped bytes E8 0F CD DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xcd
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 3c8h]
        mov dword ptr [ebp - 234h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 234h]
        ; Exact mapped bytes E8 EF CC DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xcc
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 15ch]
        mov dword ptr [ebp - 238h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 238h]
        ; Exact mapped bytes E8 CF CC DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xcc
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 56 06 00 00: mov dx, word ptr [ecx + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x56
        __asm _emit 0x06
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
        xor eax, 55h
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 4ch], eax
        ; Exact mapped bytes 0F 8F 0C 01 00 00: jg 0x586993f2
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 644h], -1
        ; Exact mapped bytes 75 3F: jne 0x58699331
        __asm _emit 0x75
        __asm _emit 0x3f
        mov dword ptr [ebp - 18h], 100h
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 79ch]
        and eax, 0ffffh
        movzx ecx, ax
        cmp ecx, 19h
        ; Exact mapped bytes 75 14: jne 0x5869932c
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 44h]
        and eax, 40000000h
        ; Exact mapped bytes 74 07: je 0x5869932c
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 64h
        ; Exact mapped bytes E9 BF 00 00 00: jmp 0x586993f0
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 644h], 0
        ; Exact mapped bytes 75 34: jne 0x58699371
        __asm _emit 0x75
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 44h]
        and eax, 10000000h
        ; Exact mapped bytes 74 09: je 0x58699353
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 100h
        ; Exact mapped bytes EB 1C: jmp 0x5869936f
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov dword ptr [ebp - 18h], 64h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7cch]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 7cch], edx
        ; Exact mapped bytes EB 7F: jmp 0x586993f0
        __asm _emit 0xeb
        __asm _emit 0x7f
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 644h], 1
        ; Exact mapped bytes 7C 41: jl 0x586993be
        __asm _emit 0x7c
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 644h], 4
        ; Exact mapped bytes 7F 35: jg 0x586993be
        __asm _emit 0x7f
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 44h]
        and ecx, 10000000h
        ; Exact mapped bytes 74 1E: je 0x586993b5
        __asm _emit 0x74
        __asm _emit 0x1e
        mov dword ptr [ebp - 18h], 64h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7cch]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 7cch], eax
        ; Exact mapped bytes EB 07: jmp 0x586993bc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 100h
        ; Exact mapped bytes EB 32: jmp 0x586993f0
        __asm _emit 0xeb
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 44h]
        and eax, 10000000h
        ; Exact mapped bytes 74 1E: je 0x586993e9
        __asm _emit 0x74
        __asm _emit 0x1e
        mov dword ptr [ebp - 18h], 64h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7cch]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 7cch], edx
        ; Exact mapped bytes EB 07: jmp 0x586993f0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 100h
        ; Exact mapped bytes EB 1C: jmp 0x5869940e
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov dword ptr [ebp - 18h], 64h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7cch]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 7cch], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 56 06 00 00: mov dx, word ptr [ecx + 0x656]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 69ch]
        shr eax, 1
        and eax, 7fffffffh
        imul edx, eax, 0e0h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + edx + 5890c038h]
        sub ecx, dword ptr [eax + 7c8h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7cch]
        sub eax, ecx
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 7cch], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 254h]
        mov dword ptr [ebp - 23ch], ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 23ch]
        ; Exact mapped bytes E8 BF C0 11 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xc0
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1d8h]
        mov dword ptr [ebp - 240h], edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 240h]
        ; Exact mapped bytes E8 9D C0 11 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xc0
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 2d0h]
        mov dword ptr [ebp - 244h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 244h]
        ; Exact mapped bytes E8 7B C0 11 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xc0
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 3c8h]
        mov dword ptr [ebp - 248h], ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 248h]
        ; Exact mapped bytes E8 59 C0 11 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xc0
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 4c0h]
        mov dword ptr [ebp - 24ch], edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 24ch]
        ; Exact mapped bytes E8 37 C0 11 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xc0
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 53ch]
        mov dword ptr [ebp - 250h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 250h]
        ; Exact mapped bytes E8 15 C0 11 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 09: jmp 0x5869953f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 1eh
        ; Exact mapped bytes 0F 8F E6 00 00 00: jg 0x5869962f
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 254h]
        mov dword ptr [ebp - 254h], eax
        push 0
        mov ecx, dword ptr [ebp - 254h]
        ; Exact mapped bytes E8 27 CA DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xca
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1d8h]
        mov dword ptr [ebp - 258h], eax
        push 0
        mov ecx, dword ptr [ebp - 258h]
        ; Exact mapped bytes E8 07 CA DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xca
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 2d0h]
        mov dword ptr [ebp - 25ch], eax
        push 0
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 E7 C9 DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xc9
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 3c8h]
        mov dword ptr [ebp - 260h], eax
        push 0
        mov ecx, dword ptr [ebp - 260h]
        ; Exact mapped bytes E8 C7 C9 DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xc9
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 4c0h]
        mov dword ptr [ebp - 264h], eax
        push 0
        mov ecx, dword ptr [ebp - 264h]
        ; Exact mapped bytes E8 A7 C9 DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xc9
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 53ch]
        mov dword ptr [ebp - 268h], eax
        push 0
        mov ecx, dword ptr [ebp - 268h]
        ; Exact mapped bytes E8 87 C9 DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xc9
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 15ch]
        mov dword ptr [ebp - 26ch], eax
        push 0
        mov ecx, dword ptr [ebp - 26ch]
        ; Exact mapped bytes E8 67 C9 DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xc9
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 07 FF FF FF: jmp 0x58699536
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 70 06 96 58: mov ecx, dword ptr [0x58960670]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 26 FC E1 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xfc
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 23 04 00 00: jne 0x58699a69
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x23
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 70 06 96 58: mov ecx, dword ptr [0x58960670]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9F 97 F3 FF: call 0x585d2df0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x97
        __asm _emit 0xf3
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 0F 04 00 00: jne 0x58699a69
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 70 06 96 58: mov ecx, dword ptr [0x58960670]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3B DC FF FF: call 0x586972a0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 40h], al
        cmp byte ptr [ebp - 40h], 1
        ; Exact mapped bytes 74 0F: je 0x5869967d
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp byte ptr [ebp - 40h], 2
        ; Exact mapped bytes 0F 84 2F 01 00 00: je 0x586997a7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 EC 03 00 00: jmp 0x58699a69
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 70 06 96 58: mov ecx, dword ptr [0x58960670]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 38 DC FF FF: call 0x586972c0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 5
        ; Exact mapped bytes 0F 85 0E 01 00 00: jne 0x586997a2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes EB 09: jmp 0x586996a6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F 87 F0 00 00 00: ja 0x586997a2
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes 0F 84 E1 00 00 00: je 0x5869979d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1d8h]
        mov dword ptr [ebp - 2c8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2c8h]
        ; Exact mapped bytes E8 04 C7 DE FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xc7
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 254h]
        mov dword ptr [ebp - 274h], ecx
        push 64h
        mov ecx, dword ptr [ebp - 274h]
        ; Exact mapped bytes E8 44 BE 11 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xbe
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1d8h]
        mov dword ptr [ebp - 278h], ecx
        push 64h
        mov ecx, dword ptr [ebp - 278h]
        ; Exact mapped bytes E8 24 BE 11 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xbe
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 2d0h]
        mov dword ptr [ebp - 27ch], ecx
        push 64h
        mov ecx, dword ptr [ebp - 27ch]
        ; Exact mapped bytes E8 04 BE 11 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xbe
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 3c8h]
        mov dword ptr [ebp - 280h], ecx
        push 64h
        mov ecx, dword ptr [ebp - 280h]
        ; Exact mapped bytes E8 E4 BD 11 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xbd
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 4c0h]
        mov dword ptr [ebp - 284h], ecx
        push 64h
        mov ecx, dword ptr [ebp - 284h]
        ; Exact mapped bytes E8 C4 BD 11 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xbd
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 53ch]
        mov dword ptr [ebp - 288h], ecx
        push 64h
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 A4 BD 11 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xbd
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 FB FE FF FF: jmp 0x5869969d
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 C2 02 00 00: jmp 0x58699a69
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 70 06 96 58: mov ecx, dword ptr [0x58960670]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0E DB FF FF: call 0x586972c0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 3
        ; Exact mapped bytes 0F 85 86 01 00 00: jne 0x58699944
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 FE E4 FF: call 0x584e9610
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xfe
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x586997e0
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 D3 28 DF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x28
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 23: je 0x58699809
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 F2 26 DF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x26
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FB FD E4 FF: call 0x584e95f0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xfd
        __asm _emit 0xe4
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 0D: jne 0x58699807
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 DE 26 DF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x26
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 02: jmp 0x58699809
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB CC: jmp 0x586997d5
        __asm _emit 0xeb
        __asm _emit 0xcc
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 0F 84 2C 01 00 00: je 0x5869993f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 55 9B E2 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x9b
        __asm _emit 0xe2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0E: mov ax, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        mov dword ptr [ebp - 28ch], ecx
        mov dword ptr [ebp - 20h], 1
        ; Exact mapped bytes EB 09: jmp 0x5869983e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F 87 F5 00 00 00: ja 0x5869993f
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28ch]
        cmp ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F 84 E1 00 00 00: je 0x5869993a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1d8h]
        mov dword ptr [ebp - 290h], ecx
        push 0
        mov ecx, dword ptr [ebp - 290h]
        ; Exact mapped bytes E8 67 C5 DE FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xc5
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 254h]
        mov dword ptr [ebp - 294h], ecx
        push 64h
        mov ecx, dword ptr [ebp - 294h]
        ; Exact mapped bytes E8 A7 BC 11 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xbc
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1d8h]
        mov dword ptr [ebp - 298h], ecx
        push 64h
        mov ecx, dword ptr [ebp - 298h]
        ; Exact mapped bytes E8 87 BC 11 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xbc
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 2d0h]
        mov dword ptr [ebp - 29ch], ecx
        push 64h
        mov ecx, dword ptr [ebp - 29ch]
        ; Exact mapped bytes E8 67 BC 11 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xbc
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 3c8h]
        mov dword ptr [ebp - 2a0h], ecx
        push 64h
        mov ecx, dword ptr [ebp - 2a0h]
        ; Exact mapped bytes E8 47 BC 11 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xbc
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 4c0h]
        mov dword ptr [ebp - 2a4h], ecx
        push 64h
        mov ecx, dword ptr [ebp - 2a4h]
        ; Exact mapped bytes E8 27 BC 11 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xbc
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 53ch]
        mov dword ptr [ebp - 2a8h], ecx
        push 64h
        mov ecx, dword ptr [ebp - 2a8h]
        ; Exact mapped bytes E8 07 BC 11 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xbc
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 F6 FE FF FF: jmp 0x58699835
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 25 01 00 00: jmp 0x58699a69
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 70 06 96 58: mov ecx, dword ptr [0x58960670]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 71 D9 FF FF: call 0x586972c0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 5
        ; Exact mapped bytes 0F 85 0E 01 00 00: jne 0x58699a69
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 1
        ; Exact mapped bytes EB 09: jmp 0x5869996d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F 87 F0 00 00 00: ja 0x58699a69
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 24h], 2
        ; Exact mapped bytes 0F 84 E1 00 00 00: je 0x58699a64
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1d8h]
        mov dword ptr [ebp - 2ach], ecx
        push 0
        mov ecx, dword ptr [ebp - 2ach]
        ; Exact mapped bytes E8 3D C4 DE FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xc4
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 254h]
        mov dword ptr [ebp - 2b0h], ecx
        push 64h
        mov ecx, dword ptr [ebp - 2b0h]
        ; Exact mapped bytes E8 7D BB 11 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xbb
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1d8h]
        mov dword ptr [ebp - 2b4h], ecx
        push 64h
        mov ecx, dword ptr [ebp - 2b4h]
        ; Exact mapped bytes E8 5D BB 11 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xbb
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 2d0h]
        mov dword ptr [ebp - 2b8h], ecx
        push 64h
        mov ecx, dword ptr [ebp - 2b8h]
        ; Exact mapped bytes E8 3D BB 11 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xbb
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 3c8h]
        mov dword ptr [ebp - 2bch], ecx
        push 64h
        mov ecx, dword ptr [ebp - 2bch]
        ; Exact mapped bytes E8 1D BB 11 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xbb
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 4c0h]
        mov dword ptr [ebp - 2c0h], ecx
        push 64h
        mov ecx, dword ptr [ebp - 2c0h]
        ; Exact mapped bytes E8 FD BA 11 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xba
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 53ch]
        mov dword ptr [ebp - 2c4h], ecx
        push 64h
        mov ecx, dword ptr [ebp - 2c4h]
        ; Exact mapped bytes E8 DD BA 11 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xba
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 FB FE FF FF: jmp 0x58699964
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
