// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58501D50 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_58501d50_58501D50() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 50 55 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x55
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B4 FD FF FF: call 0x58501b20
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
