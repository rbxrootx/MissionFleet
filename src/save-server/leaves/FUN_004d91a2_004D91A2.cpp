// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D91A2 .. +0x20A bytes.
extern "C" __declspec(naked) void FUN_004d91a2_004D91A2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 219h
        push 6725f0h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 9F 10 00 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        ; Exact mapped bytes E8 08 ED F8 FF: call 0x467ed0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xed
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x4d91f5
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes E8 CD 30 FF FF: call 0x4cc2a4
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d91ef
        __asm _emit 0x75
        __asm _emit 0x14
        push 21eh
        push 6725f0h
        ; Exact mapped bytes E8 56 FB 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xfb
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d91ef
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4d91d2
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 8F 37 01 00 00: jg 0x4d9336
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 1ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 43: je 0x4d9251
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 3A: je 0x4d9251
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2C 2F 05 00: call 0x52c14b
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x4d9251
        __asm _emit 0x74
        __asm _emit 0x2e
        push 0
        push 1
        push 363h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 70 63 FF FF: call 0x4cf5ac
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        push 1
        push 0
        push 1
        push 363h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 92 2F 05 00: call 0x52c1e3
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E8 0D 74 06 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        add ecx, 1070h
        ; Exact mapped bytes E8 3D 56 06 00: call 0x53e8a0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 BF 58 06 00: call 0x53eb30
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 B6 00 00 00: je 0x4d9334
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x4d9326
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x4d9326
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 88h], 0
        ; Exact mapped bytes 75 12: jne 0x4d92b5
        __asm _emit 0x75
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 88h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 0A D5 FF FF: call 0x4d67bf
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 8E 2E 05 00: call 0x52c14b
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x2e
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x4d92cd
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 88h], 0
        ; Exact mapped bytes 7C 2E: jl 0x4d92fb
        __asm _emit 0x7c
        __asm _emit 0x2e
        push 0
        push 1
        push 363h
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 C6 62 FF FF: call 0x4cf5ac
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        push 1
        push 0
        push 1
        push 363h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E8 2E 05 00: call 0x52c1e3
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 88h], 0
        ; Exact mapped bytes 7E 12: jle 0x4d9319
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 88h]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A6 D4 FF FF: call 0x4d67bf
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 88h], 0ffffffffh
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes E9 40 FF FF FF: jmp 0x4d9274
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 30: jmp 0x4d9366
        __asm _emit 0xeb
        __asm _emit 0x30
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 2A: jl 0x4d9366
        __asm _emit 0x7c
        __asm _emit 0x2a
        ; Exact mapped bytes E8 22 73 06 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x73
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        add ecx, 1070h
        ; Exact mapped bytes E8 52 55 06 00: call 0x53e8a0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x55
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 10h], 0
        ; Exact mapped bytes 75 0C: jne 0x4d9366
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes E8 D1 27 00 00: call 0x4dbb30
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes E8 E9 27 00 00: call 0x4dbb4f
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        ; Exact mapped bytes E8 63 EB F8 FF: call 0x467ed0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xeb
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x4d939a
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes E8 28 2F FF FF: call 0x4cc2a4
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d9394
        __asm _emit 0x75
        __asm _emit 0x14
        push 253h
        push 6725f0h
        ; Exact mapped bytes E8 B1 F9 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf9
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d9394
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4d9377
        __asm _emit 0x75
        __asm _emit 0xdd
        xor eax, eax
        cmp dword ptr [ebp + 8], 0
        setl al
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
