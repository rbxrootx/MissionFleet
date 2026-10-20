// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040B0E0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_0040b0e0_0040B0E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        push 0
        push 1004h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
