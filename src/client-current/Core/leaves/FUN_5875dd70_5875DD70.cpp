// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875DD70 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_5875dd70_5875DD70() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6364h]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 6364h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6364h]
        add ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 6364h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6364h]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 6364h], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
