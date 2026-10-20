// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10077970 .. +0x250 bytes.
extern "C" __declspec(naked) void FUN_10077970_10077970() {
    __asm {
        sub esp, 8
        mov edx, 0fffeh
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov esi, 4
        lea eax, [edi + 3b8h]
        mov ecx, dword ptr [eax - 10h]
        add eax, 4
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        mov ecx, dword ptr [eax - 4]
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        mov ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        dec esi
        ; Exact mapped bytes 75 DE: jne 0x10077989
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [edi + 3e8h]
        lea ecx, [edi + 2e8h]
        mov esi, 20h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        dec esi
        ; Exact mapped bytes 75 F4: jne 0x100779c0
        __asm _emit 0x75
        __asm _emit 0xf4
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 5
        ; Exact mapped bytes 7E 0F: jle 0x100779e9
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100779e9
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 14h]
        ; Exact mapped bytes EB 02: jmp 0x100779eb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi + 3f8h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x10077a20
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [edi + 388h]
        or byte ptr [eax + 24h], 1
        mov ecx, dword ptr [edi + 8]
        add ecx, 7bh
        push ecx
        mov ecx, dword ptr [edi + 400h]
        ; Exact mapped bytes E8 84 73 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x73
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [edi + 400h]
        mov ebp, 0fh
        xor esi, esi
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [edi + 404h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [edi + 0c4h]
        test eax, eax
        mov dword ptr [edi + 68h], 0
        ; Exact mapped bytes 7E 1B: jle 0x10077a83
        __asm _emit 0x7e
        __asm _emit 0x1b
        lea ebx, [edi + 0c8h]
        mov ecx, dword ptr [ebx]
        ; Exact mapped bytes E8 CB B5 06 00: call 0x100e3040
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xb5
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0c4h]
        inc esi
        add ebx, 4
        cmp esi, eax
        ; Exact mapped bytes 7C EB: jl 0x10077a6e
        __asm _emit 0x7c
        __asm _emit 0xeb
        mov eax, dword ptr [edi + 70h]
        xor esi, esi
        test eax, eax
        ; Exact mapped bytes 7E 18: jle 0x10077aa4
        __asm _emit 0x7e
        __asm _emit 0x18
        lea ebx, [edi + 2c8h]
        mov ecx, dword ptr [ebx]
        ; Exact mapped bytes E8 A7 B5 06 00: call 0x100e3040
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xb5
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [edi + 70h]
        inc esi
        add ebx, 4
        cmp esi, eax
        ; Exact mapped bytes 7C EE: jl 0x10077a92
        __asm _emit 0x7c
        __asm _emit 0xee
        mov ecx, 101ace60h
        lea edx, [edi + 368h]
        mov eax, dword ptr [ecx]
        test byte ptr [eax + 30h], 1
        ; Exact mapped bytes 74 09: je 0x10077ac0
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        add edx, 4
        add ecx, 4
        cmp ecx, 101ace80h
        ; Exact mapped bytes 7C E4: jl 0x10077aaf
        __asm _emit 0x7c
        __asm _emit 0xe4
        mov ecx, dword ptr [edi + 388h]
        mov edx, dword ptr [edi + 6ch]
        xor eax, eax
        mov dword ptr [ecx + 50h], edx
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 10h], eax
        mov esi, dword ptr [ecx + 0ch]
        cmp esi, eax
        ; Exact mapped bytes 0F 84 C8 00 00 00: je 0x10077bb6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 1ch]
        mov dword ptr [esp + 14h], eax
        lea ebp, [edi + 0c8h]
        mov eax, dword ptr [esi + 5c54h]
        test eax, eax
        ; Exact mapped bytes 0F 85 A1 00 00 00: jne 0x10077bab
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dl, byte ptr [esi + 330h]
        cmp edx, ebx
        ; Exact mapped bytes 0F 85 91 00 00 00: jne 0x10077bab
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ebch]
        mov ecx, dword ptr [esi + 0eb0h]
        xor eax, 0aaaaaaaah
        push 1
        push eax
        xor ecx, 0aaaaaaaah
        mov eax, 51eb851fh
        push 0
        mul ecx
        mov eax, dword ptr [esi + 0ec8h]
        mov ecx, dword ptr [esp + 1ch]
        shr edx, 5
        push edx
        mov edx, dword ptr [esi + 0ecch]
        xor eax, 0aaaaaaaah
        push edx
        push eax
        mov eax, dword ptr [esi + 0f10h]
        push ecx
        lea edx, [esi + 37ch]
        mov ecx, dword ptr [eax + 6ch]
        push ebx
        push edx
        push ecx
        mov ecx, dword ptr [ebp]
        ; Exact mapped bytes E8 CD B5 06 00: call 0x100e3140
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xb5
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        push 0ah
        push 0
        push ebx
        ; Exact mapped bytes E8 10 B7 06 00: call 0x100e3290
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xb7
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [edi + 8]
        mov eax, dword ptr [esp + 14h]
        lea ecx, [eax + edx + 7bh]
        push ecx
        mov ecx, dword ptr [ebp]
        ; Exact mapped bytes E8 2C 72 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x72
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 14h]
        inc edx
        add ebp, 4
        add eax, 0eh
        mov dword ptr [esp + 10h], edx
        mov dword ptr [esp + 14h], eax
        mov esi, dword ptr [esi + 78h]
        test esi, esi
        ; Exact mapped bytes 0F 85 46 FF FF FF: jne 0x10077afc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
