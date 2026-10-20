// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C8160 .. +0x1FA bytes.
extern "C" __declspec(naked) void FUN_100c8160_100C8160() {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 4cch
        push ebx
        mov ebx, dword ptr [esp + 4d8h]
        push ebp
        push esi
        push edi
        ; Exact mapped bytes 8B 3D 88 51 17 10: mov edi, dword ptr [0x10175188]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov esi, ecx
        push ebx
        push eax
        lea ecx, [esp + 3e4h]
        push 101ac228h
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 10h
        lea edx, [esp + 3dch]
        push 0
        push 80h
        push 3
        push 0
        push 0
        push 80000000h
        push edx
        ; Exact mapped bytes FF 15 C4 50 17 10: call dword ptr [0x101750c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ebp, eax
        cmp ebp, -1
        ; Exact mapped bytes 0F 84 91 01 00 00: je 0x100c834d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esp + 10h]
        push 0
        push eax
        lea ecx, [esp + 11ch]
        push 2c8h
        push ecx
        push ebp
        ; Exact mapped bytes FF 15 B8 50 17 10: call dword ptr [0x101750b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov cl, byte ptr [ebx]
        xor edx, edx
        test cl, cl
        ; Exact mapped bytes 74 1B: je 0x100c81fa
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, ebx
        lea ebx, [esp + 14h]
        sub ebx, eax
        cmp cl, 2eh
        ; Exact mapped bytes 74 0E: je 0x100c81fa
        __asm _emit 0x74
        __asm _emit 0x0e
        mov cl, byte ptr [eax]
        inc edx
        mov byte ptr [ebx + eax], cl
        mov cl, byte ptr [eax + 1]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 ED: jne 0x100c81e7
        __asm _emit 0x75
        __asm _emit 0xed
        mov ecx, dword ptr [esi + 7ch]
        mov byte ptr [esp + edx + 14h], 0
        push 0ffffffh
        lea edx, [esp + 18h]
        push -1
        push edx
        ; Exact mapped bytes E8 9D BA 03 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esp + 151h]
        mov ecx, dword ptr [esp + 150h]
        mov edx, dword ptr [esp + 14fh]
        and eax, 0ffh
        and ecx, 0ffh
        push eax
        mov eax, dword ptr [esp + 152h]
        push ecx
        mov ecx, dword ptr [esp + 154h]
        and edx, 0ffh
        and eax, 0ffh
        push edx
        and ecx, 0ffffh
        push eax
        push ecx
        lea edx, [esp + 28h]
        push 101ac210h
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 80h]
        add esp, 1ch
        lea eax, [esp + 14h]
        push 0a0a0a0h
        push 0
        push eax
        ; Exact mapped bytes E8 33 BA 03 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 3d8h]
        mov eax, 51eb851fh
        mov ebx, 3ch
        lea edx, [ecx + ecx*2]
        shl edx, 3
        imul edx
        mov eax, edx
        sar eax, 5
        mov edx, eax
        shr edx, 1fh
        add eax, edx
        cdq
        idiv ebx
        lea eax, [ecx + ecx*2]
        lea ecx, [eax + eax*4]
        mov eax, 45e7b273h
        shl ecx, 4
        push edx
        imul ecx
        sar edx, 0eh
        mov eax, edx
        lea ecx, [esp + 18h]
        shr eax, 1fh
        add edx, eax
        push edx
        push 101ac204h
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 84h]
        add esp, 10h
        lea edx, [esp + 14h]
        push 0a0a0a0h
        push 0
        push edx
        ; Exact mapped bytes E8 C9 B9 03 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        mov al, byte ptr [esp + 36eh]
        lea ecx, [esp + 14h]
        and eax, 0fh
        push eax
        push 1017f3cch
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 88h]
        add esp, 0ch
        lea edx, [esp + 14h]
        push 0a0a0a0h
        push 0
        push edx
        ; Exact mapped bytes E8 98 B9 03 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esp + 15ch]
        lea ecx, [esp + 14h]
        push eax
        push 101ab934h
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esi + 8ch]
        add esp, 0ch
        lea edx, [esp + 14h]
        push 0a0a0a0h
        push 0
        push edx
        ; Exact mapped bytes E8 6A B9 03 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        push ebp
        ; Exact mapped bytes FF 15 C0 50 17 10: call dword ptr [0x101750c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 4cch
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
