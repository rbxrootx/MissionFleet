// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58864910 .. +0x329 bytes.
extern "C" __declspec(naked) void FUN_58864910() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 10h]
        push esi
        push edi
        mov edi, ecx
        xor esi, esi
        and edi, 1fh
        mov dword ptr [ebp - 8], edi
        test cl, 8
        ; Exact mapped bytes 74 12: je 0x58864941
        __asm _emit 0x74
        __asm _emit 0x12
        test dl, 1
        ; Exact mapped bytes 74 0D: je 0x58864941
        __asm _emit 0x74
        __asm _emit 0x0d
        mov esi, 1
        and edi, 0fffffff7h
        ; Exact mapped bytes E9 CE 02 00 00: jmp 0x58864c0f
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ecx
        and eax, edx
        test al, 4
        ; Exact mapped bytes 74 0D: je 0x58864956
        __asm _emit 0x74
        __asm _emit 0x0d
        mov esi, 4
        and edi, 0fffffffbh
        ; Exact mapped bytes E9 B9 02 00 00: jmp 0x58864c0f
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test cl, 1
        ; Exact mapped bytes 0F 84 09 01 00 00: je 0x58864a68
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test dl, 8
        ; Exact mapped bytes 0F 84 00 01 00 00: je 0x58864a68
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, edx
        mov esi, 8
        and eax, 0c00h
        cmp eax, 800h
        ; Exact mapped bytes 0F 87 A2 00 00 00: ja 0x58864a21
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 7B: je 0x588649fc
        __asm _emit 0x74
        __asm _emit 0x7b
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x588649d0
        __asm _emit 0x74
        __asm _emit 0x4b
        cmp eax, 400h
        ; Exact mapped bytes 0F 85 D0 00 00 00: jne 0x58864a60
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes F2 0F 10 00: movsd xmm0, qword ptr [eax]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 2F 05 B0 51 89 58: comisd xmm0, xmmword ptr [0x588951b0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 76 14: jbe 0x588649b5
        __asm _emit 0x76
        __asm _emit 0x14
        ; Exact mapped bytes F2 0F 10 05 18 33 8C 58: movsd xmm0, qword ptr [0x588c3318]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0x33
        __asm _emit 0x8c
        __asm _emit 0x58
        and edi, 0fffffffeh
        ; Exact mapped bytes F2 0F 11 00: movsd qword ptr [eax], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes E9 5A 02 00 00: jmp 0x58864c0f
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 10 05 08 33 8C 58: movsd xmm0, qword ptr [0x588c3308]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x33
        __asm _emit 0x8c
        __asm _emit 0x58
        and edi, 0fffffffeh
        ; Exact mapped bytes 0F 57 05 40 52 89 58: xorps xmm0, xmmword ptr [0x58895240]
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 00: movsd qword ptr [eax], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes E9 3F 02 00 00: jmp 0x58864c0f
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes F2 0F 10 00: movsd xmm0, qword ptr [eax]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 2F 05 B0 51 89 58: comisd xmm0, xmmword ptr [0x588951b0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 10 05 08 33 8C 58: movsd xmm0, qword ptr [0x588c3308]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x33
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 77 73: ja 0x58864a5c
        __asm _emit 0x77
        __asm _emit 0x73
        ; Exact mapped bytes 0F 57 05 40 52 89 58: xorps xmm0, xmmword ptr [0x58895240]
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        and edi, 0fffffffeh
        ; Exact mapped bytes F2 0F 11 00: movsd qword ptr [eax], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes E9 13 02 00 00: jmp 0x58864c0f
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes F2 0F 10 00: movsd xmm0, qword ptr [eax]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 2F 05 B0 51 89 58: comisd xmm0, xmmword ptr [0x588951b0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 76 40: jbe 0x58864a4d
        __asm _emit 0x76
        __asm _emit 0x40
        ; Exact mapped bytes F2 0F 10 05 08 33 8C 58: movsd xmm0, qword ptr [0x588c3308]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x33
        __asm _emit 0x8c
        __asm _emit 0x58
        and edi, 0fffffffeh
        ; Exact mapped bytes F2 0F 11 00: movsd qword ptr [eax], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes E9 EE 01 00 00: jmp 0x58864c0f
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0c00h
        ; Exact mapped bytes 75 38: jne 0x58864a60
        __asm _emit 0x75
        __asm _emit 0x38
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes F2 0F 10 00: movsd xmm0, qword ptr [eax]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 2F 05 B0 51 89 58: comisd xmm0, xmmword ptr [0x588951b0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 76 14: jbe 0x58864a4d
        __asm _emit 0x76
        __asm _emit 0x14
        ; Exact mapped bytes F2 0F 10 05 18 33 8C 58: movsd xmm0, qword ptr [0x588c3318]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0x33
        __asm _emit 0x8c
        __asm _emit 0x58
        and edi, 0fffffffeh
        ; Exact mapped bytes F2 0F 11 00: movsd qword ptr [eax], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes E9 C2 01 00 00: jmp 0x58864c0f
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 10 05 18 33 8C 58: movsd xmm0, qword ptr [0x588c3318]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0x33
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes 0F 57 05 40 52 89 58: xorps xmm0, xmmword ptr [0x58895240]
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 00: movsd qword ptr [eax], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x00
        and edi, 0fffffffeh
        ; Exact mapped bytes E9 A7 01 00 00: jmp 0x58864c0f
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test cl, 2
        ; Exact mapped bytes 0F 84 9E 01 00 00: je 0x58864c0f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test dl, 10h
        ; Exact mapped bytes 0F 84 95 01 00 00: je 0x58864c0f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov esi, ecx
        shr esi, 4
        and esi, 1
        ; Exact mapped bytes F2 0F 10 00: movsd xmm0, qword ptr [eax]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 2E 05 B0 51 89 58: ucomisd xmm0, qword ptr [0x588951b0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2e
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        lahf
        test ah, 44h
        ; Exact mapped bytes 0F 8B 65 01 00 00: jnp 0x58864c00
        __asm _emit 0x0f
        __asm _emit 0x8b
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 1ch]
        push eax
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 74 4C FF FF: call 0x58859720
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1ch]
        add esp, 0ch
        fstp qword ptr [ebp - 18h]
        ; Exact mapped bytes F2 0F 10 45 E8: movsd xmm0, qword ptr [ebp - 0x18]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xe8
        add edx, 0fffffa00h
        ; Exact mapped bytes F2 0F 11 45 D8: movsd qword ptr [ebp - 0x28], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 0F 57 C9: xorps xmm1, xmm1
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc9
        mov dword ptr [ebp - 14h], edx
        cmp edx, 0fffffbceh
        ; Exact mapped bytes 7D 1B: jge 0x58864aee
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov eax, dword ptr [ebp + 0ch]
        mov esi, 1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes F2 0F 59 C1: mulsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc1
        ; Exact mapped bytes F2 0F 11 00: movsd qword ptr [eax], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes E9 17 01 00 00: jmp 0x58864c05
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp - 28h]
        xor eax, eax
        ; Exact mapped bytes 66 0F 2F C8: comisd xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0xc8
        seta al
        xor cl, cl
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 22h]
        and eax, 0fh
        mov byte ptr [ebp - 1], cl
        or eax, 10h
        ; Exact mapped bytes 66 89 45 DE: mov word ptr [ebp - 0x22], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xde
        xor al, al
        mov dword ptr [ebp - 0ch], eax
        cmp edx, 0fffffc03h
        ; Exact mapped bytes 7D 5C: jge 0x58864b78
        __asm _emit 0x7d
        __asm _emit 0x5c
        mov edx, 0fffffc03h
        sub edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes 0F 1F 44 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, edi
        and ecx, 1
        ; Exact mapped bytes 74 06: je 0x58864b3d
        __asm _emit 0x74
        __asm _emit 0x06
        test esi, esi
        cmove esi, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 0ch]
        cmp byte ptr [ebp - 1], 0
        movzx eax, al
        cmovne eax, dword ptr [ebp - 14h]
        shr edi, 1
        test byte ptr [ebp - 24h], 1
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 24h]
        mov byte ptr [ebp - 1], cl
        mov dword ptr [ebp - 28h], edi
        ; Exact mapped bytes 74 09: je 0x58864b68
        __asm _emit 0x74
        __asm _emit 0x09
        or edi, 80000000h
        mov dword ptr [ebp - 28h], edi
        shr eax, 1
        mov dword ptr [ebp - 24h], eax
        sub edx, 1
        ; Exact mapped bytes 75 BE: jne 0x58864b30
        __asm _emit 0x75
        __asm _emit 0xbe
        mov eax, dword ptr [ebp - 0ch]
        mov byte ptr [ebp - 1], cl
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes F2 0F 10 45 D8: movsd xmm0, qword ptr [ebp - 0x28]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 74 0F: je 0x58864b92
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 0F 57 05 40 52 89 58: xorps xmm0, xmmword ptr [0x58895240]
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 45 D8: movsd qword ptr [ebp - 0x28], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xd8
        mov edi, dword ptr [ebp - 28h]
        ; Exact mapped bytes F2 0F 11 45 E8: movsd qword ptr [ebp - 0x18], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xe8
        test cl, cl
        ; Exact mapped bytes 75 04: jne 0x58864b9f
        __asm _emit 0x75
        __asm _emit 0x04
        test al, al
        ; Exact mapped bytes 74 4F: je 0x58864bee
        __asm _emit 0x74
        __asm _emit 0x4f
        ; Exact mapped bytes E8 3C D6 00 00: call 0x588721e0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 200h
        ; Exact mapped bytes 7F 3E: jg 0x58864be9
        __asm _emit 0x7f
        __asm _emit 0x3e
        ; Exact mapped bytes 74 22: je 0x58864bcf
        __asm _emit 0x74
        __asm _emit 0x22
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x58864bbd
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp eax, 100h
        ; Exact mapped bytes 75 31: jne 0x58864be9
        __asm _emit 0x75
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes EB 17: jmp 0x58864bd4
        __asm _emit 0xeb
        __asm _emit 0x17
        cmp byte ptr [ebp - 1], 0
        ; Exact mapped bytes 74 26: je 0x58864be9
        __asm _emit 0x74
        __asm _emit 0x26
        cmp byte ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 0F: jne 0x58864bd8
        __asm _emit 0x75
        __asm _emit 0x0f
        test byte ptr [ebp - 28h], 1
        ; Exact mapped bytes EB 07: jmp 0x58864bd6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov eax, dword ptr [ebp - 10h]
        xor al, 1
        test al, al
        ; Exact mapped bytes 74 11: je 0x58864be9
        __asm _emit 0x74
        __asm _emit 0x11
        add edi, 1
        mov dword ptr [ebp - 28h], edi
        adc dword ptr [ebp - 24h], 0
        ; Exact mapped bytes F2 0F 10 45 D8: movsd xmm0, qword ptr [ebp - 0x28]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes EB 05: jmp 0x58864bee
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes F2 0F 10 45 E8: movsd xmm0, qword ptr [ebp - 0x18]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xe8
        mov eax, dword ptr [ebp + 0ch]
        mov edi, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes F2 0F 11 00: movsd qword ptr [eax], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x58864c05
        __asm _emit 0xeb
        __asm _emit 0x05
        mov esi, 1
        and edi, 0fffffffdh
        neg esi
        sbb esi, esi
        and esi, 10h
        test cl, 10h
        ; Exact mapped bytes 74 0B: je 0x58864c1f
        __asm _emit 0x74
        __asm _emit 0x0b
        test dl, 20h
        ; Exact mapped bytes 74 06: je 0x58864c1f
        __asm _emit 0x74
        __asm _emit 0x06
        or esi, 20h
        and edi, 0ffffffefh
        test esi, esi
        ; Exact mapped bytes 74 09: je 0x58864c2c
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 37 B5 00 00: call 0x58870160
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        test edi, edi
        pop edi
        sete al
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
