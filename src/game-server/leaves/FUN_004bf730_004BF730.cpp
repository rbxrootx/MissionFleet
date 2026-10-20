// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BF730 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_004bf730_004BF730() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push 0
        push 0
        push 0
        push 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 21 5C 00 00: call 0x4c5370
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 D1 FE FF FF: call 0x4bf630
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov esp, ebp
        pop ebp
        ret
    }
}
