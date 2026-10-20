// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C46A0 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_584c46a0_584C46A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 64h], ecx
        ; Exact mapped bytes 7D 0F: jge 0x584c46c7
        __asm _emit 0x7d
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 64h], ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
