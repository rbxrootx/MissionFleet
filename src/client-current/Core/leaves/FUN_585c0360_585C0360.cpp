// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585C0360 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_585c0360_585C0360() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 21e80h]
        xor ecx, dword ptr [edx + eax + 21e68h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 21e80h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21e80h]
        add ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 21e80h], ecx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 21e80h]
        xor ecx, dword ptr [edx + eax + 21e68h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 21e80h], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
