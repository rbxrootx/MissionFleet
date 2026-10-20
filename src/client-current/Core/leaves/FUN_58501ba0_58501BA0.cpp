// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58501BA0 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_58501ba0_58501BA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 1]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        movzx eax, byte ptr [ebp - 2]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 1C F4 F9 FF: call 0x584a0fe0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xf4
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 13 0D 00 00: call 0x585028e0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
