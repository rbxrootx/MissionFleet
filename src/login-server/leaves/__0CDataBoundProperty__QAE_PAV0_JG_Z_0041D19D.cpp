// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041D19D .. +0x26 bytes.
extern "C" __declspec(naked) void __0CDataBoundProperty__QAE_PAV0_JG_Z_0041D19D() {
    __asm {
        ; Exact mapped bytes 66 8B 54 24 0C: mov dx, word ptr [esp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0c
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr [eax], ecx
        ; Exact mapped bytes 66 89 50 04: mov word ptr [eax + 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax + 0ch], ecx
        mov dword ptr [eax + 14h], ecx
        mov ecx, dword ptr [esp + 4]
        mov dword ptr [eax + 8], edx
        mov dword ptr [eax + 18h], ecx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
