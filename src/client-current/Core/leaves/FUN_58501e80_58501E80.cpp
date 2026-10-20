// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58501E80 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_58501e80_58501E80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6F 13 FA FF: call 0x584a3200
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x13
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 74 60 F8 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x60
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3B F6 FF FF: call 0x585014e0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
