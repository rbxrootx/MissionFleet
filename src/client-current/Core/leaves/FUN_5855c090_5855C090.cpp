// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5855C090 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_5855c090_5855C090() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 2ch], ecx
        mov edx, 7
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 28: mov word ptr [eax + 0x28], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x28
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
