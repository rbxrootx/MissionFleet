// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A80CE .. +0x2C bytes.
extern "C" __declspec(naked) void __0COleDocIPFrameWnd__QAE_XZ_004A80CE() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 47 C8 0B 00: call 0x564924
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xc8
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 58ae24h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 12ch], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
