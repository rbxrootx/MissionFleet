// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F5A848 .. +0x14 bytes.
extern "C" __declspec(naked) void FUN_58f5a848() {
    __asm {
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 66 D3 D8: rcr ax, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xd8
        ; Exact mapped bytes D1 FE: sar esi, 1
        __asm _emit 0xd1
        __asm _emit 0xfe
        ; Exact mapped bytes 0F AB D0: bts eax, edx
        __asm _emit 0x0f
        __asm _emit 0xab
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 04 B2: mov eax, dword ptr [edx + esi*4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0xb2
        ; Exact mapped bytes F9: stc
        __asm _emit 0xf9
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes E9 78 D1 BF FF: jmp 0x58b579d4
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0xd1
        __asm _emit 0xbf
        __asm _emit 0xff
    }
}
