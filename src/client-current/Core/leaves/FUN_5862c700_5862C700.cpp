// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862C700 .. +0x3F5 bytes.
extern "C" __declspec(naked) void FUN_5862c700_5862C700() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 8C 02 00 00: jne 0x5862c99f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 178h]
        ; Exact mapped bytes 75 46: jne 0x5862c767
        __asm _emit 0x75
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 178h]
        mov dword ptr [edx + 278h], ecx
        ; Exact mapped bytes E8 B8 AA EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xaa
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 174h]
        ; Exact mapped bytes E8 D7 04 00 00: call 0x5862cc20
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 0
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 13eh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 5F 50 EB FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x50
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 33 02 00 00: jmp 0x5862c99a
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 17ch]
        ; Exact mapped bytes 75 46: jne 0x5862c7bb
        __asm _emit 0x75
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 17ch]
        mov dword ptr [eax + 278h], edx
        ; Exact mapped bytes E8 64 AA EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xaa
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 174h]
        ; Exact mapped bytes E8 83 04 00 00: call 0x5862cc20
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        push 13fh
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 0B 50 EB FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x50
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 DF 01 00 00: jmp 0x5862c99a
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 180h]
        ; Exact mapped bytes 75 0E: jne 0x5862c7d7
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BF 05 00 00: call 0x5862cd90
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 C3 01 00 00: jmp 0x5862c99a
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 184h]
        ; Exact mapped bytes 75 0E: jne 0x5862c7f3
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 63 05 00 00: call 0x5862cd50
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 A7 01 00 00: jmp 0x5862c99a
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5862c805
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 0F 8D 8B 01 00 00: jge 0x5862c99a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx*4 + 1c4h]
        ; Exact mapped bytes 75 53: jne 0x5862c874
        __asm _emit 0x75
        __asm _emit 0x53
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + edx*4 + 1c4h]
        mov dword ptr [ecx + 278h], edx
        ; Exact mapped bytes E8 B4 A9 EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xa9
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 194h]
        ; Exact mapped bytes E8 8F D9 E7 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xd9
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        push 0
        push 0
        mov edx, dword ptr [ebp - 20h]
        push edx
        push 13ah
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 57 4F EB FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x4f
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 2B 01 00 00: jmp 0x5862c99a
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 21 01 00 00: jmp 0x5862c995
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + eax*4 + 1d0h]
        ; Exact mapped bytes 75 53: jne 0x5862c8d9
        __asm _emit 0x75
        __asm _emit 0x53
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 1d0h]
        mov dword ptr [eax + 278h], ecx
        ; Exact mapped bytes E8 4F A9 EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xa9
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1ach]
        ; Exact mapped bytes E8 2A D9 E7 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xd9
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        push 13bh
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 F2 4E EB FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x4e
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C6 00 00 00: jmp 0x5862c99a
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 BC 00 00 00: jmp 0x5862c995
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx*4 + 1dch]
        ; Exact mapped bytes 75 4D: jne 0x5862c938
        __asm _emit 0x75
        __asm _emit 0x4d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + eax*4 + 1dch]
        mov dword ptr [edx + 278h], eax
        ; Exact mapped bytes E8 EA A8 EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xa8
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 194h]
        ; Exact mapped bytes E8 C5 D8 E7 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xd8
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        push 0
        push 0
        mov eax, dword ptr [ebp - 30h]
        push eax
        push 13ch
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 8D 4E EB FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x4e
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 64: jmp 0x5862c99a
        __asm _emit 0xeb
        __asm _emit 0x64
        ; Exact mapped bytes EB 5D: jmp 0x5862c995
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx*4 + 1e8h]
        ; Exact mapped bytes 75 4B: jne 0x5862c995
        __asm _emit 0x75
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + edx*4 + 1e8h]
        mov dword ptr [ecx + 278h], edx
        ; Exact mapped bytes E8 8B A8 EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 1ach]
        ; Exact mapped bytes E8 66 D8 E7 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xd8
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        push 0
        push 0
        mov edx, dword ptr [ebp - 38h]
        push edx
        push 13dh
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 2E 4E EB FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x4e
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 05: jmp 0x5862c99a
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 62 FE FF FF: jmp 0x5862c7fc
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 5C 01 00 00: jmp 0x5862cafb
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0f230h
        ; Exact mapped bytes 0F 85 4F 01 00 00: jne 0x5862cafb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 A6 EA FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xa6
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 0F 85 3B 01 00 00: jne 0x5862cafb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 278h]
        cmp edx, dword ptr [ecx + 178h]
        ; Exact mapped bytes 75 29: jne 0x5862c9fd
        __asm _emit 0x75
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 174h]
        ; Exact mapped bytes E8 6E 97 F1 FF: call 0x58546150
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x97
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        push 0
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 96 16 F5 FF: call 0x5857e090
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x16
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3B: jmp 0x5862ca38
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 278h]
        cmp edx, dword ptr [ecx + 17ch]
        ; Exact mapped bytes 75 27: jne 0x5862ca38
        __asm _emit 0x75
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 174h]
        ; Exact mapped bytes E8 31 97 F1 FF: call 0x58546150
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x97
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        push 1
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 59 16 F5 FF: call 0x5857e090
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x16
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5862ca4a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes 0F 8D A7 00 00 00: jge 0x5862cafb
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 278h]
        cmp ecx, dword ptr [eax + edx*4 + 1c4h]
        ; Exact mapped bytes 74 18: je 0x5862ca84
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [edx + 278h]
        cmp edx, dword ptr [ecx + eax*4 + 1dch]
        ; Exact mapped bytes 75 22: jne 0x5862caa6
        __asm _emit 0x75
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 208h]
        push eax
        push 0
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7D 16 F5 FF: call 0x5857e120
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x16
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 50: jmp 0x5862caf6
        __asm _emit 0xeb
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 278h]
        cmp ecx, dword ptr [eax + edx*4 + 1d0h]
        ; Exact mapped bytes 74 18: je 0x5862cad6
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [edx + 278h]
        cmp edx, dword ptr [ecx + eax*4 + 1e8h]
        ; Exact mapped bytes 75 20: jne 0x5862caf6
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 208h]
        push eax
        push 1
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2B 16 F5 FF: call 0x5857e120
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x16
        __asm _emit 0xf5
        __asm _emit 0xff
    }
}
