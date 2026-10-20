// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004045E7 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_004045e7_004045E7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], 43c644h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 140h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 07 93 02 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov esp, ebp
        pop ebp
        ret
    }
}
