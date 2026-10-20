// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851180 .. +0x8B bytes.
extern "C" __declspec(naked) void FUN_58851180_58851180() {
    __asm {
        ; Exact mapped bytes 8B 4C 24 04: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes F7 C1 03 00 00 00: test ecx, 3
        __asm _emit 0xf7
        __asm _emit 0xc1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 24: je 0x588511b0
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 8A 01: mov al, byte ptr [ecx]
        __asm _emit 0x8a
        __asm _emit 0x01
        ; Exact mapped bytes 83 C1 01: add ecx, 1
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 74 4E: je 0x588511e3
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes F7 C1 03 00 00 00: test ecx, 3
        __asm _emit 0xf7
        __asm _emit 0xc1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 EF: jne 0x5885118c
        __asm _emit 0x75
        __asm _emit 0xef
        ; Exact mapped bytes 05 00 00 00 00: add eax, 0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes BA FF FE FE 7E: mov edx, 0x7efefeff
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xfe
        __asm _emit 0x7e
        ; Exact mapped bytes 03 D0: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xd0
        ; Exact mapped bytes 83 F0 FF: xor eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 33 C2: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xc2
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes A9 00 01 01 81: test eax, 0x81010100
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x81
        ; Exact mapped bytes 74 E8: je 0x588511b0
        __asm _emit 0x74
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 41 FC: mov eax, dword ptr [ecx - 4]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0xfc
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 74 32: je 0x58851201
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 84 E4: test ah, ah
        __asm _emit 0x84
        __asm _emit 0xe4
        ; Exact mapped bytes 74 24: je 0x588511f7
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes A9 00 00 FF 00: test eax, 0xff0000
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 74 13: je 0x588511ed
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes A9 00 00 00 FF: test eax, 0xff000000
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 74 02: je 0x588511e3
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB CD: jmp 0x588511b0
        __asm _emit 0xeb
        __asm _emit 0xcd
        ; Exact mapped bytes 8D 41 FF: lea eax, [ecx - 1]
        __asm _emit 0x8d
        __asm _emit 0x41
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4C 24 04: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 8D 41 FE: lea eax, [ecx - 2]
        __asm _emit 0x8d
        __asm _emit 0x41
        __asm _emit 0xfe
        ; Exact mapped bytes 8B 4C 24 04: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 8D 41 FD: lea eax, [ecx - 3]
        __asm _emit 0x8d
        __asm _emit 0x41
        __asm _emit 0xfd
        ; Exact mapped bytes 8B 4C 24 04: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 8D 41 FC: lea eax, [ecx - 4]
        __asm _emit 0x8d
        __asm _emit 0x41
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 4C 24 04: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
