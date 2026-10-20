// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58520734 .. +0x21 bytes.
extern "C" __declspec(naked) void Catch_All_58520734_58520734() {
    __asm {
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 18h]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 40h], edx
        push 1
        push 4
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 E2 BB FE FF: call 0x5850c330
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xbb
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov eax, 5852075eh
        ret
    }
}
