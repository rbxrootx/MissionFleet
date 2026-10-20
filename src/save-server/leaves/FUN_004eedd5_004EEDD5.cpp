// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EEDD5 .. +0x12A bytes.
extern "C" __declspec(naked) void FUN_004eedd5_004EEDD5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 28h], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 DE 33 04 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x33
        __asm _emit 0x04
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 66 CD 03 00: call 0x52bb5b
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xcd
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B3 34 04 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x34
        __asm _emit 0x04
        __asm _emit 0x00
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp + 8]
        sub ecx, eax
        mov dword ptr [ebp - 18h], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B4 34 04 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x34
        __asm _emit 0x04
        __asm _emit 0x00
        cdq
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr [ebp + 0ch]
        sub edx, eax
        mov dword ptr [ebp - 14h], edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 67 74 FE FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        and eax, 100000h
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x4eee3c
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 09: jge 0x4eee45
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 1B: jmp 0x4eee60
        __asm _emit 0xeb
        __asm _emit 0x1b
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 22 44 FE FF: call 0x4d3271
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x44
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 18h]
        cmp ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 7E 06: jle 0x4eee60
        __asm _emit 0x7e
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 1ch]
        and eax, 200000h
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x4eee72
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7D 09: jge 0x4eee7b
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 1B: jmp 0x4eee96
        __asm _emit 0xeb
        __asm _emit 0x1b
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 EC 43 FE FF: call 0x4d3271
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 7E 06: jle 0x4eee96
        __asm _emit 0x7e
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 14: jge 0x4eeeb0
        __asm _emit 0x7d
        __asm _emit 0x14
        push 1ech
        push 677c28h
        ; Exact mapped bytes E8 95 9E 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x9e
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eeeb0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4eee96
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7D 14: jge 0x4eeed0
        __asm _emit 0x7d
        __asm _emit 0x14
        push 1edh
        push 677c28h
        ; Exact mapped bytes E8 75 9E 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x9e
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eeed0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4eeeb6
        __asm _emit 0x75
        __asm _emit 0xe0
        push 1
        mov edx, dword ptr [ebp - 18h]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 A2 40 FE FF: call 0x4d2f88
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x40
        __asm _emit 0xfe
        __asm _emit 0xff
        push 1
        mov eax, dword ptr [ebp - 14h]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 92 40 FE FF: call 0x4d2f88
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x40
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
