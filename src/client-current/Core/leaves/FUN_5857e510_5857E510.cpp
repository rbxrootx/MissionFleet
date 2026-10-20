// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857E510 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_5857e510_5857E510() {
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
        push 80011108h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5E E4 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xe4
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
