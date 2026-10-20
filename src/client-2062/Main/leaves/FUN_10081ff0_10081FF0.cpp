// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10081FF0 .. +0xFD bytes.
extern "C" __declspec(naked) void FUN_10081ff0_10081FF0() {
    __asm {
        sub esp, 404h
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        ; Exact mapped bytes 66 39 BE 8E 0C 00 00: cmp word ptr [esi + 0xc8e], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xbe
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 25: jle 0x1008202c
        __asm _emit 0x7e
        __asm _emit 0x25
        mov ebx, dword ptr [esp + 418h]
        lea ebp, [esi + 64h]
        push ebx
        push ebp
        ; Exact mapped bytes FF 15 A0 50 17 10: call dword ptr [0x101750a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x1008203b
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 0F BF 86 8E 0C 00 00: movsx eax, word ptr [esi + 0xc8e]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x86
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        inc edi
        add ebp, 18h
        cmp edi, eax
        ; Exact mapped bytes 7C E5: jl 0x10082011
        __asm _emit 0x7c
        __asm _emit 0xe5
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 404h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push ebx
        lea ecx, [esp + 14h]
        push 101aba64h
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 30h]
        add esp, 0ch
        push ebx
        ; Exact mapped bytes E8 C8 29 01 00: call 0x10094a20
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        xor ebp, ebp
        cmp eax, ebp
        ; Exact mapped bytes 75 0D: jne 0x1008206b
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 30h]
        push ebx
        ; Exact mapped bytes E8 F9 29 01 00: call 0x10094a60
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, ebp
        ; Exact mapped bytes 74 06: je 0x10082071
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [eax + 0a4h], ebp
        lea edx, [edi + edi*2]
        push 0ffd997h
        push -1
        push 101ace48h
        mov byte ptr [esi + edx*8 + 64h], 0
        mov ecx, dword ptr [esi + 0c7ch]
        ; Exact mapped bytes 66 FF 8E 8C 0C 00 00: dec word ptr [esi + 0xc8c]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x8e
        __asm _emit 0x8c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 19 1C 08 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x1c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c80h]
        push 0ffffffh
        lea eax, [esp + 14h]
        push -1
        push eax
        ; Exact mapped bytes E8 02 1C 08 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x1c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c7ch]
        ; Exact mapped bytes E8 D7 26 08 00: call 0x10104790
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x26
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c80h]
        ; Exact mapped bytes E8 CC 26 08 00: call 0x10104790
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x26
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 86 8E 0C 00 00: mov ax, word ptr [esi + 0xc8e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        dec ecx
        cmp edi, ecx
        ; Exact mapped bytes 75 08: jne 0x100820db
        __asm _emit 0x75
        __asm _emit 0x08
        dec eax
        ; Exact mapped bytes 66 89 86 8E 0C 00 00: mov word ptr [esi + 0xc8e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 404h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
