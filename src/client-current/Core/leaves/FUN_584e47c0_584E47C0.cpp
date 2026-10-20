// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E47C0 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_584e47c0_584E47C0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A1 FF FF FF: call 0x584e4770
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A8 02 00 00: call 0x584e4a80
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 08: jne 0x584e47e8
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 68h]
        ; Exact mapped bytes EB 06: jmp 0x584e47ee
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 64h]
        mov esp, ebp
        pop ebp
        ret
    }
}
