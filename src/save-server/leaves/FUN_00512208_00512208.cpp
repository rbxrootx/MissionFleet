// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00512208 .. +0xF5 bytes.
extern "C" __declspec(naked) void FUN_00512208_00512208() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        push 5
        ; Exact mapped bytes FF 15 C4 BD 68 00: call dword ptr [0x68bdc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 D8 BE 68 00: call dword ptr [0x68bed8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 CA 00 00 00: je 0x5122f7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 FE D6 FB FF: call 0x4cf934
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xd6
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x5122e3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1ch]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x5122e3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes E8 BE FB FF FF: call 0x511e20
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 7D: je 0x5122e3
        __asm _emit 0x74
        __asm _emit 0x7d
        push -10h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 2E: jne 0x5122a9
        __asm _emit 0x75
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 0ch]
        and ecx, 18000000h
        cmp ecx, 10000000h
        ; Exact mapped bytes 75 1D: jne 0x5122a9
        __asm _emit 0x75
        __asm _emit 0x1d
        push 0
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 44 BE 68 00: call dword ptr [0x68be44]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 24h]
        or ecx, 2
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 24h], ecx
        ; Exact mapped bytes EB 3A: jmp 0x5122e3
        __asm _emit 0xeb
        __asm _emit 0x3a
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 34: je 0x5122e3
        __asm _emit 0x74
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 0ch]
        and eax, 18000000h
        test eax, eax
        ; Exact mapped bytes 75 28: jne 0x5122e3
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 24h]
        and edx, 2
        test edx, edx
        ; Exact mapped bytes 74 1B: je 0x5122e3
        __asm _emit 0x74
        __asm _emit 0x1b
        push 4
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 44 BE 68 00: call dword ptr [0x68be44]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 24h]
        and edx, 0fffffffdh
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 24h], edx
        push 2
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 D8 BE 68 00: call dword ptr [0x68bed8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 2C FF FF FF: jmp 0x512223
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
