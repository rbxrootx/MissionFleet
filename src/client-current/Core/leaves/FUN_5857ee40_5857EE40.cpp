// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857EE40 .. +0xBA bytes.
extern "C" __declspec(naked) void FUN_5857ee40_5857EE40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 10h], ecx
        push 1
        ; Exact mapped bytes 8B 0D 48 06 96 58: mov ecx, dword ptr [0x58960648]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BA 68 06 00: call 0x585e5710
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x00
        push 4
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 2B DA 2C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xda
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 14h], 4
        push 4
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 8]
        push eax
        ; Exact mapped bytes E8 12 DA 2C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xda
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        movzx ecx, word ptr [ebp + 14h]
        cmp ecx, 0ffh
        ; Exact mapped bytes 75 20: jne 0x5857eead
        __asm _emit 0x75
        __asm _emit 0x20
        push 0
        push 2
        lea edx, [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        push 8001c005h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E6 DA 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xda
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 47: jmp 0x5857eef4
        __asm _emit 0xeb
        __asm _emit 0x47
        xor edx, edx
        mov dword ptr [ebp - 4], edx
        push 2
        lea eax, [ebp + 10h]
        push eax
        lea ecx, [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 CF D9 2C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xd9
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        push 2
        lea edx, [ebp + 14h]
        push edx
        lea eax, [ebp - 2]
        push eax
        ; Exact mapped bytes E8 BD D9 2C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xd9
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        push 0
        push 4
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        push 8001c005h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9D DA 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xda
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
