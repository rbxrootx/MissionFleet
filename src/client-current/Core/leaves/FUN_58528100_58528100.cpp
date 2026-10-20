// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58528100 .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_58528100_58528100() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10ch], ecx
        push 0
        ; Exact mapped bytes FF 15 C8 44 89 58: call dword ptr [0x588944c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 108h], eax
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 74: je 0x585281a4
        __asm _emit 0x74
        __asm _emit 0x74
        push 2
        mov ecx, dword ptr [ebp - 108h]
        push ecx
        ; Exact mapped bytes FF 15 C4 44 89 58: call dword ptr [0x588944c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 108h], eax
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 75 04: jne 0x58528152
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes EB 54: jmp 0x585281a4
        __asm _emit 0xeb
        __asm _emit 0x54
        ; Exact mapped bytes EB 50: jmp 0x585281a2
        __asm _emit 0xeb
        __asm _emit 0x50
        push 100h
        lea edx, [ebp - 104h]
        push edx
        mov eax, dword ptr [ebp - 108h]
        push eax
        ; Exact mapped bytes FF 15 CC 44 89 58: call dword ptr [0x588944cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x585281a2
        __asm _emit 0x74
        __asm _emit 0x33
        push 588a4b18h
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 1D: jne 0x585281a2
        __asm _emit 0x75
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 108h]
        ; Exact mapped bytes 3B 15 1C 5F 96 58: cmp edx, dword ptr [0x58965f1c]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 0F: je 0x585281a2
        __asm _emit 0x74
        __asm _emit 0x0f
        push -1
        ; Exact mapped bytes FF 15 68 44 89 58: call dword ptr [0x58894468]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x585281a6
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 83: jmp 0x58528127
        __asm _emit 0xeb
        __asm _emit 0x83
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 A0 8E 30 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x8e
        __asm _emit 0x30
        __asm _emit 0x00
        mov esp, ebp
    }
}
