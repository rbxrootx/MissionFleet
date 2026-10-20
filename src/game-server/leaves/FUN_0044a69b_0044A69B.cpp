// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044A69B .. +0x12D bytes.
extern "C" __declspec(naked) void FUN_0044a69b_0044A69B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 104h], 0
        ; Exact mapped bytes 74 78: je 0x44a73d
        __asm _emit 0x74
        __asm _emit 0x78
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 108h], 0
        ; Exact mapped bytes 74 6C: je 0x44a73d
        __asm _emit 0x74
        __asm _emit 0x6c
        lea edx, [ebp - 4]
        push edx
        ; Exact mapped bytes E8 BD 4C 08 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 110h
        ; Exact mapped bytes E8 C5 6F 0E 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x6f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 110h
        ; Exact mapped bytes E8 49 70 0E 00: call 0x531740
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x70
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 114h], eax
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 114h], 0ah
        ; Exact mapped bytes 7C 20: jl 0x44a72c
        __asm _emit 0x7c
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 114h], 16h
        ; Exact mapped bytes 7D 14: jge 0x44a72c
        __asm _emit 0x7d
        __asm _emit 0x14
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 3E FF FF FF: call 0x44a660
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x44a7ba
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2A FF FF FF: call 0x44a660
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 7D: jmp 0x44a7ba
        __asm _emit 0xeb
        __asm _emit 0x7d
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 104h], 0
        ; Exact mapped bytes 74 5C: je 0x44a7a5
        __asm _emit 0x74
        __asm _emit 0x5c
        lea edx, [ebp - 8]
        push edx
        ; Exact mapped bytes E8 45 4C 08 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 110h
        ; Exact mapped bytes E8 4D 6F 0E 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x6f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 110h
        ; Exact mapped bytes E8 D1 6F 0E 00: call 0x531740
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x6f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 114h], eax
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 114h], 0ah
        ; Exact mapped bytes 7C 1D: jl 0x44a7a1
        __asm _emit 0x7c
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 114h], 16h
        ; Exact mapped bytes 7D 11: jge 0x44a7a1
        __asm _emit 0x7d
        __asm _emit 0x11
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C6 FE FF FF: call 0x44a660
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 19: jmp 0x44a7ba
        __asm _emit 0xeb
        __asm _emit 0x19
        xor eax, eax
        ; Exact mapped bytes EB 15: jmp 0x44a7ba
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 108h], 0
        ; Exact mapped bytes 74 07: je 0x44a7b8
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x44a7ba
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 1C E0 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xe0
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
