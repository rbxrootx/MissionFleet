// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5896C860 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_5896c860() {
    __asm {
        mov eax, dword ptr [ecx + 50h]
        cmp eax, 2
        ; Exact mapped bytes 75 0A: jne 0x5896c872
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [ecx + 50h], 4
        xor eax, eax
        ret
        cmp eax, 3
        ; Exact mapped bytes 75 0A: jne 0x5896c881
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [ecx + 50h], 6
        xor eax, eax
        ret
        mov eax, dword ptr [ecx + 34h]
        ret
    }
}
