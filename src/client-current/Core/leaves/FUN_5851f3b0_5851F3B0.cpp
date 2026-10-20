// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851F3B0 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_5851f3b0_5851F3B0() {
    __asm {
        push ebp
        mov ebp, esp
        movzx eax, byte ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 EB 7E F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x7e
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        push eax
        ; Exact mapped bytes E8 F2 FD FF FF: call 0x5851f1c0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        pop ebp
        ret
    }
}
