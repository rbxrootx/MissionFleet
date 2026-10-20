// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00409E90 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_00409e90_00409E90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 44h]
        mov ecx, 11h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 54: jne 0x409f07
        __asm _emit 0x75
        __asm _emit 0x54
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [ebp + 908h]
        ; Exact mapped bytes 75 49: jne 0x409f07
        __asm _emit 0x75
        __asm _emit 0x49
        mov esi, esp
        mov ecx, dword ptr [ebp + 90ch]
        push ecx
        lea edx, [ebp + 8dch]
        push edx
        ; Exact mapped bytes FF 15 E0 B7 68 00: call dword ptr [0x68b7e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 15 AF 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 28: jne 0x409f07
        __asm _emit 0x75
        __asm _emit 0x28
        mov esi, esp
        mov eax, dword ptr [ebp + 910h]
        push eax
        lea ecx, [ebp + 8ch]
        push ecx
        ; Exact mapped bytes FF 15 E0 B7 68 00: call dword ptr [0x68b7e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F4 AE 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xae
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x409f07
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x409f09
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 DA AE 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xae
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 09: ret 0x90c
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x09
    }
}
