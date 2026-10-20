// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586771D0 .. +0x9B3 bytes.
extern "C" __declspec(naked) void FUN_586771d0_586771D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a8h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 18h], 6
        ; Exact mapped bytes 0F BF 45 08: movsx eax, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x08
        cmp eax, 3
        ; Exact mapped bytes 7D 09: jge 0x586771f5
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 58: jmp 0x5867724d
        __asm _emit 0xeb
        __asm _emit 0x58
        ; Exact mapped bytes 0F BF 4D 08: movsx ecx, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x08
        cmp ecx, 6
        ; Exact mapped bytes 7D 09: jge 0x58677207
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 1
        ; Exact mapped bytes EB 46: jmp 0x5867724d
        __asm _emit 0xeb
        __asm _emit 0x46
        ; Exact mapped bytes 0F BF 55 08: movsx edx, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x08
        cmp edx, 8
        ; Exact mapped bytes 7D 09: jge 0x58677219
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 2
        ; Exact mapped bytes EB 34: jmp 0x5867724d
        __asm _emit 0xeb
        __asm _emit 0x34
        ; Exact mapped bytes 0F BF 45 08: movsx eax, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x08
        cmp eax, 0ah
        ; Exact mapped bytes 7D 09: jge 0x5867722b
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 3
        ; Exact mapped bytes EB 22: jmp 0x5867724d
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes 0F BF 4D 08: movsx ecx, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x08
        cmp ecx, 0ch
        ; Exact mapped bytes 7D 09: jge 0x5867723d
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 4
        ; Exact mapped bytes EB 10: jmp 0x5867724d
        __asm _emit 0xeb
        __asm _emit 0x10
        ; Exact mapped bytes 0F BF 55 08: movsx edx, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x08
        cmp edx, 0eh
        ; Exact mapped bytes 7D 07: jge 0x5867724d
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 5
        ; Exact mapped bytes 0F BF 45 08: movsx eax, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 91 74 02 00 00: movsx edx, word ptr [ecx + 0x274]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, edx
        ; Exact mapped bytes 0F 84 5E 04 00 00: je 0x586776c1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58677275
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0fh
        ; Exact mapped bytes 7D 1D: jge 0x58677298
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 118h]
        mov dword ptr [ebp - 2ch], eax
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 AB 85 E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x5867726c
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586772aa
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 0F BF 55 0C: movsx edx, word ptr [ebp + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x0c
        cmp dword ptr [ebp - 4], edx
        ; Exact mapped bytes 0F 8D E3 00 00 00: jge 0x5867739a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 4], 0ch
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 64h]
        mov eax, 4
        imul ecx, eax, 0
        mov ecx, dword ptr [edx + ecx]
        ; Exact mapped bytes E8 BE E5 E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xe5
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 47: jne 0x58677320
        __asm _emit 0x75
        __asm _emit 0x47
        imul eax, dword ptr [ebp - 4], 0ch
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 64h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 30h], edx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 E4 EB E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xeb
        __asm _emit 0xe0
        __asm _emit 0xff
        imul eax, dword ptr [ebp - 4], 0ch
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 64h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 34h], edx
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 21 85 E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 09: jmp 0x58677332
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes 7D 5D: jge 0x58677395
        __asm _emit 0x7d
        __asm _emit 0x5d
        imul ecx, dword ptr [ebp - 4], 0ch
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 64h]
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + ecx*4]
        ; Exact mapped bytes E8 42 E5 E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xe5
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 3D: jne 0x58677393
        __asm _emit 0x75
        __asm _emit 0x3d
        imul eax, dword ptr [ebp - 4], 0ch
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 64h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 38h], ecx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 6C EB E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xeb
        __asm _emit 0xe0
        __asm _emit 0xff
        imul edx, dword ptr [ebp - 4], 0ch
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 64h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 3ch], eax
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 AE 84 E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 94: jmp 0x58677329
        __asm _emit 0xeb
        __asm _emit 0x94
        ; Exact mapped bytes E9 07 FF FF FF: jmp 0x586772a1
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 4D 0C: movsx ecx, word ptr [ebp + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x0c
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 09: jmp 0x586773ac
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0fh
        ; Exact mapped bytes 0F 8D E0 00 00 00: jge 0x58677496
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586773c8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7D 5D: jge 0x5867742b
        __asm _emit 0x7d
        __asm _emit 0x5d
        imul ecx, dword ptr [ebp - 4], 0ch
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 64h]
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + ecx*4]
        ; Exact mapped bytes E8 AC E4 E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xe4
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 3D: jne 0x58677429
        __asm _emit 0x75
        __asm _emit 0x3d
        imul eax, dword ptr [ebp - 4], 0ch
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 64h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 40h], ecx
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 D6 EA E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xea
        __asm _emit 0xe0
        __asm _emit 0xff
        imul edx, dword ptr [ebp - 4], 0ch
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 64h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 44h], eax
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 18 84 E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 94: jmp 0x586773bf
        __asm _emit 0xeb
        __asm _emit 0x94
        imul ecx, dword ptr [ebp - 4], 0ch
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 64h]
        mov ecx, 4
        shl ecx, 1
        mov ecx, dword ptr [eax + ecx]
        ; Exact mapped bytes E8 4B E4 E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xe4
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 45: jne 0x58677491
        __asm _emit 0x75
        __asm _emit 0x45
        imul eax, dword ptr [ebp - 4], 0ch
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 64h]
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 48h], ecx
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 72 EA E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xea
        __asm _emit 0xe0
        __asm _emit 0xff
        imul edx, dword ptr [ebp - 4], 0ch
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 64h]
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 4ch], eax
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 B0 83 E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 0D FF FF FF: jmp 0x586773a3
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 4D 08: movsx ecx, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x08
        imul edx, ecx, 0ch
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 64h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 DC E3 E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xe3
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 4D: jne 0x58677509
        __asm _emit 0x75
        __asm _emit 0x4d
        ; Exact mapped bytes 0F BF 55 08: movsx edx, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x08
        imul eax, edx, 0ch
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 64h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 50h], edx
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 FE E9 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 45 08: movsx eax, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x08
        imul ecx, eax, 0ch
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 64h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 54h], eax
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 38 83 E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 0F BF 4D 08: movsx ecx, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x08
        imul edx, ecx, 0ch
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 64h]
        mov edx, 4
        shl edx, 0
        mov ecx, dword ptr [ecx + edx]
        ; Exact mapped bytes E8 69 E3 E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xe3
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 53: jne 0x58677581
        __asm _emit 0x75
        __asm _emit 0x53
        ; Exact mapped bytes 0F BF 4D 08: movsx ecx, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x08
        imul edx, ecx, 0ch
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 64h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 58h], eax
        push 1
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 8C E9 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 4D 08: movsx ecx, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x08
        imul edx, ecx, 0ch
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 64h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 0a8h], eax
        push 1
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 C0 82 E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x82
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 0F BF 4D 08: movsx ecx, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x08
        imul edx, ecx, 0ch
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 64h]
        mov edx, 4
        shl edx, 1
        mov ecx, dword ptr [ecx + edx]
        ; Exact mapped bytes E8 F2 E2 E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xe2
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 4B: jne 0x586775f1
        __asm _emit 0x75
        __asm _emit 0x4b
        ; Exact mapped bytes 0F BF 4D 08: movsx ecx, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x08
        imul edx, ecx, 0ch
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 64h]
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 5ch], eax
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 15 E9 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 4D 08: movsx ecx, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x08
        imul edx, ecx, 0ch
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 64h]
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 60h], eax
        push 0
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 50 82 E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x82
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 0F BF 4D 08: movsx ecx, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 118h]
        mov dword ptr [ebp - 64h], eax
        push 1
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 34 82 E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x82
        __asm _emit 0xe2
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 4D 08: movsx ecx, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 118h]
        mov dword ptr [ebp - 68h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 86 DF 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xdf
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5867763d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 6
        ; Exact mapped bytes 7D 3D: jge 0x58677680
        __asm _emit 0x7d
        __asm _emit 0x3d
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58677655
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7D 23: jge 0x5867767e
        __asm _emit 0x7d
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax*8 + 154h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 6ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 C5 81 E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x5867764c
        __asm _emit 0xeb
        __asm _emit 0xce
        ; Exact mapped bytes EB B4: jmp 0x58677634
        __asm _emit 0xeb
        __asm _emit 0xb4
        cmp dword ptr [ebp - 18h], 6
        ; Exact mapped bytes 7D 3B: jge 0x586776c1
        __asm _emit 0x7d
        __asm _emit 0x3b
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58677698
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7D 23: jge 0x586776c1
        __asm _emit 0x7d
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax*8 + 154h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 70h], ecx
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 82 81 E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x5867768f
        __asm _emit 0xeb
        __asm _emit 0xce
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586776d3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0fh
        ; Exact mapped bytes 0F 8D FB 00 00 00: jge 0x586777d8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 45 08: movsx eax, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x08
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 74 65: je 0x5867774b
        __asm _emit 0x74
        __asm _emit 0x65
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx*8 + 19ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 8D E1 E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xe1
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 3B: jne 0x58677746
        __asm _emit 0x75
        __asm _emit 0x3b
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5867771d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 2
        ; Exact mapped bytes 7D 23: jge 0x58677746
        __asm _emit 0x7d
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx*8 + 19ch]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 74h], eax
        push 0
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 9D E7 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xe7
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x58677714
        __asm _emit 0xeb
        __asm _emit 0xce
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x586777d3
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx*8 + 19ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 28 E1 E1 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xe1
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 64: jne 0x586777d3
        __asm _emit 0x75
        __asm _emit 0x64
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58677781
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7D 23: jge 0x586777aa
        __asm _emit 0x7d
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx*8 + 19ch]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 78h], eax
        push 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 39 E7 E0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xe7
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x58677778
        __asm _emit 0xeb
        __asm _emit 0xce
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx*8 + 19ch]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 7ch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 DE DD 13 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xdd
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 F2 FE FF FF: jmp 0x586776ca
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 45 08: movsx eax, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x08
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0fh
        ; Exact mapped bytes 0F 87 56 02 00 00: ja 0x58677a3f
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x56
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 24 8D 84 7B 67 58: jmp dword ptr [ecx*4 + 0x58677b84]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x7b
        __asm _emit 0x67
        __asm _emit 0x58
        mov dword ptr [ebp - 14h], 100h
        mov dword ptr [ebp - 10h], 8eh
        ; Exact mapped bytes E9 39 02 00 00: jmp 0x58677a3f
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0ah
        mov dword ptr [ebp - 10h], 172h
        ; Exact mapped bytes E9 26 02 00 00: jmp 0x58677a3f
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0ah
        mov dword ptr [ebp - 10h], 172h
        ; Exact mapped bytes E9 13 02 00 00: jmp 0x58677a3f
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 44h
        mov dword ptr [ebp - 10h], 0b8h
        ; Exact mapped bytes E9 00 02 00 00: jmp 0x58677a3f
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0ah
        mov dword ptr [ebp - 10h], 172h
        ; Exact mapped bytes E9 ED 01 00 00: jmp 0x58677a3f
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 100h
        mov dword ptr [ebp - 10h], 2eh
        ; Exact mapped bytes E9 DA 01 00 00: jmp 0x58677a3f
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 100h
        mov dword ptr [ebp - 10h], 70h
        ; Exact mapped bytes E9 C7 01 00 00: jmp 0x58677a3f
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FD D0 E0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xd0
        __asm _emit 0xe0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x586778be
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EE D0 E0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xd0
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 47 D1 E0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xd1
        __asm _emit 0xe0
        __asm _emit 0xff
        movzx edx, word ptr [eax + 35eh]
        cmp edx, 1
        ; Exact mapped bytes 75 19: jne 0x586778be
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 F8 E5 FF: call 0x584d7170
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xf8
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        push 7
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 13 1D ED FF: call 0x585495d0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x1d
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0ah
        mov dword ptr [ebp - 10h], 17ch
        ; Exact mapped bytes E9 6E 01 00 00: jmp 0x58677a3f
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 100h
        mov dword ptr [ebp - 10h], 2eh
        ; Exact mapped bytes E9 5B 01 00 00: jmp 0x58677a3f
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 D0 E0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xd0
        __asm _emit 0xe0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x58677930
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 D0 E0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xd0
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DB D0 E0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xd0
        __asm _emit 0xe0
        __asm _emit 0xff
        movzx eax, word ptr [eax + 35eh]
        cmp eax, 1
        ; Exact mapped bytes 75 1F: jne 0x58677930
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 F8 E5 FF: call 0x584d7170
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xf8
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        push 9
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 A1 1C ED FF: call 0x585495d0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 100h
        mov dword ptr [ebp - 10h], 8eh
        ; Exact mapped bytes E9 FC 00 00 00: jmp 0x58677a3f
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 100h
        mov dword ptr [ebp - 10h], 2eh
        ; Exact mapped bytes E9 E9 00 00 00: jmp 0x58677a3f
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1F D0 E0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xd0
        __asm _emit 0xe0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x586779a2
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 10 D0 E0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xd0
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 69 D0 E0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xd0
        __asm _emit 0xe0
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 35eh]
        cmp ecx, 1
        ; Exact mapped bytes 75 1F: jne 0x586779a2
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E2 F7 E5 FF: call 0x584d7170
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xf7
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        push 0bh
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 2F 1C ED FF: call 0x585495d0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x1c
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 100h
        mov dword ptr [ebp - 10h], 84h
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x58677a3f
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0ah
        mov dword ptr [ebp - 10h], 172h
        ; Exact mapped bytes EB 7A: jmp 0x58677a3f
        __asm _emit 0xeb
        __asm _emit 0x7a
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B0 CF E0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xcf
        __asm _emit 0xe0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x58677a11
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A1 CF E0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xcf
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FA CF E0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xcf
        __asm _emit 0xe0
        __asm _emit 0xff
        movzx edx, word ptr [eax + 35eh]
        cmp edx, 1
        ; Exact mapped bytes 75 1F: jne 0x58677a11
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 F7 E5 FF: call 0x584d7170
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xf7
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        push 0dh
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 C0 1B ED FF: call 0x585495d0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x1b
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 100h
        mov dword ptr [ebp - 10h], 172h
        ; Exact mapped bytes EB 1E: jmp 0x58677a3f
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov dword ptr [ebp - 14h], 100h
        mov dword ptr [ebp - 10h], 2eh
        ; Exact mapped bytes EB 0E: jmp 0x58677a3f
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov dword ptr [ebp - 14h], 7eh
        mov dword ptr [ebp - 10h], 111h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 75 0B: jne 0x58677a55
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 74 7D: je 0x58677ad2
        __asm _emit 0x74
        __asm _emit 0x7d
        push 32h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E D0 E0 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xd0
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 90h], ecx
        mov edx, dword ptr [ebp - 90h]
        push edx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 3A 43 14 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x43
        __asm _emit 0x14
        __asm _emit 0x00
        push 32h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 ED CF E0 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xcf
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 98h], edx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 95 68 FF FF FF: call dword ptr [ebp - 0x98]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 184h]
        mov dword ptr [ebp - 9ch], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 5F 45 EF FF: call 0x5856c030
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x45
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 0F BF 4D 08: movsx ecx, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x08
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 20h]
        sub edx, 3
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 0bh
        ; Exact mapped bytes 77 4E: ja 0x58677b36
        __asm _emit 0x77
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 20h]
        movzx ecx, byte ptr [eax + 58677bd0h]
        ; Exact mapped bytes FF 24 8D C4 7B 67 58: jmp dword ptr [ecx*4 + 0x58677bc4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0x7b
        __asm _emit 0x67
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C F6 E5 FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf6
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 55 17 E4 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x17
        __asm _emit 0xe4
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 2
        ; Exact mapped bytes 74 1F: je 0x58677b32
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 88 F3 FF: call 0x585b03d0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x88
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        push 1
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 AF D2 09 00: call 0x58714de0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xd2
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3B: jmp 0x58677b6f
        __asm _emit 0xeb
        __asm _emit 0x3b
        ; Exact mapped bytes EB 39: jmp 0x58677b6f
        __asm _emit 0xeb
        __asm _emit 0x39
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8F BA FF FF: call 0x586735d0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 18 17 E4 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x17
        __asm _emit 0xe4
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 74 1F: je 0x58677b6f
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 75 88 F3 FF: call 0x585b03d0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x88
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 72 D2 09 00: call 0x58714de0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xd2
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 55 08: mov dx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 91 74 02 00 00: mov word ptr [ecx + 0x274], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
