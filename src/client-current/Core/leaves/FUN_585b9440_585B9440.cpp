// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B9440 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_585b9440_585B9440() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 C4 DA EC FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xda
        __asm _emit 0xec
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4
        push ecx
        ; Exact mapped bytes E8 B5 DA EC FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xda
        __asm _emit 0xec
        __asm _emit 0xff
        add esp, 4
        push 1
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 83 A2 EE FF: call 0x584a36f0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 0ch
        pop ebp
        ret
    }
}
