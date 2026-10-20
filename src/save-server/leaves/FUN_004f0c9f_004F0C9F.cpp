// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F0C9F .. +0x1F5 bytes.
extern "C" __declspec(naked) void FUN_004f0c9f_004F0C9F() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e725h
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
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x4f0cd9
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 AA 01 00 00: jmp 0x4f0e83
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 26 40 03 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 20h
        ; Exact mapped bytes E8 99 40 03 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x4f0d3f
        __asm _emit 0x74
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 24h]
        add eax, 1ch
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E0 BD FD FF: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xff
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 7E 40 03 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2B: je 0x4f0d3d
        __asm _emit 0x74
        __asm _emit 0x2b
        push 0f003h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 61 8F FE FF: call 0x4d9c80
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x8f
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f0d37
        __asm _emit 0x75
        __asm _emit 0x14
        push 165h
        push 678234h
        ; Exact mapped bytes E8 0E 80 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f0d37
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x4f0d12
        __asm _emit 0x75
        __asm _emit 0xd5
        ; Exact mapped bytes EB 46: jmp 0x4f0d85
        __asm _emit 0xeb
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 24h]
        add edx, 20h
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 98 BD FD FF: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 18 6E 68 00 00: cmp dword ptr [0x686e18], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x18
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2E: je 0x4f0d85
        __asm _emit 0x74
        __asm _emit 0x2e
        push 104h
        push 104h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 2F C3 FD FF: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xc3
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 20h
        ; Exact mapped bytes E8 35 40 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 04 E3 FE FF: call 0x4df07f
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xe3
        __asm _emit 0xfe
        __asm _emit 0xff
        push -1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 4E C4 FD FF: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xc4
        __asm _emit 0xfd
        __asm _emit 0xff
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 7A 3F 03 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x3f
        __asm _emit 0x03
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 11 40 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        push 0f103h
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 E7 40 01 00: call 0x504e8f
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        push 0f103h
        push 3
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 F3 3F 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x3f
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 24 5D 00 00: call 0x4f6ae1
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 2
        ; Exact mapped bytes 74 0E: je 0x4f0dd4
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp - 28h], 6
        ; Exact mapped bytes 74 32: je 0x4f0dfe
        __asm _emit 0x74
        __asm _emit 0x32
        cmp dword ptr [ebp - 28h], 7
        ; Exact mapped bytes 74 67: je 0x4f0e39
        __asm _emit 0x74
        __asm _emit 0x67
        ; Exact mapped bytes EB 67: jmp 0x4f0e3b
        __asm _emit 0xeb
        __asm _emit 0x67
        mov dword ptr [ebp - 18h], 0
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 05 BB FD FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xbb
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F6 BA FD FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes E9 85 00 00 00: jmp 0x4f0e83
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 92 A4 00 00 00: call dword ptr [edx + 0xa4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 27: jne 0x4f0e37
        __asm _emit 0x75
        __asm _emit 0x27
        mov dword ptr [ebp - 1ch], 0
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 C9 BA FD FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 BA BA FD FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes EB 4C: jmp 0x4f0e83
        __asm _emit 0xeb
        __asm _emit 0x4c
        ; Exact mapped bytes EB 25: jmp 0x4f0e5e
        __asm _emit 0xeb
        __asm _emit 0x25
        ; Exact mapped bytes EB 23: jmp 0x4f0e5e
        __asm _emit 0xeb
        __asm _emit 0x23
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4f0e58
        __asm _emit 0x74
        __asm _emit 0x14
        push 184h
        push 678234h
        ; Exact mapped bytes E8 ED 7E 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f0e58
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4f0e3b
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 20h], 1
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 7B BA FD FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 6C BA FD FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
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
