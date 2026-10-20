// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58563B30 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_58563b30_58563B30() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 130h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8h]
        lea ecx, [ecx + eax + 384h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0e4h], ecx
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 0e4h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0e4h], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0e4h], 0
        ; Exact mapped bytes 7D 17: jge 0x58563b96
        __asm _emit 0x7d
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e4h]
        add eax, 0e10h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e4h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e4h]
        mov esp, ebp
        pop ebp
        ret
    }
}
