// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00415F48 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_00415f48_00415F48() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 4ch]
        ; Exact mapped bytes E8 9A 8E 03 00: call 0x44edff
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x8e
        __asm _emit 0x03
        __asm _emit 0x00
        push 0
        push 48ch
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0b0h
        ; Exact mapped bytes E8 96 D9 FE FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xd9
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 5C 28 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x28
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
