// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58570830 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_58570830_58570830() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 21edch
        push eax
        push 18h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 21ec4h
        push ecx
        ; Exact mapped bytes E8 2F 39 24 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x39
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ret
    }
}
