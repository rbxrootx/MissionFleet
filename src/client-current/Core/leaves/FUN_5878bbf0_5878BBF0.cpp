// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878BBF0 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_5878bbf0_5878BBF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        lea eax, [ebp + 8]
        push eax
        ; Exact mapped bytes E8 81 B6 CF FF: call 0x58487280
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xb6
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 72 B6 CF FF: call 0x58487280
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xb6
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp - 4]
        push edx
        push 0
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 EA 11 0C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x11
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 0ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
