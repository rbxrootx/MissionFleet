// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876E510 .. +0xA4 bytes.
extern "C" __declspec(naked) void FUN_5876e510() {
    __asm {
        mov eax, dword ptr [esp + 18h]
        push ebx
        mov ebx, dword ptr [esp + 18h]
        push ebp
        mov ebp, dword ptr [esp + 18h]
        push esi
        push edi
        mov edi, dword ptr [esp + 1ch]
        push eax
        push ebx
        push ebp
        mov esi, ecx
        mov ecx, dword ptr [esp + 24h]
        push edi
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 AA 81 04 00: call 0x587b66e0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 54 24 28: mov dx, word ptr [esp + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        xor ecx, ecx
        mov dword ptr [esi], 58995be8h
        mov dword ptr [esi + 4], ebp
        mov dword ptr [esi + 8], ebx
        ; Exact mapped bytes 66 89 56 26: mov word ptr [esi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x26
        mov dword ptr [esi + 58h], ebp
        mov dword ptr [esi + 5ch], ebx
        mov dword ptr [esi + 84h], 100h
        mov dword ptr [esi + 80h], ecx
        mov dword ptr [esi + 50h], ecx
        mov dword ptr [esi + 54h], edi
        cmp edi, ecx
        ; Exact mapped bytes 74 26: je 0x5876e593
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [edi + 18h]
        mov dword ptr [esi + 0ch], eax
        mov edx, dword ptr [edi + 1ch]
        lea eax, [edi + 20h]
        mov dword ptr [esi + 10h], edx
        mov edx, dword ptr [eax]
        mov dword ptr [esi + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esi + 18h], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [esi + 1ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [esi + 20h], eax
        mov dword ptr [esi + 8ch], ecx
        mov dword ptr [esi + 60h], ecx
        ; Exact mapped bytes 66 83 4E 24 01: or word ptr [esi + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x01
        mov ecx, dword ptr [esp + 14h]
        pop edi
        mov dword ptr [esi + 88h], ecx
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 18h
    }
}
