// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58846894 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_58846894_58846894() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        add eax, 8
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [eax]
        sub eax, dword ptr [ecx]
        sar eax, 2
        mov esp, ebp
        pop ebp
        ret
    }
}
