// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857EAF0 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_5857eaf0_5857EAF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 4]
        shl eax, 10h
        movzx ecx, word ptr [ebp + 8]
        or eax, ecx
        mov dword ptr [ebp - 4], eax
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        add eax, 1
        push eax
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 8001040ah
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5A DE 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xde
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
