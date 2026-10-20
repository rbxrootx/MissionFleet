// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58505E80 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_58505e80_58505E80() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 61 0C 00 00: call 0x58506af0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a3cc4h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 38h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3ch], 0
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 40h], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
