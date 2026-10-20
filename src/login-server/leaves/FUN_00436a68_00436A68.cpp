// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00436A68 .. +0x112 bytes.
extern "C" __declspec(naked) void FUN_00436a68_00436A68() {
    __asm {
        push ecx
        push ecx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea eax, [esi + 1ch]
        push eax
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes FF 15 7C C1 43 00: call dword ptr [0x43c17c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 4]
        mov edi, dword ptr [esi + 8]
        cmp edi, ebp
        ; Exact mapped bytes 7D 0D: jge 0x436a94
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov eax, dword ptr [esi + 10h]
        test byte ptr [eax + edi*8], 1
        ; Exact mapped bytes 0F 84 B9 00 00 00: je 0x436b4d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        pop edi
        cmp ebp, edi
        ; Exact mapped bytes 7E 1B: jle 0x436ab6
        __asm _emit 0x7e
        __asm _emit 0x1b
        mov eax, dword ptr [esi + 10h]
        add eax, 8
        test byte ptr [eax], 1
        ; Exact mapped bytes 74 08: je 0x436aae
        __asm _emit 0x74
        __asm _emit 0x08
        inc edi
        add eax, 8
        cmp edi, ebp
        ; Exact mapped bytes 7C F3: jl 0x436aa1
        __asm _emit 0x7c
        __asm _emit 0xf3
        cmp edi, ebp
        ; Exact mapped bytes 0F 8C 97 00 00 00: jl 0x436b4d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 10h]
        add ebp, 20h
        test eax, eax
        push ebx
        ; Exact mapped bytes 75 13: jne 0x436ad4
        __asm _emit 0x75
        __asm _emit 0x13
        mov eax, ebp
        shl eax, 3
        push eax
        push 2002h
        ; Exact mapped bytes FF 15 1C C2 43 00: call dword ptr [0x43c21c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 22: jmp 0x436af6
        __asm _emit 0xeb
        __asm _emit 0x22
        push eax
        ; Exact mapped bytes FF 15 B8 C1 43 00: call dword ptr [0x43c1b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov ebx, eax
        push ebx
        ; Exact mapped bytes FF 15 24 C2 43 00: call dword ptr [0x43c224]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, ebp
        push 2002h
        shl eax, 3
        push eax
        push ebx
        ; Exact mapped bytes FF 15 18 C2 43 00: call dword ptr [0x43c218]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D 20 C2 43 00: mov ebx, dword ptr [0x43c220]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x20
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [esp + 10h], eax
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x436b1f
        __asm _emit 0x75
        __asm _emit 0x1b
        push dword ptr [esi + 10h]
        ; Exact mapped bytes FF 15 B8 C1 43 00: call dword ptr [0x43c1b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push dword ptr [esp + 14h]
        ; Exact mapped bytes FF 15 B0 C1 43 00: call dword ptr [0x43c1b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes E8 02 62 FF FF: call 0x42cd21
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [esp + 10h]
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ebx, eax
        mov eax, dword ptr [esi + 4]
        mov ecx, eax
        imul ecx, ecx, 1fffffffh
        add ecx, ebp
        lea eax, [ebx + eax*8]
        shl ecx, 3
        push ecx
        push 0
        push eax
        ; Exact mapped bytes E8 9D 7F FE FF: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x7f
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [esi + 10h], ebx
        mov dword ptr [esi + 4], ebp
        pop ebx
        cmp edi, dword ptr [esi + 0ch]
        ; Exact mapped bytes 7C 06: jl 0x436b58
        __asm _emit 0x7c
        __asm _emit 0x06
        lea eax, [edi + 1]
        mov dword ptr [esi + 0ch], eax
        mov eax, dword ptr [esi + 10h]
        or dword ptr [eax + edi*8], 1
        push dword ptr [esp + 10h]
        lea eax, [eax + edi*8]
        lea eax, [edi + 1]
        mov dword ptr [esi + 8], eax
        ; Exact mapped bytes FF 15 B0 C1 43 00: call dword ptr [0x43c1b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ecx
        pop ecx
        ret
    }
}
