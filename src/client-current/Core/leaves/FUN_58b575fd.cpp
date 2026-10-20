// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B575FD .. +0x13 bytes.
extern "C" __declspec(naked) void FUN_58b575fd() {
    __asm {
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 87 F6: xchg esi, esi
        __asm _emit 0x87
        __asm _emit 0xf6
        ; Exact mapped bytes 9C: pushfd
        __asm _emit 0x9c
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 66 0F CF: bswap di
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xcf
        ; Exact mapped bytes 8B FE: mov edi, esi
        __asm _emit 0x8b
        __asm _emit 0xfe
        ; Exact mapped bytes 8B FA: mov edi, edx
        __asm _emit 0x8b
        __asm _emit 0xfa
        ; Exact mapped bytes E9 D1 A1 FA FF: jmp 0x58b017e1
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0xa1
        __asm _emit 0xfa
        __asm _emit 0xff
    }
}
