// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042DF3A .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_0042df3a_0042DF3A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov esi, esp
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 AC B7 68 00: call dword ptr [0x68b7ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 94 6E 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x6e
        __asm _emit 0x03
        __asm _emit 0x00
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 89 6E 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x6e
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
