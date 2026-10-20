// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10032FD0 .. +0xAA bytes.
extern "C" __declspec(naked) void FUN_10032fd0_10032FD0() {
    __asm {
        push esi
        push edi
        xor edx, edx
        mov eax, 40000000h
        lea edi, [ecx + 0ach]
        xor esi, esi
        mov dword ptr [ecx + 94h], edx
        mov dword ptr [ecx + 98h], edx
        mov dword ptr [ecx + 64h], eax
        mov dword ptr [ecx + 60h], edx
        mov dword ptr [ecx + 5ch], edx
        mov dword ptr [edi], esi
        mov dword ptr [edi + 4], esi
        mov esi, dword ptr [ecx + 0b4h]
        mov dword ptr [ecx + 50h], edx
        mov dword ptr [esi + 50h], edx
        mov esi, dword ptr [ecx + 0c4h]
        cmp esi, edx
        mov dword ptr [ecx + 7ch], edx
        mov dword ptr [ecx + 80h], edx
        ; Exact mapped bytes 74 5D: je 0x10033077
        __asm _emit 0x74
        __asm _emit 0x5d
        mov esi, dword ptr [ecx + 0b4h]
        mov dword ptr [ecx + 50h], edx
        mov dword ptr [esi + 50h], edx
        mov esi, dword ptr [ecx + 60h]
        cmp esi, eax
        mov dword ptr [ecx + 64h], eax
        ; Exact mapped bytes 75 03: jne 0x10033033
        __asm _emit 0x75
        __asm _emit 0x03
        mov dword ptr [ecx + 60h], edx
        mov eax, dword ptr [ecx + 0c4h]
        mov dword ptr [ecx + 54h], eax
        mov eax, dword ptr [ecx + 88h]
        cmp eax, edx
        ; Exact mapped bytes 74 31: je 0x10033077
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [ecx + 0b4h]
        mov dword ptr [ecx + 54h], eax
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edx
        add ecx, 14h
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        pop edi
        pop esi
        ret
    }
}
