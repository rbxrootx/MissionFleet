// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857EAC0 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_5857eac0_5857EAC0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        push 0
        push 80011032h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B0 DE 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xde
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
