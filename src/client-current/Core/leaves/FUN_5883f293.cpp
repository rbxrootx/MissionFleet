// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883F293 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_5883f293() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 68 68 04 00 00: push 0x468
        __asm _emit 0x68
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 6D DB 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
