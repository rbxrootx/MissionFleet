// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AC0BF .. +0x29 bytes.
extern "C" __declspec(naked) void __0CDragListBox__QAE_XZ_004AC0BF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 13 22 08 00: call 0x52e2e1
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x22
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 635be4h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3ch], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
