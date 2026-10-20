// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E3B50 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_584e3b50_584E3B50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax*4 + 5894c930h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx*4 + 589490f0h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 8]
        imul eax, dword ptr [ecx]
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        imul ecx, dword ptr [edx + 4]
        sub eax, ecx
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        imul ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 8]
        imul eax, dword ptr [edx + 4]
        add eax, ecx
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 4], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
