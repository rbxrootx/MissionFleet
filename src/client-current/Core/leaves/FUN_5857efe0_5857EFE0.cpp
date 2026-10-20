// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857EFE0 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_5857efe0_5857EFE0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 800h
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b4h]
        push ecx
        ; Exact mapped bytes E8 13 DE 2C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xde
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ret
    }
}
