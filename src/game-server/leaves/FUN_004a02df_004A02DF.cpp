// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A02DF .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_004a02df_004A02DF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push 0
        ; Exact mapped bytes E8 C4 99 00 00: call 0x4a9cb0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 58 C7 0A 00: call 0x54ca50
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xc7
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DF C6 0A 00: call 0x54c9e0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xc6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
