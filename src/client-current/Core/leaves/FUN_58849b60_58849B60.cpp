// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58849B60 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_58849b60_58849B60() {
    __asm {
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 1af60h], eax
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 1af68h], eax
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ecx + 1af64h], edx
        mov dword ptr [ecx + 1af54h], eax
        mov dword ptr [ecx + 1af58h], edx
        mov dword ptr [ecx + 1af5ch], edx
        mov dword ptr [ecx + 1af6ch], edx
        pop ebp
        ret
    }
}
