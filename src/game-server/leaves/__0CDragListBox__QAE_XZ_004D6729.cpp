// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D6729 .. +0x29 bytes.
extern "C" __declspec(naked) void __0CDragListBox__QAE_XZ_004D6729() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 49 81 06 00: call 0x53e881
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x81
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 58369ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3ch], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
