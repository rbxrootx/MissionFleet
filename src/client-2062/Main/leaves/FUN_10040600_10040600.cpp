// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10040600 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_10040600_10040600() {
    __asm {
        mov eax, dword ptr [ecx + 14ch]
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x10040617
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [esp + 4]
        mov dword ptr [ecx + 148h], eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 09: jne 0x10040625
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ecx + 148h], eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 0A: jne 0x10040634
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [ecx + 148h], 0
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
