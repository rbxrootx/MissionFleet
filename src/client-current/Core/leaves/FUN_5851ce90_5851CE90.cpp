// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851CE90 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_5851ce90_5851CE90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes A1 F8 72 94 58: mov eax, dword ptr [0x589472f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x72
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 55 B8: call dword ptr [ebp - 0x48]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb8
        mov dword ptr [ebp - 44h], eax
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 75 05: jne 0x5851cebd
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 44h]
        ; Exact mapped bytes EB 3A: jmp 0x5851cef7
        __asm _emit 0xeb
        __asm _emit 0x3a
        push 3ch
        push 0
        lea edx, [ebp - 40h]
        push edx
        ; Exact mapped bytes E8 46 FF 32 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 40h]
        push eax
        push 3ch
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        ; Exact mapped bytes FF 15 9C 40 89 58: call dword ptr [0x5889409c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x5851cee6
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 44h]
        ; Exact mapped bytes EB 11: jmp 0x5851cef7
        __asm _emit 0xeb
        __asm _emit 0x11
        mov dword ptr [ebp - 40h], 0fffffff4h
        lea edx, [ebp - 40h]
        push edx
        ; Exact mapped bytes FF 15 8C 40 89 58: call dword ptr [0x5889408c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 4F 41 31 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x41
        __asm _emit 0x31
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
