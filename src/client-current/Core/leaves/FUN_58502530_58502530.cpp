// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58502530 .. +0xAA bytes.
extern "C" __declspec(naked) void FUN_58502530_58502530() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 10h], 588a38a0h
        push 0
        lea eax, [ebp - 4]
        push eax
        push 0
        push 2
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 80000001h
        ; Exact mapped bytes FF 15 28 40 89 58: call dword ptr [0x58894028]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x5850256b
        __asm _emit 0x74
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 6B: jmp 0x585025d6
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov dword ptr [ebp - 8], 588a3928h
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 15 6D 35 00: call 0x58859290
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x6d
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 4
        lea eax, [eax + eax + 2]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F3 07 00 00: call 0x58502d80
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        push 1
        push 0
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes FF 15 38 40 89 58: call dword ptr [0x58894038]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 64 40 89 58: call dword ptr [0x58894064]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 09: jne 0x585025cc
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 07: jmp 0x585025d3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov al, byte ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
