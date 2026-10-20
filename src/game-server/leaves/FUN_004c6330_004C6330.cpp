// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C6330 .. +0x445 bytes.
extern "C" __declspec(naked) void FUN_004c6330_004C6330() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 22: je 0x4c636b
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 8]
        sar ecx, 5
        mov edx, dword ptr [ebp + 8]
        and edx, 1fh
        imul edx, edx, 24h
        mov eax, dword ptr [ecx*4 + 5df120h]
        ; Exact mapped bytes 0F BE 4C 10 04: movsx ecx, byte ptr [eax + edx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x04
        and ecx, 2
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x4c6372
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 FF 03 00 00: jmp 0x4c6771
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        sar edx, 5
        mov eax, dword ptr [ebp + 8]
        and eax, 1fh
        imul eax, eax, 24h
        mov ecx, dword ptr [edx*4 + 5df120h]
        ; Exact mapped bytes 0F BE 54 01 04: movsx edx, byte ptr [ecx + eax + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x04
        and edx, 48h
        test edx, edx
        ; Exact mapped bytes 74 75: je 0x4c6409
        __asm _emit 0x74
        __asm _emit 0x75
        mov eax, dword ptr [ebp + 8]
        sar eax, 5
        mov ecx, dword ptr [ebp + 8]
        and ecx, 1fh
        imul ecx, ecx, 24h
        mov edx, dword ptr [eax*4 + 5df120h]
        ; Exact mapped bytes 0F BE 44 0A 05: movsx eax, byte ptr [edx + ecx + 5]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x05
        cmp eax, 0ah
        ; Exact mapped bytes 74 55: je 0x4c6409
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp + 8]
        sar ecx, 5
        mov edx, dword ptr [ebp + 8]
        and edx, 1fh
        imul edx, edx, 24h
        mov eax, dword ptr [ecx*4 + 5df120h]
        mov ecx, dword ptr [ebp - 14h]
        mov dl, byte ptr [eax + edx + 5]
        mov byte ptr [ecx], dl
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 10h]
        sub edx, 1
        mov dword ptr [ebp + 10h], edx
        mov eax, dword ptr [ebp + 8]
        sar eax, 5
        mov ecx, dword ptr [ebp + 8]
        and ecx, 1fh
        imul ecx, ecx, 24h
        mov edx, dword ptr [eax*4 + 5df120h]
        mov byte ptr [edx + ecx + 5], 0ah
        push 0
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 8]
        sar eax, 5
        mov ecx, dword ptr [ebp + 8]
        and ecx, 1fh
        imul ecx, ecx, 24h
        mov edx, dword ptr [eax*4 + 5df120h]
        mov eax, dword ptr [edx + ecx]
        push eax
        ; Exact mapped bytes FF 15 F0 21 5E 00: call dword ptr [0x5e21f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 4D: jne 0x4c6488
        __asm _emit 0x75
        __asm _emit 0x4d
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 75 1D: jne 0x4c6467
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes E8 21 AE FE FF: call 0x4b1270
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 9
        ; Exact mapped bytes E8 26 AE FE FF: call 0x4b1280
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax], ecx
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 0A 03 00 00: jmp 0x4c6771
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 6dh
        ; Exact mapped bytes 75 07: jne 0x4c6474
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 FD 02 00 00: jmp 0x4c6771
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 53 AD FE FF: call 0x4b11d0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xad
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 E9 02 00 00: jmp 0x4c6771
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        add eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 8]
        sar ecx, 5
        mov edx, dword ptr [ebp + 8]
        and edx, 1fh
        imul edx, edx, 24h
        mov eax, dword ptr [ecx*4 + 5df120h]
        ; Exact mapped bytes 0F BE 4C 10 04: movsx ecx, byte ptr [eax + edx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x04
        and ecx, 80h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 B4 02 00 00: je 0x4c676e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 44: je 0x4c6504
        __asm _emit 0x74
        __asm _emit 0x44
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 0ah
        ; Exact mapped bytes 75 39: jne 0x4c6504
        __asm _emit 0x75
        __asm _emit 0x39
        mov ecx, dword ptr [ebp + 8]
        sar ecx, 5
        mov edx, dword ptr [ebp + 8]
        and edx, 1fh
        imul edx, edx, 24h
        mov eax, dword ptr [ecx*4 + 5df120h]
        mov cl, byte ptr [eax + edx + 4]
        or cl, 4
        mov edx, dword ptr [ebp + 8]
        sar edx, 5
        mov eax, dword ptr [ebp + 8]
        and eax, 1fh
        imul eax, eax, 24h
        mov edx, dword ptr [edx*4 + 5df120h]
        mov byte ptr [edx + eax + 4], cl
        ; Exact mapped bytes EB 36: jmp 0x4c653a
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, dword ptr [ebp + 8]
        sar eax, 5
        mov ecx, dword ptr [ebp + 8]
        and ecx, 1fh
        imul ecx, ecx, 24h
        mov edx, dword ptr [eax*4 + 5df120h]
        mov al, byte ptr [edx + ecx + 4]
        and al, 0fbh
        mov ecx, dword ptr [ebp + 8]
        sar ecx, 5
        mov edx, dword ptr [ebp + 8]
        and edx, 1fh
        imul edx, edx, 24h
        mov ecx, dword ptr [ecx*4 + 5df120h]
        mov byte ptr [ecx + edx + 4], al
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 0F 83 10 02 00 00: jae 0x4c6765
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 1ah
        ; Exact mapped bytes 75 5E: jne 0x4c65be
        __asm _emit 0x75
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp + 8]
        sar ecx, 5
        mov edx, dword ptr [ebp + 8]
        and edx, 1fh
        imul edx, edx, 24h
        mov eax, dword ptr [ecx*4 + 5df120h]
        ; Exact mapped bytes 0F BE 4C 10 04: movsx ecx, byte ptr [eax + edx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x04
        and ecx, 40h
        test ecx, ecx
        ; Exact mapped bytes 75 37: jne 0x4c65b9
        __asm _emit 0x75
        __asm _emit 0x37
        mov edx, dword ptr [ebp + 8]
        sar edx, 5
        mov eax, dword ptr [ebp + 8]
        and eax, 1fh
        imul eax, eax, 24h
        mov ecx, dword ptr [edx*4 + 5df120h]
        mov dl, byte ptr [ecx + eax + 4]
        or dl, 2
        mov eax, dword ptr [ebp + 8]
        sar eax, 5
        mov ecx, dword ptr [ebp + 8]
        and ecx, 1fh
        imul ecx, ecx, 24h
        mov eax, dword ptr [eax*4 + 5df120h]
        mov byte ptr [eax + ecx + 4], dl
        ; Exact mapped bytes E9 A7 01 00 00: jmp 0x4c6765
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 0dh
        ; Exact mapped bytes 74 21: je 0x4c65ea
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx]
        mov byte ptr [eax], dl
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E9 76 01 00 00: jmp 0x4c6760
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx - 1]
        cmp dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 73 47: jae 0x4c6640
        __asm _emit 0x73
        __asm _emit 0x47
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 42 01: movsx eax, byte ptr [edx + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x01
        cmp eax, 0ah
        ; Exact mapped bytes 75 1A: jne 0x4c661f
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        add ecx, 2
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov byte ptr [edx], 0ah
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 1C: jmp 0x4c663b
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx]
        mov byte ptr [ecx], al
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes E9 20 01 00 00: jmp 0x4c6760
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 8], 0
        push 0
        lea ecx, [ebp - 10h]
        push ecx
        push 1
        lea edx, [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        sar eax, 5
        mov ecx, dword ptr [ebp + 8]
        and ecx, 1fh
        imul ecx, ecx, 24h
        mov edx, dword ptr [eax*4 + 5df120h]
        mov eax, dword ptr [edx + ecx]
        push eax
        ; Exact mapped bytes FF 15 F0 21 5E 00: call dword ptr [0x5e21f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x4c6689
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 06: jne 0x4c6695
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 14: jne 0x4c66a9
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 0ch]
        mov byte ptr [ecx], 0dh
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes E9 B7 00 00 00: jmp 0x4c6760
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        sar eax, 5
        mov ecx, dword ptr [ebp + 8]
        and ecx, 1fh
        imul ecx, ecx, 24h
        mov edx, dword ptr [eax*4 + 5df120h]
        ; Exact mapped bytes 0F BE 44 0A 04: movsx eax, byte ptr [edx + ecx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x04
        and eax, 48h
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x4c6713
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 0F BE 4D E4: movsx ecx, byte ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xe4
        cmp ecx, 0ah
        ; Exact mapped bytes 75 11: jne 0x4c66e5
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 0ch]
        mov byte ptr [edx], 0ah
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 2C: jmp 0x4c6711
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 0ch]
        mov byte ptr [ecx], 0dh
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 8]
        sar eax, 5
        mov ecx, dword ptr [ebp + 8]
        and ecx, 1fh
        imul ecx, ecx, 24h
        mov edx, dword ptr [eax*4 + 5df120h]
        mov al, byte ptr [ebp - 1ch]
        mov byte ptr [edx + ecx + 5], al
        ; Exact mapped bytes EB 4D: jmp 0x4c6760
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 1A: jne 0x4c6735
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 0F BE 55 E4: movsx edx, byte ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xe4
        cmp edx, 0ah
        ; Exact mapped bytes 75 11: jne 0x4c6735
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 0ch]
        mov byte ptr [eax], 0ah
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 2B: jmp 0x4c6760
        __asm _emit 0xeb
        __asm _emit 0x2b
        push 1
        push -1
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 8E 93 FF FF: call 0x4bfad0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 0F BE 45 E4: movsx eax, byte ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xe4
        cmp eax, 0ah
        ; Exact mapped bytes 74 0F: je 0x4c6760
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0ch]
        mov byte ptr [ecx], 0dh
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes E9 E1 FD FF FF: jmp 0x4c6546
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        sub eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        mov esp, ebp
        pop ebp
        ret
    }
}
