// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10103970 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_10103970_10103970() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 18h]
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x1010397c
        __asm _emit 0x75
        __asm _emit 0x02
        pop esi
        ret
        ; Exact mapped bytes 8B 0D 48 93 1C 10: mov ecx, dword ptr [0x101c9348]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        test ecx, ecx
        ; Exact mapped bytes 75 0E: jne 0x10103994
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 0D 4C 93 1C 10: mov ecx, dword ptr [0x101c934c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        test ecx, ecx
        ; Exact mapped bytes 75 04: jne 0x10103994
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        pop esi
        ret
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 48: call dword ptr [ecx + 0x48]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x48
        mov eax, dword ptr [esi + 18h]
        push 0
        push eax
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 34: call dword ptr [edx + 0x34]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x34
        mov eax, 1
        pop esi
        ret
    }
}
