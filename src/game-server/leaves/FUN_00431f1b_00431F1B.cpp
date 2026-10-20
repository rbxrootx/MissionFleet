// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00431F1B .. +0x263 bytes.
extern "C" __declspec(naked) void FUN_00431f1b_00431F1B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x431f49
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 24 02 00 00: jmp 0x43216d
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 97 7B FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 2
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 85 7B FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 42 06: mov ax, word ptr [edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x06
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 51 08: mov dx, word ptr [ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 62 01 00 00: je 0x4320f3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        and ecx, 0ffffh
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 42 02: mov ax, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x02
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp ecx, eax
        ; Exact mapped bytes 0F 85 D5 00 00 00: jne 0x43208e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 C1 EA 05: shr dx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 66 81 E2 FF 07: and dx, 0x7ff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0x07
        and edx, 0ffffh
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 48 02: mov cx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x02
        ; Exact mapped bytes 66 C1 E9 05: shr cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes 66 81 E1 FF 07: and cx, 0x7ff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0x07
        and ecx, 0ffffh
        cmp edx, ecx
        ; Exact mapped bytes 0F 85 A2 00 00 00: jne 0x43208e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        and edx, 0ffffh
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        cmp edx, eax
        ; Exact mapped bytes 7E 47: jle 0x432048
        __asm _emit 0x7e
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 0ch]
        and ecx, 0ffffh
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 6D 2E 00 00: call 0x434e80
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffffh
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 59 2E 00 00: call 0x434e80
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        sub esi, eax
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        imul esi, ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 74h]
        imul eax, esi
        mov ecx, dword ptr [ebp - 8]
        sub ecx, eax
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 44: jmp 0x43208c
        __asm _emit 0xeb
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffffh
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 26 2E 00 00: call 0x434e80
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        mov eax, dword ptr [ebp - 0ch]
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 13 2E 00 00: call 0x434e80
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        sub esi, eax
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        imul esi, edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 74h]
        imul ecx, esi
        mov edx, dword ptr [ebp - 8]
        add edx, ecx
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 63: jmp 0x4320f1
        __asm _emit 0xeb
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 0ch]
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E1 2D 00 00: call 0x434e80
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        imul eax, edx
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 74h]
        imul edx, eax
        mov eax, dword ptr [ebp - 8]
        sub eax, edx
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 2F: je 0x4320f1
        __asm _emit 0x74
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffffh
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 AC 2D 00 00: call 0x434e80
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4A 04: mov cx, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        imul eax, ecx
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 74h]
        imul ecx, eax
        mov edx, dword ptr [ebp - 8]
        add edx, ecx
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 77: jmp 0x43216a
        __asm _emit 0xeb
        __asm _emit 0x77
        mov eax, dword ptr [ebp - 0ch]
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x432136
        __asm _emit 0x74
        __asm _emit 0x37
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 31: je 0x432136
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 0ch]
        and ecx, 0ffffh
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 69 2D 00 00: call 0x434e80
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4A 04: mov cx, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        imul eax, ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 74h]
        imul ecx, eax
        mov edx, dword ptr [ebp - 8]
        sub edx, ecx
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 34: jmp 0x43216a
        __asm _emit 0xeb
        __asm _emit 0x34
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 2E: je 0x43216a
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 33 2D 00 00: call 0x434e80
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        imul eax, edx
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 74h]
        imul edx, eax
        mov eax, dword ptr [ebp - 8]
        add eax, edx
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        pop esi
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 68 66 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x66
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
