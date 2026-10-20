// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C8BB0 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_586c8bb0_586C8BB0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 70 F8 FE FF: call 0x586b8430
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        ; Exact mapped bytes E8 27 E1 DB FF: call 0x58486cf0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xe1
        __asm _emit 0xdb
        __asm _emit 0xff
        add esp, 4
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
