// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00559B5B .. +0x329 bytes.
extern "C" __declspec(naked) void FUN_00559b5b_00559B5B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 134h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 10h], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x559b9a
        __asm _emit 0x75
        __asm _emit 0x11
        push 32h
        push 5cebe0h
        ; Exact mapped bytes E8 6B AE FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xae
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x559b9a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x559b83
        __asm _emit 0x75
        __asm _emit 0xe3
        push -1
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 87 62 F7 FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x62
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x559bc0
        __asm _emit 0x75
        __asm _emit 0x11
        push 33h
        push 5cebe0h
        ; Exact mapped bytes E8 45 AE FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xae
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x559bc0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x559ba0
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 11: jne 0x559bdd
        __asm _emit 0x75
        __asm _emit 0x11
        push 34h
        push 5cebe0h
        ; Exact mapped bytes E8 28 AE FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xae
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x559bdd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x559bc6
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 75 11: jne 0x559bfa
        __asm _emit 0x75
        __asm _emit 0x11
        push 35h
        push 5cebe0h
        ; Exact mapped bytes E8 0B AE FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xae
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x559bfa
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x559be3
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x559c8a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 0C: jne 0x559c22
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 128h], 0
        ; Exact mapped bytes EB 3F: jmp 0x559c61
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 7F FB F4 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xfb
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], esp
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 12ch]
        push eax
        ; Exact mapped bytes E8 65 73 F3 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x73
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp - 128h]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E9 EA 01 00 00: jmp 0x559e74
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 73: je 0x559d14
        __asm _emit 0x74
        __asm _emit 0x73
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 5ch
        ; Exact mapped bytes 74 2C: je 0x559cd8
        __asm _emit 0x74
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 2fh
        ; Exact mapped bytes 74 21: je 0x559cd8
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 3ah
        ; Exact mapped bytes 74 16: je 0x559cd8
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 21h
        ; Exact mapped bytes 74 0B: je 0x559cd8
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 5bh
        ; Exact mapped bytes 75 3C: jne 0x559d14
        __asm _emit 0x75
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 1ch]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        xor edx, edx
        mov dl, byte ptr [ecx + 5e03a1h]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x559d00
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 83: jmp 0x559c97
        __asm _emit 0xeb
        __asm _emit 0x83
        lea ecx, [ebp - 120h]
        mov dword ptr [ebp - 124h], ecx
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 0F 84 CB 00 00 00: je 0x559df9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 5ch
        ; Exact mapped bytes 0F 84 BC 00 00 00: je 0x559df9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 2fh
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x559df9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 3ah
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x559df9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 21h
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x559df9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 5bh
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x559df9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 103h
        ; Exact mapped bytes 7D 77: jge 0x559df9
        __asm _emit 0x7d
        __asm _emit 0x77
        mov edx, dword ptr [ebp - 1ch]
        xor eax, eax
        mov al, byte ptr [edx]
        xor ecx, ecx
        mov cl, byte ptr [eax + 5e03a1h]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 2E: je 0x559dc6
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [ebp - 1ch]
        mov cl, byte ptr [eax]
        mov byte ptr [edx], cl
        mov edx, dword ptr [ebp - 124h]
        add edx, 1
        mov dword ptr [ebp - 124h], edx
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [ebp - 1ch]
        mov cl, byte ptr [eax]
        mov byte ptr [edx], cl
        mov edx, dword ptr [ebp - 124h]
        add edx, 1
        mov dword ptr [ebp - 124h], edx
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes E9 27 FF FF FF: jmp 0x559d20
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx], eax
        lea ecx, [ebp - 120h]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 0C: jne 0x559e1c
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 130h], 0
        ; Exact mapped bytes EB 3F: jmp 0x559e5b
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 85 F9 F4 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xf9
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], esp
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 134h]
        push edx
        ; Exact mapped bytes E8 6B 71 F3 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x71
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp - 130h]
        push ecx
        push 5cec78h
        ; Exact mapped bytes FF 15 40 2A 5E 00: call dword ptr [0x5e2a40]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        lea esp, [ebp - 140h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
