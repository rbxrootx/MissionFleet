// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857E0D0 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_5857e0d0_5857E0D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        movzx eax, word ptr [ebp + 8]
        shl eax, 10h
        movzx ecx, word ptr [ebp + 0ch]
        or eax, ecx
        mov dword ptr [ebp - 4], eax
        push 0
        mov edx, dword ptr [ebp + 14h]
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        push 8001310ah
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 81 E8 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xe8
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
