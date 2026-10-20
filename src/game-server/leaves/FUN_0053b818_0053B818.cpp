// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053B818 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_0053b818_0053B818() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 1A 9D FF FF: call 0x535542
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 D8 27 5E 00: call dword ptr [0x5e27d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 82 FF FB FF: call 0x4fb7ba
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
