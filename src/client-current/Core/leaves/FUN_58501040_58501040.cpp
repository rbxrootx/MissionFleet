// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58501040 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_58501040_58501040() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 60 62 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x62
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 15 02 FA FF: call 0x584a1270
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
