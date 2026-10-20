// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585EA060 .. +0xBF bytes.
extern "C" __declspec(naked) void FUN_585ea060_585EA060() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 598h]
        or ecx, 80h
        xor ecx, 80h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 598h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 598h]
        or ecx, 100h
        xor ecx, 100h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 598h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 598h]
        or ecx, 800h
        xor ecx, 800h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 598h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 598h]
        or ecx, 1000h
        xor ecx, 1000h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 598h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 598h]
        or ecx, 200h
        xor ecx, 200h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 598h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 598h]
        or ecx, 400h
        xor ecx, 400h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 598h], ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
