// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FB3F3 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_004fb3f3_004FB3F3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E8 42 A0 04 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 0
        ; Exact mapped bytes E8 CF C8 04 00: call 0x547cda
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1ch
        ; Exact mapped bytes E8 36 01 00 00: call 0x4fb550
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 EB C9 04 00: call 0x547e0c
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xc9
        __asm _emit 0x04
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
