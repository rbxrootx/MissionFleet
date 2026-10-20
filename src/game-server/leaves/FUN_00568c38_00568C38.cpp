// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00568C38 .. +0x274 bytes.
extern "C" __declspec(naked) void FUN_00568c38_00568C38() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f794h
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
        sub esp, 120h
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x568c73
        __asm _emit 0x75
        __asm _emit 0x14
        push 1d9h
        push 5cf588h
        ; Exact mapped bytes E8 92 BD FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xbd
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x568c73
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x568c59
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 1A: je 0x568c99
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x568c99
        __asm _emit 0x75
        __asm _emit 0x14
        push 1dah
        push 5cf588h
        ; Exact mapped bytes E8 6C BD FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xbd
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x568c99
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x568c79
        __asm _emit 0x75
        __asm _emit 0xda
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 60 82 FC FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x82
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 51 82 FC FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x82
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov dword ptr [ebp - 1ch], 0
        cmp dword ptr [ebp + 18h], 80000000h
        ; Exact mapped bytes 75 14: jne 0x568cde
        __asm _emit 0x75
        __asm _emit 0x14
        lea edx, [ebp - 1ch]
        push edx
        push 5cf63ch
        push 80000000h
        ; Exact mapped bytes FF 15 18 1E 5E 00: call dword ptr [0x5e1e18]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 1
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 0F 84 6E 01 00 00: je 0x568e5f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp + 8]
        add eax, 4
        mov dword ptr [ebp + 8], eax
        cmp dword ptr [ebp + 18h], 80000000h
        ; Exact mapped bytes 75 0C: jne 0x568d17
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 75 02: jne 0x568d17
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB CE: jmp 0x568ce5
        __asm _emit 0xeb
        __asm _emit 0xce
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        lea edx, [ecx + eax + 1]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        lea eax, [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 CE 2C FB FF: call 0x51ba0e
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x2c
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 B9 2C FB FF: call 0x51ba0e
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x2c
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [ebp + 18h], 80000000h
        ; Exact mapped bytes 75 22: jne 0x568d80
        __asm _emit 0x75
        __asm _emit 0x22
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 26 82 FC FF: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x82
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x568d80
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 20h]
        push edx
        push 5cf644h
        ; Exact mapped bytes E8 9D 6E F6 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x6e
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 65 FF FF FF: jmp 0x568ce5
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 7A: jne 0x568e00
        __asm _emit 0x75
        __asm _emit 0x7a
        mov dword ptr [ebp - 28h], 100h
        lea eax, [ebp - 28h]
        push eax
        lea ecx, [ebp - 128h]
        push ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 0A 82 FC FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x82
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp + 18h]
        push edx
        ; Exact mapped bytes FF 15 28 1E 5E 00: call dword ptr [0x5e1e28]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 51: jne 0x568e00
        __asm _emit 0x75
        __asm _emit 0x51
        lea eax, [ebp - 128h]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 97 84 FC FF: call 0x531256
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x568dfb
        __asm _emit 0x74
        __asm _emit 0x33
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 DA 81 FC FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x81
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 128h]
        push edx
        push 5cf668h
        ; Exact mapped bytes E8 33 6E F6 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x6e
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 0ch
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 BD 81 FC FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x81
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        push 5cf6a0h
        ; Exact mapped bytes E8 1D 6E F6 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x6e
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 E5 FE FF FF: jmp 0x568ce5
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 A2 81 FC FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x81
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 92 81 FC FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x81
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        push 1
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 87 81 FC FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x81
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp + 18h]
        push eax
        ; Exact mapped bytes FF 15 24 1E 5E 00: call dword ptr [0x5e1e24]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x568e5a
        __asm _emit 0x74
        __asm _emit 0x28
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 70 81 FC FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x81
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 67 81 FC FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x81
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        push 5cf6bch
        ; Exact mapped bytes E8 C7 6D F6 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x6d
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 05: jmp 0x568e5f
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 86 FE FF FF: jmp 0x568ce5
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 0A: je 0x568e6f
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes FF 15 FC 1D 5E 00: call dword ptr [0x5e1dfc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x1d
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 12ch], edx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 C8 49 F8 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x49
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 B9 49 F8 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x49
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 12ch]
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
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
