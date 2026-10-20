// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040A560 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_0040a560_0040A560() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov esi, esp
        push 5a0b60h
        mov eax, dword ptr [ebp - 4]
        add eax, 5dh
        push eax
        ; Exact mapped bytes FF 15 08 22 5E 00: call dword ptr [0x5e2208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 56 E2 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xe2
        __asm _emit 0x09
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        inc eax
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 46 E2 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xe2
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
