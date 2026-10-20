// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585075A6 .. +0x24 bytes.
extern "C" __declspec(naked) void Catch_All_585075a6_585075A6() {
    __asm {
        mov ebx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 20h]
        add eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 40h], eax
        push 1
        push 4
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 6D 4D 00 00: call 0x5850c330
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, 585075d3h
        ret
    }
}
