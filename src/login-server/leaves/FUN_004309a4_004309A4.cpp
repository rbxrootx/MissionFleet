// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004309A4 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_004309a4_004309A4() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 60 D8 FF FF: call 0x42e20c
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esp + 0ch], 0
        ; Exact mapped bytes 75 03: jne 0x4309b6
        __asm _emit 0x75
        __asm _emit 0x03
        and ah, 0fdh
        push eax
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 32 D8 FF FF: call 0x42e1f2
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push dword ptr [esp + 14h]
        ; Exact mapped bytes FF 15 10 C4 43 00: call dword ptr [0x43c410]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
