// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005616C8 .. +0x1A4 bytes.
extern "C" __declspec(naked) void FUN_005616c8_005616C8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 28h], ecx
        push 134h
        push 67c6f0h
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 79 8B F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x8b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 28h]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes E8 7B 03 FD FF: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x03
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 84h], 0
        ; Exact mapped bytes 75 0A: jne 0x56170e
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 55 01 00 00: jmp 0x561863
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 84h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 84h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 2C 01 00 00: je 0x56185e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 84h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 84h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        mov dword ptr [ebp - 4], eax
        push 142h
        push 67c6f0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 FD 8A F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x8a
        __asm _emit 0xf7
        __asm _emit 0xff
        push 639040h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 20 8A F7 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x8a
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x561788
        __asm _emit 0x75
        __asm _emit 0x14
        push 143h
        push 67c6f0h
        ; Exact mapped bytes E8 BD 75 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x75
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x561788
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x561763
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 5C: call dword ptr [eax + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x5c
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 B3 00 00 00: je 0x561859
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 60: call dword ptr [eax + 0x60]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x60
        mov dword ptr [ebp - 18h], eax
        push 14ah
        push 67c6f0h
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 95 8A F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x8a
        __asm _emit 0xf7
        __asm _emit 0xff
        push 63c7d0h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 B8 89 F7 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x89
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 78: je 0x561854
        __asm _emit 0x74
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 90 BC 00 00 00: call dword ptr [eax + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        lea ecx, [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 82 E1 FE FF: call 0x54f97b
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 52: je 0x561854
        __asm _emit 0x74
        __asm _emit 0x52
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 5ch], 0
        ; Exact mapped bytes 74 47: je 0x561852
        __asm _emit 0x74
        __asm _emit 0x47
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 5ch]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 74 3B: je 0x561852
        __asm _emit 0x74
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 54h], 0
        ; Exact mapped bytes 74 32: je 0x561852
        __asm _emit 0x74
        __asm _emit 0x32
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 54h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 ED 05 FB FF: call 0x511e20
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x05
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x561852
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 55 0C: call dword ptr [ebp + 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x561852
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 11: jmp 0x561863
        __asm _emit 0xeb
        __asm _emit 0x11
        ; Exact mapped bytes EB 99: jmp 0x5617ed
        __asm _emit 0xeb
        __asm _emit 0x99
        ; Exact mapped bytes E9 43 FF FF FF: jmp 0x56179c
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 CA FE FF FF: jmp 0x561728
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
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
