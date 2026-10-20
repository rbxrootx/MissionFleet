// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58715CF0 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_58715cf0_58715CF0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 124h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 120h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
