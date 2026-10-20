// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B2A10 .. +0x26D bytes.
extern "C" __declspec(naked) void FUN_004b2a10_004B2A10() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58c6f8h
        push 4b1298h
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
        add esp, -0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], esp
        mov eax, dword ptr [ebp + 10h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 17: je 0x4b2a56
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 0F BE 42 08: movsx eax, byte ptr [edx + 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x4b2a56
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 10h]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 75 05: jne 0x4b2a5b
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 1F 02 00 00: jmp 0x4b2c7a
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax + 0ch]
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        and ecx, 8
        test ecx, ecx
        ; Exact mapped bytes 74 58: je 0x4b2ad6
        __asm _emit 0x74
        __asm _emit 0x58
        push 1
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 18h]
        push eax
        ; Exact mapped bytes E8 34 BE 00 00: call 0x4be8c0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x4b2acc
        __asm _emit 0x74
        __asm _emit 0x39
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 52 BE 00 00: call 0x4be8f0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x4b2acc
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp + 14h]
        add edx, 8
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 5E 02 00 00: call 0x4b2d20
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [edx], eax
        ; Exact mapped bytes EB 05: jmp 0x4b2ad1
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 AF F5 FF FF: call 0x4b2080
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 8D 01 00 00: jmp 0x4b2c63
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 78: je 0x4b2b5a
        __asm _emit 0x74
        __asm _emit 0x78
        push 1
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 18h]
        push eax
        ; Exact mapped bytes E8 D0 BD 00 00: call 0x4be8c0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 59: je 0x4b2b50
        __asm _emit 0x74
        __asm _emit 0x59
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 EE BD 00 00: call 0x4be8f0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 47: je 0x4b2b50
        __asm _emit 0x74
        __asm _emit 0x47
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx + 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 18h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 70 9D FF FF: call 0x4ac890
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp + 14h]
        cmp dword ptr [ecx + 14h], 4
        ; Exact mapped bytes 75 22: jne 0x4b2b4e
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 74 1A: je 0x4b2b4e
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp + 14h]
        add eax, 8
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 DA 01 00 00: call 0x4b2d20
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 05: jmp 0x4b2b55
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 2B F5 FF FF: call 0x4b2080
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 09 01 00 00: jmp 0x4b2c63
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        cmp dword ptr [edx + 18h], 0
        ; Exact mapped bytes 75 5D: jne 0x4b2bc0
        __asm _emit 0x75
        __asm _emit 0x5d
        push 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        ; Exact mapped bytes E8 4F BD 00 00: call 0x4be8c0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 3E: je 0x4b2bb6
        __asm _emit 0x74
        __asm _emit 0x3e
        push 1
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 6D BD 00 00: call 0x4be8f0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x4b2bb6
        __asm _emit 0x74
        __asm _emit 0x2c
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax + 14h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        add edx, 8
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        ; Exact mapped bytes E8 7C 01 00 00: call 0x4b2d20
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        push eax
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 DF 9C FF FF: call 0x4ac890
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes EB 05: jmp 0x4b2bbb
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 C5 F4 FF FF: call 0x4b2080
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x4b2c63
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        ; Exact mapped bytes E8 F2 BC 00 00: call 0x4be8c0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x4b2c5e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 0C BD 00 00: call 0x4be8f0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 73: je 0x4b2c5e
        __asm _emit 0x74
        __asm _emit 0x73
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        ; Exact mapped bytes E8 29 BD 00 00: call 0x4be920
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 60: je 0x4b2c5e
        __asm _emit 0x74
        __asm _emit 0x60
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 2B: je 0x4b2c35
        __asm _emit 0x74
        __asm _emit 0x2b
        push 1
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 8
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 18h]
        push eax
        ; Exact mapped bytes E8 01 01 00 00: call 0x4b2d20
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        push eax
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx + 18h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 7D 5F FF FF: call 0x4a8bb0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 27: jmp 0x4b2c5c
        __asm _emit 0xeb
        __asm _emit 0x27
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 8
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 18h]
        push eax
        ; Exact mapped bytes E8 D8 00 00 00: call 0x4b2d20
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        push eax
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx + 18h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 44 5F FF FF: call 0x4a8ba0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x4b2c63
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 1D F4 FF FF: call 0x4b2080
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes EB 0E: jmp 0x4b2c7a
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, 1
        ret
        mov esp, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 56 F3 FF FF: call 0x4b1fd0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
    }
}
