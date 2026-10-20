// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58513980 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_58513980_58513980() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d8h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0d8h], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0d8h], 0
        ; Exact mapped bytes 7D 0D: jge 0x585139b5
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0d8h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
