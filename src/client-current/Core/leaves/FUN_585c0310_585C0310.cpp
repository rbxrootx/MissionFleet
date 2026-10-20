// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585C0310 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_585c0310_585C0310() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10d0h]
        xor ecx, 55555555h
        add ecx, dword ptr [ebp + 8]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10d0h], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
