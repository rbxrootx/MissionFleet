// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004677E0 .. +0x171 bytes.
extern "C" __declspec(naked) void FUN_004677e0_004677E0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 63e558h
        push 46d504h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, -10h
        push ebx
        push esi
        push edi
        ; Exact mapped bytes A1 60 DA 67 00: mov eax, dword ptr [0x67da60]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x46783f
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes E8 0C 03 00 00: call 0x467b20
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x467839
        __asm _emit 0x75
        __asm _emit 0x21
        push 63e24ch
        push 0
        push 49dh
        push 63e240h
        push 2
        ; Exact mapped bytes E8 30 56 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x467839
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D0: jne 0x46780f
        __asm _emit 0x75
        __asm _emit 0xd0
        push 9
        ; Exact mapped bytes E8 6A 90 00 00: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 A7 07 00 00: call 0x468000
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x467881
        __asm _emit 0x75
        __asm _emit 0x21
        push 63e35ch
        push 0
        push 4a9h
        push 63e240h
        push 2
        ; Exact mapped bytes E8 E8 55 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x467881
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C9: jne 0x467850
        __asm _emit 0x75
        __asm _emit 0xc9
        mov ecx, dword ptr [ebp + 8]
        sub ecx, 20h
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 14h]
        and eax, 0ffffh
        cmp eax, 4
        ; Exact mapped bytes 74 43: je 0x4678e3
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 14h], 1
        ; Exact mapped bytes 74 3A: je 0x4678e3
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 14h]
        and eax, 0ffffh
        cmp eax, 2
        ; Exact mapped bytes 74 2A: je 0x4678e3
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 14h], 3
        ; Exact mapped bytes 74 21: je 0x4678e3
        __asm _emit 0x74
        __asm _emit 0x21
        push 63e514h
        push 0
        push 4afh
        push 63e240h
        push 2
        ; Exact mapped bytes E8 86 55 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4678e3
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 A7: jne 0x467890
        __asm _emit 0x75
        __asm _emit 0xa7
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 14h], 2
        ; Exact mapped bytes 75 0D: jne 0x4678ff
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 07: jne 0x4678ff
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp + 0ch], 2
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 14h], 3
        ; Exact mapped bytes 74 32: je 0x46793a
        __asm _emit 0x74
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 14h]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 21: je 0x467934
        __asm _emit 0x74
        __asm _emit 0x21
        push 63e45ch
        push 0
        push 4b6h
        push 63e240h
        push 2
        ; Exact mapped bytes E8 35 55 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x467934
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CE: jne 0x467908
        __asm _emit 0x75
        __asm _emit 0xce
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes E8 02 00 00 00: call 0x467951
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x46795c
        __asm _emit 0xeb
        __asm _emit 0x0b
    }
}
