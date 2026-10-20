// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00560E64 .. +0xE3 bytes.
extern "C" __declspec(naked) void FUN_00560e64_00560E64() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 9ah
        push 67c678h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 DD 93 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x93
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x560e9d
        __asm _emit 0x75
        __asm _emit 0x14
        push 9bh
        push 67c678h
        ; Exact mapped bytes E8 A8 7E FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x7e
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x560e9d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x560e83
        __asm _emit 0x75
        __asm _emit 0xe0
        push 9ch
        push 67c678h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 AA 93 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x93
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 92 B8 00 00 00: call dword ptr [edx + 0xb8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 17: jne 0x560edf
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A2 1B F7 FF: call 0x4d2a72
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x1b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 06: je 0x560edf
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 BC 00 00 00: call dword ptr [edx + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7F EA FE FF: call 0x54f97b
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 37: je 0x560f3c
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 54h], 0
        ; Exact mapped bytes 74 2C: je 0x560f3a
        __asm _emit 0x74
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E8 59 FF FF: call 0x5568fe
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x560f3a
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 10: je 0x560f35
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 42 1B F7 FF: call 0x4d2a72
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x1b
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 05: jne 0x560f3a
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 04: jmp 0x560f3e
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB B4: jmp 0x560ef0
        __asm _emit 0xeb
        __asm _emit 0xb4
        xor eax, eax
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
