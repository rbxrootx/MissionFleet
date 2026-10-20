// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58605430 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_58605430_58605430() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 15ch]
        mov eax, 4
        shl eax, 0
        mov eax, dword ptr [edx + eax]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
