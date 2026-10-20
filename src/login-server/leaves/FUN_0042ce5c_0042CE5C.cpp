// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042CE5C .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_0042ce5c_0042CE5C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push esi
        push 28h
        lea eax, [ebp - 28h]
        push 0
        mov esi, ecx
        push eax
        ; Exact mapped bytes E8 6E 1C FF FF: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        add esp, 0ch
        mov dword ptr [ebp - 24h], eax
        lea eax, [ebp - 28h]
        push eax
        push 0
        push 1005h
        mov dword ptr [ebp - 28h], 4
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        pop esi
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
