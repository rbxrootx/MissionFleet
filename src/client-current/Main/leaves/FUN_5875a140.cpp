// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875A140 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_5875a140() {
    __asm {
        mov eax, dword ptr [ecx + 6ch]
        mov ecx, dword ptr [eax + 4]
        push esi
        ; Exact mapped bytes 8B 35 C8 84 A2 58: mov esi, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [esi + 4]
        push edi
        mov edi, dword ptr [eax + 14h]
        add edi, ecx
        cmp edx, edi
        ; Exact mapped bytes 7C 29: jl 0x5875a183
        __asm _emit 0x7c
        __asm _emit 0x29
        mov edi, dword ptr [eax + 1ch]
        add edi, ecx
        cmp edx, edi
        ; Exact mapped bytes 7D 20: jge 0x5875a183
        __asm _emit 0x7d
        __asm _emit 0x20
        mov edx, dword ptr [esi + 8]
        mov ecx, dword ptr [eax + 8]
        mov esi, dword ptr [eax + 18h]
        add esi, ecx
        cmp edx, esi
        ; Exact mapped bytes 7C 11: jl 0x5875a183
        __asm _emit 0x7c
        __asm _emit 0x11
        mov eax, dword ptr [eax + 20h]
        add eax, ecx
        cmp edx, eax
        ; Exact mapped bytes 7D 08: jge 0x5875a183
        __asm _emit 0x7d
        __asm _emit 0x08
        pop edi
        mov eax, 1
        pop esi
        ret
        pop edi
        xor eax, eax
        pop esi
        ret
    }
}
