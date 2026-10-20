// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58AFE970 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_58afe970_58AFE970() {
    __asm {
        push eax
        movzx eax, dx
        lahf
        ; Exact mapped bytes 66 F7 D0: not ax
        __asm _emit 0x66
        __asm _emit 0xf7
        __asm _emit 0xd0
        push edi
        cwde
        ; Exact mapped bytes A1 C8 35 D1 58: mov eax, dword ptr [0x58d135c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x35
        __asm _emit 0xd1
        __asm _emit 0x58
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop esi
        ; Exact mapped bytes 0F BF D9: movsx ebx, cx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd9
        pop ebx
        ; Exact mapped bytes 66 87 FF: xchg di, di
        __asm _emit 0x66
        __asm _emit 0x87
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF FC: movsx edi, sp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xfc
        bswap edi
        pop edi
        ; Exact mapped bytes E9 8D 9F 02 00: jmp 0x58b28921
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x9f
        __asm _emit 0x02
        __asm _emit 0x00
    }
}
