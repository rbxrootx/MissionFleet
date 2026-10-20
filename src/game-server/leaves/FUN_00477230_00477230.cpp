// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00477230 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_00477230_00477230() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 3C 00 00 00: call 0x477280
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 90 FF FF FF: call 0x4771e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 86 15 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x15
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
