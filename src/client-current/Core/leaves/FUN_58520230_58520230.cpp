// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58520230 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_58520230_58520230() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ch]
        mov edx, dword ptr [ecx]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ch]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        mov ecx, dword ptr [eax]
        sub ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
