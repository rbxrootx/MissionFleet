// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857E840 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_5857e840_5857E840() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 80013124h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2E E1 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xe1
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
