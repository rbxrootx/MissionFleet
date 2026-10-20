// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041199A .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_0041199a_0041199A() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 6E 0D 02 00: call 0x432710
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [esi + 0ch], eax
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [esi + 10h], eax
        ; Exact mapped bytes 66 8B 44 24 08: mov ax, word ptr [esp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 46 08: mov word ptr [esi + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        mov dword ptr [esi], 43d580h
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
