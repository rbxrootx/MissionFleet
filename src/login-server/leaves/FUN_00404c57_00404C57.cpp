// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00404C57 .. +0x214 bytes.
extern "C" __declspec(naked) void FUN_00404c57_00404C57() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0d0h
        mov dword ptr [ebp - 0d0h], ecx
        push 0
        push 80h
        push 3
        push 0
        push 0
        push 0c0000000h
        mov eax, dword ptr [ebp - 0d0h]
        add eax, 4
        push eax
        ; Exact mapped bytes FF 15 50 C2 43 00: call dword ptr [0x43c250]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [ebp - 0c4h], eax
        cmp dword ptr [ebp - 0c4h], -1
        ; Exact mapped bytes 0F 84 C7 01 00 00: je 0x404e62
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0d0h]
        mov edx, dword ptr [ecx + 134h]
        add edx, 1
        mov eax, dword ptr [ebp - 0d0h]
        mov dword ptr [eax + 134h], edx
        push 0
        lea ecx, [ebp - 4]
        push ecx
        push 3ch
        mov edx, dword ptr [ebp - 0d0h]
        add edx, 104h
        push edx
        mov eax, dword ptr [ebp - 0c4h]
        push eax
        ; Exact mapped bytes FF 15 4C C2 43 00: call dword ptr [0x43c24c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [ebp - 0cch], 0ffffffffh
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 0c4h]
        push edx
        ; Exact mapped bytes FF 15 48 C2 43 00: call dword ptr [0x43c248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 4]
        push eax
        push 5ch
        lea ecx, [ebp - 0c0h]
        push ecx
        mov edx, dword ptr [ebp - 0c4h]
        push edx
        ; Exact mapped bytes FF 15 54 C2 43 00: call dword ptr [0x43c254]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 60h]
        push ecx
        ; Exact mapped bytes FF 15 5C C2 43 00: call dword ptr [0x43c25c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], 0ffffffffh
        mov dword ptr [ebp - 10h], 0ffffffffh
        mov dword ptr [ebp - 0ch], 0ffffffffh
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 64h], ecx
        push 2
        push 0
        push 0
        mov edx, dword ptr [ebp - 0c4h]
        push edx
        ; Exact mapped bytes FF 15 48 C2 43 00: call dword ptr [0x43c248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [ebp - 0c8h], eax
        push 0
        lea eax, [ebp - 4]
        push eax
        push 60h
        lea ecx, [ebp - 64h]
        push ecx
        mov edx, dword ptr [ebp - 0c4h]
        push edx
        ; Exact mapped bytes FF 15 4C C2 43 00: call dword ptr [0x43c24c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 1B: je 0x404da9
        __asm _emit 0x74
        __asm _emit 0x1b
        push 0
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 0c4h]
        push eax
        ; Exact mapped bytes FF 15 4C C2 43 00: call dword ptr [0x43c24c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], -1
        ; Exact mapped bytes 74 36: je 0x404de5
        __asm _emit 0x74
        __asm _emit 0x36
        push 0
        push 0
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 50h
        push ecx
        mov edx, dword ptr [ebp - 0c4h]
        push edx
        ; Exact mapped bytes FF 15 48 C2 43 00: call dword ptr [0x43c248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 4]
        push eax
        push 4
        lea ecx, [ebp - 0c8h]
        push ecx
        mov edx, dword ptr [ebp - 0c4h]
        push edx
        ; Exact mapped bytes FF 15 4C C2 43 00: call dword ptr [0x43c24c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 34: jmp 0x404e19
        __asm _emit 0xeb
        __asm _emit 0x34
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        add eax, 4ch
        push eax
        mov ecx, dword ptr [ebp - 0c4h]
        push ecx
        ; Exact mapped bytes FF 15 48 C2 43 00: call dword ptr [0x43c248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        lea edx, [ebp - 4]
        push edx
        push 4
        lea eax, [ebp - 0c8h]
        push eax
        mov ecx, dword ptr [ebp - 0c4h]
        push ecx
        ; Exact mapped bytes FF 15 4C C2 43 00: call dword ptr [0x43c24c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        push 0
        mov edx, dword ptr [ebp + 8]
        add edx, 50h
        push edx
        mov eax, dword ptr [ebp - 0c4h]
        push eax
        ; Exact mapped bytes FF 15 48 C2 43 00: call dword ptr [0x43c248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 4]
        push ecx
        push 4
        lea edx, [ebp - 0c8h]
        push edx
        mov eax, dword ptr [ebp - 0c4h]
        push eax
        ; Exact mapped bytes FF 15 4C C2 43 00: call dword ptr [0x43c24c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0c4h]
        push ecx
        ; Exact mapped bytes FF 15 58 C2 43 00: call dword ptr [0x43c258]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes EB 03: jmp 0x404e65
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
