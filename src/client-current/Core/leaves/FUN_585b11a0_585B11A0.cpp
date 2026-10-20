// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B11A0 .. +0x15E bytes.
extern "C" __declspec(naked) void FUN_585b11a0_585B11A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        movzx eax, word ptr [ebp + 8]
        cmp eax, 4
        ; Exact mapped bytes 75 23: jne 0x585b11d5
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0dc8h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        movzx ecx, word ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 61 1D 06 00: call 0x58612f30
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x1d
        __asm _emit 0x06
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 23 01 00 00: jmp 0x585b12f8
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0da8h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 0da8h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        movzx ecx, word ptr [ebp + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 74 50: je 0x585b1247
        __asm _emit 0x74
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 71 5F F2 FF: call 0x584d7170
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x5f
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp + 10h]
        push eax
        movzx ecx, word ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 90 53 FF FF: call 0x585a65b0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 48 5F F2 FF: call 0x584d7170
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x5f
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp + 10h]
        push edx
        movzx eax, word ptr [ebp + 0ch]
        push eax
        movzx ecx, word ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CF 86 F9 FF: call 0x58549910
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x86
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B1 00 00 00: jmp 0x585b12f8
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8F 4B ED FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x4b
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0dbch]
        ; Exact mapped bytes E8 00 80 F0 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0xf0
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 74 16: je 0x585b127e
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0dbch]
        ; Exact mapped bytes E8 EA 7F F0 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x7f
        __asm _emit 0xf0
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 0B: jne 0x585b1289
        __asm _emit 0x75
        __asm _emit 0x0b
        push 0fh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 78 BD FF FF: call 0x585ad000
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        movzx eax, word ptr [ebp + 8]
        cmp eax, 1
        ; Exact mapped bytes 75 4D: jne 0x585b12df
        __asm _emit 0x75
        __asm _emit 0x4d
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D3 5E F2 FF: call 0x584d7170
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x5e
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FC F2 FF FF: call 0x585b05a0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 1B: jne 0x585b12c4
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes E8 42 5F F2 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x5f
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 0
        push 0
        push 0
        push 13h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 AF 7A F2 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x7a
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 19: jmp 0x585b12dd
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes E8 27 5F F2 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x5f
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 0
        push 0
        push 0
        push 0bh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 94 7A F2 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x7a
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 19: jmp 0x585b12f8
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes E8 0C 5F F2 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x5f
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        push 0
        push 0
        push 0
        push 0bh
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 79 7A F2 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x7a
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
