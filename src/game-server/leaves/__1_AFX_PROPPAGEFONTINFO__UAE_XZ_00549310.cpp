// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00549310 .. +0x29 bytes.
extern "C" __declspec(naked) void __1_AFX_PROPPAGEFONTINFO__UAE_XZ_00549310() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 587214h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 B0 23 5E 00: call dword ptr [0x5e23b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8B 44 F4 FF: call 0x48d7c0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0xf4
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
