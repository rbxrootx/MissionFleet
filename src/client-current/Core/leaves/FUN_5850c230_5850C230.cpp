// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850C230 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_5850c230_5850C230() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        not edx
        and edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        and eax, dword ptr [ebp + 0ch]
        and eax, 0ffffh
        or edx, eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 14h], edx
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
