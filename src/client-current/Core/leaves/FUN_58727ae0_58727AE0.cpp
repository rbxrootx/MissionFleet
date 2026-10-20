// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58727AE0 .. +0x2FB bytes.
extern "C" __declspec(naked) void FUN_58727ae0_58727AE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8E 0A DB FF: call 0x584d8580
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x0a
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 100h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 01: or cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 04: or cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x04
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 02: or cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x02
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58727b58
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 37: jge 0x58727b95
        __asm _emit 0x7d
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 3d4h]
        mov dword ptr [ebp - 10h], eax
        push 0dh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 78 78 D7 FF: call 0x5849f3f0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x78
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 3d4h]
        mov dword ptr [ebp - 14h], eax
        push 5bh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 BE F2 D8 FF: call 0x584b6e50
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xf2
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BA: jmp 0x58727b4f
        __asm _emit 0xeb
        __asm _emit 0xba
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58727ba7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 64h
        ; Exact mapped bytes 7D 1C: jge 0x58727bc9
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        mov ecx, dword ptr [esi + ecx*4 + 0b0h]
        mov dword ptr [eax + edx*4 + 240h], ecx
        ; Exact mapped bytes EB D5: jmp 0x58727b9e
        __asm _emit 0xeb
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax + 0aeh]
        mov byte ptr [edx + 0adh], cl
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 3d4h]
        ; Exact mapped bytes E8 7E 90 09 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x90
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 09: jmp 0x58727c00
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 3d4h]
        ; Exact mapped bytes E8 59 90 09 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x90
        __asm _emit 0x09
        __asm _emit 0x00
        add eax, 7
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 0F 8D 95 00 00 00: jge 0x58727cb8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 3d4h]
        ; Exact mapped bytes E8 B6 1A E0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x1a
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 7D 79: jge 0x58727cb8
        __asm _emit 0x7d
        __asm _emit 0x79
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 240h], 0
        ; Exact mapped bytes 74 33: je 0x58727c82
        __asm _emit 0x74
        __asm _emit 0x33
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 3d4h]
        ; Exact mapped bytes E8 0A 90 09 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x90
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        sub edx, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 78h]
        mov dword ptr [ebp - 18h], ecx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 61 E2 D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xe2
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 31: jmp 0x58727cb3
        __asm _emit 0xeb
        __asm _emit 0x31
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 3d4h]
        ; Exact mapped bytes E8 D7 8F 09 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x8f
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        sub edx, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 78h]
        mov dword ptr [ebp - 1ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 2E E2 D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xe2
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 3F FF FF FF: jmp 0x58727bf7
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 00 F6 FF FF: call 0x587272c0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 3dch]
        ; Exact mapped bytes E8 91 15 D9 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x15
        __asm _emit 0xd9
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 74 16: je 0x58727ced
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 3dch]
        ; Exact mapped bytes E8 7B 15 D9 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x15
        __asm _emit 0xd9
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 2
        ; Exact mapped bytes 75 1A: jne 0x58727d07
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3dch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 3dch]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3dch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 57 70 D8 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x70
        __asm _emit 0xd8
        __asm _emit 0xff
        push 28h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5A CD D5 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xcd
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 82 40 09 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        push 28h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 CD D5 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xcd
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 28h], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 D8: call dword ptr [ebp - 0x28]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3d0h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 3e0h], 0
        ; Exact mapped bytes 75 2F: jne 0x58727da9
        __asm _emit 0x75
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 2ch], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 00 E2 D5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xe2
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 30h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 EA E1 D5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xe1
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x58727dd6
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        mov dword ptr [ebp - 34h], edx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 D1 E1 D5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xe1
        __asm _emit 0xd5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 38h], ecx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 BB E1 D5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xe1
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
