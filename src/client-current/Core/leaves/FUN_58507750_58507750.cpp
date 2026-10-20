// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58507750 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_58507750_58507750() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        add edx, dword ptr [ecx + 8]
        mov esi, dword ptr [eax + 4]
        adc esi, dword ptr [ecx + 0ch]
        mov eax, edx
        mov edx, esi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
