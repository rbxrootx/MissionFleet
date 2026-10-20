// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58695770 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_58695770_58695770() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 75 43: jne 0x586957c2
        __asm _emit 0x75
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 9ch]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 10: jne 0x5869579d
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 23: jmp 0x586957c0
        __asm _emit 0xeb
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 98h]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 15: jne 0x586957c0
        __asm _emit 0x75
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 1f40h], -1
        ; Exact mapped bytes 74 09: je 0x586957c0
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 71 1A 00 00: call 0x58697230
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 57: jmp 0x58695819
        __asm _emit 0xeb
        __asm _emit 0x57
        cmp dword ptr [ebp + 0ch], 3
        ; Exact mapped bytes 75 3B: jne 0x58695803
        __asm _emit 0x75
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 9ch]
        ; Exact mapped bytes 75 2B: jne 0x58695801
        __asm _emit 0x75
        __asm _emit 0x2b
        push 588b02b4h
        ; Exact mapped bytes E8 10 C8 E8 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xc8
        __asm _emit 0xe8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 32h
        push 0c8h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F0 F7 E3 FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xf7
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 16: jmp 0x58695819
        __asm _emit 0xeb
        __asm _emit 0x16
        cmp dword ptr [ebp + 0ch], 4
        ; Exact mapped bytes 75 10: jne 0x58695819
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 E7 E3 FF: call 0x584d4000
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
