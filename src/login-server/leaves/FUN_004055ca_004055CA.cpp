// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004055CA .. +0xB7 bytes.
extern "C" __declspec(naked) void FUN_004055ca_004055CA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 64h
        mov dword ptr [ebp - 64h], ecx
        push 0
        push 80h
        push 3
        push 0
        push 1
        push 0c0000000h
        mov eax, dword ptr [ebp - 64h]
        add eax, 4
        push eax
        ; Exact mapped bytes FF 15 50 C2 43 00: call dword ptr [0x43c250]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 74 7E: je 0x405679
        __asm _emit 0x74
        __asm _emit 0x7e
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 48 C2 43 00: call dword ptr [0x43c248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 60h]
        push eax
        push 58h
        lea ecx, [ebp - 5ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 54 C2 43 00: call dword ptr [0x43c254]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 75 39: jne 0x405664
        __asm _emit 0x75
        __asm _emit 0x39
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        add ecx, 58h
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 48 C2 43 00: call dword ptr [0x43c248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 4C C2 43 00: call dword ptr [0x43c24c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 58 C2 43 00: call dword ptr [0x43c258]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x405672
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 58 C2 43 00: call dword ptr [0x43c258]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 09: jmp 0x40567b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x40567b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
