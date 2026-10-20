// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E7960 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_585e7960_585E7960() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 21e80h], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 21e80h]
        xor eax, dword ptr [ecx + edx + 21e68h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 21e80h], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
