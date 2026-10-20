// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00506DBD .. +0xC6 bytes.
extern "C" __declspec(naked) void FUN_00506dbd_00506DBD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x506ddd
        __asm _emit 0x75
        __asm _emit 0x11
        push 48h
        push 5c93c0h
        ; Exact mapped bytes E8 28 DC 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xdc
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x506ddd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x506dc6
        __asm _emit 0x75
        __asm _emit 0xe3
        lea ecx, [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 7C 27 5E 00: call dword ptr [0x5e277c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        push 5
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 E4 26 5E 00: call dword ptr [0x5e26e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0F: jmp 0x506e11
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 2
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 E4 26 5E 00: call dword ptr [0x5e26e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 61: je 0x506e78
        __asm _emit 0x74
        __asm _emit 0x61
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 1C 26 5E 00: call dword ptr [0x5e261c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 0ffffh
        ; Exact mapped bytes 74 49: je 0x506e76
        __asm _emit 0x74
        __asm _emit 0x49
        push -10h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 BC 28 5E 00: call dword ptr [0x5e28bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 10000000h
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x506e76
        __asm _emit 0x74
        __asm _emit 0x34
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 07 EF 02 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xef
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 18 F1 02 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xf1
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 88 27 5E 00: call dword ptr [0x5e2788]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 71 F1 02 00: call 0x535fde
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xf1
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x506e76
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 04: jmp 0x506e7a
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 8A: jmp 0x506e02
        __asm _emit 0xeb
        __asm _emit 0x8a
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
