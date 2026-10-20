// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E5620 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_584e5620_584E5620() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2F 07 FA FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x07
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 27 00 00 00: call 0x584e5660
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0a0h
        push 52h
        push 13h
        push 71h
        push 7fh
        push -1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 10 01 00 00: call 0x584e5760
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F6 9E FB FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x9e
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
