// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886C729 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_5886c729_5886C729() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        mov eax, dword ptr [ebp + 8]
        or dword ptr [eax + 10h], 0ffffffffh
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 14h], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 18h], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 1ch], ecx
        mov eax, dword ptr [ebp + 8]
        add eax, 0ch
        xchg dword ptr [eax], ecx
        pop ebp
        ret
    }
}
