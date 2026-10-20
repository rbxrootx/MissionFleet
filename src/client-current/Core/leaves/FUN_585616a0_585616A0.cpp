// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585616A0 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_585616a0_585616A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a94e0h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9A 03 00 00: call 0x58561a70
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
