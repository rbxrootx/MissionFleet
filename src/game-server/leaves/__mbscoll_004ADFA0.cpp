// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ADFA0 .. +0x40 bytes.
extern "C" __declspec(naked) void __mbscoll_004ADFA0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes A1 7C 02 5E 00: mov eax, dword ptr [0x5e027c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        push -1
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push -1
        mov edx, dword ptr [ebp + 8]
        push edx
        push 0
        ; Exact mapped bytes A1 A4 04 5E 00: mov eax, dword ptr [0x5e04a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 2D C8 00 00: call 0x4ba7f0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 07: jne 0x4adfd6
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 7fffffffh
        ; Exact mapped bytes EB 06: jmp 0x4adfdc
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 4]
        sub eax, 2
        mov esp, ebp
        pop ebp
        ret
    }
}
