// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00438991 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_00438991_00438991() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov esi, esp
        ; Exact mapped bytes A1 48 2F 5D 00: mov eax, dword ptr [0x5d2f48]
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 4C 24 5E 00: call dword ptr [0x5e244c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 2B FE 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xfe
        __asm _emit 0x06
        __asm _emit 0x00
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 20 FE 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
