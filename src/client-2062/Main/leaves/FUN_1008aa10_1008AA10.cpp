// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1008AA10 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_1008aa10_1008AA10() {
    __asm {
        mov edx, dword ptr [esp + 4]
        mov byte ptr [ecx + 2e5h], 0
        lea eax, [ecx + 2ech]
        mov ecx, dword ptr [ecx + 2e8h]
        push eax
        lea eax, [edx + ecx*8 + 5ch]
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 48 25 FC FF: call 0x1004cf80
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x25
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
