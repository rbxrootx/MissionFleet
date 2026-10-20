// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58570860 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_58570860_58570860() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 0d8h
        push eax
        push 18h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0c0h
        push ecx
        ; Exact mapped bytes E8 FF 38 24 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x38
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ret
    }
}
