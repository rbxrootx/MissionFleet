// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005623CC .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_005623cc_005623CC() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 2cch
        push 67c6f0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 7A 7E F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x7e
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1F 04 00 00: call 0x56280d
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
