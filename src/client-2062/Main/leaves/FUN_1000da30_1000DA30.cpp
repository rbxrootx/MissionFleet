// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000DA30 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_1000da30_1000DA30() {
    __asm {
        mov edx, dword ptr [esp + 4]
        mov eax, 40000000h
        mov byte ptr [ecx + 68h], 1
        mov dword ptr [ecx + 0c4h], 0
        mov dword ptr [ecx + 0b8h], eax
        mov dword ptr [ecx + 74h], edx
        mov dword ptr [ecx + 0bch], eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
