// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5880FC20 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_5880fc20() {
    __asm {
        push esi
        lea esi, [ecx + 6e4h]
        push esi
        ; Exact mapped bytes E8 43 D6 FF FF: call 0x5880d270
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 1c8h
        push esi
        ; Exact mapped bytes E8 12 9E FA FF: call 0x587b9a50
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x9e
        __asm _emit 0xfa
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
