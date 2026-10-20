// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857CBA0 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_5857cba0_5857CBA0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        push 0
        push 0
        movzx eax, word ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        shl ecx, 10h
        or ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C8 FD 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xfd
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
