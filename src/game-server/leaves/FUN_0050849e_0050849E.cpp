// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050849E .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_0050849e_0050849E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0d7h
        push 5cb374h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 A8 2C FF FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
