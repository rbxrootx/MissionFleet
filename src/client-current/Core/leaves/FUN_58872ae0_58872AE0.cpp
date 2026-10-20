// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58872AE0 .. +0x21B bytes.
extern "C" __declspec(naked) void FUN_58872ae0_58872AE0() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 20h
        ; Exact mapped bytes 83 3D 2C 9C 96 58 00: cmp dword ptr [0x58969c2c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x2c
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes 74 10: je 0x58872b02
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes FF 35 A4 9C 96 58: push dword ptr [0x58969ca4]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xa4
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 58 41 89 58: call dword ptr [0x58894158]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov edi, eax
        ; Exact mapped bytes EB 05: jmp 0x58872b07
        __asm _emit 0xeb
        __asm _emit 0x05
        mov edi, 58873ee0h
        mov eax, dword ptr [ebp + 14h]
        cmp eax, 3e8h
        ; Exact mapped bytes 0F 8F C8 01 00 00: jg 0x58872cdd
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 CD 01 00 00: je 0x58872ce8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, -2
        cmp eax, 3bh
        ; Exact mapped bytes 77 79: ja 0x58872b9c
        __asm _emit 0x77
        __asm _emit 0x79
        movzx eax, byte ptr [eax + 58872d38h]
        push esi
        ; Exact mapped bytes FF 24 85 FC 2C 87 58: jmp dword ptr [eax*4 + 0x58872cfc]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0x2c
        __asm _emit 0x87
        __asm _emit 0x58
        mov dword ptr [ebp - 20h], 2
        mov dword ptr [ebp - 1ch], 588c4b20h
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x58872c0a
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 588c4b20h
        ; Exact mapped bytes E9 32 01 00 00: jmp 0x58872c83
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 2
        mov dword ptr [ebp - 1ch], 588c4b24h
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x58872c0a
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 588c4b24h
        ; Exact mapped bytes E9 13 01 00 00: jmp 0x58872c83
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 3
        mov dword ptr [ebp - 1ch], 588c4b18h
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x58872c0a
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 588c4b18h
        ; Exact mapped bytes EB 25: jmp 0x58872bb1
        __asm _emit 0xeb
        __asm _emit 0x25
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes F2 0F 10 05 C0 50 89 58: movsd xmm0, qword ptr [0x588950c0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 00: movsd qword ptr [eax], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x00
        pop esi
        pop edi
        mov esp, ebp
        pop ebp
        ret
        mov dword ptr [ebp - 20h], 3
        ; Exact mapped bytes EB 59: jmp 0x58872c03
        __asm _emit 0xeb
        __asm _emit 0x59
        mov dword ptr [ebp - 1ch], 588c4b1ch
        mov eax, dword ptr [ebp + 8]
        mov ecx, edi
        mov esi, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 20h], 4
        ; Exact mapped bytes F2 0F 10 00: movsd xmm0, qword ptr [eax]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes F2 0F 11 45 E8: movsd qword ptr [ebp - 0x18], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes F2 0F 10 00: movsd xmm0, qword ptr [eax]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x00
        lea eax, [ebp - 20h]
        ; Exact mapped bytes F2 0F 11 45 F0: movsd qword ptr [ebp - 0x10], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes F2 0F 10 06: movsd xmm0, qword ptr [esi]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x06
        push eax
        ; Exact mapped bytes F2 0F 11 45 F8: movsd qword ptr [ebp - 8], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes FF 15 9C 45 89 58: call dword ptr [0x5889459c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes F2 0F 10 45 F8: movsd xmm0, qword ptr [ebp - 8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xf8
        add esp, 4
        ; Exact mapped bytes F2 0F 11 06: movsd qword ptr [esi], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x06
        pop esi
        pop edi
        mov esp, ebp
        pop ebp
        ret
        mov dword ptr [ebp - 20h], 2
        mov dword ptr [ebp - 1ch], 588c4b1ch
        mov eax, dword ptr [ebp + 8]
        mov ecx, edi
        mov esi, dword ptr [ebp + 10h]
        ; Exact mapped bytes F2 0F 10 00: movsd xmm0, qword ptr [eax]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes F2 0F 11 45 E8: movsd qword ptr [ebp - 0x18], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes F2 0F 10 00: movsd xmm0, qword ptr [eax]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x00
        lea eax, [ebp - 20h]
        ; Exact mapped bytes F2 0F 11 45 F0: movsd qword ptr [ebp - 0x10], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes F2 0F 10 06: movsd xmm0, qword ptr [esi]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x06
        push eax
        ; Exact mapped bytes F2 0F 11 45 F8: movsd qword ptr [ebp - 8], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes FF 15 9C 45 89 58: call dword ptr [0x5889459c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 0F 85 87 00 00 00: jne 0x58872cce
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 23 F8 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 22h
        ; Exact mapped bytes F2 0F 10 45 F8: movsd xmm0, qword ptr [ebp - 8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes F2 0F 11 06: movsd qword ptr [esi], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x06
        pop esi
        pop edi
        mov esp, ebp
        pop ebp
        ret
        mov dword ptr [ebp - 1ch], 588c4b1ch
        ; Exact mapped bytes EB 19: jmp 0x58872c83
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 1ch], 588c4b44h
        ; Exact mapped bytes EB 10: jmp 0x58872c83
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 1ch], 588c4b4ch
        ; Exact mapped bytes EB 07: jmp 0x58872c83
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 588c4b64h
        mov eax, dword ptr [ebp + 8]
        mov ecx, edi
        mov esi, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 20h], 1
        ; Exact mapped bytes F2 0F 10 00: movsd xmm0, qword ptr [eax]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes F2 0F 11 45 E8: movsd qword ptr [ebp - 0x18], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes F2 0F 10 00: movsd xmm0, qword ptr [eax]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x00
        lea eax, [ebp - 20h]
        ; Exact mapped bytes F2 0F 11 45 F0: movsd qword ptr [ebp - 0x10], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes F2 0F 10 06: movsd xmm0, qword ptr [esi]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x06
        push eax
        ; Exact mapped bytes F2 0F 11 45 F8: movsd qword ptr [ebp - 8], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes FF 15 9C 45 89 58: call dword ptr [0x5889459c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x58872cce
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes E8 A7 F7 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xf7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 21h
        ; Exact mapped bytes F2 0F 10 45 F8: movsd xmm0, qword ptr [ebp - 8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes F2 0F 11 06: movsd qword ptr [esi], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x06
        pop esi
        pop edi
        mov esp, ebp
        pop ebp
        ret
        cmp eax, 3e9h
        ; Exact mapped bytes 0F 85 B4 FE FF FF: jne 0x58872b9c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        pop edi
        ; Exact mapped bytes F2 0F 10 00: movsd xmm0, qword ptr [eax]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes F2 0F 11 00: movsd qword ptr [eax], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
