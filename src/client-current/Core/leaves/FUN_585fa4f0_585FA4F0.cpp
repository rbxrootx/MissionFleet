// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585FA4F0 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_585fa4f0_585FA4F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        imul ecx, dword ptr [eax + 908h], 1eh
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 90ch], 14h
        add ecx, eax
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 904h], 0ah
        add ecx, eax
        imul eax, ecx, 64h
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        div dword ptr [ecx + 900h]
        mov esp, ebp
        pop ebp
        ret
    }
}
