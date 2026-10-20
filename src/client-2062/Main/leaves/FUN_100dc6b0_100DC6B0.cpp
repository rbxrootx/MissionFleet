// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DC6B0 .. +0x287 bytes.
extern "C" __declspec(naked) void FUN_100dc6b0_100DC6B0() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov edi, 0fh
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 8]
        mov dword ptr [esi + 50h], eax
        mov dword ptr [esi + 54h], ecx
        mov ecx, dword ptr [esi + 6ch]
        mov eax, 0fff0h
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 70h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 74h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 78h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 7ch]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 80h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 84h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 68h]
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes 8B 15 F0 56 1C 10: mov edx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 10h]
        mov eax, dword ptr [edx + 0d0ch]
        mov dword ptr [esi + 8ch], ecx
        mov dword ptr [esi + 88h], eax
        mov eax, dword ptr [esp + 0ch]
        ; Exact mapped bytes 66 89 86 90 00 00 00: mov word ptr [esi + 0x90], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, edi
        cmp eax, 0dh
        ; Exact mapped bytes 0F 87 E4 01 00 00: ja 0x100dc91e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dl, byte ptr [eax + 100dc950h]
        ; Exact mapped bytes FF 24 95 38 C9 0D 10: jmp dword ptr [edx*4 + 0x100dc938]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x38
        __asm _emit 0xc9
        __asm _emit 0x0d
        __asm _emit 0x10
        mov eax, dword ptr [esi + 64h]
        mov dword ptr [eax + 50h], 0
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        sub ecx, 15h
        add edx, 28h
        push ecx
        mov ecx, dword ptr [esi + 80h]
        push edx
        ; Exact mapped bytes E8 64 25 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 80h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add eax, 15h
        add ecx, 28h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 84h]
        ; Exact mapped bytes E8 41 25 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 84h]
        ; Exact mapped bytes E9 80 01 00 00: jmp 0x100dc91a
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 64h]
        mov dword ptr [edx + 50h], 1
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [esi + 8]
        add ecx, 28h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 68h]
        ; Exact mapped bytes E8 19 25 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 68h]
        ; Exact mapped bytes E9 5B 01 00 00: jmp 0x100dc91a
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 68h]
        sub edx, 15h
        add eax, 28h
        push edx
        push eax
        ; Exact mapped bytes E8 FB 24 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 68h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add ecx, 1eh
        add edx, 28h
        push ecx
        mov ecx, dword ptr [esi + 80h]
        push edx
        ; Exact mapped bytes E8 DB 24 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 80h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add eax, 47h
        add ecx, 28h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 84h]
        ; Exact mapped bytes E8 B8 24 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 84h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov edx, dword ptr [esi + 64h]
        mov dword ptr [edx + 50h], 1
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        sub eax, 24h
        add ecx, 46h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 6ch]
        ; Exact mapped bytes E8 8E 24 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6ch]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 70h]
        add edx, 6
        add eax, 46h
        push edx
        push eax
        ; Exact mapped bytes E8 71 24 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 70h]
        ; Exact mapped bytes E9 B3 00 00 00: jmp 0x100dc91a
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        sub ecx, 15h
        add edx, 28h
        push ecx
        mov ecx, dword ptr [esi + 68h]
        push edx
        ; Exact mapped bytes E8 53 24 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 68h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add eax, 1eh
        add ecx, 28h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 80h]
        ; Exact mapped bytes E8 33 24 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 80h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 84h]
        add edx, 47h
        add eax, 28h
        push edx
        push eax
        ; Exact mapped bytes E8 10 24 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 84h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 64h]
        mov dword ptr [ecx + 50h], 1
        mov eax, dword ptr [esi + 74h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 74h]
        sub edx, 15h
        add eax, 46h
        push edx
        push eax
        ; Exact mapped bytes E8 DF 23 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 2B: jmp 0x100dc91e
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov edx, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 8]
        add edx, 28h
        push ecx
        mov ecx, dword ptr [esi + 68h]
        push edx
        ; Exact mapped bytes E8 CA 23 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 68h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 64h]
        mov dword ptr [eax + 50h], 1
        mov eax, dword ptr [esi + 7ch]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        pop edi
        and ecx, 0e1ffh
        or ecx, 107h
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
