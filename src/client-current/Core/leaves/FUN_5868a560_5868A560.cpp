// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5868A560 .. +0x4C2 bytes.
extern "C" __declspec(naked) void FUN_5868a560_5868A560() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a0h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 0F 85 7B 01 00 00: jne 0x5868a6f1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6F 66 EC FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x66
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 92 6E EC FF: call 0x58551420
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x6e
        __asm _emit 0xec
        __asm _emit 0xff
        push 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 C8 F5 FF: call 0x585e6df0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xc8
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0b8h]
        mov dword ptr [ebp - 0ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 26 B9 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xb9
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0b8h]
        mov dword ptr [ebp - 10h], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 07 B9 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xb9
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0c8h]
        mov dword ptr [ebp - 14h], ecx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E8 B8 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0c8h]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C9 B8 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xb8
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0c0h]
        mov dword ptr [ebp - 1ch], edx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 AA B8 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xb8
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0c0h]
        mov dword ptr [ebp - 20h], edx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 8B B8 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xb8
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0d0h]
        mov dword ptr [ebp - 24h], eax
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 6C B8 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xb8
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0d0h]
        mov dword ptr [ebp - 28h], eax
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 4D B8 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xb8
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e8h]
        mov dword ptr [ebp - 2ch], edx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 37 B8 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xb8
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f0h]
        mov dword ptr [ebp - 30h], ecx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 21 B8 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xb8
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ech]
        mov dword ptr [ebp - 34h], eax
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 0B B8 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xb8
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        mov dword ptr [ebp - 38h], edx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 F5 B7 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xb7
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 2B 03 00 00: jmp 0x5868aa1c
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 0F 85 7B 01 00 00: jne 0x5868a876
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EA 64 EC FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x64
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push 2
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 0D 6D EC FF: call 0x58551420
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x6d
        __asm _emit 0xec
        __asm _emit 0xff
        push 2
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D0 C6 F5 FF: call 0x585e6df0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xc6
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0b8h]
        mov dword ptr [ebp - 40h], eax
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 A1 B7 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xb7
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0b8h]
        mov dword ptr [ebp - 44h], eax
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 82 B7 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xb7
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0c8h]
        mov dword ptr [ebp - 48h], ecx
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 63 B7 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xb7
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0c8h]
        mov dword ptr [ebp - 4ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 44 B7 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xb7
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0c0h]
        mov dword ptr [ebp - 50h], edx
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 25 B7 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xb7
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0c0h]
        mov dword ptr [ebp - 54h], edx
        push 1
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 06 B7 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xb7
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0d0h]
        mov dword ptr [ebp - 58h], eax
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 E7 B6 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xb6
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0d0h]
        mov dword ptr [ebp - 5ch], eax
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 C8 B6 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xb6
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e8h]
        mov dword ptr [ebp - 60h], edx
        push 0
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 B2 B6 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xb6
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f0h]
        mov dword ptr [ebp - 64h], ecx
        push 1
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 9C B6 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xb6
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ech]
        mov dword ptr [ebp - 68h], eax
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 86 B6 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xb6
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        mov dword ptr [ebp - 6ch], edx
        push 0
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 70 B6 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xb6
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 A6 01 00 00: jmp 0x5868aa1c
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6F 63 EC FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x63
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        push 3
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 92 6B EC FF: call 0x58551420
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x6b
        __asm _emit 0xec
        __asm _emit 0xff
        push 3
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 C5 F5 FF: call 0x585e6df0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xc5
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0b8h]
        mov dword ptr [ebp - 74h], eax
        push 1
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 26 B6 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xb6
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0b8h]
        mov dword ptr [ebp - 78h], eax
        push 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 07 B6 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xb6
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0c8h]
        mov dword ptr [ebp - 7ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 E8 B5 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0c8h]
        mov dword ptr [ebp - 80h], ecx
        push 1
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 C9 B5 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xb5
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0c0h]
        mov dword ptr [ebp - 84h], edx
        push 0
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 A4 B5 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xb5
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0c0h]
        mov dword ptr [ebp - 88h], edx
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 7F B5 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xb5
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0d0h]
        mov dword ptr [ebp - 8ch], eax
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 5A B5 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xb5
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0d0h]
        mov dword ptr [ebp - 90h], eax
        push 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 35 B5 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xb5
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e8h]
        mov dword ptr [ebp - 94h], edx
        push 1
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 19 B5 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xb5
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f0h]
        mov dword ptr [ebp - 98h], ecx
        push 1
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 FD B4 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xb4
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ech]
        mov dword ptr [ebp - 9ch], eax
        push 0
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 E1 B4 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xb4
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        mov dword ptr [ebp - 0a0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 C5 B4 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xb4
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
