// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DA4F3 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_004da4f3_004DA4F3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E8 62 61 06 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x61
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 0
        ; Exact mapped bytes E8 6F 88 06 00: call 0x542d7a
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x88
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1ch
        ; Exact mapped bytes E8 36 01 00 00: call 0x4da650
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 8B 89 06 00: call 0x542eac
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
