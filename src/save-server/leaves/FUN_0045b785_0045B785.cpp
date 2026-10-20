// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045B785 .. +0x353 bytes.
extern "C" __declspec(naked) void FUN_0045b785_0045B785() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 68h
        mov dword ptr [ebp - 68h], ecx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 0B FB 0E 00: call 0x54b2a1
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xfb
        __asm _emit 0x0e
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        inc eax
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x45b7b8
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 68h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A9 FA 0E 00: call 0x54b259
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xfa
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 1A 03 00 00: jmp 0x45bad2
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 68h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ecx]
        push eax
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 67 FA 0E 00: call 0x54b231
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xfa
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 68h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 08: jne 0x45b7db
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 68h]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 74 06: je 0x45b7e1
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 22: jne 0x45b803
        __asm _emit 0x75
        __asm _emit 0x22
        mov dword ptr [ebp - 38h], 0
        mov dword ptr [ebp - 3ch], 0
        lea eax, [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5E FA 0E 00: call 0x54b259
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xfa
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 CF 02 00 00: jmp 0x45bad2
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 68h]
        cmp dword ptr [ecx + 4], 80000000h
        ; Exact mapped bytes 75 22: jne 0x45b831
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 68h]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 75 1A: jne 0x45b831
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 14: jne 0x45b831
        __asm _emit 0x75
        __asm _emit 0x14
        lea eax, [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 30 FA 0E 00: call 0x54b259
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xfa
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 A1 02 00 00: jmp 0x45bad2
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 68h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 7D 15: jge 0x45b84f
        __asm _emit 0x7d
        __asm _emit 0x15
        lea edx, [ebp - 58h]
        push edx
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 B0 FE FF FF: call 0x45b6f6
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 19 F9 FF FF: call 0x45b168
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 48 25 01 00: call 0x46dda0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 0F 84 D2 00 00 00: je 0x45b93a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 34: je 0x45b8a2
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes 66 C7 45 B4 20 00: mov word ptr [ebp - 0x4c], 0x20
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xb4
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x45b882
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 4D B4: mov cx, word ptr [ebp - 0x4c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xb4
        ; Exact mapped bytes 66 83 E9 01: sub cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 4D B4: mov word ptr [ebp - 0x4c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xb4
        mov ecx, dword ptr [ebp - 4ch]
        and ecx, 0ffffh
        sub ecx, 1
        mov edx, 1
        shl edx, cl
        mov eax, dword ptr [ebp - 38h]
        and eax, edx
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x45b8a0
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB D6: jmp 0x45b876
        __asm _emit 0xeb
        __asm _emit 0xd6
        ; Exact mapped bytes EB 06: jmp 0x45b8a8
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 66 C7 45 B4 00 00: mov word ptr [ebp - 0x4c], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 BA: jne 0x45b868
        __asm _emit 0x75
        __asm _emit 0xba
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 34: je 0x45b8e8
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes 66 C7 45 B8 20 00: mov word ptr [ebp - 0x48], 0x20
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xb8
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x45b8c8
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 55 B8: mov dx, word ptr [ebp - 0x48]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xb8
        ; Exact mapped bytes 66 83 EA 01: sub dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 55 B8: mov word ptr [ebp - 0x48], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xb8
        mov ecx, dword ptr [ebp - 48h]
        and ecx, 0ffffh
        sub ecx, 1
        mov eax, 1
        shl eax, cl
        mov ecx, dword ptr [ebp - 28h]
        and ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x45b8e6
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB D6: jmp 0x45b8bc
        __asm _emit 0xeb
        __asm _emit 0xd6
        ; Exact mapped bytes EB 06: jmp 0x45b8ee
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 66 C7 45 B8 00 00: mov word ptr [ebp - 0x48], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 BA: jne 0x45b8ae
        __asm _emit 0x75
        __asm _emit 0xba
        mov eax, dword ptr [ebp - 4ch]
        and eax, 0ffffh
        mov ecx, dword ptr [ebp - 48h]
        and ecx, 0ffffh
        lea edx, [eax + ecx - 1]
        cmp edx, 3fh
        ; Exact mapped bytes 7E 2C: jle 0x45b93a
        __asm _emit 0x7e
        __asm _emit 0x2c
        push 1
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 9A F9 0E 00: call 0x54b2b2
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xf9
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], 80000000h
        mov dword ptr [ebp - 3ch], 0
        lea eax, [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 27 F9 0E 00: call 0x54b259
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xf9
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 98 01 00 00: jmp 0x45bad2
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        shr ecx, 10h
        and ecx, 0ffffh
        ; Exact mapped bytes 66 89 4D E4: mov word ptr [ebp - 0x1c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 66 8B 55 C8: mov dx, word ptr [ebp - 0x38]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xc8
        ; Exact mapped bytes 66 89 55 EC: mov word ptr [ebp - 0x14], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xec
        mov eax, dword ptr [ebp - 3ch]
        shr eax, 10h
        and eax, 0ffffh
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 66 8B 4D C4: mov cx, word ptr [ebp - 0x3c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xc4
        ; Exact mapped bytes 66 89 4D F8: mov word ptr [ebp - 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        mov edx, dword ptr [ebp - 28h]
        shr edx, 10h
        and edx, 0ffffh
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 66 8B 45 D8: mov ax, word ptr [ebp - 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 66 89 45 BC: mov word ptr [ebp - 0x44], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xbc
        mov ecx, dword ptr [ebp - 8]
        and ecx, 0ffffh
        mov edx, dword ptr [ebp - 44h]
        and edx, 0ffffh
        imul ecx, edx
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 8]
        and eax, 0ffffh
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffffh
        imul eax, ecx
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 0ch]
        and edx, 0ffffh
        mov eax, dword ptr [ebp - 44h]
        and eax, 0ffffh
        imul edx, eax
        mov dword ptr [ebp - 24h], edx
        mov ecx, dword ptr [ebp - 0ch]
        and ecx, 0ffffh
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffffh
        imul ecx, edx
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp - 14h]
        and eax, 0ffffh
        mov ecx, dword ptr [ebp - 44h]
        and ecx, 0ffffh
        imul eax, ecx
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 14h]
        and edx, 0ffffh
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        imul edx, eax
        mov dword ptr [ebp - 2ch], edx
        mov ecx, dword ptr [ebp - 1ch]
        and ecx, 0ffffh
        mov edx, dword ptr [ebp - 44h]
        and edx, 0ffffh
        imul ecx, edx
        mov dword ptr [ebp - 40h], ecx
        mov eax, dword ptr [ebp - 10h]
        shl eax, 10h
        mov ecx, dword ptr [ebp - 18h]
        add ecx, eax
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 24h]
        shl edx, 10h
        mov eax, dword ptr [ebp - 18h]
        add eax, edx
        mov dword ptr [ebp - 3ch], eax
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 10h]
        shl ecx, 10h
        cmp dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes 73 09: jae 0x45ba5c
        __asm _emit 0x73
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 38h]
        add edx, 1
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 3ch]
        cmp eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 73 09: jae 0x45ba6d
        __asm _emit 0x73
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 1
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 2ch]
        shl edx, 10h
        mov eax, dword ptr [ebp - 30h]
        add eax, edx
        mov ecx, dword ptr [ebp - 40h]
        shl ecx, 10h
        mov edx, dword ptr [ebp - 20h]
        add edx, eax
        add ecx, edx
        mov eax, dword ptr [ebp - 10h]
        shr eax, 10h
        add ecx, eax
        mov edx, dword ptr [ebp - 24h]
        shr edx, 10h
        add edx, dword ptr [ebp - 38h]
        add edx, ecx
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 68h]
        mov ecx, dword ptr [eax + 4]
        xor ecx, dword ptr [ebp + 0ch]
        and ecx, 80000000h
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x45bac3
        __asm _emit 0x74
        __asm _emit 0x15
        lea edx, [ebp - 64h]
        push edx
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 3C FC FF FF: call 0x45b6f6
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 A5 F6 FF FF: call 0x45b168
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8A F7 0E 00: call 0x54b259
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xf7
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
