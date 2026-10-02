// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856E040 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_5856e040() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 1ch], 1
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 1
        ; Exact mapped bytes 74 43: je 0x5856e0a6
        __asm _emit 0x74
        __asm _emit 0x43
        cmp dword ptr [ebp - 18h], 7
        ; Exact mapped bytes 74 22: je 0x5856e08b
        __asm _emit 0x74
        __asm _emit 0x22
        cmp dword ptr [ebp - 18h], 112h
        ; Exact mapped bytes 74 02: je 0x5856e074
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 3F: jmp 0x5856e0b3
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 0fff0h
        cmp ecx, 0f100h
        ; Exact mapped bytes 75 04: jne 0x5856e089
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2D: jmp 0x5856e0b6
        __asm _emit 0xeb
        __asm _emit 0x2d
        ; Exact mapped bytes EB 28: jmp 0x5856e0b3
        __asm _emit 0xeb
        __asm _emit 0x28
        lea edx, [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 B8 44 89 58: call dword ptr [0x588944b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes FF 15 B0 44 89 58: call dword ptr [0x588944b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 0D: jmp 0x5856e0b3
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 1
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 BC 44 89 58: call dword ptr [0x588944bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 90 2F 2C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x2f
        __asm _emit 0x2c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
