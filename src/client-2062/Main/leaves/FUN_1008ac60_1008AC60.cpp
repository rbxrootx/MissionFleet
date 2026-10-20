// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1008AC60 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_1008ac60_1008AC60() {
    __asm {
        mov eax, dword ptr [ecx + 4]
        test eax, eax
        ; Exact mapped bytes 75 01: jne 0x1008ac68
        __asm _emit 0x75
        __asm _emit 0x01
        ret
        mov ecx, dword ptr [ecx + 8]
        sub ecx, eax
        mov eax, 30c30c31h
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, edx
        ret
    }
}
