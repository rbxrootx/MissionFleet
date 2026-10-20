// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045FA80 .. +0x21 bytes.
extern "C" __declspec(naked) void __0CTypeLibCacheMap__QAE_XZ_0045FA80() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0ah
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AF 7B 06 00: call 0x4c7640
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x7b
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 63ae6ch
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
