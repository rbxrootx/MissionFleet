// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00445383 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_00445383_00445383() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov esi, esp
        push 0
        push 0
        push 466h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 B0 28 5E 00: call dword ptr [0x5e28b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 32 34 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, 1
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 22 34 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
