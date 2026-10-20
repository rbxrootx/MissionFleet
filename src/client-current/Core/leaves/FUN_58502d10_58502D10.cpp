// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58502D10 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_58502d10_58502D10() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 10 EA FF FF: call 0x58501730
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        ; Exact mapped bytes E8 C7 3F F8 FF: call 0x58486cf0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x3f
        __asm _emit 0xf8
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
