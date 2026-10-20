// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A5F10 .. +0x193 bytes.
extern "C" __declspec(naked) void FUN_584a5f10_584A5F10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x584a5f2b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 0F 8D 68 01 00 00: jge 0x584a609d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x584a5f47
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 0F 8D 47 01 00 00: jge 0x584a6098
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 E5 64 FE FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F6 70 FE FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 5
        ; Exact mapped bytes 74 25: je 0x584a5f97
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 C4 64 FE FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D5 70 FE FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 6
        ; Exact mapped bytes 0F 85 FC 00 00 00: jne 0x584a6093
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 9F 64 FE FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 38 EA FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xea
        __asm _emit 0xfd
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
        ; Exact mapped bytes 0F 85 C2 00 00 00: jne 0x584a6093
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 65 64 FE FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 56 70 FE FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 A1 00 00 00: je 0x584a6093
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 44 64 FE FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 03 70 FE FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx edx, ax
        xor edx, 55h
        ; Exact mapped bytes 7E 7E: jle 0x584a6093
        __asm _emit 0x7e
        __asm _emit 0x7e
        imul eax, dword ptr [ebp - 0ch], 38h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 54 01 18: movsx edx, word ptr [ecx + eax + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x18
        cmp edx, 1
        ; Exact mapped bytes 74 11: je 0x584a6037
        __asm _emit 0x74
        __asm _emit 0x11
        imul eax, dword ptr [ebp - 0ch], 38h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 54 01 18: movsx edx, word ptr [ecx + eax + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x18
        cmp edx, 2
        ; Exact mapped bytes 75 5C: jne 0x584a6093
        __asm _emit 0x75
        __asm _emit 0x5c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 55 70 FE FF: call 0x5848d0a0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 44: je 0x584a6093
        __asm _emit 0x74
        __asm _emit 0x44
        imul eax, dword ptr [ebp - 0ch], 38h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 4ch]
        test edx, edx
        ; Exact mapped bytes 7F 0E: jg 0x584a606d
        __asm _emit 0x7f
        __asm _emit 0x0e
        imul eax, dword ptr [ebp - 0ch], 38h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax + 48h], 0
        ; Exact mapped bytes 74 26: je 0x584a6093
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 17 70 FE FF: call 0x5848d0a0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1E 00 00 00: call 0x584a60b0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 A6 FE FF FF: jmp 0x584a5f3e
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 85 FE FF FF: jmp 0x584a5f22
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
