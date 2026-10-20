// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045CC8B .. +0x28 bytes.
extern "C" __declspec(naked) void FID_conflict___0COleCurrency__QAE_TtagCY___Z_0045CC8B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 4], edx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 06 E9 0E 00: call 0x54b5b0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
