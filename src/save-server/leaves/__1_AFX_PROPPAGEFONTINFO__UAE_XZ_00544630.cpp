// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00544630 .. +0x29 bytes.
extern "C" __declspec(naked) void __1_AFX_PROPPAGEFONTINFO__UAE_XZ_00544630() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 639834h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 00 BA 68 00: call dword ptr [0x68ba00]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5B 57 F0 FF: call 0x449db0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x57
        __asm _emit 0xf0
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
