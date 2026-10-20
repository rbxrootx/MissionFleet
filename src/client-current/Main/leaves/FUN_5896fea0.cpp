// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5896FEA0 .. +0x2C9 bytes.
extern "C" __declspec(naked) void FUN_5896fea0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 70h
        mov eax, dword ptr [ebp + 10h]
        push edi
        mov edi, dword ptr [ebp + 8]
        cmp edi, eax
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 7E 0E: jle 0x5896fec2
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov edx, edi
        mov edi, eax
        mov eax, edx
        mov dword ptr [ebp + 8], edi
        mov dword ptr [ebp + 10h], eax
        ; Exact mapped bytes EB 06: jmp 0x5896fec8
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 0F 84 9A 02 00 00: je 0x58970162
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push esi
        mov esi, dword ptr [ebp + 14h]
        cmp edx, esi
        ; Exact mapped bytes 7E 0D: jle 0x5896fee0
        __asm _emit 0x7e
        __asm _emit 0x0d
        mov dword ptr [ebp + 0ch], esi
        mov esi, edx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp + 14h], esi
        ; Exact mapped bytes EB 06: jmp 0x5896fee6
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 0F 84 7B 02 00 00: je 0x58970161
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8E 73 02 00 00: jle 0x58970161
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ebx, dword ptr [ecx + 1ch]
        cmp edi, ebx
        ; Exact mapped bytes 0F 8F 66 02 00 00: jg 0x58970160
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x66
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 0F 8E 5E 02 00 00: jle 0x58970160
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x5e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 20h]
        cmp edx, ecx
        ; Exact mapped bytes 0F 8F 53 02 00 00: jg 0x58970160
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 7D 05: jge 0x5896ff16
        __asm _emit 0x7d
        __asm _emit 0x05
        xor edi, edi
        mov dword ptr [ebp + 8], edi
        test edx, edx
        ; Exact mapped bytes 7D 07: jge 0x5896ff21
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp + 0ch], 0
        cmp eax, ebx
        ; Exact mapped bytes 7E 05: jle 0x5896ff2a
        __asm _emit 0x7e
        __asm _emit 0x05
        mov eax, ebx
        mov dword ptr [ebp + 10h], eax
        cmp esi, ecx
        ; Exact mapped bytes 7E 03: jle 0x5896ff31
        __asm _emit 0x7e
        __asm _emit 0x03
        mov dword ptr [ebp + 14h], ecx
        mov esi, dword ptr [ebp + 20h]
        test esi, esi
        ; Exact mapped bytes 7E 40: jle 0x5896ff78
        __asm _emit 0x7e
        __asm _emit 0x40
        mov edx, dword ptr [ebp + 18h]
        mov ecx, edx
        shr ecx, 8
        movzx ebx, dl
        add esi, 100h
        mov edx, ecx
        imul ebx, esi
        and edx, 0ff00h
        movzx ecx, cl
        imul edx, esi
        imul ecx, esi
        shr ebx, 8
        and ebx, 0ffh
        and edx, 0ff0000h
        or ebx, edx
        and ecx, 0ff00h
        or ebx, ecx
        ; Exact mapped bytes EB 41: jmp 0x5896ffb9
        __asm _emit 0xeb
        __asm _emit 0x41
        mov ebx, dword ptr [ebp + 18h]
        mov ecx, ebx
        not ecx
        mov edx, ecx
        shr edx, 8
        movzx ecx, cl
        mov edi, edx
        imul ecx, esi
        and edi, 0ff00h
        movzx edx, dl
        imul edi, esi
        imul edx, esi
        shr ecx, 8
        and ecx, 0ffh
        and edi, 0ff0000h
        or ecx, edi
        mov edi, dword ptr [ebp + 8]
        and edx, 0ff00h
        or ecx, edx
        add ebx, ecx
        mov edx, dword ptr [ebp + 1ch]
        cmp edx, 100h
        ; Exact mapped bytes 75 42: jne 0x58970006
        __asm _emit 0x75
        __asm _emit 0x42
        push 64h
        lea eax, [ebp - 70h]
        push 0
        push eax
        ; Exact mapped bytes E8 77 CC 00 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 4]
        add esp, 0ch
        lea ecx, [ebp - 70h]
        push ecx
        push 1000400h
        push 0
        push 0
        lea ecx, [ebp + 8]
        mov dword ptr [ebp - 70h], 64h
        mov dword ptr [ebp - 20h], ebx
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 14h]
        push ecx
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop ebx
        pop esi
        pop edi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
        mov ecx, ebx
        shr ecx, 8
        movzx esi, bl
        mov ebx, ecx
        imul esi, edx
        and ebx, 0ff00h
        movzx ecx, cl
        imul ebx, edx
        imul ecx, edx
        shr esi, 8
        and esi, 0ffh
        and ebx, 0ff0000h
        or esi, ebx
        and ecx, 0ff00h
        or esi, ecx
        ; Exact mapped bytes 8B 0D FC DF 9C 58: mov ecx, dword ptr [0x589cdffc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        sub eax, edi
        imul eax, ecx
        imul ecx, edi
        mov edx, eax
        mov dword ptr [ebp + 18h], esi
        mov esi, dword ptr [ebp - 4]
        mov eax, dword ptr [esi + 0ch]
        mov ebx, eax
        imul eax, dword ptr [ebp + 0ch]
        sub ebx, edx
        add eax, ecx
        add eax, dword ptr [esi + 8]
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 4], ebx
        mov dword ptr [ebp - 0ch], eax
        mov esi, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp + 14h]
        sub edx, dword ptr [ebp + 0ch]
        mov ebx, 100h
        sub ebx, dword ptr [ebp + 1ch]
        mov dword ptr [ebp + 20h], ebx
        ; Exact mapped bytes 0F 6E 65 18: movd mm4, dword ptr [ebp + 0x18]
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0x65
        __asm _emit 0x18
        ; Exact mapped bytes 0F 62 E4: punpckldq mm4, mm4
        __asm _emit 0x0f
        __asm _emit 0x62
        __asm _emit 0xe4
        ; Exact mapped bytes 0F 6E EB: movd mm5, ebx
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xeb
        ; Exact mapped bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact mapped bytes 0F 61 ED: punpcklwd mm5, mm5
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0xed
        ; Exact mapped bytes 0F 6F 35 E4 84 A2 58: movq mm6, qword ptr [0x58a284e4]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D DC 84 A2 58: movq mm7, qword ptr [0x58a284dc]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 8]
        shr ecx, 3
        ; Exact mapped bytes 73 34: jae 0x589700d8
        __asm _emit 0x73
        __asm _emit 0x34
        mov eax, dword ptr [esi]
        mov ebx, eax
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp + 20h]
        ; Exact mapped bytes 23 05 E4 84 A2 58: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        imul ebx, dword ptr [ebp + 20h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D DC 84 A2 58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        or eax, ebx
        add eax, dword ptr [ebp + 18h]
        mov dword ptr [esi], eax
        add esi, 4
        shr ecx, 1
        ; Exact mapped bytes 73 28: jae 0x58970104
        __asm _emit 0x73
        __asm _emit 0x28
        ; Exact mapped bytes 0F 6F 0E: movq mm1, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0e
        ; Exact mapped bytes 0F 7F C8: movq mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 CD: pmullw mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F FC C4: paddb mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xc4
        ; Exact mapped bytes 0F 7F 06: movq qword ptr [esi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x06
        add esi, 8
        test ecx, ecx
        ; Exact mapped bytes 74 4E: je 0x58970154
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 0F 6F 0E: movq mm1, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0e
        ; Exact mapped bytes 0F 7F C8: movq mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 71 D0 08: psrlw mm0, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 C5: pmullw mm0, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xc5
        ; Exact mapped bytes 0F DB C6: pand mm0, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xc6
        ; Exact mapped bytes 0F DB CF: pand mm1, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xcf
        ; Exact mapped bytes 0F D5 CD: pmullw mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB C1: por mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes 0F FC C4: paddb mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xc4
        ; Exact mapped bytes 0F 7F 06: movq qword ptr [esi], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x06
        ; Exact mapped bytes 0F 6F 56 08: movq mm2, qword ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 0F 7F D1: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0xd1
        ; Exact mapped bytes 0F 71 D1 08: psrlw mm1, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd1
        __asm _emit 0x08
        ; Exact mapped bytes 0F D5 CD: pmullw mm1, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xcd
        ; Exact mapped bytes 0F DB CE: pand mm1, mm6
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xce
        ; Exact mapped bytes 0F DB D7: pand mm2, mm7
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0xd7
        ; Exact mapped bytes 0F D5 D5: pmullw mm2, mm5
        __asm _emit 0x0f
        __asm _emit 0xd5
        __asm _emit 0xd5
        ; Exact mapped bytes 0F 71 D2 08: psrlw mm2, 8
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd2
        __asm _emit 0x08
        ; Exact mapped bytes 0F EB CA: por mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xca
        ; Exact mapped bytes 0F FC CC: paddb mm1, mm4
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xcc
        ; Exact mapped bytes 0F 7F 4E 08: movq qword ptr [esi + 8], mm1
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x4e
        __asm _emit 0x08
        add esi, 10h
        dec ecx
        ; Exact mapped bytes 75 B2: jne 0x58970106
        __asm _emit 0x75
        __asm _emit 0xb2
        add esi, dword ptr [ebp - 4]
        dec edx
        ; Exact mapped bytes 0F 85 3E FF FF FF: jne 0x5897009c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 77: emms
        __asm _emit 0x0f
        __asm _emit 0x77
        pop ebx
        pop esi
        pop edi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
