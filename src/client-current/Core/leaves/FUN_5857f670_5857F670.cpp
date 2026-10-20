// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857F670 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_5857f670_5857F670() {
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
        movzx ecx, word ptr [ebp + 8]
        push ecx
        push 8002f006h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FD D2 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xd2
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
