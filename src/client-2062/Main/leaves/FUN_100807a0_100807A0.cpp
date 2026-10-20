// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100807A0 .. +0x153 bytes.
extern "C" __declspec(naked) void FUN_100807a0_100807A0() {
    __asm {
        sub esp, 480h
        ; Exact mapped bytes 66 81 BC 24 84 04 00 00 00 08: cmp word ptr [esp + 0x484], 0x800
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        push ebx
        mov ebx, dword ptr [esp + 48ch]
        push ebp
        push esi
        push edi
        mov ebp, ecx
        lea eax, [ebx + 30h]
        ; Exact mapped bytes 75 77: jne 0x10080839
        __asm _emit 0x75
        __asm _emit 0x77
        ; Exact mapped bytes 66 8B 8C 24 9C 04 00 00: mov cx, word ptr [esp + 0x49c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x9c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 F9 FF FF: cmp cx, 0xffff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 22: jne 0x100807f3
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 0d14h]
        push 0
        push 0
        push 10101h
        push eax
        ; Exact mapped bytes E8 7A 1C F9 FF: call 0x10012460
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x1c
        __asm _emit 0xf9
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 480h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 85 EA 00 00 00: jne 0x100808e6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add ebx, 18h
        lea eax, [esp + 10h]
        push ebx
        push 101ab9dch
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        lea ecx, [esp + 10h]
        push 0
        push 0
        push 10101h
        push ecx
        mov ecx, dword ptr [ebp + 0d14h]
        ; Exact mapped bytes E8 34 1C F9 FF: call 0x10012460
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x1c
        __asm _emit 0xf9
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 480h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        xor edi, edi
        lea esi, [ebp + 0fch]
        push ebx
        push esi
        ; Exact mapped bytes FF 15 A0 50 17 10: call dword ptr [0x101750a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x100808e6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        inc edi
        add esi, 18h
        cmp edi, 80h
        ; Exact mapped bytes 7C E4: jl 0x10080841
        __asm _emit 0x7c
        __asm _emit 0xe4
        mov edx, dword ptr [ebp + 0d8h]
        xor eax, eax
        mov al, byte ptr [edx + 25h]
        and al, 1fh
        cmp al, 2
        ; Exact mapped bytes 74 68: je 0x100808d6
        __asm _emit 0x74
        __asm _emit 0x68
        push 101ad0e8h
        push ebx
        ; Exact mapped bytes FF 15 A0 50 17 10: call dword ptr [0x101750a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 58: je 0x100808d6
        __asm _emit 0x74
        __asm _emit 0x58
        push ebx
        lea ecx, [esp + 94h]
        push 101ab9c8h
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        lea eax, [ebx + 30h]
        lea edx, [esp + 90h]
        push 3d4h
        push eax
        push edx
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea eax, [esp + eax + 98h]
        push eax
        ; Exact mapped bytes FF 15 B4 50 17 10: call dword ptr [0x101750b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push 0
        push 0
        lea ecx, [esp + 98h]
        push 10101h
        push ecx
        mov ecx, dword ptr [ebp + 0d14h]
        ; Exact mapped bytes E8 8A 1B F9 FF: call 0x10012460
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x1b
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0d8h]
        lea eax, [ebx + 30h]
        push eax
        push ebx
        ; Exact mapped bytes E8 8A 3F 01 00: call 0x10094870
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 480h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
