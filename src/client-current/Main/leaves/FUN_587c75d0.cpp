// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C75D0 .. +0xE bytes.
extern "C" __declspec(naked) void FUN_587c75d0() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes E8 F8 FD FF FF: call 0x587c73d0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 46 04 01: mov byte ptr [esi + 4], 1
        __asm _emit 0xc6
        __asm _emit 0x46
        __asm _emit 0x04
        __asm _emit 0x01
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
