// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043699D .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_0043699d_0043699D() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes FF 74 24 08: push dword ptr [esp + 8]
        __asm _emit 0xff
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes FF 15 C8 C1 43 00: call dword ptr [0x43c1c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 05: jne 0x4369b5
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 6C 63 FF FF: call 0x42cd21
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
