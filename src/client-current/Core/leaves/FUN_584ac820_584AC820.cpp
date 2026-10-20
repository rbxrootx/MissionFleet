// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AC820 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_584ac820_584AC820() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        cdq
        mov ecx, 1eh
        idiv ecx
        imul edx, eax, 30h
        mov eax, dword ptr [ebp - 4]
        lea eax, [eax + edx + 47fch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
