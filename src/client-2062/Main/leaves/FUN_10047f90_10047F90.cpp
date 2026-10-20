// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10047F90 .. +0xBC bytes.
extern "C" __declspec(naked) void FUN_10047f90_10047F90() {
    __asm {
        mov eax, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 10h]
        push ebp
        mov ebp, dword ptr [esp + 0ch]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 1ch]
        push edi
        mov edi, dword ptr [esp + 18h]
        push eax
        mov eax, dword ptr [esp + 14h]
        push ecx
        push edx
        push edi
        push ebp
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F6 69 0B 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x69
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [esp + 28h]
        or byte ptr [esi + 24h], 20h
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        xor ecx, ecx
        cmp edx, ecx
        mov dword ptr [esi + 50h], ebp
        mov dword ptr [esi + 54h], edi
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ecx
        mov dword ptr [esi], 10175ac8h
        ; Exact mapped bytes 75 0E: jne 0x10047ff0
        __asm _emit 0x75
        __asm _emit 0x0e
        mov dword ptr [esi + 64h], ecx
        mov dword ptr [esi + 68h], ecx
        mov dword ptr [esi + 6ch], ecx
        mov dword ptr [esi + 70h], ecx
        ; Exact mapped bytes EB 19: jmp 0x10048009
        __asm _emit 0xeb
        __asm _emit 0x19
        push ebx
        mov ebx, dword ptr [edx]
        mov dword ptr [esi + 64h], ebx
        mov ebx, dword ptr [edx + 4]
        mov dword ptr [esi + 68h], ebx
        mov ebx, dword ptr [edx + 8]
        mov dword ptr [esi + 6ch], ebx
        mov edx, dword ptr [edx + 0ch]
        mov dword ptr [esi + 70h], edx
        pop ebx
        mov edx, dword ptr [esp + 2ch]
        and eax, 0e5ffh
        mov dword ptr [esi + 74h], edx
        mov dl, byte ptr [esp + 30h]
        or ah, 5
        mov dword ptr [esi + 8ch], edi
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov dword ptr [esi + 78h], ecx
        mov dword ptr [esi + 7ch], ecx
        mov byte ptr [esi + 61h], dl
        mov dword ptr [esi + 80h], ecx
        mov dword ptr [esi + 84h], ecx
        mov dword ptr [esi + 88h], ebp
        mov byte ptr [esi + 60h], cl
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 24 00: ret 0x24
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}
