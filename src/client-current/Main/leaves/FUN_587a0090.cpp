// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A0090 .. +0x156 bytes.
extern "C" __declspec(naked) void FUN_587a0090() {
    __asm {
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov edi, ecx
        xor ebx, ebx
        cmp dword ptr [edi + 2d4h], ebx
        ; Exact mapped bytes 75 27: jne 0x587a00c9
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes A1 1C 48 A2 58: mov eax, dword ptr [0x58a2481c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 1ch]
        xor ecx, ecx
        mov edx, 14h
        mul edx
        seto cl
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 6E 14 1D 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x14
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [edi + 2d4h], eax
        ; Exact mapped bytes A1 1C 48 A2 58: mov eax, dword ptr [0x58a2481c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, dword ptr [eax + 1ch]
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esp + 18h], esi
        ; Exact mapped bytes E8 20 6B 03 00: call 0x587d6c00
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x6b
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 48h]
        mov eax, dword ptr [edi + 2d4h]
        lea edx, [esi + esi*4]
        add edx, edx
        add edx, edx
        push edx
        push ebx
        push eax
        mov dword ptr [esp + 20h], ecx
        ; Exact mapped bytes E8 4C CB 1D 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xcb
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [esp + 10h], ebx
        cmp esi, ebx
        ; Exact mapped bytes 0F 86 D0 00 00 00: jbe 0x587a01db
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        push ebp
        mov edi, edi
        ; Exact mapped bytes 66 8B 4C 24 14: mov cx, word ptr [esp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        mov dword ptr [esp + 10h], 0
        ; Exact mapped bytes 66 89 4C 24 12: mov word ptr [esp + 0x12], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x12
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov byte ptr [esp + 10h], 1
        mov ebp, dword ptr [esp + 10h]
        push ebp
        ; Exact mapped bytes E8 E9 89 FD FF: call 0x58778b20
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 69: je 0x587a01a4
        __asm _emit 0x74
        __asm _emit 0x69
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        mov ecx, 3e0h
        ; Exact mapped bytes 66 23 D1: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd1
        ; Exact mapped bytes 66 83 FA 40: cmp dx, 0x40
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x40
        ; Exact mapped bytes 75 57: jne 0x587a01a4
        __asm _emit 0x75
        __asm _emit 0x57
        movzx edx, byte ptr [eax + 35ch]
        cmp edx, dword ptr [esp + 24h]
        ; Exact mapped bytes 75 4A: jne 0x587a01a4
        __asm _emit 0x75
        __asm _emit 0x4a
        mov ecx, dword ptr [esp + 18h]
        cmp ecx, dword ptr [eax + 384h]
        ; Exact mapped bytes 72 3E: jb 0x587a01a4
        __asm _emit 0x72
        __asm _emit 0x3e
        mov edx, dword ptr [edi + 2d4h]
        mov dword ptr [esi + edx], ebp
        mov edx, dword ptr [eax + 60h]
        mov ecx, dword ptr [edi + 2d4h]
        mov dword ptr [esi + ecx + 8], edx
        mov eax, dword ptr [edi + 2d4h]
        mov dword ptr [esi + eax + 4], 270fh
        mov ecx, dword ptr [edi + 2d4h]
        xor eax, eax
        mov dword ptr [esi + ecx + 10h], eax
        mov edx, dword ptr [edi + 2d4h]
        mov dword ptr [esi + edx + 0ch], eax
        inc ebx
        add esi, 14h
        mov eax, dword ptr [esp + 14h]
        inc eax
        mov dword ptr [esp + 14h], eax
        cmp eax, dword ptr [esp + 1ch]
        ; Exact mapped bytes 0F 82 59 FF FF FF: jb 0x587a0110
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebp
        test ebx, ebx
        ; Exact mapped bytes 76 1F: jbe 0x587a01db
        __asm _emit 0x76
        __asm _emit 0x1f
        mov eax, dword ptr [edi + 2d4h]
        push eax
        push ebx
        push 1
        mov ecx, edi
        ; Exact mapped bytes E8 C3 DB FF FF: call 0x5879dd90
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
