// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041F5C0 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_0041f5c0_0041F5C0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 3C 00 00 00: call 0x41f610
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 60 FF FF FF: call 0x41f540
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 F6 91 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x91
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
