// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58790530 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_58790530_58790530() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1F 02 00 00: call 0x58790760
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        movzx eax, word ptr [ebp + 0ch]
        shl eax, 2
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        movzx edx, word ptr [ebp + 0ch]
        push edx
        movzx eax, byte ptr [ebp + 8]
        push eax
        push 80015103h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 27 C4 09 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xc4
        __asm _emit 0x09
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
