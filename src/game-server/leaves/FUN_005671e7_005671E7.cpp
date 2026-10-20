// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005671E7 .. +0x363 bytes.
extern "C" __declspec(naked) void FUN_005671e7_005671E7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 140h
        mov eax, dword ptr [ebp + 8]
        sub eax, 0a8h
        mov dword ptr [ebp - 128h], eax
        mov dword ptr [ebp - 124h], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 120h], 0
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ecx], 0
        lea edx, [ebp - 118h]
        mov dword ptr [ebp - 11ch], edx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 0C: jne 0x56724d
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes EB 47: jmp 0x567294
        __asm _emit 0xeb
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 D8 22 5E 00: call dword ptr [0x5e22d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        lea edx, [eax + eax + 2]
        mov dword ptr [ebp - 124h], edx
        mov eax, dword ptr [ebp - 124h]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 4F 25 F4 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x25
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], esp
        mov eax, dword ptr [ebp - 124h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 130h]
        push edx
        ; Exact mapped bytes E8 22 55 F3 FF: call 0x49c7b0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x55
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        mov eax, dword ptr [ebp - 12ch]
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 74 73: je 0x567321
        __asm _emit 0x74
        __asm _emit 0x73
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 5ch
        ; Exact mapped bytes 74 2C: je 0x5672e5
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 2fh
        ; Exact mapped bytes 74 21: je 0x5672e5
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 3ah
        ; Exact mapped bytes 74 16: je 0x5672e5
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 21h
        ; Exact mapped bytes 74 0B: je 0x5672e5
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 5bh
        ; Exact mapped bytes 75 3C: jne 0x567321
        __asm _emit 0x75
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 18h]
        xor edx, edx
        mov dl, byte ptr [ecx]
        xor eax, eax
        mov al, byte ptr [edx + 5e03a1h]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x56730d
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 83: jmp 0x5672a4
        __asm _emit 0xeb
        __asm _emit 0x83
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 0F 84 CB 00 00 00: je 0x5673fa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 5ch
        ; Exact mapped bytes 0F 84 BC 00 00 00: je 0x5673fa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 2fh
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x5673fa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 3ah
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x5673fa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 21h
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x5673fa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 5bh
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x5673fa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0ffh
        ; Exact mapped bytes 7D 77: jge 0x5673fa
        __asm _emit 0x7d
        __asm _emit 0x77
        mov edx, dword ptr [ebp - 18h]
        xor eax, eax
        mov al, byte ptr [edx]
        xor ecx, ecx
        mov cl, byte ptr [eax + 5e03a1h]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 2E: je 0x5673c7
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 11ch]
        mov eax, dword ptr [ebp - 18h]
        mov cl, byte ptr [eax]
        mov byte ptr [edx], cl
        mov edx, dword ptr [ebp - 11ch]
        add edx, 1
        mov dword ptr [ebp - 11ch], edx
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 11ch]
        mov eax, dword ptr [ebp - 18h]
        mov cl, byte ptr [eax]
        mov byte ptr [edx], cl
        mov edx, dword ptr [ebp - 11ch]
        add edx, 1
        mov dword ptr [ebp - 11ch], edx
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E9 27 FF FF FF: jmp 0x567321
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 11ch]
        mov byte ptr [ecx], 0
        lea edx, [ebp - 118h]
        mov dword ptr [ebp - 120h], edx
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 75 0C: jne 0x56742c
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 134h], 0
        ; Exact mapped bytes EB 4E: jmp 0x56747a
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 120h]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 124h], eax
        mov eax, dword ptr [ebp - 124h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 6C 23 F4 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x23
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], esp
        mov ecx, dword ptr [ebp - 124h]
        push ecx
        mov edx, dword ptr [ebp - 120h]
        push edx
        mov eax, dword ptr [ebp - 138h]
        push eax
        ; Exact mapped bytes E8 4C 9B F2 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x9b
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], eax
        lea ecx, [ebp - 10h]
        push ecx
        push 58e540h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 1
        mov eax, dword ptr [ebp - 134h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 08: je 0x5674ad
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x56753e
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        lea ecx, [ebp - 118h]
        mov dword ptr [ebp - 120h], ecx
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 75 0C: jne 0x5674da
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 13ch], 0
        ; Exact mapped bytes EB 4E: jmp 0x567528
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 120h]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 124h], eax
        mov eax, dword ptr [ebp - 124h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 BE 22 F4 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x22
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], esp
        mov eax, dword ptr [ebp - 124h]
        push eax
        mov ecx, dword ptr [ebp - 120h]
        push ecx
        mov edx, dword ptr [ebp - 140h]
        push edx
        ; Exact mapped bytes E8 9E 9A F2 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x9a
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        push 5d0d24h
        ; Exact mapped bytes FF 15 40 2A 5E 00: call dword ptr [0x5e2a40]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        lea esp, [ebp - 140h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
