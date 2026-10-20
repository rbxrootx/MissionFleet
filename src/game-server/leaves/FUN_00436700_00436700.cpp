// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00436700 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_00436700_00436700() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C2 20 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0d8ch], eax
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 AE 20 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
