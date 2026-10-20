// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F99F0 .. +0x1AF bytes.
extern "C" __declspec(naked) void FUN_100f99f0_100F99F0() {
    __asm {
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        sub esp, 100h
        mov eax, dword ptr [eax + 0d0ch]
        push esi
        mov esi, dword ptr [esp + 108h]
        push edi
        mov edi, ecx
        mov ecx, dword ptr [eax + esi*4 + 9cch]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x100f9aa8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dl, byte ptr [ecx]
        and edx, 0fh
        sub edx, 5
        ; Exact mapped bytes 74 6F: je 0x100f9a94
        __asm _emit 0x74
        __asm _emit 0x6f
        dec edx
        ; Exact mapped bytes 74 58: je 0x100f9a80
        __asm _emit 0x74
        __asm _emit 0x58
        sub edx, 7
        ; Exact mapped bytes 0F 85 63 01 00 00: jne 0x100f9b94
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0b4ch]
        mov dl, byte ptr [eax + 2]
        ; Exact mapped bytes 66 8B 40 0A: mov ax, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0a
        and dl, 1fh
        cmp dl, 8
        ; Exact mapped bytes 75 1F: jne 0x100f9a65
        __asm _emit 0x75
        __asm _emit 0x1f
        shr eax, 0ah
        and eax, 1fh
        lea eax, [eax + esi - 1ch]
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 86 FA FF FF: call 0x100f94e0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 100h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        shr eax, 0ah
        and eax, 1fh
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 6B FA FF FF: call 0x100f94e0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 100h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 77 F7 FF FF: call 0x100f9200
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 100h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 53 F3 FF FF: call 0x100f8df0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 100h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 118h]
        push 0ff000000h
        push esi
        push 1017f514h
        ; Exact mapped bytes E8 72 A5 00 00: call 0x10104030
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 118h]
        push esi
        push 0
        ; Exact mapped bytes E8 14 A3 00 00: call 0x10103de0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 11ch]
        push 0ff000000h
        push esi
        push 1017f514h
        ; Exact mapped bytes E8 4E A5 00 00: call 0x10104030
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 0d0ch]
        mov eax, dword ptr [edx + 0b4ch]
        ; Exact mapped bytes 66 8B 84 70 C6 00 00 00: mov ax, word ptr [eax + esi*2 + 0xc6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 1B: je 0x100f9b1c
        __asm _emit 0x74
        __asm _emit 0x1b
        and eax, 0ffffh
        lea ecx, [esp + 8]
        push eax
        push 1017f3cch
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        ; Exact mapped bytes EB 05: jmp 0x100f9b21
        __asm _emit 0xeb
        __asm _emit 0x05
        mov byte ptr [esp + 8], 0
        mov ecx, dword ptr [edi + 120h]
        push 808080h
        lea edx, [esp + 0ch]
        push esi
        push edx
        ; Exact mapped bytes E8 F9 A4 00 00: call 0x10104030
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 124h]
        push 0ff000000h
        push esi
        push 1017f514h
        ; Exact mapped bytes E8 E3 A4 00 00: call 0x10104030
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 128h]
        push 0ff000000h
        push esi
        push 1017f514h
        ; Exact mapped bytes E8 CD A4 00 00: call 0x10104030
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi + esi*4 + 350h], 0
        mov eax, dword ptr [edi + esi*4 + 130h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi + esi*4 + 1b0h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov esi, dword ptr [edi + esi*4 + 230h]
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        pop edi
        pop esi
        add esp, 100h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
