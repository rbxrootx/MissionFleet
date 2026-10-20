// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DB140 .. +0x247 bytes.
extern "C" __declspec(naked) void FUN_100db140_100DB140() {
    __asm {
        sub esp, 0b0h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ebx, 3
        lea edi, [esi + 0e0h]
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 B2 95 02 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0x00
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 F3: jne 0x100db157
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, dword ptr [esi + 0a4h]
        push 0
        ; Exact mapped bytes E8 AF 45 02 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a8h]
        push 0
        ; Exact mapped bytes E8 A2 45 02 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 164h]
        ; Exact mapped bytes 8B 1D 88 51 17 10: mov ebx, dword ptr [0x10175188]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        xor edi, edi
        ; Exact mapped bytes 66 0F B6 81 9D 13 00 00: movzx ax, byte ptr [ecx + 0x139d]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x81
        __asm _emit 0x9d
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 78 01 00 00: mov word ptr [esi + 0x178], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ecx + 139dh]
        test al, al
        ; Exact mapped bytes 0F 86 D5 00 00 00: jbe 0x100db27e
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes E8 81 22 00 00: call 0x100dd430
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [esp + 44h]
        push 101ac310h
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 164h]
        add esp, 0ch
        push edi
        ; Exact mapped bytes E8 D5 22 00 00: call 0x100dd4a0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        lea edx, [esp + 20h]
        push eax
        push 101ac30ch
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 164h]
        add esp, 0ch
        push 0ffffffh
        push 1
        push edi
        ; Exact mapped bytes E8 7D 23 00 00: call 0x100dd570
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e0h]
        push eax
        ; Exact mapped bytes E8 B1 8A 02 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 164h]
        push 0ffffffh
        push edi
        ; Exact mapped bytes E8 00 23 00 00: call 0x100dd510
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e4h]
        push eax
        lea eax, [esp + 48h]
        push eax
        ; Exact mapped bytes E8 8F 8A 02 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        push 0ffffffh
        lea ecx, [esp + 24h]
        push edi
        push ecx
        mov ecx, dword ptr [esi + 0e8h]
        ; Exact mapped bytes E8 79 8A 02 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0a8h]
        mov ecx, dword ptr [esi + 164h]
        push edi
        mov ebp, dword ptr [edx + 64h]
        ; Exact mapped bytes E8 54 22 00 00: call 0x100dd4a0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea ecx, [ebp + eax*2]
        push ecx
        mov ecx, dword ptr [esi + 0a8h]
        ; Exact mapped bytes E8 B9 44 02 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 164h]
        xor edx, edx
        inc edi
        mov dl, byte ptr [ecx + 139dh]
        cmp edi, edx
        ; Exact mapped bytes 0F 8C 2B FF FF FF: jl 0x100db1a9
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x2b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 160h]
        xor edi, edi
        ; Exact mapped bytes 66 0F B6 80 A5 00 00 00: movzx ax, byte ptr [eax + 0xa5]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x80
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 66 89 86 7A 01 00 00: mov word ptr [esi + 0x17a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 86 D7 00 00 00: jbe 0x100db375
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 160h]
        push 3
        push edi
        ; Exact mapped bytes E8 04 38 00 00: call 0x100deab0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esp + 1ch]
        push eax
        push ecx
        ; Exact mapped bytes FF 15 B4 50 17 10: call dword ptr [0x101750b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 160h]
        push edi
        ; Exact mapped bytes E8 AC 38 00 00: call 0x100deb70
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea edx, [esp + 14h]
        push 101ac30ch
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 0e0h]
        add esp, 0ch
        lea eax, [esp + 18h]
        push 0ffffffh
        push 2
        push eax
        ; Exact mapped bytes E8 C5 89 02 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 160h]
        push 0ffffffh
        push edi
        ; Exact mapped bytes E8 F4 38 00 00: call 0x100debf0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 160h]
        push eax
        push edi
        ; Exact mapped bytes E8 07 38 00 00: call 0x100deb10
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e4h]
        push eax
        ; Exact mapped bytes E8 9B 89 02 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        push 0ffffffh
        lea ecx, [esp + 14h]
        push edi
        push ecx
        mov ecx, dword ptr [esi + 0e8h]
        ; Exact mapped bytes E8 85 89 02 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0a4h]
        mov ecx, dword ptr [esi + 160h]
        push edi
        mov ebp, dword ptr [edx + 64h]
        ; Exact mapped bytes E8 10 39 00 00: call 0x100dec50
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        mov eax, 51eb851fh
        shl ecx, 1
        imul ecx
        sar edx, 5
        mov eax, edx
        mov ecx, dword ptr [esi + 0a4h]
        shr eax, 1fh
        add edx, eax
        add edx, ebp
        push edx
        ; Exact mapped bytes E8 BD 43 02 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        xor ecx, ecx
        inc edi
        ; Exact mapped bytes 66 8B 8E 7A 01 00 00: mov cx, word ptr [esi + 0x17a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, ecx
        ; Exact mapped bytes 0F 8C 29 FF FF FF: jl 0x100db29e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x29
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 C4 08 00 00: call 0x100dbc40
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0b0h
        ret
    }
}
