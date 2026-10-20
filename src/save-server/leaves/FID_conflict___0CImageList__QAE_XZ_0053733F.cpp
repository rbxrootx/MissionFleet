// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053733F .. +0x29 bytes.
extern "C" __declspec(naked) void FID_conflict___0CImageList__QAE_XZ_0053733F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 42 D4 FE FF: call 0x524790
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 636738h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
