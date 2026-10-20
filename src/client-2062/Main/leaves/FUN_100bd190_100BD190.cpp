// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BD190 .. +0x11E bytes.
extern "C" __declspec(naked) void FUN_100bd190_100BD190() {
    __asm {
        sub esp, 84h
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esp + 90h]
        push edi
        mov eax, dword ptr [esi + 19ch]
        mov eax, dword ptr [eax + 88h]
        test eax, eax
        ; Exact mapped bytes 7E 47: jle 0x100bd1f9
        __asm _emit 0x7e
        __asm _emit 0x47
        push ebp
        ; Exact mapped bytes 8B 2D 84 50 17 10: mov ebp, dword ptr [0x10175084]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea edi, [eax - 1]
        mov dword ptr [esp + 10h], eax
        mov ecx, dword ptr [esi + 19ch]
        push ebx
        push edi
        ; Exact mapped bytes E8 E3 6B 04 00: call 0x10103db0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x6b
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x100bd1ec
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [esi + 19ch]
        push edi
        ; Exact mapped bytes E8 D0 6C 04 00: call 0x10103eb0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1a0h]
        push edi
        ; Exact mapped bytes E8 C4 6C 04 00: call 0x10103eb0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        dec edi
        dec eax
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 75 C8: jne 0x100bd1c0
        __asm _emit 0x75
        __asm _emit 0xc8
        pop ebp
        mov ecx, 20h
        xor eax, eax
        lea edi, [esp + 10h]
        push ebx
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        lea ecx, [esp + 14h]
        push 101ac044h
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov edx, dword ptr [esp + 0a4h]
        mov ecx, dword ptr [esi + 198h]
        add esp, 0ch
        lea eax, [esp + 10h]
        push edx
        push -1
        push eax
        ; Exact mapped bytes E8 7C 6A 04 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x6a
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 198h]
        ; Exact mapped bytes E8 51 75 04 00: call 0x10104790
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x75
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 10 57 1C 10: mov eax, dword ptr [0x101c5710]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D DC 56 1C 10: mov ecx, dword ptr [0x101c56dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, eax
        ; Exact mapped bytes 75 3C: jne 0x100bd28a
        __asm _emit 0x75
        __asm _emit 0x3c
        test byte ptr [eax + 1b8h], 1
        ; Exact mapped bytes 74 24: je 0x100bd27b
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 19ch]
        push 0f4241h
        mov edi, dword ptr [ecx + 88h]
        ; Exact mapped bytes 8B 0D F0 58 1C 10: mov ecx, dword ptr [0x101c58f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 3D 4E F8 FF: call 0x100420b0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x4e
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [eax + 44h]
        add edx, edi
        push edx
        ; Exact mapped bytes EB 1C: jmp 0x100bd297
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov eax, dword ptr [esi + 19ch]
        mov ecx, dword ptr [eax + 88h]
        push ecx
        ; Exact mapped bytes EB 0D: jmp 0x100bd297
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [esi + 19ch]
        mov eax, dword ptr [edx + 88h]
        push eax
        mov ecx, dword ptr [esi + 16ch]
        ; Exact mapped bytes E8 7E 24 04 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 84h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
