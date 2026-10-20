// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850489E .. +0x21 bytes.
extern "C" __declspec(naked) void Catch_All_5850489e_5850489E() {
    __asm {
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 44h], edx
        push 1
        push 4
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 78 7A 00 00: call 0x5850c330
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x7a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, 585048c8h
        ret
    }
}
