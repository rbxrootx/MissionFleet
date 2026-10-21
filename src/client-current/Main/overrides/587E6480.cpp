// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E6480 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_587e6480_segment_00() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B 7C 24 0C: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 8E D8 0B 01 00: mov ecx, dword ptr [esi + 0x10bd8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd8
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 CC 0E 12 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x0e
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E EC 0B 01 00: mov ecx, dword ptr [esi + 0x10bec]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xec
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 C0 0E 12 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x0e
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
