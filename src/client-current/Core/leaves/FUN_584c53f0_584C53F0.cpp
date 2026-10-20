// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C53F0 .. +0x107 bytes.
extern "C" __declspec(naked) void FUN_584c53f0_584C53F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push 58895c7ch
        ; Exact mapped bytes FF 15 D4 42 89 58: call dword ptr [0x588942d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 63: je 0x584c546d
        __asm _emit 0x74
        __asm _emit 0x63
        push 58895c88h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 DC 42 89 58: call dword ptr [0x588942dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 4B: je 0x584c546d
        __asm _emit 0x74
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 18h], ecx
        push -4
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x584c543b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x584c54f3
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 1ch], edx
        push -3
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x584c5454
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 9F 00 00 00: jmp 0x584c54f3
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 20h], eax
        push -2
        ; Exact mapped bytes FF 55 E0: call dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe0
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x584c546d
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x584c54f3
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58895ca8h
        ; Exact mapped bytes FF 15 D4 42 89 58: call dword ptr [0x588942d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 44: je 0x584c54c5
        __asm _emit 0x74
        __asm _emit 0x44
        push 58895cb4h
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 DC 42 89 58: call dword ptr [0x588942dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 2C: je 0x584c54c5
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 24h], edx
        push 2
        ; Exact mapped bytes FF 55 DC: call dword ptr [ebp - 0x24]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xdc
        test eax, eax
        ; Exact mapped bytes 7C 07: jl 0x584c54af
        __asm _emit 0x7c
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 44: jmp 0x584c54f3
        __asm _emit 0xeb
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 28h], eax
        push 1
        ; Exact mapped bytes FF 55 D8: call dword ptr [ebp - 0x28]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd8
        test eax, eax
        ; Exact mapped bytes 7C 07: jl 0x584c54c5
        __asm _emit 0x7c
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 2E: jmp 0x584c54f3
        __asm _emit 0xeb
        __asm _emit 0x2e
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 26: je 0x584c54f1
        __asm _emit 0x74
        __asm _emit 0x26
        push 58895ccch
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 DC 42 89 58: call dword ptr [0x588942dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0E: je 0x584c54f1
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x584c54f1
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x584c54f3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
