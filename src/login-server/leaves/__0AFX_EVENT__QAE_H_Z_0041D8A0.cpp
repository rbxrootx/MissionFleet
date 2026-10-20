// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041D8A0 .. +0x23 bytes.
extern "C" __declspec(naked) void __0AFX_EVENT__QAE_H_Z_0041D8A0() {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 4]
        or dword ptr [eax + 4], 0ffffffffh
        mov dword ptr [eax], ecx
        xor ecx, ecx
        mov dword ptr [eax + 8], ecx
        mov dword ptr [eax + 0ch], ecx
        mov dword ptr [eax + 10h], ecx
        mov dword ptr [eax + 18h], ecx
        mov dword ptr [eax + 1ch], ecx
        mov dword ptr [eax + 20h], ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
