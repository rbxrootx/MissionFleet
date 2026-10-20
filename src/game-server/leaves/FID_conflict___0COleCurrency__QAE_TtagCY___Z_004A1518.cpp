// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A1518 .. +0x28 bytes.
extern "C" __declspec(naked) void FID_conflict___0COleCurrency__QAE_TtagCY___Z_004A1518() {
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
        ; Exact mapped bytes E8 0D B8 0A 00: call 0x54cd44
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x0a
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
