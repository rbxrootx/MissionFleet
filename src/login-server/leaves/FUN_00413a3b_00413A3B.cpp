// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00413A3B .. +0x12E bytes.
extern "C" __declspec(naked) void FUN_00413a3b_00413A3B() {
    __asm {
        mov eax, 43a69ah
        ; Exact mapped bytes E8 C3 BB 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0ch
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ebx, [esi + 30h]
        push ebx
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 17 8B 01 00: call 0x42c570
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes 66 83 FF 02: cmp di, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x02
        ; Exact mapped bytes 74 EF: je 0x413a50
        __asm _emit 0x74
        __asm _emit 0xef
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 48: call dword ptr [eax + 0x48]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x48
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x413a77
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [esi]
        push 0
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        ; Exact mapped bytes 66 8B 03: mov ax, word ptr [ebx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x03
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x413b5a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF F8: movsx edi, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xf8
        mov eax, edi
        shl eax, 4
        add eax, 4
        push eax
        ; Exact mapped bytes E8 58 9E 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov dword ptr [ebp - 18h], eax
        and dword ptr [ebp - 4], 0
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x413abc
        __asm _emit 0x74
        __asm _emit 0x1c
        push 412b77h
        push 413b69h
        lea ebx, [eax + 4]
        push edi
        push 10h
        push ebx
        mov dword ptr [eax], edi
        ; Exact mapped bytes E8 2A BE 00 00: call 0x41f8e2
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ebx
        ; Exact mapped bytes EB 02: jmp 0x413abe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        or dword ptr [ebp - 4], 0ffffffffh
        push 1
        pop edi
        mov dword ptr [esi + 38h], eax
        ; Exact mapped bytes 66 39 7E 30: cmp word ptr [esi + 0x30], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x7e
        __asm _emit 0x30
        mov dword ptr [ebp - 14h], edi
        ; Exact mapped bytes 0F 8C 85 00 00 00: jl 0x413b5a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 38h]
        push 101h
        shl edi, 4
        lea ecx, [eax + edi - 10h]
        ; Exact mapped bytes E8 8C A4 01 00: call 0x42df75
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [esi + 38h]
        add eax, edi
        lea ecx, [eax - 2]
        push ecx
        lea ecx, [eax - 4]
        push ecx
        lea ecx, [eax - 8]
        add eax, -0ch
        push ecx
        push eax
        lea eax, [ebp - 0eh]
        push eax
        push 100h
        push dword ptr [ebp - 18h]
        push dword ptr [ebp - 14h]
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 B8 8A 01 00: call 0x42c5d0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        mov ebx, eax
        ; Exact mapped bytes 66 83 FB 02: cmp bx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x02
        ; Exact mapped bytes 74 CC: je 0x413aec
        __asm _emit 0x74
        __asm _emit 0xcc
        ; Exact mapped bytes 0F BF 45 F2: movsx eax, word ptr [ebp - 0xe]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xf2
        push eax
        mov eax, dword ptr [esi + 38h]
        lea ecx, [eax + edi - 10h]
        ; Exact mapped bytes E8 93 A4 01 00: call 0x42dfc4
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        push ebx
        mov ecx, esi
        ; Exact mapped bytes FF 50 48: call dword ptr [eax + 0x48]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x48
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x413b47
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [esi]
        push 0
        push ebx
        mov ecx, esi
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        inc dword ptr [ebp - 14h]
        movzx edi, word ptr [ebp - 14h]
        ; Exact mapped bytes 0F BF 46 30: movsx eax, word ptr [esi + 0x30]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x46
        __asm _emit 0x30
        cmp edi, eax
        ; Exact mapped bytes 0F 8E 7B FF FF FF: jle 0x413ad5
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ret
    }
}
