// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588A4460 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_588a4460() {
    __asm {
        mov eax, 0fff0h
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        xor eax, eax
        mov dword ptr [ecx + 0d0h], eax
        mov dword ptr [ecx + 0d4h], eax
        mov dword ptr [ecx + 0d8h], eax
        mov dword ptr [ecx + 0dch], eax
        mov dword ptr [ecx + 0e0h], eax
        mov dword ptr [ecx + 0e4h], eax
        mov dword ptr [ecx + 0e8h], eax
        mov dword ptr [ecx + 0ech], eax
        ret
    }
}
