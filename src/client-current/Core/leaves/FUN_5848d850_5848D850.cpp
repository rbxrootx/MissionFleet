// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5848D850 .. +0x1DC bytes.
extern "C" __declspec(naked) void FUN_5848d850_5848D850() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5848d86b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 0F 8D B3 01 00 00: jge 0x5848da28
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5848d887
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 0F 8D 92 01 00 00: jge 0x5848da23
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes E8 A4 EB FF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B5 F7 FF FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 5
        ; Exact mapped bytes 74 26: je 0x5848d8d9
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes E8 82 EB FF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 93 F7 FF FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 6
        ; Exact mapped bytes 0F 85 45 01 00 00: jne 0x5848da1e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes E8 5C EB FF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F5 70 FF FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 80000000h
        mov ecx, dword ptr [ebp - 8]
        shr edx, cl
        and edx, dword ptr [eax + 268h]
        mov ecx, 1fh
        sub ecx, dword ptr [ebp - 8]
        shr edx, cl
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F 85 0A 01 00 00: jne 0x5848da1e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes E8 21 EB FF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 12 F7 FF FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 E8 00 00 00: je 0x5848da1e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 FF EA FF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 BE F6 FF FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, ax
        xor edx, 55h
        ; Exact mapped bytes 0F 8E C0 00 00 00: jle 0x5848da1e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 0ch], 38h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 54 01 5C: movsx edx, word ptr [ecx + eax + 0x5c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x5c
        cmp edx, 1
        ; Exact mapped bytes 74 11: je 0x5848d980
        __asm _emit 0x74
        __asm _emit 0x11
        imul eax, dword ptr [ebp - 0ch], 38h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 54 01 5C: movsx edx, word ptr [ecx + eax + 0x5c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x5c
        cmp edx, 2
        ; Exact mapped bytes 75 66: jne 0x5848d9e6
        __asm _emit 0x75
        __asm _emit 0x66
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 0B F7 FF FF: call 0x5848d0a0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x5848d9e4
        __asm _emit 0x74
        __asm _emit 0x4b
        imul eax, dword ptr [ebp - 0ch], 38h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 90h]
        test edx, edx
        ; Exact mapped bytes 7F 11: jg 0x5848d9bd
        __asm _emit 0x7f
        __asm _emit 0x11
        imul eax, dword ptr [ebp - 0ch], 38h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax + 8ch], 0
        ; Exact mapped bytes 74 27: je 0x5848d9e4
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 C6 F6 FF FF: call 0x5848d0a0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4D 00 00 00: call 0x5848da30
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 38: jmp 0x5848da1e
        __asm _emit 0xeb
        __asm _emit 0x38
        imul ecx, dword ptr [ebp - 0ch], 38h
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 44 0A 5C: movsx eax, word ptr [edx + ecx + 0x5c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x5c
        cmp eax, 3
        ; Exact mapped bytes 75 27: jne 0x5848da1e
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 AC F6 FF FF: call 0x5848d0c0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 53 07 00 00: call 0x5848e170
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 5B FE FF FF: jmp 0x5848d87e
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 3A FE FF FF: jmp 0x5848d862
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
