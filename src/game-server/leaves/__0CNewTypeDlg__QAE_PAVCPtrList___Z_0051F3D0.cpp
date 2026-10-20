// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051F3D0 .. +0x3B bytes.
extern "C" __declspec(naked) void __0CNewTypeDlg__QAE_PAVCPtrList___Z_0051F3D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        push 7801h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E1 10 FD FF: call 0x4f04c7
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x10
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 587b20h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 5ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 60h], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
