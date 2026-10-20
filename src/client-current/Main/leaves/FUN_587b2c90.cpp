// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B2C90 .. +0x3F7 bytes.
extern "C" __declspec(naked) void FUN_587b2c90() {
    __asm {
        sub esp, 18h
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 164h]
        xor ebx, ebx
        cmp ecx, ebx
        ; Exact mapped bytes 75 08: jne 0x587b2cab
        __asm _emit 0x75
        __asm _emit 0x08
        pop esi
        xor eax, eax
        pop ebx
        add esp, 18h
        ret
        mov eax, 1
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 0ch], eax
        mov eax, dword ptr [ecx + 4]
        push ebp
        mov dword ptr [esp + 1ch], eax
        mov edx, dword ptr [ecx + 8]
        push edi
        lea eax, [esp + 20h]
        mov dword ptr [esp + 24h], edx
        mov edx, dword ptr [esi + 16ch]
        push eax
        mov eax, dword ptr [esi + 170h]
        mov edx, dword ptr [eax + edx*4 + 4]
        push edx
        ; Exact mapped bytes E8 AD 40 12 00: call 0x588d6d90
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x40
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [esp + 24h]
        sub edx, dword ptr [esi + 8]
        mov edi, dword ptr [esi + 0a0h]
        imul edx, edx, 75h
        mov ecx, dword ptr [esp + 20h]
        sub ecx, dword ptr [esi + 4]
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [esi + 0a4h]
        lea edx, [edx + edx*8]
        lea edx, [edi + edx*4]
        add eax, dword ptr [esi + edx*8 + 3e8h]
        sub ecx, dword ptr [esi + edx*8 + 3e4h]
        mov edx, eax
        imul edx, eax
        mov eax, ecx
        imul eax, ecx
        add edx, eax
        mov dword ptr [esp + 1ch], edx
        mov dword ptr [esp + 10h], ebx
        ; Exact mapped bytes DB 44 24 1C: fild dword ptr [esp + 0x1c]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes E8 4E 9F 1C 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x9f
        __asm _emit 0x1c
        __asm _emit 0x00
        ; Exact mapped bytes E8 59 9F 1C 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x9f
        __asm _emit 0x1c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 16ch]
        mov edi, dword ptr [esi + 170h]
        mov ebp, eax
        mov eax, dword ptr [edi + ecx*4 + 0e14h]
        mov dword ptr [esp + 1ch], eax
        cmp ebp, eax
        ; Exact mapped bytes 0F 86 C5 00 00 00: jbe 0x587b2e2d
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 1c2h
        mov ebx, ecx
        ; Exact mapped bytes 7D 34: jge 0x587b2da6
        __asm _emit 0x7d
        __asm _emit 0x34
        lea edi, [edi + ecx*4 + 0e14h]
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi]
        cmp edx, ebp
        ; Exact mapped bytes 77 18: ja 0x587b2d9e
        __asm _emit 0x77
        __asm _emit 0x18
        cmp edx, eax
        ; Exact mapped bytes 76 06: jbe 0x587b2d90
        __asm _emit 0x76
        __asm _emit 0x06
        cmp edx, ebp
        ; Exact mapped bytes 73 02: jae 0x587b2d90
        __asm _emit 0x73
        __asm _emit 0x02
        mov ebx, ecx
        inc ecx
        add edi, 4
        cmp ecx, 1c2h
        ; Exact mapped bytes 7C E4: jl 0x587b2d80
        __asm _emit 0x7c
        __asm _emit 0xe4
        ; Exact mapped bytes EB 08: jmp 0x587b2da6
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 10h], ecx
        test ecx, ecx
        ; Exact mapped bytes 75 45: jne 0x587b2deb
        __asm _emit 0x75
        __asm _emit 0x45
        test ebx, ebx
        ; Exact mapped bytes 74 41: je 0x587b2deb
        __asm _emit 0x74
        __asm _emit 0x41
        lea ecx, [ebx - 1]
        test ecx, ecx
        ; Exact mapped bytes 7C 34: jl 0x587b2de5
        __asm _emit 0x7c
        __asm _emit 0x34
        mov eax, dword ptr [esi + 170h]
        mov edx, ebx
        mov edi, ecx
        sub edx, ecx
        imul edi, edi, 1c24h
        lea edi, [edi + eax + 0e14h]
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 14h
        ; Exact mapped bytes 7E 04: jle 0x587b2dd9
        __asm _emit 0x7e
        __asm _emit 0x04
        test edi, edi
        ; Exact mapped bytes 75 0C: jne 0x587b2de5
        __asm _emit 0x75
        __asm _emit 0x0c
        dec ecx
        inc edx
        sub edi, 1c24h
        test ecx, ecx
        ; Exact mapped bytes 7D EB: jge 0x587b2dd0
        __asm _emit 0x7d
        __asm _emit 0xeb
        mov dword ptr [esp + 10h], ebx
        mov ebx, ecx
        mov eax, dword ptr [esi + 170h]
        mov edx, dword ptr [eax + ebx*4 + 0e14h]
        mov edi, dword ptr [esp + 10h]
        mov ecx, ebp
        sub ecx, edx
        cmp ebx, edi
        ; Exact mapped bytes 75 58: jne 0x587b2e5c
        __asm _emit 0x75
        __asm _emit 0x58
        test ebx, ebx
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x587b2ea0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + 226h]
        shr eax, 4
        and eax, 7fh
        lea edi, [eax + eax*4]
        add edi, edi
        cmp edi, 190h
        ; Exact mapped bytes 7E 7C: jle 0x587b2ea2
        __asm _emit 0x7e
        __asm _emit 0x7c
        mov edi, 190h
        ; Exact mapped bytes EB 75: jmp 0x587b2ea2
        __asm _emit 0xeb
        __asm _emit 0x75
        ; Exact mapped bytes 73 DD: jae 0x587b2e0c
        __asm _emit 0x73
        __asm _emit 0xdd
        mov dword ptr [esp + 10h], ecx
        test ecx, ecx
        ; Exact mapped bytes 7C B4: jl 0x587b2deb
        __asm _emit 0x7c
        __asm _emit 0xb4
        lea edi, [edi + ecx*4 + 0e14h]
        mov edi, edi
        mov edx, dword ptr [edi]
        test edx, edx
        ; Exact mapped bytes 74 04: je 0x587b2e4a
        __asm _emit 0x74
        __asm _emit 0x04
        cmp edx, ebp
        ; Exact mapped bytes 72 9F: jb 0x587b2de9
        __asm _emit 0x72
        __asm _emit 0x9f
        cmp edx, ebp
        ; Exact mapped bytes 76 04: jbe 0x587b2e52
        __asm _emit 0x76
        __asm _emit 0x04
        mov dword ptr [esp + 10h], ecx
        dec ecx
        sub edi, 4
        test ecx, ecx
        ; Exact mapped bytes 7D E6: jge 0x587b2e40
        __asm _emit 0x7d
        __asm _emit 0xe6
        ; Exact mapped bytes EB 8F: jmp 0x587b2deb
        __asm _emit 0xeb
        __asm _emit 0x8f
        mov eax, dword ptr [esi + 170h]
        mov edi, dword ptr [eax + edi*4 + 0e14h]
        sub edi, edx
        ; Exact mapped bytes 74 13: je 0x587b2e80
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [esp + 10h]
        sub eax, ebx
        imul eax, ecx
        xor edx, edx
        div edi
        mov edi, eax
        add edi, ebx
        ; Exact mapped bytes EB 22: jmp 0x587b2ea2
        __asm _emit 0xeb
        __asm _emit 0x22
        mov ecx, dword ptr [esp + 1ch]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x587b2e99
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [esi + 16ch]
        imul eax, ebp
        xor edx, edx
        div ecx
        mov edi, eax
        ; Exact mapped bytes EB 09: jmp 0x587b2ea2
        __asm _emit 0xeb
        __asm _emit 0x09
        lea edi, [ebx + 0ah]
        test ebp, ebp
        ; Exact mapped bytes 77 02: ja 0x587b2ea2
        __asm _emit 0x77
        __asm _emit 0x02
        mov edi, ebx
        movzx eax, word ptr [esi + 226h]
        shr eax, 4
        and eax, 7fh
        lea eax, [eax + eax*4]
        add eax, eax
        cmp edi, eax
        ; Exact mapped bytes 7C 21: jl 0x587b2ed9
        __asm _emit 0x7c
        __asm _emit 0x21
        mov edi, eax
        mov eax, dword ptr [esi + 170h]
        mov eax, dword ptr [eax + edi*4 + 0e14h]
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x587b2edf
        __asm _emit 0x74
        __asm _emit 0x14
        cmp ebp, eax
        ; Exact mapped bytes 76 10: jbe 0x587b2edf
        __asm _emit 0x76
        __asm _emit 0x10
        mov dword ptr [esp + 14h], 0
        ; Exact mapped bytes EB 06: jmp 0x587b2edf
        __asm _emit 0xeb
        __asm _emit 0x06
        test edi, edi
        ; Exact mapped bytes 7D 02: jge 0x587b2edf
        __asm _emit 0x7d
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esi + 15ch]
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x587b2f06
        __asm _emit 0x74
        __asm _emit 0x1d
        lea ecx, [eax + eax*2]
        add ecx, ecx
        add ecx, ecx
        mov eax, 0cccccccdh
        mul ecx
        shr edx, 3
        cmp edx, ebp
        ; Exact mapped bytes 73 08: jae 0x587b2f06
        __asm _emit 0x73
        __asm _emit 0x08
        mov dword ptr [esp + 14h], 0
        mov edx, dword ptr [esp + 24h]
        mov eax, dword ptr [esp + 20h]
        mov ecx, dword ptr [esi + 8]
        push edx
        mov edx, dword ptr [esi + 4]
        push eax
        push ecx
        push edx
        ; Exact mapped bytes E8 F3 90 FB FF: call 0x5876c010
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x90
        __asm _emit 0xfb
        __asm _emit 0xff
        lea eax, [eax + eax*4]
        add esp, 10h
        add eax, eax
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 83 D8 FF FF: call 0x587b07b0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 7D 97 FB FF: call 0x5876c6b0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x97
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        cdq
        xor eax, edx
        sub eax, edx
        add esp, 8
        cmp eax, 2
        mov ebp, 1
        ; Exact mapped bytes 7E 7E: jle 0x587b2fc5
        __asm _emit 0x7e
        __asm _emit 0x7e
        mov eax, dword ptr [esi + 0cch]
        add eax, 2
        cmp ecx, eax
        ; Exact mapped bytes 7E 10: jle 0x587b2f64
        __asm _emit 0x7e
        __asm _emit 0x10
        xor ebx, ebx
        mov dword ptr [esi + 118h], ebx
        mov dword ptr [esi + 110h], ebp
        ; Exact mapped bytes EB 2B: jmp 0x587b2f8f
        __asm _emit 0xeb
        __asm _emit 0x2b
        cmp ecx, 5
        ; Exact mapped bytes 7D 16: jge 0x587b2f7f
        __asm _emit 0x7d
        __asm _emit 0x16
        mov dword ptr [esi + 118h], 1
        mov dword ptr [esi + 110h], 0
        ; Exact mapped bytes EB 0E: jmp 0x587b2f8d
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor eax, eax
        mov dword ptr [esi + 118h], eax
        mov dword ptr [esi + 110h], eax
        xor ebx, ebx
        cmp ecx, ebx
        ; Exact mapped bytes 7E 16: jle 0x587b2fa9
        __asm _emit 0x7e
        __asm _emit 0x16
        mov dword ptr [esi + 124h], ebp
        mov dword ptr [esi + 108h], 40000000h
        mov dword ptr [esp + 18h], ebx
        ; Exact mapped bytes EB 28: jmp 0x587b2fd1
        __asm _emit 0xeb
        __asm _emit 0x28
        ; Exact mapped bytes 7D 14: jge 0x587b2fbf
        __asm _emit 0x7d
        __asm _emit 0x14
        mov dword ptr [esi + 124h], 0ffffffffh
        mov dword ptr [esi + 108h], 40000000h
        mov dword ptr [esp + 18h], ebx
        ; Exact mapped bytes EB 0C: jmp 0x587b2fd1
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov dword ptr [esi + 108h], 0
        xor ebx, ebx
        mov ecx, esi
        ; Exact mapped bytes E8 18 D8 FF FF: call 0x587b07f0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        sub edi, eax
        mov eax, edi
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, 2
        ; Exact mapped bytes 0F 8E 87 00 00 00: jle 0x587b3071
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0cch]
        cdq
        sub eax, edx
        sar eax, 1
        add eax, 3
        cmp edi, eax
        ; Exact mapped bytes 7E 08: jle 0x587b3004
        __asm _emit 0x7e
        __asm _emit 0x08
        mov dword ptr [esi + 114h], ebp
        ; Exact mapped bytes EB 19: jmp 0x587b301d
        __asm _emit 0xeb
        __asm _emit 0x19
        cmp edi, 5
        ; Exact mapped bytes 7D 0E: jge 0x587b3017
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov dword ptr [esi + 118h], ebp
        mov dword ptr [esi + 110h], ebx
        ; Exact mapped bytes EB 0C: jmp 0x587b3023
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov dword ptr [esi + 114h], ebx
        mov dword ptr [esi + 11ch], ebx
        cmp edi, ebx
        ; Exact mapped bytes 7E 22: jle 0x587b3049
        __asm _emit 0x7e
        __asm _emit 0x22
        pop edi
        mov dword ptr [esi + 128h], ebp
        pop ebp
        mov dword ptr [esi + 10ch], 40000000h
        mov eax, ebx
        and eax, dword ptr [esp + 10h]
        pop esi
        mov dword ptr [esp + 8], ebx
        pop ebx
        add esp, 18h
        ret
        ; Exact mapped bytes 7D 14: jge 0x587b305f
        __asm _emit 0x7d
        __asm _emit 0x14
        mov dword ptr [esi + 128h], 0ffffffffh
        mov dword ptr [esi + 10ch], 40000000h
        pop edi
        pop ebp
        mov eax, ebx
        and eax, dword ptr [esp + 10h]
        pop esi
        mov dword ptr [esp + 8], ebx
        pop ebx
        add esp, 18h
        ret
        mov eax, dword ptr [esp + 14h]
        and eax, dword ptr [esp + 18h]
        pop edi
        pop ebp
        mov dword ptr [esi + 10ch], ebx
        pop esi
        pop ebx
        add esp, 18h
        ret
    }
}
