// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58770500 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_58770500_58770500() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10bf0h]
        sub ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10bf0h], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
