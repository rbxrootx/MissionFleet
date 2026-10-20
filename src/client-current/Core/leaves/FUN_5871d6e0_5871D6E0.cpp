// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5871D6E0 .. +0x2BD bytes.
extern "C" __declspec(naked) void FUN_5871d6e0_5871D6E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0f0h]
        ; Exact mapped bytes E8 EF BF E0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xbf
        __asm _emit 0xe0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 32: jne 0x5871d737
        __asm _emit 0x75
        __asm _emit 0x32
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 148h]
        ; Exact mapped bytes E8 7D 81 D7 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x81
        __asm _emit 0xd7
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 17: jne 0x5871d732
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 148h]
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 AF 87 D6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x87
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 61 02 00 00: jmp 0x5871d998
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f0h]
        ; Exact mapped bytes E8 22 35 0A 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x35
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f0h]
        ; Exact mapped bytes E8 59 34 0A 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x34
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 0F 8F BF 00 00 00: jg 0x5871d82e
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f0h]
        ; Exact mapped bytes E8 EA 34 0A 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x34
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, eax
        add esi, 8
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f0h]
        ; Exact mapped bytes E8 1E 34 0A 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x34
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 0F 8E 84 00 00 00: jle 0x5871d82e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 148h]
        mov dword ptr [ebp - 14h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0f0h]
        ; Exact mapped bytes E8 F3 33 0A 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x33
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, eax
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0f0h]
        ; Exact mapped bytes E8 8A 34 0A 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x34
        __asm _emit 0x0a
        __asm _emit 0x00
        sub esi, eax
        imul eax, esi, 0dh
        add eax, 0e8h
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 31 7F 09 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x7f
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 148h]
        ; Exact mapped bytes E8 82 80 D7 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0xd7
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 17: jne 0x5871d82c
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 148h]
        mov dword ptr [ebp - 18h], edx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 B5 86 D6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x86
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x5871d85b
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 148h]
        ; Exact mapped bytes E8 54 80 D7 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x80
        __asm _emit 0xd7
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 17: jne 0x5871d85b
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 148h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 86 86 D6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x86
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5871d86d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 0F 8D 21 01 00 00: jge 0x5871d998
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0f0h]
        mov dword ptr [ebp - 24h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0f0h]
        ; Exact mapped bytes E8 CD 33 0A 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x33
        __asm _emit 0x0a
        __asm _emit 0x00
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 AB 32 0A 00: call 0x587c0b60
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x32
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 BA 00 00 00: jne 0x5871d978
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f0h]
        ; Exact mapped bytes E8 9B 33 0A 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x33
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, eax
        add esi, dword ptr [ebp - 8]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f0h]
        ; Exact mapped bytes E8 FF BD E0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xbd
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 7D 66: jge 0x5871d95b
        __asm _emit 0x7d
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 11ch]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 188h]
        mov dword ptr [ebp - 28h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0f0h]
        ; Exact mapped bytes E8 48 33 0A 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x33
        __asm _emit 0x0a
        __asm _emit 0x00
        add eax, dword ptr [ebp - 8]
        shl eax, 2
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 28h]
        add eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 32 5A DA FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x5a
        __asm _emit 0xda
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 E8 1E D8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1B: jmp 0x5871d976
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 11ch]
        mov dword ptr [ebp - 38h], eax
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 CB 1E D8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x1e
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1B: jmp 0x5871d993
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 11ch]
        mov dword ptr [ebp - 3ch], eax
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 AE 1E D8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x1e
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 CC FE FF FF: jmp 0x5871d864
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
