// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00517C38 .. +0x2E3 bytes.
extern "C" __declspec(naked) void FUN_00517c38_00517C38() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 06: je 0x517c50
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7F 14: jg 0x517c64
        __asm _emit 0x7f
        __asm _emit 0x14
        push 2a9h
        push 5c8c2ch
        ; Exact mapped bytes E8 A1 CD 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x517c64
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x517c44
        __asm _emit 0x75
        __asm _emit 0xda
        push 0
        push 0
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 F3 DC 01 00: call 0x535969
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 0
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 BE D9 01 00: call 0x535640
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 0
        push 455h
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 92 A8 00 00 00: call dword ptr [edx + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x517cae
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F 8D 47 02 00 00: jge 0x517f01
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 14h
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + edx]
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes 83 3D 38 8C 5C 00 FF: cmp dword ptr [0x5c8c38], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x8c
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 75 14: jne 0x517ce6
        __asm _emit 0x75
        __asm _emit 0x14
        push 2b8h
        push 5c8c2ch
        ; Exact mapped bytes E8 1F CD 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x517ce6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x517cc9
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 0A 71 FD FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x71
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 800h
        test eax, eax
        ; Exact mapped bytes 75 1C: jne 0x517d19
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 81 3D 38 8C 5C 00 47 00 04 00: cmp dword ptr [0x5c8c38], 0x40047
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x8c
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 74 10: je 0x517d19
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 20h]
        shl eax, 1
        cdq
        mov ecx, 3
        idiv ecx
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 14h
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + edx + 8]
        and ecx, 8
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x517d34
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 71 FF FF FF: jmp 0x517ca5
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 14h
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        mov al, byte ptr [edx + ecx + 9]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x517ddf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 14h
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        mov al, byte ptr [edx + ecx + 8]
        and eax, 20h
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x517da6
        __asm _emit 0x74
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 14h]
        add edx, dword ptr [ecx + 94h]
        add edx, dword ptr [ebp - 20h]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7E 14: jle 0x517d98
        __asm _emit 0x7e
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 14h]
        add ecx, dword ptr [eax + 94h]
        add ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes EB 06: jmp 0x517d9e
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 34: jmp 0x517dda
        __asm _emit 0xeb
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 14h
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + ecx]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7E 14: jle 0x517dce
        __asm _emit 0x7e
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 14h
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + ecx]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 06: jmp 0x517dd4
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes E9 9F 00 00 00: jmp 0x517e7e
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 14h
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + eax + 9]
        and edx, 8
        test edx, edx
        ; Exact mapped bytes 74 39: je 0x517e2e
        __asm _emit 0x74
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 10h]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 2F: je 0x517e2e
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 83 3D 3C 8C 5C 00 FF: cmp dword ptr [0x5c8c3c], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x3c
        __asm _emit 0x8c
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 75 14: jne 0x517e1c
        __asm _emit 0x75
        __asm _emit 0x14
        push 2cfh
        push 5c8c2ch
        ; Exact mapped bytes E8 E9 CB 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x517e1c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x517dff
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 03 15 3C 8C 5C 00: add edx, dword ptr [0x5c8c3c]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x8c
        __asm _emit 0x5c
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 18h]
        add eax, dword ptr [ebp - 1ch]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7E 0B: jle 0x517e44
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 18h]
        add ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 30h], ecx
        ; Exact mapped bytes EB 06: jmp 0x517e4a
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 14h]
        add edx, dword ptr [ecx + 94h]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7E 11: jle 0x517e72
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 14h]
        add ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 34h], ecx
        ; Exact mapped bytes EB 06: jmp 0x517e78
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 14h
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        mov al, byte ptr [edx + ecx + 9]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x517ea8
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 14h
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + ecx]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 09: jmp 0x517eb1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 14h
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + edx + 8]
        and ecx, 20h
        test ecx, ecx
        ; Exact mapped bytes 74 35: je 0x517efc
        __asm _emit 0x74
        __asm _emit 0x35
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 14h]
        add eax, dword ptr [edx + 94h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 14h
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        mov al, byte ptr [edx + ecx + 9]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x517efc
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes E9 A4 FD FF FF: jmp 0x517ca5
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
