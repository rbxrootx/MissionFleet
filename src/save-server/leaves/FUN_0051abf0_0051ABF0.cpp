// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051ABF0 .. +0x113 bytes.
extern "C" __declspec(naked) void FUN_0051abf0_0051ABF0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d9d2h
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
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 30h], ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 F7 2C 02 00: call 0x53d910
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 8
        ; Exact mapped bytes E8 77 6F 01 00: call 0x531ba2
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [eax], 63901ch
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 95 85 01 00: call 0x5331d1
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0B: jne 0x51ac54
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes E8 09 7B 02 00: call 0x542757
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x7b
        __asm _emit 0x02
        __asm _emit 0x00
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 74 2A: je 0x51ac7e
        __asm _emit 0x74
        __asm _emit 0x2a
        push 7914h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 53 87 01 00: call 0x5333b4
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x51ac76
        __asm _emit 0x75
        __asm _emit 0x11
        push 2eh
        push 6769f8h
        ; Exact mapped bytes E8 CF E0 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51ac76
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x51ac54
        __asm _emit 0x75
        __asm _emit 0xd8
        ; Exact mapped bytes EB 28: jmp 0x51aca6
        __asm _emit 0xeb
        __asm _emit 0x28
        push 7913h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 29 87 01 00: call 0x5333b4
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x51aca0
        __asm _emit 0x75
        __asm _emit 0x11
        push 30h
        push 6769f8h
        ; Exact mapped bytes E8 A5 E0 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51aca0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x51ac7e
        __asm _emit 0x75
        __asm _emit 0xd8
        lea eax, [ebp - 2ch]
        push eax
        push 18h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 70 7F 01 00: call 0x532c24
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        cdq
        mov ecx, 3
        idiv ecx
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [edx + 8], eax
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [eax + 0ch], ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 72 E0 FC FF: call 0x4e8d48
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xe0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [edx + 4], eax
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 08 85 01 00: call 0x5331f0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 30h]
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
        mov esp, ebp
        pop ebp
        ret
    }
}
