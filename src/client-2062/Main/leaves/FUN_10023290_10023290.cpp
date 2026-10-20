// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10023290 .. +0x9A bytes.
extern "C" __declspec(naked) void FUN_10023290_10023290() {
    __asm {
        mov eax, dword ptr [esp + 18h]
        push ebx
        mov ebx, dword ptr [esp + 18h]
        push ebp
        mov ebp, dword ptr [esp + 18h]
        push esi
        push edi
        mov edi, dword ptr [esp + 1ch]
        mov esi, ecx
        push eax
        mov ecx, dword ptr [esp + 1ch]
        push ebx
        push ebp
        push edi
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 2A 4A 02 00: call 0x10047ce0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 54 24 28: mov dx, word ptr [esp + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        xor eax, eax
        cmp edi, eax
        mov dword ptr [esi], 10175614h
        mov dword ptr [esi + 4], ebp
        mov dword ptr [esi + 8], ebx
        ; Exact mapped bytes 66 89 56 26: mov word ptr [esi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x26
        mov dword ptr [esi + 68h], ebp
        mov dword ptr [esi + 6ch], ebx
        mov dword ptr [esi + 7ch], 100h
        mov dword ptr [esi + 78h], eax
        mov dword ptr [esi + 50h], edi
        ; Exact mapped bytes 74 29: je 0x1002330d
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [edi + 10h]
        add edi, 18h
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [edi - 4]
        mov dword ptr [esi + 10h], edx
        mov edx, dword ptr [edi]
        lea ecx, [esi + 14h]
        mov dword ptr [esi + 14h], edx
        mov edx, dword ptr [edi + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [edi + 8]
        mov dword ptr [ecx + 8], edx
        mov edx, dword ptr [edi + 0ch]
        mov dword ptr [ecx + 0ch], edx
        or byte ptr [esi + 24h], 1
        mov dword ptr [esi + 70h], eax
        mov dword ptr [esi + 74h], eax
        mov eax, dword ptr [esp + 14h]
        mov dword ptr [esi + 80h], eax
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
