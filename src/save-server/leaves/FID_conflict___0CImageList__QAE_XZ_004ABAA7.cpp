// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ABAA7 .. +0x29 bytes.
extern "C" __declspec(naked) void FID_conflict___0CImageList__QAE_XZ_004ABAA7() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DA 8C 07 00: call 0x524790
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 636614h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
