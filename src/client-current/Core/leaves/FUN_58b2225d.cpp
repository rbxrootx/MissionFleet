// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B2225D .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_58b2225d() {
    __asm {
        ; Exact mapped bytes 8D 14 08: lea edx, [eax + ecx]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x08
        ; Exact mapped bytes 8D 34 13: lea esi, [ebx + edx]
        __asm _emit 0x8d
        __asm _emit 0x34
        __asm _emit 0x13
        ; Exact mapped bytes 8D 7E 04: lea edi, [esi + 4]
        __asm _emit 0x8d
        __asm _emit 0x7e
        __asm _emit 0x04
        ; Exact mapped bytes F8: clc
        __asm _emit 0xf8
        ; Exact mapped bytes 3B 7D 08: cmp edi, dword ptr [ebp + 8]
        __asm _emit 0x3b
        __asm _emit 0x7d
        __asm _emit 0x08
        ; Exact mapped bytes 0F 83 16 61 3A 00: jae 0x58ec8386
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x16
        __asm _emit 0x61
        __asm _emit 0x3a
        __asm _emit 0x00
        ; Exact mapped bytes 80 3A 56: cmp byte ptr [edx], 0x56
        __asm _emit 0x80
        __asm _emit 0x3a
        __asm _emit 0x56
        ; Exact mapped bytes E9 64 DA 37 00: jmp 0x58e9fcdc
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0xda
        __asm _emit 0x37
        __asm _emit 0x00
    }
}
