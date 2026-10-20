// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1016A210 .. +0x2C0 bytes.
extern "C" __declspec(naked) void FUN_1016a210_1016A210() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 70h
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push esi
        mov esi, dword ptr [ebp + 10h]
        cmp ebx, esi
        push edi
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 7E 0E: jle 0x1016a234
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, ebx
        mov ebx, esi
        mov esi, eax
        mov dword ptr [ebp + 8], ebx
        mov dword ptr [ebp + 10h], esi
        ; Exact mapped bytes EB 06: jmp 0x1016a23a
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 0F 84 8D 02 00 00: je 0x1016a4c7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, edx
        ; Exact mapped bytes 7E 0D: jle 0x1016a251
        __asm _emit 0x7e
        __asm _emit 0x0d
        mov dword ptr [ebp + 0ch], edx
        mov edx, eax
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp + 14h], edx
        ; Exact mapped bytes EB 06: jmp 0x1016a257
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 0F 84 70 02 00 00: je 0x1016a4c7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 0F 8E 68 02 00 00: jle 0x1016a4c7
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ecx + 1ch]
        cmp ebx, edi
        ; Exact mapped bytes 0F 8F 5D 02 00 00: jg 0x1016a4c7
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x5d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 0F 8E 55 02 00 00: jle 0x1016a4c7
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x55
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 20h]
        cmp eax, ecx
        ; Exact mapped bytes 0F 8F 4A 02 00 00: jg 0x1016a4c7
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 7D 05: jge 0x1016a286
        __asm _emit 0x7d
        __asm _emit 0x05
        xor ebx, ebx
        mov dword ptr [ebp + 8], ebx
        test eax, eax
        ; Exact mapped bytes 7D 07: jge 0x1016a291
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp + 0ch], 0
        cmp esi, edi
        ; Exact mapped bytes 7E 05: jle 0x1016a29a
        __asm _emit 0x7e
        __asm _emit 0x05
        mov esi, edi
        mov dword ptr [ebp + 10h], esi
        cmp edx, ecx
        ; Exact mapped bytes 7E 03: jle 0x1016a2a1
        __asm _emit 0x7e
        __asm _emit 0x03
        mov dword ptr [ebp + 14h], ecx
        mov edi, dword ptr [ebp + 20h]
        test edi, edi
        ; Exact mapped bytes 7E 3F: jle 0x1016a2e7
        __asm _emit 0x7e
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp + 18h]
        add edi, 100h
        mov eax, ecx
        and ecx, 0ffh
        imul ecx, edi
        xor edx, edx
        shr eax, 8
        mov dl, ch
        mov ecx, eax
        and ecx, 0ff00h
        and eax, 0ffh
        imul ecx, edi
        imul eax, edi
        and ecx, 0ff0000h
        and eax, 0ff00h
        or edx, ecx
        or edx, eax
        ; Exact mapped bytes EB 40: jmp 0x1016a327
        __asm _emit 0xeb
        __asm _emit 0x40
        mov edx, dword ptr [ebp + 18h]
        xor ebx, ebx
        mov ecx, edx
        not ecx
        mov eax, ecx
        and ecx, 0ffh
        imul ecx, edi
        shr eax, 8
        mov bl, ch
        mov ecx, eax
        and ecx, 0ff00h
        and eax, 0ffh
        imul ecx, edi
        imul eax, edi
        and ecx, 0ff0000h
        and eax, 0ff00h
        or ebx, ecx
        or ebx, eax
        add edx, ebx
        mov ebx, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 1ch]
        cmp edi, 100h
        ; Exact mapped bytes 75 3C: jne 0x1016a36e
        __asm _emit 0x75
        __asm _emit 0x3c
        mov ecx, 19h
        xor eax, eax
        lea edi, [ebp - 70h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov dword ptr [ebp - 20h], edx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 70h], 64h
        mov eax, dword ptr [edx + 4]
        lea edx, [ebp - 70h]
        push edx
        push 1000400h
        mov ecx, dword ptr [eax]
        push 0
        lea edx, [ebp + 8]
        push 0
        push edx
        push eax
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
        mov eax, edx
        and edx, 0ffh
        imul edx, edi
        xor ecx, ecx
        sub esi, ebx
        shr eax, 8
        mov cl, dh
        mov edx, eax
        and edx, 0ff00h
        and eax, 0ffh
        imul edx, edi
        imul eax, edi
        and edx, 0ff0000h
        and eax, 0ff00h
        or ecx, edx
        mov edx, dword ptr [ebp - 4]
        or ecx, eax
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp + 18h], ecx
        ; Exact mapped bytes 8B 0D B4 CD 1A 10: mov ecx, dword ptr [0x101acdb4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x1a
        __asm _emit 0x10
        mov edi, eax
        imul eax, dword ptr [ebp + 0ch]
        imul esi, ecx
        imul ecx, ebx
        add eax, ecx
        mov ecx, dword ptr [edx + 8]
        sub edi, esi
        add eax, ecx
        mov dword ptr [ebp - 8], esi
        mov dword ptr [ebp + 20h], edi
        mov dword ptr [ebp - 4], eax
        mov esi, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 14h]
        sub edx, dword ptr [ebp + 0ch]
        mov ebx, 100h
        sub ebx, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 0ch], ebx
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
        ; Exact mapped bytes 0F 6F 35 F8 92 1C 10: movq mm6, qword ptr [0x101c92f8]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 0F 6F 3D F0 92 1C 10: movq mm7, qword ptr [0x101c92f0]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 8]
        shr ecx, 3
        ; Exact mapped bytes 73 34: jae 0x1016a43f
        __asm _emit 0x73
        __asm _emit 0x34
        mov eax, dword ptr [esi]
        mov ebx, eax
        ; Exact mapped bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        shr eax, 8
        imul eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 23 05 F8 92 1C 10: and eax, dword ptr [0x101c92f8]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        imul ebx, dword ptr [ebp - 0ch]
        shr ebx, 8
        ; Exact mapped bytes 23 1D F0 92 1C 10: and ebx, dword ptr [0x101c92f0]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        or eax, ebx
        add eax, dword ptr [ebp + 18h]
        mov dword ptr [esi], eax
        add esi, 4
        shr ecx, 1
        ; Exact mapped bytes 73 28: jae 0x1016a46b
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
        ; Exact mapped bytes 74 4E: je 0x1016a4bb
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
        ; Exact mapped bytes 75 B2: jne 0x1016a46d
        __asm _emit 0x75
        __asm _emit 0xb2
        add esi, dword ptr [ebp + 20h]
        dec edx
        ; Exact mapped bytes 0F 85 3E FF FF FF: jne 0x1016a403
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 77: emms
        __asm _emit 0x0f
        __asm _emit 0x77
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
