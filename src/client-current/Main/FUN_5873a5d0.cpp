// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 155 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873A5D0 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_5873a5d0_segment_00() {
    __asm {
        ; Exact mapped bytes 66 83 79 0C 00: cmp word ptr [ecx + 0xc], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x0c
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x5873a665
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 1ch]
        mov eax, edi
        cdq
        idiv dword ptr [ecx + 8]
        movzx esi, word ptr [ecx + 0ch]
        cdq
        idiv esi
        mov esi, dword ptr [esp + 14h]
        lea eax, [edx + edx*8]
        mov edx, dword ptr [ecx + 10h]
        mov eax, dword ptr [edx + eax*4]
        add dword ptr [esi], eax
        mov eax, edi
        cdq
        idiv dword ptr [ecx + 8]
        movzx ebx, word ptr [ecx + 0ch]
        cdq
        idiv ebx
        mov eax, dword ptr [ecx + 10h]
        lea edx, [edx + edx*8]
        mov edx, dword ptr [eax + edx*4 + 4]
        add dword ptr [esi + 4], edx
        mov eax, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 20h]
        push eax
        push edx
        mov edx, dword ptr [esp + 20h]
        mov ebx, dword ptr [edx]
        sub esp, 10h
        mov eax, esp
        mov dword ptr [eax], ebx
        mov ebx, dword ptr [edx + 4]
        mov dword ptr [eax + 4], ebx
        mov ebx, dword ptr [edx + 8]
        mov edx, dword ptr [edx + 0ch]
        mov dword ptr [eax + 8], ebx
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [esi + 4]
        mov edx, dword ptr [esi]
        push eax
        mov eax, dword ptr [esp + 2ch]
        push edx
        push eax
        mov eax, edi
        cdq
        idiv dword ptr [ecx + 8]
        movzx esi, word ptr [ecx + 0ch]
        mov ecx, dword ptr [ecx + 14h]
        cdq
        idiv esi
        mov ecx, dword ptr [ecx + edx*4]
        ; Exact mapped bytes E8 FB 96 1C 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x96
        __asm _emit 0x1c
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
