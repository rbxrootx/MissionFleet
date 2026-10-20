// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10013060 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_10013060_10013060() {
    __asm {
        mov eax, dword ptr [ecx + 4]
        test eax, eax
        ; Exact mapped bytes 75 01: jne 0x10013068
        __asm _emit 0x75
        __asm _emit 0x01
        ret
        mov ecx, dword ptr [ecx + 8]
        sub ecx, eax
        mov eax, 38e38e39h
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, edx
        ret
    }
}
