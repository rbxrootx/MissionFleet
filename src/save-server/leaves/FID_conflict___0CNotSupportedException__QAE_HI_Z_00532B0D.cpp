// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00532B0D .. +0x31 bytes.
extern "C" __declspec(naked) void FID_conflict___0CNotSupportedException__QAE_HI_Z_00532B0D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2B 1D FF FF: call 0x52484b
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 636670h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 98h], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
