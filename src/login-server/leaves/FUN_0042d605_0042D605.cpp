// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D605 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_0042d605_0042D605() {
    __asm {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr [eax + 4], ecx
        mov dword ptr [eax + 0ch], ecx
        mov dword ptr [eax + 10h], ecx
        mov dword ptr [eax + 14h], ecx
        mov ecx, dword ptr [esp + 4]
        mov dword ptr [eax], 43ea84h
        mov dword ptr [eax + 8], 11h
        mov dword ptr [eax + 18h], ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
