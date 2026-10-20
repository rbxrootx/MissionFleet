// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F5B75 .. +0x145 bytes.
extern "C" __declspec(naked) void FUN_004f5b75_004F5B75() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ca69h
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
        sub esp, 54h
        push ebx
        push esi
        push edi
        push 0
        ; Exact mapped bytes E8 15 BD FF FF: call 0x4f18af
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 07: jne 0x4f5baa
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 FD 00 00 00: jmp 0x4f5ca7
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2A 76 F9 FF: call 0x48d1e0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x76
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 1F: je 0x4f5bde
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1ch]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 14: je 0x4f5bde
        __asm _emit 0x74
        __asm _emit 0x14
        push 0a86h
        push 5c5574h
        ; Exact mapped bytes E8 27 EE 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xee
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f5bde
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x4f5bb9
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 85 8D 00 00 00: jne 0x4f5c7b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 D4 26 5E 00: call dword ptr [0x5e26d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 DF 75 F9 FF: call 0x48d1e0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x75
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 6D: je 0x4f5c77
        __asm _emit 0x74
        __asm _emit 0x6d
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 34h], 0
        ; Exact mapped bytes 74 64: je 0x4f5c77
        __asm _emit 0x74
        __asm _emit 0x64
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + 34h]
        add ecx, 20h
        ; Exact mapped bytes E8 22 59 FF FF: call 0x4eb547
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 49: je 0x4f5c77
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp + 8]
        push edx
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 3F B7 FF FF: call 0x4f1379
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 DF FE FF FF: call 0x4f5b32
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov dword ptr [ebp - 3ch], 0
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 60h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 BD CA FF FF: call 0x4f272f
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 60h]
        ; Exact mapped bytes EB 30: jmp 0x4f5ca7
        __asm _emit 0xeb
        __asm _emit 0x30
        xor eax, eax
        ; Exact mapped bytes EB 2C: jmp 0x4f5ca7
        __asm _emit 0xeb
        __asm _emit 0x2c
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 14: jne 0x4f5c95
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a9fh
        push 5c5574h
        ; Exact mapped bytes E8 70 ED 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xed
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f5c95
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4f5c7b
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8B FE FF FF: call 0x4f5b32
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
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
