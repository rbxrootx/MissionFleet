// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879B3B0 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_5879b3b0() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8D 4E 08: lea ecx, [esi + 8]
        __asm _emit 0x8d
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes C7 06 18 73 8B 58: mov dword ptr [esi], 0x588b7318
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x18
        __asm _emit 0x73
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes E8 BF DB FF FF: call 0x58798f80
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 06 00 73 8B 58: mov dword ptr [esi], 0x588b7300
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x73
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
