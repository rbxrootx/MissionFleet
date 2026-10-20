// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5881E4A0 .. +0x1CD bytes.
extern "C" __declspec(naked) void FUN_5881e4a0() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0d8h]
        push edi
        lea edi, [esi + 4]
        push edi
        ; Exact mapped bytes E8 3D 9D 02 00: call 0x588481f0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        movzx eax, ax
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 A9 01 00 00: je 0x5881e668
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 74 0A: je 0x5881e4cf
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 99 01 00 00: jne 0x5881e668
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d8h]
        push ebx
        movzx ebx, word ptr [eax + 0c4h]
        mov eax, dword ptr [edi]
        cmp eax, 0e7h
        ; Exact mapped bytes 7D 47: jge 0x5881e52d
        __asm _emit 0x7d
        __asm _emit 0x47
        ; Exact mapped bytes 66 83 FB 02: cmp bx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x02
        ; Exact mapped bytes 75 1D: jne 0x5881e509
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0d8h]
        push 0
        ; Exact mapped bytes E8 DE B3 02 00: call 0x588498e0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [edi]
        add edx, 32h
        ; Exact mapped bytes EB 75: jmp 0x5881e57e
        __asm _emit 0xeb
        __asm _emit 0x75
        ; Exact mapped bytes 66 83 FB 03: cmp bx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x03
        ; Exact mapped bytes 75 7B: jne 0x5881e58a
        __asm _emit 0x75
        __asm _emit 0x7b
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 08 31 F1 FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x31
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0d8h]
        push 1
        ; Exact mapped bytes E8 BB B3 02 00: call 0x588498e0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        add eax, 32h
        push eax
        ; Exact mapped bytes EB 52: jmp 0x5881e57f
        __asm _emit 0xeb
        __asm _emit 0x52
        cmp eax, 2fbh
        ; Exact mapped bytes 7E 56: jle 0x5881e58a
        __asm _emit 0x7e
        __asm _emit 0x56
        ; Exact mapped bytes 66 85 DB: test bx, bx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 75 21: jne 0x5881e55a
        __asm _emit 0x75
        __asm _emit 0x21
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 DE 30 F1 FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x30
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0d8h]
        push 2
        ; Exact mapped bytes E8 91 B3 02 00: call 0x588498e0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        sub ecx, 0beh
        push ecx
        ; Exact mapped bytes EB 25: jmp 0x5881e57f
        __asm _emit 0xeb
        __asm _emit 0x25
        ; Exact mapped bytes 66 83 FB 01: cmp bx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x01
        ; Exact mapped bytes 75 2A: jne 0x5881e58a
        __asm _emit 0x75
        __asm _emit 0x2a
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 B7 30 F1 FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x30
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0d8h]
        push 3
        ; Exact mapped bytes E8 6A B3 02 00: call 0x588498e0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [edi]
        sub edx, 0beh
        push edx
        mov ecx, dword ptr [esi + 0d8h]
        ; Exact mapped bytes E8 D6 A4 02 00: call 0x58848a60
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        cmp eax, 0a0h
        ; Exact mapped bytes 7D 66: jge 0x5881e5fa
        __asm _emit 0x7d
        __asm _emit 0x66
        ; Exact mapped bytes 66 83 FB 03: cmp bx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x03
        ; Exact mapped bytes 75 2B: jne 0x5881e5c5
        __asm _emit 0x75
        __asm _emit 0x2b
        mov eax, 0fffdh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0d8h]
        push 2
        ; Exact mapped bytes E8 30 B3 02 00: call 0x588498e0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        push ecx
        mov ecx, dword ptr [esi + 0d8h]
        ; Exact mapped bytes E8 D1 A4 02 00: call 0x58848a90
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        pop ebx
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 FB 01: cmp bx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 98 00 00 00: jne 0x5881e667
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 48 30 F1 FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x30
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0d8h]
        push 0
        ; Exact mapped bytes E8 FB B2 02 00: call 0x588498e0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 0d8h]
        push edx
        ; Exact mapped bytes E8 9C A4 02 00: call 0x58848a90
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        pop ebx
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 242h
        ; Exact mapped bytes 7E 66: jle 0x5881e667
        __asm _emit 0x7e
        __asm _emit 0x66
        ; Exact mapped bytes 66 83 FB 02: cmp bx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x02
        ; Exact mapped bytes 75 30: jne 0x5881e637
        __asm _emit 0x75
        __asm _emit 0x30
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 10 30 F1 FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x30
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0d8h]
        push 3
        ; Exact mapped bytes E8 C3 B2 02 00: call 0x588498e0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 0d8h]
        sub eax, 0a0h
        push eax
        ; Exact mapped bytes E8 5F A4 02 00: call 0x58848a90
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        pop ebx
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 DB: test bx, bx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 75 2B: jne 0x5881e667
        __asm _emit 0x75
        __asm _emit 0x2b
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 DB 2F F1 FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x2f
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0d8h]
        push 1
        ; Exact mapped bytes E8 8E B2 02 00: call 0x588498e0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        sub ecx, 0a0h
        push ecx
        mov ecx, dword ptr [esi + 0d8h]
        ; Exact mapped bytes E8 29 A4 02 00: call 0x58848a90
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        pop ebx
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
