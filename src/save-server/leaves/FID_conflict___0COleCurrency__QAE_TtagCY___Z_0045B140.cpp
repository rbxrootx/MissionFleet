// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045B140 .. +0x28 bytes.
extern "C" __declspec(naked) void FID_conflict___0COleCurrency__QAE_TtagCY___Z_0045B140() {
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
        ; Exact mapped bytes E8 53 01 0F 00: call 0x54b2b2
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x0f
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
