// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F94E0 .. +0x236 bytes.
extern "C" __declspec(naked) void FUN_100f94e0_100F94E0() {
    __asm {
        sub esp, 120h
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 134h]
        test esi, esi
        mov ebx, ecx
        ; Exact mapped bytes 0F 84 3D 01 00 00: je 0x100f9637
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 138h]
        mov ecx, dword ptr [ebx + 118h]
        push edi
        push ebp
        ; Exact mapped bytes E8 42 B2 00 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi]
        mov ecx, dword ptr [ebx + 118h]
        and eax, 0fh
        push ebp
        push eax
        ; Exact mapped bytes E8 C0 A8 00 00: call 0x10103de0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 78h]
        lea edx, [esp + 10h]
        push ecx
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        lea edi, [esp + 18h]
        or ecx, 0ffffffffh
        xor eax, eax
        add esp, 8
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        dec ecx
        cmp ecx, 14h
        ; Exact mapped bytes 76 37: jbe 0x100f957c
        __asm _emit 0x76
        __asm _emit 0x37
        mov edi, 1017f3c8h
        or ecx, 0ffffffffh
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        sub edi, ecx
        lea edx, [esp + 10h]
        mov esi, edi
        mov edi, edx
        mov edx, ecx
        or ecx, 0ffffffffh
        mov byte ptr [esp + 24h], al
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        mov ecx, edx
        dec edi
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov esi, dword ptr [esp + 138h]
        mov ecx, dword ptr [esi + 28h]
        lea eax, [esp + 10h]
        push eax
        push ecx
        lea edx, [esp + 38h]
        push 101ac9a8h
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [ebx + 118h]
        add esp, 10h
        lea eax, [esp + 30h]
        push 0ff000000h
        push ebp
        push eax
        ; Exact mapped bytes E8 82 AA 00 00: call 0x10104030
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 134h]
        push ecx
        mov ecx, ebx
        ; Exact mapped bytes E8 E3 05 00 00: call 0x100f9ba0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 118h]
        ; Exact mapped bytes E8 78 A8 00 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, eax
        pop edi
        ; Exact mapped bytes 0F 8C 2C 01 00 00: jl 0x100f96fd
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 118h]
        ; Exact mapped bytes E8 64 A8 00 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 8
        cmp ebp, eax
        ; Exact mapped bytes 0F 8D 16 01 00 00: jge 0x100f96fd
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + ebp*4 + 130h]
        mov ecx, 0fh
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 15 F0 56 1C 10: mov edx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 0d0ch]
        mov edx, dword ptr [eax + 0b4ch]
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        mov edx, ebp
        shr eax, 0ah
        and eax, 1fh
        sub edx, eax
        mov eax, dword ptr [ebx + ebp*4 + 1b0h]
        cmp edx, 1
        ; Exact mapped bytes 7E 09: jle 0x100f962c
        __asm _emit 0x7e
        __asm _emit 0x09
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E9 D1 00 00 00: jmp 0x100f96fd
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes E9 C6 00 00 00: jmp 0x100f96fd
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 138h]
        mov ecx, dword ptr [ebx + 118h]
        push 0ff000000h
        push ebp
        push 1017f514h
        ; Exact mapped bytes E8 DC A9 00 00: call 0x10104030
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 118h]
        push ebp
        push 0
        ; Exact mapped bytes E8 7E A7 00 00: call 0x10103de0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 11ch]
        push 0ff000000h
        push ebp
        push 1017f514h
        ; Exact mapped bytes E8 B8 A9 00 00: call 0x10104030
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 0d0ch]
        mov edx, dword ptr [ecx + 0b4ch]
        ; Exact mapped bytes 66 8B 84 6A C6 00 00 00: mov ax, word ptr [edx + ebp*2 + 0xc6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x6a
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 1B: je 0x100f96b1
        __asm _emit 0x74
        __asm _emit 0x1b
        and eax, 0ffffh
        push eax
        lea eax, [esp + 30h]
        push 1017f3cch
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        ; Exact mapped bytes EB 05: jmp 0x100f96b6
        __asm _emit 0xeb
        __asm _emit 0x05
        mov byte ptr [esp + 2ch], 0
        push 808080h
        lea ecx, [esp + 30h]
        push ebp
        push ecx
        mov ecx, dword ptr [ebx + 120h]
        ; Exact mapped bytes E8 64 A9 00 00: call 0x10104030
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 124h]
        push 0ff000000h
        push ebp
        push 1017f514h
        ; Exact mapped bytes E8 4E A9 00 00: call 0x10104030
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + ebp*4 + 130h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebx + ebp*4 + 1b0h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ebx, dword ptr [ebx + ebp*4 + 230h]
        pop esi
        pop ebp
        ; Exact mapped bytes 66 81 63 24 F0 FF: and word ptr [ebx + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x63
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        pop ebx
        add esp, 120h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
