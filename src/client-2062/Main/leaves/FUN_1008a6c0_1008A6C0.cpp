// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1008A6C0 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_1008a6c0_1008A6C0() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 228h]
        mov eax, dword ptr [edi + 22ch]
        cmp esi, eax
        ; Exact mapped bytes 74 21: je 0x1008a6f7
        __asm _emit 0x74
        __asm _emit 0x21
        mov ebx, dword ptr [esp + 14h]
        ; Exact mapped bytes 8B 2D A0 50 17 10: mov ebp, dword ptr [0x101750a0]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi]
        push eax
        push ebx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x1008a700
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [edi + 22ch]
        add esi, 4
        cmp esi, eax
        ; Exact mapped bytes 75 E9: jne 0x1008a6e0
        __asm _emit 0x75
        __asm _emit 0xe9
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 22ch]
        lea eax, [esi + 4]
        cmp eax, ecx
        ; Exact mapped bytes 74 0E: je 0x1008a71b
        __asm _emit 0x74
        __asm _emit 0x0e
        sub esi, eax
        mov edx, dword ptr [eax]
        mov dword ptr [esi + eax], edx
        add eax, 4
        cmp eax, ecx
        ; Exact mapped bytes 75 F4: jne 0x1008a70f
        __asm _emit 0x75
        __asm _emit 0xf4
        mov eax, dword ptr [edi + 22ch]
        add eax, -4
        mov dword ptr [edi + 22ch], eax
        pop edi
        pop esi
        mov dword ptr [esp + 0ch], eax
        pop ebp
        mov eax, 1
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
