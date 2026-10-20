// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58971C7E .. +0x13 bytes.
extern "C" __declspec(naked) void FUN_58971c7e() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes FF 36: push dword ptr [esi]
        __asm _emit 0xff
        __asm _emit 0x36
        ; Exact mapped bytes E8 30 01 00 00: call 0x58971dba
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 36: push dword ptr [esi]
        __asm _emit 0xff
        __asm _emit 0x36
        ; Exact mapped bytes E8 B1 AF 00 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
