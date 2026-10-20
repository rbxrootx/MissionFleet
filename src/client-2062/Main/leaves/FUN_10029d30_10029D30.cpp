// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10029D30 .. +0xC0 bytes.
extern "C" __declspec(naked) void FUN_10029d30_10029D30() {
    __asm {
        mov eax, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 0ch]
        push ebx
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 1ch]
        xor edi, edi
        push eax
        mov eax, dword ptr [esp + 14h]
        push edi
        push edi
        push ecx
        push edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 5C 4C 0D 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x4c
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        mov dword ptr [esi], 101751f8h
        cmp eax, edi
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes 74 28: je 0x10029d90
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [eax + 1ch]
        lea ecx, [eax + 20h]
        mov dword ptr [esi + 10h], edx
        lea edx, [esi + 14h]
        mov ebx, dword ptr [ecx]
        mov dword ptr [edx], ebx
        mov ebx, dword ptr [ecx + 4]
        mov dword ptr [edx + 4], ebx
        mov ebx, dword ptr [ecx + 8]
        mov dword ptr [edx + 8], ebx
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov ebx, 1
        cmp eax, edi
        mov dword ptr [esi], 101756bch
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 60h], edi
        mov dword ptr [esi + 58h], edi
        mov dword ptr [esi + 5ch], edi
        mov dword ptr [esi + 64h], 0ffffffffh
        mov dword ptr [esi + 68h], ebx
        mov dword ptr [esi + 6ch], ebx
        mov dword ptr [esi + 70h], edi
        ; Exact mapped bytes 74 25: je 0x10029de0
        __asm _emit 0x74
        __asm _emit 0x25
        xor ecx, ecx
        pop edi
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        mov eax, 38e38e39h
        imul ecx
        sar edx, 3
        mov eax, edx
        mov dword ptr [esi + 78h], ebx
        shr eax, 1fh
        add edx, eax
        mov eax, esi
        mov dword ptr [esi + 74h], edx
        pop esi
        pop ebx
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
        mov edx, ebx
        mov dword ptr [esi + 78h], ebx
        mov dword ptr [esi + 74h], edx
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
