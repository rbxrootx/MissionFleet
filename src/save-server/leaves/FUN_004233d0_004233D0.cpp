// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004233D0 .. +0x133 bytes.
extern "C" __declspec(naked) void FUN_004233d0_004233D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58b6f9h
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
        sub esp, 58h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 64h]
        mov ecx, 16h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 FD 18 10 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x18
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 18h]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A6 7A 00 00: call 0x42aec7
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x7a
        __asm _emit 0x00
        __asm _emit 0x00
        push 634308h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 B5 19 10 00: call 0x524de3
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x19
        __asm _emit 0x10
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 70: je 0x4234a2
        __asm _emit 0x74
        __asm _emit 0x70
        push 6342f8h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 A4 19 10 00: call 0x524de3
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x19
        __asm _emit 0x10
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 5F: je 0x4234a2
        __asm _emit 0x74
        __asm _emit 0x5f
        push 6342e8h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 93 19 10 00: call 0x524de3
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x19
        __asm _emit 0x10
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 4E: je 0x4234a2
        __asm _emit 0x74
        __asm _emit 0x4e
        push 6342d8h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 82 19 10 00: call 0x524de3
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x19
        __asm _emit 0x10
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x4234a2
        __asm _emit 0x74
        __asm _emit 0x3d
        push 6342cch
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 71 19 10 00: call 0x524de3
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x19
        __asm _emit 0x10
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x4234a2
        __asm _emit 0x74
        __asm _emit 0x2c
        push 6342bch
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 60 19 10 00: call 0x524de3
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x19
        __asm _emit 0x10
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x4234a2
        __asm _emit 0x74
        __asm _emit 0x1b
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 4F 94 0A 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x94
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes EB 44: jmp 0x4234e6
        __asm _emit 0xeb
        __asm _emit 0x44
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 26 5B 00 00: call 0x428fd4
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x4234cd
        __asm _emit 0x74
        __asm _emit 0x1b
        mov dword ptr [ebp - 20h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 24 94 0A 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes EB 19: jmp 0x4234e6
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 09 94 0A 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x94
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 64h
        cmp ebp, esp
        ; Exact mapped bytes E8 F3 18 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
