// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885B758 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_5885b758_5885B758() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        movzx eax, byte ptr [ebp + 8]
        xor ecx, ecx
        xor ecx, dword ptr [ebp + 10h]
        push esi
        mov esi, dword ptr [ebp + 0ch]
        cdq
        add esi, 3ffh
        shld edx, eax, 0bh
        and esi, 7ffh
        shl eax, 0bh
        or esi, eax
        mov eax, dword ptr [ebp + 14h]
        shl esi, 14h
        and eax, 0fffffh
        xor esi, eax
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [eax + 4], esi
        mov dword ptr [eax], ecx
        xor eax, eax
        pop esi
        pop ebp
        ret
    }
}
