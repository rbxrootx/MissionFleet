// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E0E08 .. +0xE5 bytes.
extern "C" __declspec(naked) void FUN_004e0e08_004E0E08() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 3ch], ecx
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e0e39
        __asm _emit 0x75
        __asm _emit 0x14
        push 0cah
        push 5cb6b4h
        ; Exact mapped bytes E8 CC 3B 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e0e39
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4e0e14
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4e0e59
        __asm _emit 0x75
        __asm _emit 0x14
        push 0cbh
        push 5cb6b4h
        ; Exact mapped bytes E8 AC 3B 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e0e59
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4e0e3f
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 14: jne 0x4e0e79
        __asm _emit 0x75
        __asm _emit 0x14
        push 0cch
        push 5cb6b4h
        ; Exact mapped bytes E8 8C 3B 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e0e79
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4e0e5f
        __asm _emit 0x75
        __asm _emit 0xe0
        push 38h
        push 0
        lea edx, [ebp - 38h]
        push edx
        ; Exact mapped bytes E8 E4 84 FC FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 2ch], 28h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AE AC 05 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xac
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 30h], ecx
        lea edx, [ebp - 38h]
        push edx
        push 0
        push 40ah
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x4e0ee2
        __asm _emit 0x74
        __asm _emit 0x19
        push 28h
        lea edx, [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        ; Exact mapped bytes E8 48 81 FC FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x81
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4e0ee4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
