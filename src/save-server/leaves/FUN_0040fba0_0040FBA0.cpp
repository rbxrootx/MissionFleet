// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040FBA0 .. +0x9D bytes.
extern "C" __declspec(naked) void FUN_0040fba0_0040FBA0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58ac09h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0a0h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 0ach]
        mov ecx, 28h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 0fff0h
        cmp eax, 10h
        ; Exact mapped bytes 75 28: jne 0x40fc0d
        __asm _emit 0x75
        __asm _emit 0x28
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 3A 1A FF FF: call 0x401627
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 5C EA 0B 00: call 0x4ce658
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xea
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 34 1B FF FF: call 0x40173f
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x1b
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 10: jmp 0x40fc1d
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F2 D8 11 00: call 0x52d50f
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xd8
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 0ach
        cmp ebp, esp
        ; Exact mapped bytes E8 B9 51 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x51
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
