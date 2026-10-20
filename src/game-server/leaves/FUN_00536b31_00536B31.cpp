// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00536B31 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_00536b31_00536B31() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EA FB FF FF: call 0x53672a
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 8C 21 5E 00: call dword ptr [0x5e218c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BA D1 FC FF: call 0x503d0a
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xd1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
