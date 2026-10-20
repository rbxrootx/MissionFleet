// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878FE20 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_5878fe20_5878FE20() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2F 09 00 00: call 0x58790760
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        push 0
        push 80015101h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 CB 09 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xcb
        __asm _emit 0x09
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
