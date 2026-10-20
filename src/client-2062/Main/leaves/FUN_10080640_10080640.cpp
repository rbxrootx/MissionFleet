// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10080640 .. +0xC1 bytes.
extern "C" __declspec(naked) void FUN_10080640_10080640() {
    __asm {
        sub esp, 8
        push ebx
        mov ebx, ecx
        mov dword ptr [esp + 8], ebx
        lea eax, [ebx + 0e4h]
        push eax
        mov dword ptr [esp + 8], eax
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x100806fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        ; Exact mapped bytes 8B 2D A0 50 17 10: mov ebp, dword ptr [0x101750a0]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push esi
        xor esi, esi
        add ebx, 0fch
        push edi
        mov edi, ebx
        mov eax, dword ptr [esp + 10h]
        push eax
        push edi
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x1008068e
        __asm _emit 0x74
        __asm _emit 0x0c
        inc esi
        add edi, 18h
        cmp esi, 80h
        ; Exact mapped bytes 7C E8: jl 0x10080676
        __asm _emit 0x7c
        __asm _emit 0xe8
        cmp esi, 80h
        ; Exact mapped bytes 75 46: jne 0x100806dc
        __asm _emit 0x75
        __asm _emit 0x46
        xor esi, esi
        mov eax, ebx
        cmp byte ptr [eax], 0
        ; Exact mapped bytes 74 0E: je 0x100806ad
        __asm _emit 0x74
        __asm _emit 0x0e
        inc esi
        add eax, 18h
        cmp esi, 80h
        ; Exact mapped bytes 7C EF: jl 0x1008069a
        __asm _emit 0x7c
        __asm _emit 0xef
        ; Exact mapped bytes EB 1A: jmp 0x100806c7
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov ecx, dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 14h]
        lea edx, [esi + esi*2]
        push ecx
        lea ecx, [eax + edx*8 + 0fch]
        push ecx
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        cmp esi, 80h
        ; Exact mapped bytes 75 23: jne 0x100806f2
        __asm _emit 0x75
        __asm _emit 0x23
        push 0
        push 0
        push 0
        push 1cdh
        ; Exact mapped bytes EB 0B: jmp 0x100806e7
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 0
        push 0
        push 0
        push 1cch
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 BE D3 F9 FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xd3
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [esp + 10h]
        pop edi
        pop esi
        pop ebp
        mov byte ptr [edx], 0
        pop ebx
        add esp, 8
        ret
    }
}
