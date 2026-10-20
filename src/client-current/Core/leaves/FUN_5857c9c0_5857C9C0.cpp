// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857C9C0 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_5857c9c0_5857C9C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        movzx eax, word ptr [ebp + 0ch]
        shl eax, 10h
        movzx ecx, word ptr [ebp + 10h]
        or eax, ecx
        mov dword ptr [ebp - 4], eax
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 80015000h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9C FF 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
