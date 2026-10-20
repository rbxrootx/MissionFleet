// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E0D40 .. +0x13E bytes.
extern "C" __declspec(naked) void FUN_586e0d40_586E0D40() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 110h], 0d0d0d0h
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 110h], 40ff40h
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 110h], 0ff5454h
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 110h], 0ffffffh
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 110h], 0ffffh
        mov eax, 4
        imul ecx, eax, 5
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 110h], 0ffffffh
        mov eax, 4
        imul ecx, eax, 6
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 110h], 0ffffffh
        mov eax, 4
        imul ecx, eax, 7
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 110h], 83add7h
        mov eax, 4
        shl eax, 3
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 110h], 0ffffffh
        mov edx, 4
        imul eax, edx, 9
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 110h], 0a0a0eeh
        mov edx, 4
        imul eax, edx, 0ah
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 110h], 0ffcc66h
        mov edx, 4
        imul eax, edx, 0bh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 110h], 0f89a9ah
        mov edx, 4
        imul eax, edx, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 110h], 0dda0ddh
        mov edx, 4
        imul eax, edx, 0dh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 110h], 0cc66cch
        mov esp, ebp
        pop ebp
        ret
    }
}
