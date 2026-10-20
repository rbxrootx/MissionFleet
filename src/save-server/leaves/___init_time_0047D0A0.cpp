// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047D0A0 .. +0xDB bytes.
extern "C" __declspec(naked) void ___init_time_0047D0A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes 83 3D 4C 75 68 00 00: cmp dword ptr [0x68754c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x47d141
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 48h
        push 63f490h
        push 2
        push 0ach
        push 1
        ; Exact mapped bytes E8 5A 9B FE FF: call 0x466c20
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x9b
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 14h
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 0A: jne 0x47d0dc
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 9B 00 00 00: jmp 0x47d177
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 9B 00 00 00: call 0x47d180
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x47d10d
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 1B 06 00 00: call 0x47d710
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push 2
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 5D A2 FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xa2
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov eax, 1
        ; Exact mapped bytes EB 6A: jmp 0x47d177
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes A3 98 DB 67 00: mov dword ptr [0x67db98], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0xdb
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 68 00: mov ecx, dword ptr [0x687574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 EF 05 00 00: call 0x47d710
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push 2
        ; Exact mapped bytes 8B 15 74 75 68 00: mov edx, dword ptr [0x687574]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 2E A2 FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xa2
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes A3 74 75 68 00: mov dword ptr [0x687574], eax
        __asm _emit 0xa3
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 36: jmp 0x47d177
        __asm _emit 0xeb
        __asm _emit 0x36
        ; Exact mapped bytes C7 05 98 DB 67 00 A0 DB 67 00: mov dword ptr [0x67db98], 0x67dba0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0xdb
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0xa0
        __asm _emit 0xdb
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 68 00: mov ecx, dword ptr [0x687574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 B9 05 00 00: call 0x47d710
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push 2
        ; Exact mapped bytes 8B 15 74 75 68 00: mov edx, dword ptr [0x687574]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 F8 A1 FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xa1
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes C7 05 74 75 68 00 00 00 00 00: mov dword ptr [0x687574], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
