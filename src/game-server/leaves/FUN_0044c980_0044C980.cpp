// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044C980 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_0044c980_0044C980() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 CC 39 FF FF: call 0x440360
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 90 FF FF FF: call 0x44c930
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 36 BE 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xbe
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
