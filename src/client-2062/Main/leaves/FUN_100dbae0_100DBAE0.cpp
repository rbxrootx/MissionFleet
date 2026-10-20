// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DBAE0 .. +0x155 bytes.
extern "C" __declspec(naked) void FUN_100dbae0_100DBAE0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push ebp
        push esi
        push edi
        mov edi, ecx
        xor esi, esi
        lea edx, [edi + 0ech]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov ebp, dword ptr [eax + 14h]
        add ebp, ecx
        cmp ebx, ebp
        ; Exact mapped bytes 7C 24: jl 0x100dbb24
        __asm _emit 0x7c
        __asm _emit 0x24
        mov ebp, dword ptr [eax + 1ch]
        add ebp, ecx
        cmp ebx, ebp
        ; Exact mapped bytes 7D 1B: jge 0x100dbb24
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov ecx, dword ptr [eax + 8]
        mov ebp, dword ptr [eax + 18h]
        add ebp, ecx
        cmp dword ptr [esp + 18h], ebp
        ; Exact mapped bytes 7C 0D: jl 0x100dbb24
        __asm _emit 0x7c
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 20h]
        add eax, ecx
        mov ecx, dword ptr [esp + 18h]
        cmp ecx, eax
        ; Exact mapped bytes 7C 09: jl 0x100dbb2d
        __asm _emit 0x7c
        __asm _emit 0x09
        inc esi
        add edx, 4
        cmp esi, 2
        ; Exact mapped bytes 7E C5: jle 0x100dbaf2
        __asm _emit 0x7e
        __asm _emit 0xc5
        cmp esi, 3
        ; Exact mapped bytes 0F 84 F8 00 00 00: je 0x100dbc2e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + esi*4 + 0ech]
        ; Exact mapped bytes E8 4E 83 02 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
        mov dword ptr [esp + 14h], eax
        push ecx
        mov ecx, dword ptr [edi + esi*4 + 0ech]
        push ebx
        ; Exact mapped bytes E8 28 8B 02 00: call 0x10104680
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x8b
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [edi + esi*4 + 0ech]
        ; Exact mapped bytes E8 2C 83 02 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [esp + 18h], eax
        xor ebx, ebx
        lea ebp, [edi + 0ech]
        cmp ebx, esi
        ; Exact mapped bytes 74 15: je 0x100dbb89
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [edi + esi*4 + 0ech]
        ; Exact mapped bytes E8 10 83 02 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        push eax
        ; Exact mapped bytes E8 C7 8B 02 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x8b
        __asm _emit 0x02
        __asm _emit 0x00
        inc ebx
        add ebp, 4
        cmp ebx, 2
        ; Exact mapped bytes 7E DE: jle 0x100dbb70
        __asm _emit 0x7e
        __asm _emit 0xde
        mov edx, dword ptr [esp + 18h]
        mov eax, dword ptr [esp + 14h]
        cmp eax, edx
        ; Exact mapped bytes 75 13: jne 0x100dbbb1
        __asm _emit 0x75
        __asm _emit 0x13
        mov eax, dword ptr [edi + 170h]
        xor ecx, ecx
        mov cl, byte ptr [eax + 25h]
        and cl, 1fh
        cmp cl, 1
        ; Exact mapped bytes 74 76: je 0x100dbc27
        __asm _emit 0x74
        __asm _emit 0x76
        mov ecx, dword ptr [edi + 0ech]
        ; Exact mapped bytes E8 D4 82 02 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0ech]
        push eax
        ; Exact mapped bytes E8 48 82 02 00: call 0x10103e10
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 5A: jne 0x100dbc27
        __asm _emit 0x75
        __asm _emit 0x5a
        mov ecx, dword ptr [edi + 170h]
        xor edx, edx
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 1
        ; Exact mapped bytes 75 13: jne 0x100dbbf3
        __asm _emit 0x75
        __asm _emit 0x13
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, edi
        ; Exact mapped bytes E8 A4 01 00 00: call 0x100dbd90
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0f4h]
        mov eax, dword ptr [eax + 84h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100dbc08
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 8]
        ; Exact mapped bytes EB 03: jmp 0x100dbc0b
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        mov edx, dword ptr [edi + 18ch]
        push 0
        mov eax, dword ptr [edx + eax*4]
        push eax
        ; Exact mapped bytes E8 04 54 00 00: call 0x100e1020
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 170h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov ecx, edi
        ; Exact mapped bytes E8 62 01 00 00: call 0x100dbd90
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
