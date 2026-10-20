// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ADA80 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_004ada80_004ADA80() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        xor edx, edx
        mov dl, byte ptr [ecx + 5e03a1h]
        mov eax, edx
        and eax, 4
        neg eax
        sbb eax, eax
        neg eax
        add eax, 1
        pop ebp
        ret
    }
}
