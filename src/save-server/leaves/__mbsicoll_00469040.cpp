// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00469040 .. +0x40 bytes.
extern "C" __declspec(naked) void __mbsicoll_00469040() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes A1 00 8B 68 00: mov eax, dword ptr [0x688b00]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push -1
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push -1
        mov edx, dword ptr [ebp + 8]
        push edx
        push 1
        ; Exact mapped bytes A1 A4 8D 68 00: mov eax, dword ptr [0x688da4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 AD D2 00 00: call 0x476310
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 07: jne 0x469076
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 7fffffffh
        ; Exact mapped bytes EB 06: jmp 0x46907c
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 4]
        sub eax, 2
        mov esp, ebp
        pop ebp
        ret
    }
}
