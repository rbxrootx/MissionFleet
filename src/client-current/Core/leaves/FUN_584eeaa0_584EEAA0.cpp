// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EEAA0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_584eeaa0_584EEAA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        imul eax, dword ptr [ebp + 8], 108h
        mov ecx, dword ptr [ebp - 8]
        add eax, dword ptr [ecx]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
