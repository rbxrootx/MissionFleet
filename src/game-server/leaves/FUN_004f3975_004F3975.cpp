// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F3975 .. +0x173 bytes.
extern "C" __declspec(naked) void FUN_004f3975_004F3975() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ca2bh
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
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes E8 65 1B 04 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x1b
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        push 58fh
        push 5c5574h
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 AF 77 00 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 90h], 0
        ; Exact mapped bytes 75 14: jne 0x4f39d1
        __asm _emit 0x75
        __asm _emit 0x14
        push 590h
        push 5c5574h
        ; Exact mapped bytes E8 34 10 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f39d1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x4f39b1
        __asm _emit 0x75
        __asm _emit 0xda
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 E9 E3 04 00: call 0x541dc8
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 92 B8 00 00 00: call dword ptr [edx + 0xb8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4f3a0c
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 92 F8 00 00 00: call dword ptr [edx + 0xf8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 1fh
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 BF 81 04 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        push 1
        push 1
        push 0
        push 0
        push 1fh
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 57 8D 04 00: call 0x53c783
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 DA 11 00 00: call 0x4f4c0e
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 0
        push 0
        push 1fh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 94 81 04 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        push 1
        push 1
        push 0
        push 0
        push 1fh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2C 8D 04 00: call 0x53c783
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 1C 27 5E 00: call dword ptr [0x5e271c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 10: je 0x4f3a76
        __asm _emit 0x74
        __asm _emit 0x10
        push 0
        push 0
        push 1fh
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 90h]
        push ecx
        push 5c589ch
        ; Exact mapped bytes E8 83 C1 FD FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 10h
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 90h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 A8 25 5E 00: call dword ptr [0x5e25a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x4f3ac6
        __asm _emit 0x75
        __asm _emit 0x0e
        push -1
        push 0
        push 0f107h
        ; Exact mapped bytes E8 03 9E 01 00: call 0x50d8c9
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 0D E3 04 00: call 0x541de2
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xe3
        __asm _emit 0x04
        __asm _emit 0x00
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
