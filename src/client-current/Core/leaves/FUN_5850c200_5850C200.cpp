// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850C200 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_5850c200_5850C200() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        and edx, 0ffffh
        mov eax, dword ptr [ebp - 4]
        or edx, dword ptr [eax + 14h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 14h], edx
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
