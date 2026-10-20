// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AFD00 .. +0x480 bytes.
extern "C" __declspec(naked) void FUN_004afd00_004AFD00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 0F 84 68 04 00 00: je 0x4b017c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 0F 84 5C 04 00 00: je 0x4b017c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 8], 0
        ; Exact mapped bytes C7 05 78 02 5E 00 00 00 00 00: mov dword ptr [0x5e0278], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 09: jmp 0x4afd46
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp eax, edx
        ; Exact mapped bytes 75 02: jne 0x4afd61
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB DC: jmp 0x4afd3d
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov edx, dword ptr [ebp - 4]
        sub edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        sub edx, 27h
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 52h
        ; Exact mapped bytes 0F 87 4A 03 00 00: ja 0x4b00d0
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x4a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        xor eax, eax
        mov al, byte ptr [ecx + 4b01ach]
        ; Exact mapped bytes FF 24 85 80 01 4B 00: jmp dword ptr [eax*4 + 0x4b0180]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x4b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        sub eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 3
        ; Exact mapped bytes 77 24: ja 0x4afdd1
        __asm _emit 0x77
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 24 8D FF 01 4B 00: jmp dword ptr [ecx*4 + 0x4b01ff]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x4b
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 78 02 5E 00 01 00 00 00: mov dword ptr [0x5e0278], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 8], 6dh
        ; Exact mapped bytes EB 0A: jmp 0x4afdd1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov byte ptr [ebp - 8], 62h
        ; Exact mapped bytes EB 04: jmp 0x4afdd1
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebp - 8], 42h
        ; Exact mapped bytes E9 FA 02 00 00: jmp 0x4b00d0
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        sub eax, 1
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 3
        ; Exact mapped bytes 77 24: ja 0x4afe0f
        __asm _emit 0x77
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 24 8D 0F 02 4B 00: jmp dword ptr [ecx*4 + 0x4b020f]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x0f
        __asm _emit 0x02
        __asm _emit 0x4b
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 78 02 5E 00 01 00 00 00: mov dword ptr [0x5e0278], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 8], 64h
        ; Exact mapped bytes EB 0A: jmp 0x4afe0f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov byte ptr [ebp - 8], 61h
        ; Exact mapped bytes EB 04: jmp 0x4afe0f
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebp - 8], 41h
        ; Exact mapped bytes E9 BC 02 00 00: jmp 0x4b00d0
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 2
        ; Exact mapped bytes 74 08: je 0x4afe28
        __asm _emit 0x74
        __asm _emit 0x08
        cmp dword ptr [ebp - 20h], 4
        ; Exact mapped bytes 74 08: je 0x4afe2e
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes EB 0A: jmp 0x4afe32
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov byte ptr [ebp - 8], 79h
        ; Exact mapped bytes EB 04: jmp 0x4afe32
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebp - 8], 59h
        ; Exact mapped bytes E9 99 02 00 00: jmp 0x4b00d0
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 1
        ; Exact mapped bytes 74 08: je 0x4afe4b
        __asm _emit 0x74
        __asm _emit 0x08
        cmp dword ptr [ebp - 24h], 2
        ; Exact mapped bytes 74 0C: je 0x4afe55
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes EB 0E: jmp 0x4afe59
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes C7 05 78 02 5E 00 01 00 00 00: mov dword ptr [0x5e0278], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 8], 49h
        ; Exact mapped bytes E9 72 02 00 00: jmp 0x4b00d0
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 1
        ; Exact mapped bytes 74 08: je 0x4afe72
        __asm _emit 0x74
        __asm _emit 0x08
        cmp dword ptr [ebp - 28h], 2
        ; Exact mapped bytes 74 0C: je 0x4afe7c
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes EB 0E: jmp 0x4afe80
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes C7 05 78 02 5E 00 01 00 00 00: mov dword ptr [0x5e0278], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 8], 48h
        ; Exact mapped bytes E9 4B 02 00 00: jmp 0x4b00d0
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 2ch], edx
        cmp dword ptr [ebp - 2ch], 1
        ; Exact mapped bytes 74 08: je 0x4afe99
        __asm _emit 0x74
        __asm _emit 0x08
        cmp dword ptr [ebp - 2ch], 2
        ; Exact mapped bytes 74 0C: je 0x4afea3
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes EB 0E: jmp 0x4afea7
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes C7 05 78 02 5E 00 01 00 00 00: mov dword ptr [0x5e0278], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 8], 4dh
        ; Exact mapped bytes E9 24 02 00 00: jmp 0x4b00d0
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 1
        ; Exact mapped bytes 74 08: je 0x4afec0
        __asm _emit 0x74
        __asm _emit 0x08
        cmp dword ptr [ebp - 30h], 2
        ; Exact mapped bytes 74 0C: je 0x4afeca
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes EB 0E: jmp 0x4afece
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes C7 05 78 02 5E 00 01 00 00 00: mov dword ptr [0x5e0278], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 8], 53h
        ; Exact mapped bytes E9 FD 01 00 00: jmp 0x4b00d0
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58c428h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 3F A8 00 00: call 0x4ba720
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x4afef3
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 8]
        add edx, 5
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 1E: jmp 0x4aff11
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 58c424h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 1F A8 00 00: call 0x4ba720
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x4aff11
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 8]
        add ecx, 3
        mov dword ptr [ebp - 4], ecx
        mov byte ptr [ebp - 8], 70h
        ; Exact mapped bytes E9 B6 01 00 00: jmp 0x4b00d0
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 8], 0bh
        ; Exact mapped bytes 7F 0E: jg 0x4aff31
        __asm _emit 0x7f
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 0C: jmp 0x4aff3d
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 8E 9D 00 00 00: jle 0x4affe4
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 0F 86 91 00 00 00: jbe 0x4affe4
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        xor eax, eax
        mov al, byte ptr [edx]
        ; Exact mapped bytes 8B 0D 7C 16 5D 00: mov ecx, dword ptr [0x5d167c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        xor edx, edx
        ; Exact mapped bytes 66 8B 14 41: mov dx, word ptr [ecx + eax*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x41
        and edx, 8000h
        test edx, edx
        ; Exact mapped bytes 74 37: je 0x4affa7
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp + 14h]
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 76 2F: jbe 0x4affa7
        __asm _emit 0x76
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 10h]
        mov cl, byte ptr [eax]
        mov byte ptr [edx], cl
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx]
        add eax, 1
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax]
        sub ecx, 1
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 10h]
        mov al, byte ptr [edx]
        mov byte ptr [ecx], al
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        add edx, 1
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx]
        sub eax, 1
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 1
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes E9 59 FF FF FF: jmp 0x4aff3d
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes E9 17 FD FF FF: jmp 0x4afd06
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x4b00c2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp + 8], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 0F 84 AC 00 00 00: je 0x4b00c0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x4b00c0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 27h
        ; Exact mapped bytes 75 0E: jne 0x4b0039
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 8]
        add edx, 1
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x4b00c0
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        ; Exact mapped bytes 8B 15 7C 16 5D 00: mov edx, dword ptr [0x5d167c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 04 4A: mov ax, word ptr [edx + ecx*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x4a
        and eax, 8000h
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x4b008c
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [ebp + 14h]
        cmp dword ptr [ecx], 1
        ; Exact mapped bytes 76 2F: jbe 0x4b008c
        __asm _emit 0x76
        __asm _emit 0x2f
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        mov dl, byte ptr [ecx]
        mov byte ptr [eax], dl
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        add ecx, 1
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx]
        sub edx, 1
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [eax]
        mov byte ptr [edx], cl
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx]
        add eax, 1
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp + 8]
        add edx, 1
        mov dword ptr [ebp + 8], edx
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax]
        sub ecx, 1
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [edx], ecx
        ; Exact mapped bytes E9 46 FF FF FF: jmp 0x4b0006
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 09: jmp 0x4b00cb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes E9 36 FC FF FF: jmp 0x4afd06
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BE 4D F8: movsx ecx, byte ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xf8
        test ecx, ecx
        ; Exact mapped bytes 74 24: je 0x4b00fc
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov al, byte ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 3F F4 FF FF: call 0x4af530
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes EB 7B: jmp 0x4b0177
        __asm _emit 0xeb
        __asm _emit 0x7b
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        mov al, byte ptr [edx]
        ; Exact mapped bytes 8B 0D 7C 16 5D 00: mov ecx, dword ptr [0x5d167c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        xor edx, edx
        ; Exact mapped bytes 66 8B 14 41: mov dx, word ptr [ecx + eax*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x41
        and edx, 8000h
        test edx, edx
        ; Exact mapped bytes 74 2F: je 0x4b0148
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [edx]
        mov byte ptr [ecx], al
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        add edx, 1
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1
        mov dword ptr [ebp + 8], ecx
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx]
        sub eax, 1
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        mov dl, byte ptr [ecx]
        mov byte ptr [eax], dl
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        add ecx, 1
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx]
        sub edx, 1
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [eax], edx
        ; Exact mapped bytes E9 8A FB FF FF: jmp 0x4afd06
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
