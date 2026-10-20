// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58715AB0 .. +0x234 bytes.
extern "C" __declspec(naked) void FUN_58715ab0_58715AB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 28h], ecx
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 500h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 0e4h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 120h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 124h], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C6 63 D7 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x63
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x58715b2f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 7
        ; Exact mapped bytes 7D 0D: jge 0x58715b42
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp + ecx*4 - 20h], 0
        ; Exact mapped bytes EB E4: jmp 0x58715b26
        __asm _emit 0xeb
        __asm _emit 0xe4
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x58715b54
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 65 D7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x65
        __asm _emit 0xd7
        __asm _emit 0xff
        cmp dword ptr [ebp - 24h], eax
        ; Exact mapped bytes 0F 8D A1 00 00 00: jge 0x58715c09
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 24h], 80h
        ; Exact mapped bytes 0F 8D 94 00 00 00: jge 0x58715c09
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 33 74 D7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x74
        __asm _emit 0xd7
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 77: jne 0x58715bf9
        __asm _emit 0x75
        __asm _emit 0x77
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 B6 68 D7 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CF EE D6 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xee
        __asm _emit 0xd6
        __asm _emit 0xff
        cmp dword ptr [eax + 0a4h], 0
        ; Exact mapped bytes 75 5F: jne 0x58715bf9
        __asm _emit 0x75
        __asm _emit 0x5f
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B 0E D7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x0e
        __asm _emit 0xd7
        __asm _emit 0xff
        cmp dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes 75 0F: jne 0x58715bb9
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B 17 DC FF: call 0x584d72d0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x17
        __asm _emit 0xdc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 40: jne 0x58715bf9
        __asm _emit 0x75
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 7F 68 D7 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x68
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 18 EE D6 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xee
        __asm _emit 0xd6
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 C4 FB FF FF: call 0x587157a0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [ebp + edx*4 - 20h]
        add eax, 1
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp + ecx*4 - 20h], eax
        mov edx, dword ptr [ebp - 30h]
        add edx, 1
        mov dword ptr [ebp - 30h], edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 2F 65 D7 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x65
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes E9 42 FF FF FF: jmp 0x58715b4b
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + ecx + 74h]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 69 55 0A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x55
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + edx + 74h]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 4B 55 0A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x55
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x58715c58
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 7
        ; Exact mapped bytes 7D 76: jge 0x58715cd4
        __asm _emit 0x7d
        __asm _emit 0x76
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 28h]
        lea eax, [edx + ecx*8 + 7ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp + ecx*4 - 20h]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 0A 55 0A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x55
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 28h]
        lea edx, [ecx + eax*8 + 7ch]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp + edx*4 - 20h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 E2 54 0A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x54
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + ecx*4 + 0b4h]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp + ecx*4 - 20h]
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 C2 54 0A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x54
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 7B FF FF FF: jmp 0x58715c4f
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 72 B3 11 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xb3
        __asm _emit 0x11
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
