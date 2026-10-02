// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58487680 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_58487680() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EB 00 00 00: call 0x58487780
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 58894cech
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret 4
    }
}
