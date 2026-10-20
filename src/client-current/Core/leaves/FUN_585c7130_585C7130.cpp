// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585C7130 .. +0x12A7 bytes.
extern "C" __declspec(naked) void FUN_585c7130_585C7130() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 220h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 38h], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 48 08: movsx ecx, byte ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x08
        cmp ecx, 0dh
        ; Exact mapped bytes 0F 85 71 12 00 00: jne 0x585c83c7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x71
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        cmp dword ptr [edx + 20f18h], 0
        ; Exact mapped bytes 0F 85 52 02 00 00: jne 0x585c73b8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        mov dword ptr [ebp - 1a8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 5E EC EB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xec
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 50h], 0
        ; Exact mapped bytes EB 09: jmp 0x585c7195
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 50h]
        add edx, 1
        mov dword ptr [ebp - 50h], edx
        cmp dword ptr [ebp - 50h], 2
        ; Exact mapped bytes 7D 1D: jge 0x585c71b8
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + eax*4 + 20f00h]
        mov dword ptr [ebp - 6ch], edx
        push 1
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 2B ED EB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xed
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x585c718c
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [eax + 20f18h], 1
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 21efch]
        mov dword ptr [ebp - 70h], edx
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 05 ED EB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xed
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 21ebch]
        mov dword ptr [ebp - 64h], ecx
        cmp dword ptr [ebp - 64h], 1
        ; Exact mapped bytes 0F 84 55 01 00 00: je 0x585c7347
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 64h], 2
        ; Exact mapped bytes 74 0F: je 0x585c7207
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp dword ptr [ebp - 64h], 3
        ; Exact mapped bytes 0F 84 7C 01 00 00: je 0x585c737e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 AC 01 00 00: jmp 0x585c73b3
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        cmp dword ptr [edx + 21ec0h], 1
        ; Exact mapped bytes 75 2E: jne 0x585c7241
        __asm _emit 0x75
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 21efch]
        mov dword ptr [ebp - 78h], ecx
        push 588ad214h
        ; Exact mapped bytes E8 C7 AD F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xad
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov edx, dword ptr [ebp - 74h]
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 65 EE EB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xee
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 04 01 00 00: jmp 0x585c7345
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 21ec0h], 2
        ; Exact mapped bytes 75 2E: jne 0x585c727b
        __asm _emit 0x75
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 21efch]
        mov dword ptr [ebp - 80h], edx
        push 588ad230h
        ; Exact mapped bytes E8 8D AD F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xad
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov eax, dword ptr [ebp - 7ch]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 2B EE EB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xee
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 CA 00 00 00: jmp 0x585c7345
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        cmp dword ptr [ecx + 21ec0h], 3
        ; Exact mapped bytes 75 3A: jne 0x585c72c1
        __asm _emit 0x75
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 21efch]
        mov dword ptr [ebp - 88h], eax
        push 588ad250h
        ; Exact mapped bytes E8 50 AD F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xad
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov ecx, dword ptr [ebp - 84h]
        push ecx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 E5 ED EB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xed
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x585c7345
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        cmp dword ptr [edx + 21ec0h], 4
        ; Exact mapped bytes 75 37: jne 0x585c7304
        __asm _emit 0x75
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 21efch]
        mov dword ptr [ebp - 90h], ecx
        push 588ad270h
        ; Exact mapped bytes E8 0A AD F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xad
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov edx, dword ptr [ebp - 8ch]
        push edx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 9F ED EB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xed
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 41: jmp 0x585c7345
        __asm _emit 0xeb
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 21ec0h], 5
        ; Exact mapped bytes 75 35: jne 0x585c7345
        __asm _emit 0x75
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 21efch]
        mov dword ptr [ebp - 98h], edx
        push 588ad294h
        ; Exact mapped bytes E8 C7 AC F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xac
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        mov eax, dword ptr [ebp - 94h]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 5C ED EB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xed
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 6C: jmp 0x585c73b3
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 21efch]
        mov dword ptr [ebp - 0a0h], edx
        push 588ad2b8h
        ; Exact mapped bytes E8 90 AC F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xac
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 9ch], eax
        mov eax, dword ptr [ebp - 9ch]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 25 ED EB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xed
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 35: jmp 0x585c73b3
        __asm _emit 0xeb
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 21efch]
        mov dword ptr [ebp - 0a8h], edx
        push 588ad2d8h
        ; Exact mapped bytes E8 59 AC F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xac
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0a4h], eax
        mov eax, dword ptr [ebp - 0a4h]
        push eax
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 EE EC EB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xec
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 0F 10 00 00: jmp 0x585c83c7
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 21efch]
        mov dword ptr [ebp - 0ach], edx
        push 0
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 0C EB EB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xeb
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 6D A2 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xa2
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 0F 84 75 0F 00 00: je 0x585c8363
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0b0h], 1
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 0F 84 5C 0F 00 00: je 0x585c8361
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5c
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 26ch]
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 9A 49 1F 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x49
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 26ch]
        mov dword ptr [ebp - 0b8h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 26ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0bch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes FF 95 44 FF FF FF: call dword ptr [ebp - 0xbc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 30h
        push 0
        lea edx, [ebp - 34h]
        push edx
        ; Exact mapped bytes E8 AC 59 28 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x59
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 589604e0h
        lea eax, [ebp - 34h]
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 4ch], 1
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 C5 A1 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, 1
        imul ecx, edx, 0
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, 2fh
        ; Exact mapped bytes 0F 85 B9 00 00 00: jne 0x585c7559
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], 1
        ; Exact mapped bytes EB 09: jmp 0x585c74b2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 40h]
        add eax, 1
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 50 B5 00 00: call 0x585d2a10
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 40h], eax
        ; Exact mapped bytes 0F 8D 90 00 00 00: jge 0x585c7559
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 79 A1 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, 41h
        ; Exact mapped bytes 7C 3C: jl 0x585c751f
        __asm _emit 0x7c
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 5F A1 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, 5ah
        ; Exact mapped bytes 7F 22: jg 0x585c751f
        __asm _emit 0x7f
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 45 A1 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0xff
        add eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        add edx, 20h
        mov eax, dword ptr [ebp - 68h]
        mov byte ptr [eax], dl
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 23 A1 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 40h]
        ; Exact mapped bytes 0F BE 04 10: movsx eax, byte ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x10
        cmp eax, 20h
        ; Exact mapped bytes 74 19: je 0x585c7552
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 09 A1 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 40h]
        ; Exact mapped bytes 0F BE 04 10: movsx eax, byte ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x585c7554
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x585c7559
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 50 FF FF FF: jmp 0x585c74a9
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [edx + 58905788h]
        mov dword ptr [ebp - 0c0h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 D5 A0 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xa0
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        push 1
        push 0
        mov edx, dword ptr [ebp - 0c0h]
        push edx
        mov eax, dword ptr [ebp - 0c4h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 35 1C 00 00: call 0x585c91d0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 46: jne 0x585c75e5
        __asm _emit 0x75
        __asm _emit 0x46
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ecx + 58905788h]
        mov dword ptr [ebp - 0c8h], edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 8F A0 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xa0
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        push 1
        push 0
        mov ecx, dword ptr [ebp - 0c8h]
        push ecx
        mov edx, dword ptr [ebp - 0cch]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 EF 1B 00 00: call 0x585c91d0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x585c75f3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 73 6C 02 00: call 0x585ee260
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 13 0C 00 00: jmp 0x585c8206
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [eax + 58905788h]
        mov dword ptr [ebp - 0d0h], ecx
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 3C A0 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xa0
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        push 1
        push 1
        mov eax, dword ptr [ebp - 0d0h]
        push eax
        mov ecx, dword ptr [ebp - 0d4h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 9C 1B 00 00: call 0x585c91d0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 46: jne 0x585c767e
        __asm _emit 0x75
        __asm _emit 0x46
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [eax + 58905788h]
        mov dword ptr [ebp - 0d8h], ecx
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 F6 9F F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x9f
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        push 1
        push 1
        mov eax, dword ptr [ebp - 0d8h]
        push eax
        mov ecx, dword ptr [ebp - 0dch]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 56 1B 00 00: call 0x585c91d0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x585c768c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 1A D3 01 00: call 0x585e49a0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 7A 0B 00 00: jmp 0x585c8206
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [edx + 58905788h]
        mov dword ptr [ebp - 0e0h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 A2 9F F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x9f
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        push 1
        push 1
        mov edx, dword ptr [ebp - 0e0h]
        push edx
        mov eax, dword ptr [ebp - 0e4h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 02 1B 00 00: call 0x585c91d0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 46: jne 0x585c7718
        __asm _emit 0x75
        __asm _emit 0x46
        mov ecx, 4
        imul edx, ecx, 5
        mov eax, dword ptr [edx + 58905788h]
        mov dword ptr [ebp - 0e8h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 5C 9F F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x9f
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        push 1
        push 1
        mov edx, dword ptr [ebp - 0e8h]
        push edx
        mov eax, dword ptr [ebp - 0ech]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 BC 1A 00 00: call 0x585c91d0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x585c7726
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 A0 AC 00 00: call 0x585d23c0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 E0 0A 00 00: jmp 0x585c8206
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 6
        mov eax, dword ptr [edx + 58905788h]
        mov dword ptr [ebp - 0f0h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 08 9F F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x9f
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        push 1
        push 1
        mov edx, dword ptr [ebp - 0f0h]
        push edx
        mov eax, dword ptr [ebp - 0f4h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 68 1A 00 00: call 0x585c91d0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 46: jne 0x585c77b2
        __asm _emit 0x75
        __asm _emit 0x46
        mov ecx, 4
        imul edx, ecx, 7
        mov eax, dword ptr [edx + 58905788h]
        mov dword ptr [ebp - 0f8h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 C2 9E F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x9e
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 0fch], eax
        push 1
        push 1
        mov edx, dword ptr [ebp - 0f8h]
        push edx
        mov eax, dword ptr [ebp - 0fch]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 22 1A 00 00: call 0x585c91d0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x585c77c0
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 A6 5C 02 00: call 0x585ed460
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 46 0A 00 00: jmp 0x585c8206
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 3
        mov edx, dword ptr [ecx + 58905788h]
        mov dword ptr [ebp - 100h], edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 6E 9E F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x9e
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 104h], eax
        push 1
        push 1
        mov ecx, dword ptr [ebp - 100h]
        push ecx
        mov edx, dword ptr [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 CE 19 00 00: call 0x585c91d0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 46: jne 0x585c784c
        __asm _emit 0x75
        __asm _emit 0x46
        mov eax, 4
        imul ecx, eax, 9
        mov edx, dword ptr [ecx + 58905788h]
        mov dword ptr [ebp - 108h], edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 28 9E F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x9e
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        push 1
        push 1
        mov ecx, dword ptr [ebp - 108h]
        push ecx
        mov edx, dword ptr [ebp - 10ch]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 88 19 00 00: call 0x585c91d0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x585c785a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 2C A8 00 00: call 0x585d2080
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 AC 09 00 00: jmp 0x585c8206
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0ah
        mov edx, dword ptr [ecx + 58905788h]
        mov dword ptr [ebp - 110h], edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 D4 9D F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x9d
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        push 1
        push 1
        mov ecx, dword ptr [ebp - 110h]
        push ecx
        mov edx, dword ptr [ebp - 114h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 34 19 00 00: call 0x585c91d0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 46: jne 0x585c78e6
        __asm _emit 0x75
        __asm _emit 0x46
        mov eax, 4
        imul ecx, eax, 0bh
        mov edx, dword ptr [ecx + 58905788h]
        mov dword ptr [ebp - 118h], edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 8E 9D F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x9d
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        push 1
        push 1
        mov ecx, dword ptr [ebp - 118h]
        push ecx
        mov edx, dword ptr [ebp - 11ch]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 EE 18 00 00: call 0x585c91d0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x585c78f4
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 C2 2E 02 00: call 0x585ea7b0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 12 09 00 00: jmp 0x585c8206
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0ch
        mov edx, dword ptr [ecx + 58905788h]
        mov dword ptr [ebp - 120h], edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 3A 9D F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x9d
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        push 1
        push 1
        mov ecx, dword ptr [ebp - 120h]
        push ecx
        mov edx, dword ptr [ebp - 124h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 9A 18 00 00: call 0x585c91d0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 46: jne 0x585c7980
        __asm _emit 0x75
        __asm _emit 0x46
        mov eax, 4
        imul ecx, eax, 0dh
        mov edx, dword ptr [ecx + 58905788h]
        mov dword ptr [ebp - 128h], edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 F4 9C F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x9c
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        push 1
        push 1
        mov ecx, dword ptr [ebp - 128h]
        push ecx
        mov edx, dword ptr [ebp - 12ch]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 54 18 00 00: call 0x585c91d0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x585c798e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 18 2F 00 00: call 0x585ca8a0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 78 08 00 00: jmp 0x585c8206
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0eh
        mov edx, dword ptr [ecx + 58905788h]
        mov dword ptr [ebp - 130h], edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 A0 9C F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x9c
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], eax
        push 0
        push 1
        mov ecx, dword ptr [ebp - 130h]
        push ecx
        mov edx, dword ptr [ebp - 134h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 00 18 00 00: call 0x585c91d0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 4C: je 0x585c7a20
        __asm _emit 0x74
        __asm _emit 0x4c
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 6E 9C F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x9c
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, 1
        shl ecx, 0
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, 30h
        ; Exact mapped bytes 7C 2D: jl 0x585c7a20
        __asm _emit 0x7c
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 4F 9C F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x9c
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, 1
        shl ecx, 0
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, 39h
        ; Exact mapped bytes 7F 0E: jg 0x585c7a20
        __asm _emit 0x7f
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 E6 42 00 00: call 0x585cbd00
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 E6 07 00 00: jmp 0x585c8206
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0fh
        mov edx, dword ptr [ecx + 58905788h]
        mov dword ptr [ebp - 138h], edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 0E 9C F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x9c
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        push 1
        push 0
        mov ecx, dword ptr [ebp - 138h]
        push ecx
        mov edx, dword ptr [ebp - 13ch]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 6E 17 00 00: call 0x585c91d0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 46: jne 0x585c7aac
        __asm _emit 0x75
        __asm _emit 0x46
        mov eax, 4
        shl eax, 4
        mov ecx, dword ptr [eax + 58905788h]
        mov dword ptr [ebp - 140h], ecx
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 C8 9B F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x9b
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        push 1
        push 0
        mov eax, dword ptr [ebp - 140h]
        push eax
        mov ecx, dword ptr [ebp - 144h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 28 17 00 00: call 0x585c91d0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x585c7aba
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 7C 32 00 00: call 0x585cad30
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 4C 07 00 00: jmp 0x585c8206
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 11h
        mov ecx, dword ptr [eax + 58905788h]
        mov dword ptr [ebp - 148h], ecx
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 74 9B F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x9b
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], eax
        push 1
        push 0
        mov eax, dword ptr [ebp - 148h]
        push eax
        mov ecx, dword ptr [ebp - 14ch]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 D4 16 00 00: call 0x585c91d0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 46: jne 0x585c7b46
        __asm _emit 0x75
        __asm _emit 0x46
        mov edx, 4
        imul eax, edx, 12h
        mov ecx, dword ptr [eax + 58905788h]
        mov dword ptr [ebp - 150h], ecx
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 2E 9B F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x9b
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        push 1
        push 0
        mov eax, dword ptr [ebp - 150h]
        push eax
        mov ecx, dword ptr [ebp - 154h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 8E 16 00 00: call 0x585c91d0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x585c7b54
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 22 3F 00 00: call 0x585cba70
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 B2 06 00 00: jmp 0x585c8206
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 13h
        mov ecx, dword ptr [eax + 58905788h]
        mov dword ptr [ebp - 158h], ecx
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 DA 9A F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x9a
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 15ch], eax
        push 1
        push 0
        mov eax, dword ptr [ebp - 158h]
        push eax
        mov ecx, dword ptr [ebp - 15ch]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 3A 16 00 00: call 0x585c91d0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x585c7ba8
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 5E B3 00 00: call 0x585d2f00
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 5E 06 00 00: jmp 0x585c8206
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 14h
        mov ecx, dword ptr [eax + 58905788h]
        mov dword ptr [ebp - 160h], ecx
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 86 9A F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x9a
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        push 1
        push 1
        mov eax, dword ptr [ebp - 160h]
        push eax
        mov ecx, dword ptr [ebp - 164h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 E6 15 00 00: call 0x585c91d0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 46: jne 0x585c7c34
        __asm _emit 0x75
        __asm _emit 0x46
        mov edx, 4
        imul eax, edx, 15h
        mov ecx, dword ptr [eax + 58905788h]
        mov dword ptr [ebp - 168h], ecx
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 40 9A F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x9a
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        push 1
        push 1
        mov eax, dword ptr [ebp - 168h]
        push eax
        mov ecx, dword ptr [ebp - 16ch]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 A0 15 00 00: call 0x585c91d0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 4C: je 0x585c7c80
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D1 DF 10 00: call 0x586d5c10
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xdf
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 B3 88 F0 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x88
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f0ch]
        ; Exact mapped bytes E8 65 8C 1F 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x8c
        __asm _emit 0x1f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 20f0ch]
        mov dword ptr [ebp - 170h], edx
        push 262h
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 B6 DA 1E 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xda
        __asm _emit 0x1e
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 86 05 00 00: jmp 0x585c8206
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 18h
        mov edx, dword ptr [ecx + 58905788h]
        mov dword ptr [ebp - 174h], edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 AE 99 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x99
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 178h], eax
        push 1
        push 1
        mov ecx, dword ptr [ebp - 174h]
        push ecx
        mov edx, dword ptr [ebp - 178h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 0E 15 00 00: call 0x585c91d0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 32 03 00 00: je 0x585c7ffc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f0ch]
        mov dword ptr [ebp - 180h], ecx
        push 588ad2f4h
        ; Exact mapped bytes E8 0D A3 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xa3
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 17ch], eax
        push 6464ffh
        mov edx, dword ptr [ebp - 17ch]
        push edx
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 CD D7 1F 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xd7
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f0ch]
        mov dword ptr [ebp - 188h], ecx
        push 588ad314h
        ; Exact mapped bytes E8 D4 A2 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xa2
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 184h], eax
        push 6464ffh
        mov edx, dword ptr [ebp - 184h]
        push edx
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 94 D7 1F 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xd7
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f0ch]
        mov dword ptr [ebp - 190h], ecx
        push 588ad338h
        ; Exact mapped bytes E8 9B A2 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xa2
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 18ch], eax
        push 6464ffh
        mov edx, dword ptr [ebp - 18ch]
        push edx
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 5B D7 1F 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xd7
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f0ch]
        mov dword ptr [ebp - 198h], ecx
        push 588ad35ch
        ; Exact mapped bytes E8 62 A2 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xa2
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 194h], eax
        push 6464ffh
        mov edx, dword ptr [ebp - 194h]
        push edx
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 22 D7 1F 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xd7
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f0ch]
        mov dword ptr [ebp - 1a0h], ecx
        push 588ad380h
        ; Exact mapped bytes E8 29 A2 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xa2
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 19ch], eax
        push 6464ffh
        mov edx, dword ptr [ebp - 19ch]
        push edx
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 E9 D6 1F 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f0ch]
        mov dword ptr [ebp - 1e4h], ecx
        push 588ad3a4h
        ; Exact mapped bytes E8 F0 A1 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xa1
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1a4h], eax
        push 6464ffh
        mov edx, dword ptr [ebp - 1a4h]
        push edx
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 B0 D6 1F 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xd6
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f0ch]
        mov dword ptr [ebp - 1b0h], ecx
        push 588ad3c8h
        ; Exact mapped bytes E8 B7 A1 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xa1
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1ach], eax
        push 6464ffh
        mov edx, dword ptr [ebp - 1ach]
        push edx
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 77 D6 1F 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xd6
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f0ch]
        mov dword ptr [ebp - 1b8h], ecx
        push 588ad3ech
        ; Exact mapped bytes E8 7E A1 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xa1
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1b4h], eax
        push 6464ffh
        mov edx, dword ptr [ebp - 1b4h]
        push edx
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 3E D6 1F 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xd6
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f0ch]
        mov dword ptr [ebp - 1c0h], ecx
        push 588ad410h
        ; Exact mapped bytes E8 45 A1 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xa1
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1bch], eax
        push 6464ffh
        mov edx, dword ptr [ebp - 1bch]
        push edx
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 05 D6 1F 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xd6
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f0ch]
        mov dword ptr [ebp - 1c8h], ecx
        push 588ad434h
        ; Exact mapped bytes E8 0C A1 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xa1
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1c4h], eax
        push 6464ffh
        mov edx, dword ptr [ebp - 1c4h]
        push edx
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 CC D5 1F 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xd5
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f0ch]
        mov dword ptr [ebp - 1d0h], ecx
        push 588ad458h
        ; Exact mapped bytes E8 D3 A0 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xa0
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1cch], eax
        push 6464ffh
        mov edx, dword ptr [ebp - 1cch]
        push edx
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 93 D5 1F 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xd5
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f0ch]
        mov dword ptr [ebp - 1d8h], ecx
        push 588ad47ch
        ; Exact mapped bytes E8 9A A0 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xa0
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1d4h], eax
        push 6464ffh
        mov edx, dword ptr [ebp - 1d4h]
        push edx
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 5A D5 1F 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xd5
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f0ch]
        mov dword ptr [ebp - 1e0h], ecx
        push 588ad4a0h
        ; Exact mapped bytes E8 61 A0 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xa0
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1dch], eax
        push 6464ffh
        mov edx, dword ptr [ebp - 1dch]
        push edx
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 21 D5 1F 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xd5
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f0ch]
        mov dword ptr [ebp - 1e8h], ecx
        push 588ad4c4h
        ; Exact mapped bytes E8 28 A0 F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xa0
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 220h], eax
        push 6464ffh
        mov edx, dword ptr [ebp - 220h]
        push edx
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 E8 D4 1F 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 0A 85 F0 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 0A 02 00 00: jmp 0x585c8206
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 46 96 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x96
        __asm _emit 0xf0
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 70 91 28 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x91
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        add eax, 31h
        mov dword ptr [ebp - 44h], eax
        mov edx, dword ptr [ebp - 44h]
        push edx
        ; Exact mapped bytes E8 20 90 26 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x90
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ech], eax
        mov eax, dword ptr [ebp - 1ech]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 3ch]
        push edx
        ; Exact mapped bytes E8 CD 4D 28 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x4d
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 21ebch], 1
        ; Exact mapped bytes 75 21: jne 0x585c8073
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B3 6E FA FF: call 0x5856ef10
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x6e
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EC 95 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x95
        __asm _emit 0xf0
        __asm _emit 0xff
        push eax
        push 18h
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 10 C1 1E 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xc1
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 38h]
        cmp dword ptr [edx + 21ec0h], 5
        ; Exact mapped bytes 75 17: jne 0x585c8096
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 38h]
        add eax, 21ec4h
        push eax
        push 18h
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 ED C0 1E 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xc0
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 0ch
        push 30h
        lea edx, [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        ; Exact mapped bytes E8 EB 47 28 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x47
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 9A 95 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x95
        __asm _emit 0xf0
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 C4 90 28 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x90
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1f0h], eax
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 7D 95 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x95
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 1f4h], eax
        mov eax, dword ptr [ebp - 1f0h]
        push eax
        mov ecx, dword ptr [ebp - 1f4h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        add edx, 30h
        push edx
        ; Exact mapped bytes E8 9D 47 28 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x47
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 48h], 1
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 45 95 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x95
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, 1
        imul edx, ecx, 0
        ; Exact mapped bytes 0F BE 04 10: movsx eax, byte ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x10
        cmp eax, 2fh
        ; Exact mapped bytes 75 07: jne 0x585c8123
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 21ec0h]
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp - 54h]
        sub eax, 1
        mov dword ptr [ebp - 54h], eax
        cmp dword ptr [ebp - 54h], 4
        ; Exact mapped bytes 0F 87 AA 00 00 00: ja 0x585c81ec
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes FF 24 8D D8 83 5C 58: jmp dword ptr [ecx*4 + 0x585c83d8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xd8
        __asm _emit 0x83
        __asm _emit 0x5c
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        movzx eax, word ptr [edx + 20ef8h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        movzx edx, word ptr [ecx + 21ebch]
        push edx
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 17 88 FA FF: call 0x58570990
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x88
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 6E: jmp 0x585c81ec
        __asm _emit 0xeb
        __asm _emit 0x6e
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3B 89 FA FF: call 0x58570ad0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x89
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 52: jmp 0x585c81ec
        __asm _emit 0xeb
        __asm _emit 0x52
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8F 88 FA FF: call 0x58570a40
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x88
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 36: jmp 0x585c81ec
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C3 89 FA FF: call 0x58570b90
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x89
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 1A: jmp 0x585c81ec
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A7 86 FA FF: call 0x58570890
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x86
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 1f8h], eax
        push 1
        mov ecx, dword ptr [ebp - 1f8h]
        push ecx
        ; Exact mapped bytes E8 31 8E 26 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x8e
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 20f08h]
        mov dword ptr [ebp - 1fch], eax
        push 41h
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 CE 3E EE FF: call 0x584ac0f0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x3e
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 20f08h]
        mov dword ptr [ebp - 200h], edx
        push 0
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 A2 DB EB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xdb
        __asm _emit 0xeb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [eax + 20f18h], 0
        mov dword ptr [ebp - 58h], 0
        ; Exact mapped bytes EB 09: jmp 0x585c825d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 58h]
        add ecx, 1
        mov dword ptr [ebp - 58h], ecx
        cmp dword ptr [ebp - 58h], 2
        ; Exact mapped bytes 7D 23: jge 0x585c8286
        __asm _emit 0x7d
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + edx*4 + 20f00h]
        mov dword ptr [ebp - 204h], ecx
        push 0
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes E8 5D DC EB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xdc
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x585c8254
        __asm _emit 0xeb
        __asm _emit 0xce
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 BC 93 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x93
        __asm _emit 0xf0
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 E6 8E 28 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x8e
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 208h], eax
        mov dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585c82b5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 5ch]
        add eax, 1
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 5ch]
        cmp ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes 7D 28: jge 0x585c82e8
        __asm _emit 0x7d
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 82 93 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x93
        __asm _emit 0xf0
        __asm _emit 0xff
        mov byte ptr [eax], 0
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 71 93 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x93
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 5ch]
        mov byte ptr [eax + ecx], 0
        ; Exact mapped bytes EB C4: jmp 0x585c82ac
        __asm _emit 0xeb
        __asm _emit 0xc4
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 0A 82 F0 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x82
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 75 64: jne 0x585c8361
        __asm _emit 0x75
        __asm _emit 0x64
        push 588ad4e8h
        ; Exact mapped bytes E8 E9 9C F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 20ch], eax
        push 6464ffh
        mov eax, dword ptr [ebp - 20ch]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 29 80 11 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x80
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 20f0ch]
        mov dword ptr [ebp - 214h], edx
        push 588ad510h
        ; Exact mapped bytes E8 B0 9C F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x9c
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 210h], eax
        push 6464ffh
        mov eax, dword ptr [ebp - 210h]
        push eax
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 70 D1 1F 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xd1
        __asm _emit 0x1f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 64: jmp 0x585c83c7
        __asm _emit 0xeb
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 20f08h]
        mov dword ptr [ebp - 218h], edx
        push 0
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes E8 61 DA EB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xda
        __asm _emit 0xeb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [eax + 20f18h], 0
        mov dword ptr [ebp - 60h], 0
        ; Exact mapped bytes EB 09: jmp 0x585c839e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 60h]
        add ecx, 1
        mov dword ptr [ebp - 60h], ecx
        cmp dword ptr [ebp - 60h], 2
        ; Exact mapped bytes 7D 23: jge 0x585c83c7
        __asm _emit 0x7d
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 60h]
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + edx*4 + 20f00h]
        mov dword ptr [ebp - 21ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes E8 1C DB EB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xdb
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x585c8395
        __asm _emit 0xeb
        __asm _emit 0xce
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 7F 8C 26 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x8c
        __asm _emit 0x26
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
