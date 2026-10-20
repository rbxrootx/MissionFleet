// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004646DE .. +0x2C bytes.
extern "C" __declspec(naked) void __0COleDocIPFrameWnd__QAE_XZ_004646DE() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 37 61 10 00: call 0x56a824
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x61
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 63d44ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 12ch], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
