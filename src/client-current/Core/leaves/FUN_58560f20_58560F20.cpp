// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58560F20 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_58560f20_58560F20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        push 0f4241h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7A 01 00 00: call 0x585610b0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0B ED FF FF: call 0x5855fc50
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
