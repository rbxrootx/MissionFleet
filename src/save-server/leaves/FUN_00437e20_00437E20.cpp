// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437E20 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_00437e20_00437E20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov al, byte ptr [ebp - 4]
        mov byte ptr [edx], al
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        sub edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4], edx
        mov esp, ebp
        pop ebp
        ret
    }
}
