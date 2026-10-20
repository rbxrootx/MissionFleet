// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5861DC60 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_5861dc60_5861DC60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0dch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2F 31 04 00: call 0x58660db0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x31
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d8h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 67 A7 04 00: call 0x58668400
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xa7
        __asm _emit 0x04
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
