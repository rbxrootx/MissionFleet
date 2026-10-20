// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00571C20 .. +0x1EA bytes.
extern "C" __declspec(naked) void FUN_00571c20_00571C20() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f6bch
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
        sub esp, 5ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 68h], ecx
        push 0b8h
        push 67c7a0h
        mov eax, dword ptr [ebp - 68h]
        push eax
        ; Exact mapped bytes E8 0C 86 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x86
        __asm _emit 0xf6
        __asm _emit 0xff
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 13: je 0x571c6d
        __asm _emit 0x74
        __asm _emit 0x13
        push 0bah
        push 67c7a0h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 F3 85 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 25: je 0x571c98
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 10h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 E6 17 F3 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x17
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x571c98
        __asm _emit 0x75
        __asm _emit 0x14
        push 0bch
        push 67c7a0h
        ; Exact mapped bytes E8 AD 70 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x70
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x571c98
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x571c6d
        __asm _emit 0x75
        __asm _emit 0xcf
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 CA FB FF FF: call 0x571870
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 06: jne 0x571cb9
        __asm _emit 0x75
        __asm _emit 0x06
        lea ecx, [ebp - 50h]
        mov dword ptr [ebp + 10h], ecx
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx + 30h], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 11: je 0x571cda
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 E0 07 FC FF: call 0x5324b8
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x07
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 2D: jmp 0x571d07
        __asm _emit 0xeb
        __asm _emit 0x2d
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 6C 01 FC FF: call 0x531e4e
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0xfc
        __asm _emit 0xff
        lea ecx, [ebp - 5ch]
        push ecx
        ; Exact mapped bytes FF 15 2C BD 68 00: call dword ptr [0x68bd2c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 58h]
        push edx
        mov eax, dword ptr [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov edx, dword ptr [ebp - 5ch]
        push edx
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 4E 07 FC FF: call 0x532455
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x07
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 E1 06 FC FF: call 0x5323f3
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x06
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x571d22
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax + 30h], 1
        ; Exact mapped bytes EB 28: jmp 0x571d4a
        __asm _emit 0xeb
        __asm _emit 0x28
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 B1 06 FC FF: call 0x5323de
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x06
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x571d4a
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 8B 0D 00 72 68 00: mov ecx, dword ptr [0x687200]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes 8B 15 00 72 68 00: mov edx, dword ptr [0x687200]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 A4 07 FC FF: call 0x5324ee
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0dfh
        push 67c7a0h
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 03 85 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0xff
        push 0e3h
        push 67c7a0h
        ; Exact mapped bytes E8 04 FE FB FF: call 0x531b70
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xfe
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 EE 84 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes E8 F9 FD FB FF: call 0x531b70
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xfd
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x571da2
        __asm _emit 0x75
        __asm _emit 0x1b
        mov dword ptr [ebp - 60h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 73 01 00 00: call 0x571f10
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 60h]
        ; Exact mapped bytes EB 55: jmp 0x571df7
        __asm _emit 0xeb
        __asm _emit 0x55
        push 641458h
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 F5 8C FD FF: call 0x54aaa4
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x8c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 6413f8h
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 E5 8C FD FF: call 0x54aaa4
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x8c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov dword ptr [ebp - 10h], 0
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 54h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes FF 15 7C C2 68 00: call dword ptr [0x68c27c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 64h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 1C 01 00 00: call 0x571f10
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 64h]
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
