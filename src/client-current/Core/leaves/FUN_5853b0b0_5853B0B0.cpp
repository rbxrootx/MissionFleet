// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5853B0B0 .. +0x10D bytes.
extern "C" __declspec(naked) void FUN_5853b0b0_5853B0B0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a75a8h
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 4], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 4], 2
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 4], 4
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 4], 7
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 4], 8
        mov ecx, 4
        imul edx, ecx, 5
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 4], 9
        mov ecx, 4
        imul edx, ecx, 6
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 4], 0ch
        mov ecx, 4
        imul edx, ecx, 7
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 4], 0eh
        mov ecx, 4
        shl ecx, 3
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 4], 12h
        mov eax, 4
        imul ecx, eax, 9
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 4], 7d0h
        mov eax, 4
        imul ecx, eax, 0ah
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 4], 7d1h
        mov eax, 4
        imul ecx, eax, 0bh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 4], 0
        mov eax, 4
        imul ecx, eax, 0ch
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 4], 0bb8h
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
