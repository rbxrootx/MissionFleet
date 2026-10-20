// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58506980 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_58506980_58506980() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 1
        push 588a3bd8h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EA 0D F8 FF: call 0x58487780
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a3bd0h
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
