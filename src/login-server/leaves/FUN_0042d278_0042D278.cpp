// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D278 .. +0x20 bytes.
extern "C" __declspec(naked) void FUN_0042d278_0042D278() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4E 14: mov ecx, dword ptr [esi + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x14
        ; Exact mapped bytes 89 7E 0C: mov dword ptr [esi + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x0c
        ; Exact mapped bytes 89 7E 10: mov dword ptr [esi + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x10
        ; Exact mapped bytes 89 7E 08: mov dword ptr [esi + 8], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x08
        ; Exact mapped bytes 89 7E 04: mov dword ptr [esi + 4], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x04
        ; Exact mapped bytes E8 5D 03 00 00: call 0x42d5ef
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 7E 14: mov dword ptr [esi + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x14
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
