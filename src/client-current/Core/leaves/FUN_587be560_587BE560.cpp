// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BE560 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_587be560_587BE560() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes A1 1C 5F 96 58: mov eax, dword ptr [0x58965f1c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes FF 15 80 44 89 58: call dword ptr [0x58894480]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        or edx, 2
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 68h], edx
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 34h]
        mov esp, ebp
        pop ebp
        ret
    }
}
