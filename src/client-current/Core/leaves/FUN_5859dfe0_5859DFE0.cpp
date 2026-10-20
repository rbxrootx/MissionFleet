// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5859DFE0 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_5859dfe0_5859DFE0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, dword ptr [eax + 0d0h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c8h]
        lea ecx, [eax + ecx*4]
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ecx + edx*4], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
