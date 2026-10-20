// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588B4950 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_588b4950() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 CD 5E F0 FF: call 0x587ba830
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x5e
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, 1
        ; Exact mapped bytes 66 89 8E 9C 01 00 00: mov word ptr [esi + 0x19c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
