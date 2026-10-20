// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00433665 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_00433665_00433665() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 11ch
        and dword ptr [ebp - 4], 0
        lea eax, [ebp - 11ch]
        push eax
        ; Exact mapped bytes E8 16 00 00 00: call 0x433694
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        lea eax, [ebp - 10ah]
        push eax
        ; Exact mapped bytes E8 8C A5 FF FF: call 0x42dc19
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
