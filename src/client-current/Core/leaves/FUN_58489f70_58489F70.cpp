// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58489F70 .. +0x13C6 bytes.
extern "C" __declspec(naked) void FUN_58489f70_58489F70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14ch
        push esi
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58489f8f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 100h]
        cmp dword ptr [ebp - 8], edx
        ; Exact mapped bytes 0F 8D 9B 13 00 00: jge 0x5848b33d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + eax + 109h]
        test edx, edx
        ; Exact mapped bytes 0F 8E 7F 13 00 00: jle 0x5848b338
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x7f
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax + 10ch], 0
        ; Exact mapped bytes 0F 85 6A 13 00 00: jne 0x5848b338
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6a
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax + edx + 108h]
        mov byte ptr [ebp - 0c4h], cl
        cmp byte ptr [ebp - 0c4h], 3
        ; Exact mapped bytes 74 1C: je 0x5848a007
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp byte ptr [ebp - 0c4h], 4
        ; Exact mapped bytes 0F 84 EB 0B 00 00: je 0x5848abe3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xeb
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 3B 13 00 00: jmp 0x5848b338
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 36 13 00 00: jmp 0x5848b338
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 31 13 00 00: jmp 0x5848b338
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + edx + 114h]
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 D7 00 00 00: jne 0x5848a0f6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx + 110h], 0
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x5848a0f1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 7ch], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 138h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 AA 1C 00 00: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0c8h], eax
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 59 C9 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x5848a077
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 3C 20 00 00: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 32: je 0x5848a0af
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 5B 1E 00 00: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 84 20 00 00: call 0x5848c110
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 74 13: je 0x5848a0a4
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 47 1E 00 00: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 D0 30 00 00: call 0x5848d170
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x5848a0ad
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes EB 02: jmp 0x5848a0af
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB BD: jmp 0x5848a06c
        __asm _emit 0xeb
        __asm _emit 0xbd
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 3C: je 0x5848a0f1
        __asm _emit 0x74
        __asm _emit 0x3c
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + ecx + 114h], 2
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + eax + 115h], 0
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + edx + 116h], 0
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + ecx + 117h], 0
        ; Exact mapped bytes E9 E8 0A 00 00: jmp 0x5848abde
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + eax + 114h]
        cmp edx, 2
        ; Exact mapped bytes 0F 85 3B 03 00 00: jne 0x5848a449
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax + 110h], 0
        ; Exact mapped bytes 0F 84 21 03 00 00: je 0x5848a444
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 110h]
        ; Exact mapped bytes E8 1A 75 04 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x75
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 03 03 00 00: jne 0x5848a444
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 80h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 0cch], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 9D 1B 00 00: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 84h], eax
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 4C C8 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 C0 00 00 00: je 0x5848a241
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 57 1D 00 00: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 50 2F 00 00: call 0x5848d0e0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 45 1D 00 00: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 5E 2F 00 00: call 0x5848d100
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 110h]
        ; Exact mapped bytes E8 08 C8 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3ch]
        sub ecx, eax
        push ecx
        ; Exact mapped bytes E8 4A 6E 3C 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x6e
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 110h]
        ; Exact mapped bytes E8 D4 1E 00 00: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 40h]
        sub ecx, eax
        push ecx
        ; Exact mapped bytes E8 26 6E 3C 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x6e
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp - 3ch]
        imul edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [ebp - 40h]
        imul eax, dword ptr [ebp - 40h]
        add edx, eax
        ; Exact mapped bytes F2 0F 2A C2: cvtsi2sd xmm0, edx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc2
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 12 6E 3C 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x6e
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 7A 70 3A 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x70
        __asm _emit 0x3a
        __asm _emit 0x00
        mov dword ptr [ebp - 0d0h], eax
        cmp dword ptr [ebp - 0d0h], 6a4h
        ; Exact mapped bytes 7D 09: jge 0x5848a231
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 80h], 1
        ; Exact mapped bytes EB 10: jmp 0x5848a241
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 77 1E 00 00: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E9 36 FF FF FF: jmp 0x5848a177
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 14: je 0x5848a25b
        __asm _emit 0x74
        __asm _emit 0x14
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + ecx + 114h], 3
        ; Exact mapped bytes E9 E9 01 00 00: jmp 0x5848a444
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + eax + 117h]
        test edx, edx
        ; Exact mapped bytes 0F 85 43 01 00 00: jne 0x5848a3b5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 22 14 00 00: call 0x5848b6a0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes E8 37 C7 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        imul ecx, dword ptr [edx + 24ch], 0dh
        add eax, ecx
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 10 1A 00 00: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov ecx, 32h
        div ecx
        add edx, 0afh
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + eax + 117h], dl
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes E8 E8 1D 00 00: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 24ch]
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 D4 19 00 00: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov ecx, 3
        div ecx
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + eax + 116h], dl
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + edx + 116h]
        test ecx, ecx
        ; Exact mapped bytes 7E 11: jle 0x5848a317
        __asm _emit 0x7e
        __asm _emit 0x11
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + edx + 116h], 3
        ; Exact mapped bytes EB 0F: jmp 0x5848a326
        __asm _emit 0xeb
        __asm _emit 0x0f
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + ecx + 116h], 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24ch]
        push ecx
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 76 19 00 00: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov ecx, 32h
        div ecx
        add edx, 19h
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + eax + 115h], dl
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + edx + 116h]
        cmp ecx, 3
        ; Exact mapped bytes 75 48: jne 0x5848a3b0
        __asm _emit 0x75
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 4D C6 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 0B: jmp 0x5848a383
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 30 1D 00 00: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 27: je 0x5848a3b0
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4F 1B 00 00: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 B8 1C 00 00: call 0x5848c050
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0fah
        ; Exact mapped bytes 7D 0F: jge 0x5848a3ae
        __asm _emit 0x7d
        __asm _emit 0x0f
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + edx + 115h], 0
        ; Exact mapped bytes EB C8: jmp 0x5848a378
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x5848a444
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + ecx + 115h]
        test eax, eax
        ; Exact mapped bytes 7E 5D: jle 0x5848a425
        __asm _emit 0x7e
        __asm _emit 0x5d
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + ecx + 116h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6C 0F 00 00: call 0x5848b350
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax + edx + 115h]
        sub cl, 1
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + edx + 115h], cl
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + ecx + 115h]
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x5848a425
        __asm _emit 0x75
        __asm _emit 0x0f
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + ecx + 116h], 0
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx + eax + 117h]
        sub dl, 1
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + eax + 117h], dl
        ; Exact mapped bytes E9 95 07 00 00: jmp 0x5848abde
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + edx + 114h]
        cmp ecx, 3
        ; Exact mapped bytes 0F 85 EB 00 00 00: jne 0x5848a54c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx + 110h], 0
        ; Exact mapped bytes 74 17: je 0x5848a489
        __asm _emit 0x74
        __asm _emit 0x17
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 110h]
        ; Exact mapped bytes E8 CB 71 04 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x71
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x5848a498
        __asm _emit 0x75
        __asm _emit 0x0f
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + eax + 114h], 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 0d4h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 4D 18 00 00: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0d8h], eax
        mov dword ptr [ebp - 60h], 0
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 F5 C4 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 0B: jmp 0x5848a4db
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 D8 1B 00 00: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 34: je 0x5848a515
        __asm _emit 0x74
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 F7 19 00 00: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x5848a513
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 EB 19 00 00: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 54 1B 00 00: call 0x5848c050
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0bh
        ; Exact mapped bytes 7E 0B: jle 0x5848a50c
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov dword ptr [ebp - 60h], 1
        ; Exact mapped bytes EB 0B: jmp 0x5848a515
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes EB 07: jmp 0x5848a513
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        ; Exact mapped bytes EB BB: jmp 0x5848a4d0
        __asm _emit 0xeb
        __asm _emit 0xbb
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 11: je 0x5848a52c
        __asm _emit 0x74
        __asm _emit 0x11
        push 3
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 27 0E 00 00: call 0x5848b350
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1B: jmp 0x5848a547
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E8 0E 00 00: call 0x5848b420
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + ecx + 114h], 5
        ; Exact mapped bytes E9 92 06 00 00: jmp 0x5848abde
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + eax + 114h]
        cmp edx, 5
        ; Exact mapped bytes 0F 85 4F 04 00 00: jne 0x5848a9b3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax + 110h], 0
        ; Exact mapped bytes 74 17: je 0x5848a58c
        __asm _emit 0x74
        __asm _emit 0x17
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 110h]
        ; Exact mapped bytes E8 C8 70 04 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x5848a59b
        __asm _emit 0x75
        __asm _emit 0x0f
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + ecx + 114h], 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 0dch], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 4A 17 00 00: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0e0h], eax
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 F9 C3 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 0E 19 00 00: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 07 2B 00 00: call 0x5848d0e0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FC 18 00 00: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 15 2B 00 00: call 0x5848d100
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 70h], eax
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 110h]
        ; Exact mapped bytes E8 BF C3 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 110h]
        ; Exact mapped bytes E8 99 1A 00 00: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 44h]
        sub ecx, dword ptr [ebp - 6ch]
        push ecx
        ; Exact mapped bytes E8 EA 6C 00 00: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov edx, dword ptr [ebp - 48h]
        sub edx, dword ptr [ebp - 70h]
        push edx
        ; Exact mapped bytes E8 D5 6C 00 00: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov eax, dword ptr [ebp - 88h]
        imul eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [ebp - 8ch]
        imul ecx, dword ptr [ebp - 8ch]
        add eax, ecx
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 AF 69 3C 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x69
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 17 6C 3A 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x6c
        __asm _emit 0x3a
        __asm _emit 0x00
        mov dword ptr [ebp - 14ch], eax
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 110h]
        ; Exact mapped bytes E8 8E 16 00 00: call 0x5848bd20
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 384h
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 34h], edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 36 18 00 00: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 6F 18 00 00: call 0x5848bf20
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov eax, dword ptr [ebp - 34h]
        sub eax, edx
        mov dword ptr [ebp - 144h], eax
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 110h]
        ; Exact mapped bytes E8 69 18 00 00: call 0x5848bf40
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E2 17 00 00: call 0x5848bec0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 90h], eax
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax*4 + 589490f0h]
        mov dword ptr [ebp - 0e4h], ecx
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx*4 + 5894c930h]
        mov dword ptr [ebp - 0e8h], eax
        mov ecx, dword ptr [ebp - 34h]
        mov eax, dword ptr [ebp - 90h]
        imul eax, dword ptr [ecx*4 + 5894c930h]
        cdq
        mov ecx, 186a0h
        idiv ecx
        mov dword ptr [ebp - 64h], eax
        mov eax, dword ptr [ebp - 34h]
        add eax, 708h
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov eax, dword ptr [ebp - 90h]
        imul eax, dword ptr [edx*4 + 589490f0h]
        cdq
        mov ecx, 186a0h
        idiv ecx
        mov dword ptr [ebp - 68h], eax
        mov edx, dword ptr [ebp - 6ch]
        cmp edx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 7D 0C: jge 0x5848a75d
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 94h], 0ffffffffh
        ; Exact mapped bytes EB 0A: jmp 0x5848a767
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 1
        mov eax, dword ptr [ebp - 0e4h]
        push eax
        ; Exact mapped bytes E8 9D 6B 00 00: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        imul eax, dword ptr [ebp - 94h]
        imul eax, eax, 1dbh
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 70h]
        cmp edx, dword ptr [ebp - 48h]
        ; Exact mapped bytes 7D 0C: jge 0x5848a7a2
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 98h], 0ffffffffh
        ; Exact mapped bytes EB 0A: jmp 0x5848a7ac
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 1
        mov eax, dword ptr [ebp - 0e8h]
        push eax
        ; Exact mapped bytes E8 58 6B 00 00: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        imul eax, dword ptr [ebp - 98h]
        imul eax, eax, 1a9h
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 3C: je 0x5848a815
        __asm _emit 0x74
        __asm _emit 0x3c
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 7D 0C: jge 0x5848a7eb
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 9ch], 0ffffffffh
        ; Exact mapped bytes EB 0A: jmp 0x5848a7f5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 9ch], 1
        mov edx, dword ptr [ebp - 64h]
        push edx
        ; Exact mapped bytes E8 12 6B 00 00: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        lea eax, [eax*4 + 0d4h]
        imul eax, dword ptr [ebp - 9ch]
        add eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 3C: je 0x5848a857
        __asm _emit 0x74
        __asm _emit 0x3c
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 7D 0C: jge 0x5848a82d
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 0a0h], 0ffffffffh
        ; Exact mapped bytes EB 0A: jmp 0x5848a837
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a0h], 1
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        ; Exact mapped bytes E8 D0 6A 00 00: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        lea edx, [eax*4 + 0d4h]
        imul edx, dword ptr [ebp - 0a0h]
        add edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 44h]
        add eax, dword ptr [ebp - 28h]
        sub eax, dword ptr [ebp - 6ch]
        push eax
        ; Exact mapped bytes E8 AA 6A 00 00: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 48h]
        add ecx, dword ptr [ebp - 24h]
        sub ecx, dword ptr [ebp - 70h]
        push ecx
        ; Exact mapped bytes E8 95 6A 00 00: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        cmp dword ptr [ebp - 74h], 32h
        ; Exact mapped bytes 0F 8D 12 01 00 00: jge 0x5848a99d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 78h], 32h
        ; Exact mapped bytes 0F 8D 08 01 00 00: jge 0x5848a99d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 0C 18 00 00: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x5848a95c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 27 16 00 00: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 00 C1 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 12 16 00 00: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 DB 17 00 00: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0f0h], eax
        mov dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes EB 0B: jmp 0x5848a8ef
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C4 17 00 00: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 65: je 0x5848a95a
        __asm _emit 0x74
        __asm _emit 0x65
        mov edx, dword ptr [ebp - 44h]
        add edx, dword ptr [ebp - 28h]
        sub edx, dword ptr [ebp - 0ech]
        push edx
        ; Exact mapped bytes E8 09 6A 00 00: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov eax, dword ptr [ebp - 48h]
        add eax, dword ptr [ebp - 24h]
        sub eax, dword ptr [ebp - 0f0h]
        push eax
        ; Exact mapped bytes E8 F1 69 00 00: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        imul ecx, dword ptr [ebp - 4ch], 0fh
        add ecx, 32h
        cmp dword ptr [ebp - 74h], ecx
        ; Exact mapped bytes 7D 15: jge 0x5848a946
        __asm _emit 0x7d
        __asm _emit 0x15
        imul edx, dword ptr [ebp - 4ch], 0fh
        add edx, 32h
        cmp dword ptr [ebp - 78h], edx
        ; Exact mapped bytes 7D 09: jge 0x5848a946
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 50h], 1
        ; Exact mapped bytes EB 09: jmp 0x5848a94f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov dword ptr [ebp - 50h], 0
        ; Exact mapped bytes EB 0B: jmp 0x5848a95a
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4ch]
        add eax, 1
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 8A: jmp 0x5848a8e4
        __asm _emit 0xeb
        __asm _emit 0x8a
        ; Exact mapped bytes EB 07: jmp 0x5848a963
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 1
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 21: je 0x5848a98a
        __asm _emit 0x74
        __asm _emit 0x21
        lea ecx, [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 77 0E 00 00: call 0x5848b7f0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + eax + 114h], 6
        ; Exact mapped bytes EB 11: jmp 0x5848a99b
        __asm _emit 0xeb
        __asm _emit 0x11
        lea edx, [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 56 0E 00 00: call 0x5848b7f0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 11: jmp 0x5848a9ae
        __asm _emit 0xeb
        __asm _emit 0x11
        lea ecx, [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 43 0E 00 00: call 0x5848b7f0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 2B 02 00 00: jmp 0x5848abde
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + eax + 114h]
        cmp edx, 6
        ; Exact mapped bytes 0F 85 13 02 00 00: jne 0x5848abde
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax + 110h], 0
        ; Exact mapped bytes 74 17: je 0x5848a9f3
        __asm _emit 0x74
        __asm _emit 0x17
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 110h]
        ; Exact mapped bytes E8 61 6C 04 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x5848aa02
        __asm _emit 0x75
        __asm _emit 0x0f
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + ecx + 114h], 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 0f4h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 E3 12 00 00: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0f8h], eax
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 92 BF FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 A1 14 00 00: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 9A 26 00 00: call 0x5848d0e0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 100h], eax
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 89 14 00 00: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 A2 26 00 00: call 0x5848d100
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 108h], eax
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 110h]
        ; Exact mapped bytes E8 49 BF FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0fch], eax
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 110h]
        ; Exact mapped bytes E8 20 16 00 00: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 104h], eax
        mov ecx, dword ptr [ebp - 0fch]
        sub ecx, dword ptr [ebp - 100h]
        push ecx
        ; Exact mapped bytes E8 68 68 00 00: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a8h], eax
        mov edx, dword ptr [ebp - 104h]
        sub edx, dword ptr [ebp - 108h]
        push edx
        ; Exact mapped bytes E8 4D 68 00 00: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ach], eax
        mov eax, dword ptr [ebp - 0a8h]
        imul eax, dword ptr [ebp - 0a8h]
        mov ecx, dword ptr [ebp - 0ach]
        imul ecx, dword ptr [ebp - 0ach]
        add eax, ecx
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 27 65 3C 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x65
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 8F 67 3A 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x67
        __asm _emit 0x3a
        __asm _emit 0x00
        mov dword ptr [ebp - 10ch], eax
        cmp dword ptr [ebp - 10ch], 0e1h
        ; Exact mapped bytes 7F 34: jg 0x5848ab47
        __asm _emit 0x7f
        __asm _emit 0x34
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 110h]
        ; Exact mapped bytes E8 2A 16 00 00: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9D 0A 00 00: call 0x5848b5d0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + edx + 114h], 7
        ; Exact mapped bytes E9 97 00 00 00: jmp 0x5848abde
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 110h]
        ; Exact mapped bytes E8 C6 11 00 00: call 0x5848bd20
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 384h
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 0b0h], edx
        mov edx, dword ptr [ebp - 0b0h]
        mov eax, dword ptr [edx*4 + 5894c930h]
        mov dword ptr [ebp - 110h], eax
        mov eax, dword ptr [ebp - 0b0h]
        add eax, 708h
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov edx, dword ptr [edx*4 + 589490f0h]
        mov dword ptr [ebp - 114h], edx
        imul eax, dword ptr [ebp - 110h], 70h
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 140h], eax
        imul eax, dword ptr [ebp - 114h], 70h
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 13ch], eax
        lea edx, [ebp - 140h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 13 0C 00 00: call 0x5848b7f0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 55 07 00 00: jmp 0x5848b338
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx + 110h], 0
        ; Exact mapped bytes 0F 85 A6 00 00 00: jne 0x5848ac9e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x5848ac0a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 5
        ; Exact mapped bytes 0F 8D 85 00 00 00: jge 0x5848ac99
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 0cch], 0
        ; Exact mapped bytes 74 70: je 0x5848ac94
        __asm _emit 0x74
        __asm _emit 0x70
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 0cch]
        ; Exact mapped bytes E8 1A 6A 04 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x6a
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 75 57: jne 0x5848ac94
        __asm _emit 0x75
        __asm _emit 0x57
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 18h]
        mov esi, dword ptr [ebp - 4]
        mov ecx, dword ptr [esi + ecx*4 + 0cch]
        mov dword ptr [eax + edx + 110h], ecx
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + edx + 114h], 2
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + ecx + 115h], 0
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + eax + 116h], 0
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + edx + 117h], 0
        ; Exact mapped bytes E9 68 FF FF FF: jmp 0x5848ac01
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 BC 00 00 00: jmp 0x5848ad5a
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 110h]
        ; Exact mapped bytes E8 9F 69 04 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x69
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 A1 00 00 00: jne 0x5848ad5a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5848accb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 5
        ; Exact mapped bytes 0F 8D 85 00 00 00: jge 0x5848ad5a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 0cch], 0
        ; Exact mapped bytes 74 70: je 0x5848ad55
        __asm _emit 0x74
        __asm _emit 0x70
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 0cch]
        ; Exact mapped bytes E8 59 69 04 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x69
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 75 57: jne 0x5848ad55
        __asm _emit 0x75
        __asm _emit 0x57
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 1ch]
        mov esi, dword ptr [ebp - 4]
        mov ecx, dword ptr [esi + ecx*4 + 0cch]
        mov dword ptr [eax + edx + 110h], ecx
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + edx + 114h], 2
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + ecx + 115h], 0
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + eax + 116h], 0
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + edx + 117h], 0
        ; Exact mapped bytes E9 68 FF FF FF: jmp 0x5848acc2
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + ecx + 114h]
        cmp eax, 1
        ; Exact mapped bytes 0F 85 E0 00 00 00: jne 0x5848ae52
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx + 110h], 0
        ; Exact mapped bytes 0F 84 C6 00 00 00: je 0x5848ae4d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0b4h], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 118h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 54 0F 00 00: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 11ch], eax
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 03 BC FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 0B: jmp 0x5848adcd
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 E6 12 00 00: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 35: je 0x5848ae08
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 05 11 00 00: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 2E 13 00 00: call 0x5848c110
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 74 13: je 0x5848adfa
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 F1 10 00 00: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 7A 23 00 00: call 0x5848d170
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x5848ae06
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes EB 02: jmp 0x5848ae08
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB BA: jmp 0x5848adc2
        __asm _emit 0xeb
        __asm _emit 0xba
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 3C: je 0x5848ae4d
        __asm _emit 0x74
        __asm _emit 0x3c
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + eax + 114h], 2
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + edx + 115h], 0
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + ecx + 116h], 0
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + eax + 117h], 0
        ; Exact mapped bytes E9 E6 04 00 00: jmp 0x5848b338
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + edx + 114h]
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 44 03 00 00: jne 0x5848b1ae
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx + 110h], 0
        ; Exact mapped bytes 0F 84 2A 03 00 00: je 0x5848b1a9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 110h]
        ; Exact mapped bytes E8 BE 67 04 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x67
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 0C 03 00 00: jne 0x5848b1a9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0b8h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 120h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 3E 0E 00 00: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0bch], eax
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 ED BA FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 C3 00 00 00: je 0x5848afa3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F8 0F 00 00: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F1 21 00 00: call 0x5848d0e0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E6 0F 00 00: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 FF 21 00 00: call 0x5848d100
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], eax
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 110h]
        ; Exact mapped bytes E8 A9 BA FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 54h]
        sub edx, eax
        push edx
        ; Exact mapped bytes E8 EB 60 3C 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x60
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 110h]
        ; Exact mapped bytes E8 75 11 00 00: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 58h]
        sub edx, eax
        push edx
        ; Exact mapped bytes E8 C7 60 3C 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x60
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov eax, dword ptr [ebp - 54h]
        imul eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [ebp - 58h]
        imul ecx, dword ptr [ebp - 58h]
        add eax, ecx
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 B3 60 3C 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x60
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 1B 63 3A 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x63
        __asm _emit 0x3a
        __asm _emit 0x00
        mov dword ptr [ebp - 124h], eax
        cmp dword ptr [ebp - 124h], 258h
        ; Exact mapped bytes 7D 0C: jge 0x5848af93
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 0b8h], 1
        ; Exact mapped bytes EB 10: jmp 0x5848afa3
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 15 11 00 00: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes E9 33 FF FF FF: jmp 0x5848aed6
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 74 14: je 0x5848afc0
        __asm _emit 0x74
        __asm _emit 0x14
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + edx + 114h], 3
        ; Exact mapped bytes E9 E9 01 00 00: jmp 0x5848b1a9
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + ecx + 117h]
        test eax, eax
        ; Exact mapped bytes 0F 85 43 01 00 00: jne 0x5848b11a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BD 06 00 00: call 0x5848b6a0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes E8 D2 B9 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        imul edx, dword ptr [ecx + 24ch], 0dh
        add eax, edx
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 AB 0C 00 00: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov ecx, 32h
        div ecx
        add edx, 0afh
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + eax + 117h], dl
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes E8 83 10 00 00: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 24ch]
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 6F 0C 00 00: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov ecx, 3
        div ecx
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + eax + 116h], dl
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + edx + 116h]
        test ecx, ecx
        ; Exact mapped bytes 7E 11: jle 0x5848b07c
        __asm _emit 0x7e
        __asm _emit 0x11
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + edx + 116h], 3
        ; Exact mapped bytes EB 0F: jmp 0x5848b08b
        __asm _emit 0xeb
        __asm _emit 0x0f
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + ecx + 116h], 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24ch]
        push ecx
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 11 0C 00 00: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov ecx, 32h
        div ecx
        add edx, 19h
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + eax + 115h], dl
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + edx + 116h]
        cmp ecx, 3
        ; Exact mapped bytes 75 48: jne 0x5848b115
        __asm _emit 0x75
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 E8 B8 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 0B: jmp 0x5848b0e8
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 CB 0F 00 00: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 27: je 0x5848b115
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 EA 0D 00 00: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 53 0F 00 00: call 0x5848c050
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0fah
        ; Exact mapped bytes 7D 0F: jge 0x5848b113
        __asm _emit 0x7d
        __asm _emit 0x0f
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + edx + 115h], 0
        ; Exact mapped bytes EB C8: jmp 0x5848b0dd
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x5848b1a9
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + ecx + 115h]
        test eax, eax
        ; Exact mapped bytes 7E 5D: jle 0x5848b18a
        __asm _emit 0x7e
        __asm _emit 0x5d
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + ecx + 116h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 07 02 00 00: call 0x5848b350
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax + edx + 115h]
        sub cl, 1
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + edx + 115h], cl
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + ecx + 115h]
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x5848b18a
        __asm _emit 0x75
        __asm _emit 0x0f
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + ecx + 116h], 0
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx + eax + 117h]
        sub dl, 1
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + eax + 117h], dl
        ; Exact mapped bytes E9 8A 01 00 00: jmp 0x5848b338
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + edx + 114h]
        cmp ecx, 3
        ; Exact mapped bytes 0F 85 D1 00 00 00: jne 0x5848b297
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 128h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 1F 0B 00 00: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 12ch], eax
        mov dword ptr [ebp - 0c0h], 0
        mov dword ptr [ebp - 148h], 0
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 BA B7 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 0B: jmp 0x5848b216
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 9D 0E 00 00: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 41: je 0x5848b25d
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 BC 0C 00 00: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x5848b25b
        __asm _emit 0x74
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B0 0C 00 00: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 39 1F 00 00: call 0x5848d170
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x5848b251
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 9D 0C 00 00: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 06 0E 00 00: call 0x5848c050
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 118h
        ; Exact mapped bytes 7D 0A: jge 0x5848b25b
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c0h], 1
        ; Exact mapped bytes EB AE: jmp 0x5848b20b
        __asm _emit 0xeb
        __asm _emit 0xae
        cmp dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes 74 11: je 0x5848b277
        __asm _emit 0x74
        __asm _emit 0x11
        push 2
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DC 00 00 00: call 0x5848b350
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1B: jmp 0x5848b292
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9D 01 00 00: call 0x5848b420
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + ecx + 114h], 4
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x5848b338
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + eax + 114h]
        cmp edx, 4
        ; Exact mapped bytes 0F 85 89 00 00 00: jne 0x5848b338
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 130h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 36 0A 00 00: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 134h], eax
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 E5 B6 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x5848b2eb
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 C8 0D 00 00: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], eax
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 47: je 0x5848b338
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 E7 0B 00 00: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 50 0D 00 00: call 0x5848c050
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 118h
        ; Exact mapped bytes 7D 2F: jge 0x5848b336
        __asm _emit 0x7d
        __asm _emit 0x2f
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 110h]
        ; Exact mapped bytes E8 36 0E 00 00: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D9 01 00 00: call 0x5848b500
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + eax + 114h], 7
    }
}
