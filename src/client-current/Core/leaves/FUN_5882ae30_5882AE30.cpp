// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882AE30 .. +0x365 bytes.
extern "C" __declspec(naked) void FUN_5882ae30_5882AE30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 84h
        push ebx
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 7E 14: jle 0x5882ae5a
        __asm _emit 0x7e
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp + 8], edx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp + 10h], eax
        ; Exact mapped bytes EB 0D: jmp 0x5882ae67
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 75 05: jne 0x5882ae67
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 26 03 00 00: jmp 0x5882b18d
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        cmp edx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 7E 14: jle 0x5882ae83
        __asm _emit 0x7e
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp + 14h], edx
        ; Exact mapped bytes EB 0D: jmp 0x5882ae90
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 75 05: jne 0x5882ae90
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 FD 02 00 00: jmp 0x5882b18d
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 0F 8E F3 02 00 00: jle 0x5882b18d
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 0F 8F E4 02 00 00: jg 0x5882b18d
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 0F 8E DA 02 00 00: jle 0x5882b18d
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xda
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [eax + 20h]
        ; Exact mapped bytes 0F 8F CB 02 00 00: jg 0x5882b18d
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xcb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 07: jge 0x5882aecf
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp + 8], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7D 07: jge 0x5882aedc
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp + 0ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 10h]
        cmp eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes 7E 09: jle 0x5882aef0
        __asm _emit 0x7e
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp + 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 14h]
        cmp ecx, dword ptr [eax + 20h]
        ; Exact mapped bytes 7E 09: jle 0x5882af04
        __asm _emit 0x7e
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        mov dword ptr [ebp + 14h], eax
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 7E 55: jle 0x5882af5f
        __asm _emit 0x7e
        __asm _emit 0x55
        mov ecx, dword ptr [ebp + 20h]
        add ecx, 100h
        mov dword ptr [ebp + 20h], ecx
        mov edx, dword ptr [ebp + 18h]
        and edx, 0ff0000h
        shr edx, 8
        imul edx, dword ptr [ebp + 20h]
        and edx, 0ff0000h
        mov eax, dword ptr [ebp + 18h]
        and eax, 0ff00h
        shr eax, 8
        imul eax, dword ptr [ebp + 20h]
        and eax, 0ff00h
        or edx, eax
        mov ecx, dword ptr [ebp + 18h]
        and ecx, 0ffh
        imul ecx, dword ptr [ebp + 20h]
        shr ecx, 8
        and ecx, 0ffh
        or edx, ecx
        mov dword ptr [ebp + 18h], edx
        ; Exact mapped bytes EB 52: jmp 0x5882afb1
        __asm _emit 0xeb
        __asm _emit 0x52
        mov edx, dword ptr [ebp + 18h]
        not edx
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        and eax, 0ff0000h
        shr eax, 8
        imul eax, dword ptr [ebp + 20h]
        and eax, 0ff0000h
        mov ecx, dword ptr [ebp - 8]
        and ecx, 0ff00h
        shr ecx, 8
        imul ecx, dword ptr [ebp + 20h]
        and ecx, 0ff00h
        or eax, ecx
        mov edx, dword ptr [ebp - 8]
        and edx, 0ffh
        imul edx, dword ptr [ebp + 20h]
        shr edx, 8
        and edx, 0ffh
        or eax, edx
        add eax, dword ptr [ebp + 18h]
        mov dword ptr [ebp + 18h], eax
        cmp dword ptr [ebp + 1ch], 100h
        ; Exact mapped bytes 75 51: jne 0x5882b00b
        __asm _emit 0x75
        __asm _emit 0x51
        push 64h
        push 0
        lea eax, [ebp - 84h]
        push eax
        ; Exact mapped bytes E8 46 1E 02 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 84h], 64h
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 34h], ecx
        lea edx, [ebp - 84h]
        push edx
        push 1000400h
        push 0
        push 0
        lea eax, [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [edx]
        push ecx
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 82 01 00 00: jmp 0x5882b18d
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 18h]
        and ecx, 0ff0000h
        shr ecx, 8
        imul ecx, dword ptr [ebp + 1ch]
        and ecx, 0ff0000h
        mov edx, dword ptr [ebp + 18h]
        and edx, 0ff00h
        shr edx, 8
        imul edx, dword ptr [ebp + 1ch]
        and edx, 0ff00h
        or ecx, edx
        mov eax, dword ptr [ebp + 18h]
        and eax, 0ffh
        imul eax, dword ptr [ebp + 1ch]
        shr eax, 8
        and eax, 0ffh
        or ecx, eax
        mov dword ptr [ebp + 18h], ecx
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F AF 0D 98 5F 90 58: imul ecx, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 76 0E C6 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x0e
        __asm _emit 0xc6
        __asm _emit 0xff
        sub eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 38 10 C6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x10
        __asm _emit 0xc6
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5E 0E C6 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x0e
        __asm _emit 0xc6
        __asm _emit 0xff
        imul eax, dword ptr [ebp + 0ch]
        add esi, eax
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F AF 15 98 5F 90 58: imul edx, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        add esi, edx
        mov dword ptr [ebp - 1ch], esi
        mov esi, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp + 14h]
        sub edx, dword ptr [ebp + 0ch]
        mov ebx, 100h
        sub ebx, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 10h], ebx
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
        ; Exact mapped bytes 0F 6F 35 54 5F 96 58: movq mm6, qword ptr [0x58965f54]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x35
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 6F 3D 5C 5F 96 58: movq mm7, qword ptr [0x58965f5c]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 0ch]
        shr ecx, 3
        ; Exact mapped bytes 73 34: jae 0x5882b105
        __asm _emit 0x73
        __asm _emit 0x34
        mov eax, dword ptr [esi]
        mov ebx, eax
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        shr eax, 8
        imul eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 23 05 54 5F 96 58: and eax, dword ptr [0x58965f54]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        imul ebx, dword ptr [ebp - 10h]
        shr ebx, 8
        ; Exact mapped bytes 23 1D 5C 5F 96 58: and ebx, dword ptr [0x58965f5c]
        __asm _emit 0x23
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        or eax, ebx
        add eax, dword ptr [ebp + 18h]
        mov dword ptr [esi], eax
        add esi, 4
        shr ecx, 1
        ; Exact mapped bytes 73 28: jae 0x5882b131
        __asm _emit 0x73
        __asm _emit 0x28
        ; Exact mapped bytes 0F 6F 0E: movq mm1, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0e
        ; Exact mapped bytes 0F 6F C1: movq mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc1
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
        ; Exact mapped bytes 74 4E: je 0x5882b181
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 0F 6F 0E: movq mm1, qword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x0e
        ; Exact mapped bytes 0F 6F C1: movq mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xc1
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
        ; Exact mapped bytes 0F 6F CA: movq mm1, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xca
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
        ; Exact mapped bytes 75 B2: jne 0x5882b133
        __asm _emit 0x75
        __asm _emit 0xb2
        add esi, dword ptr [ebp - 20h]
        dec edx
        ; Exact mapped bytes 0F 85 3E FF FF FF: jne 0x5882b0c9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 77: emms
        __asm _emit 0x0f
        __asm _emit 0x77
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
