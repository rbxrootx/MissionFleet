// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 289 bytes in 1 exact ranges.
// Source symbol alias: FUN_588fcfb0.

// Ghidra body range 0x588FCFB0..0x588FD0D1; 289 mapped bytes.
extern "C" __declspec(naked) void FUN_588fcfb0_segment_00() {
    __asm {
        // 0x588FCFB0: push esi
        __asm _emit 0x56
        // 0x588FCFB1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FCFB3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FCFB5: push edi
        __asm _emit 0x57
        // 0x588FCFB6: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588FCFBA: mov dword ptr [esi + 0x98], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FCFC4: mov word ptr [esi + 0x94], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FCFCB: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x588FCFD0: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588FCFD2: je 0x588fcff9
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x588FCFD4: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x588FCFD7: call 0x588ff080
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FCFDC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FCFDE: je 0x588fcfe7
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588FCFE0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FCFE2: call 0x588f7e90
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0xAE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FCFE7: push edi
        __asm _emit 0x57
        // 0x588FCFE8: call 0x588f74c0
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0xA4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FCFED: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FCFEF: call 0x588f7430
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0xA4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FCFF4: pop edi
        __asm _emit 0x5F
        // 0x588FCFF5: pop esi
        __asm _emit 0x5E
        // 0x588FCFF6: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588FCFF9: movzx eax, word ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FCFFE: push ebx
        __asm _emit 0x53
        // 0x588FCFFF: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FD003: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588FD005: push ebp
        __asm _emit 0x55
        // 0x588FD006: lea ebp, [ebx + eax*8]
        __asm _emit 0x8D
        __asm _emit 0x2C
        __asm _emit 0xC3
        // 0x588FD009: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FD00B: jle 0x588fd0a2
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD011: mov ecx, dword ptr [ebx + edi*8 + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xFB
        __asm _emit 0x04
        // 0x588FD015: mov edx, dword ptr [ebx + edi*8]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0xFB
        // 0x588FD018: push ecx
        __asm _emit 0x51
        // 0x588FD019: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x588FD01C: push edx
        __asm _emit 0x52
        // 0x588FD01D: call 0x588ff0f0
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD022: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FD024: je 0x588fd0b7
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD02A: movzx eax, byte ptr [eax + 0x68]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x40
        __asm _emit 0x68
        // 0x588FD02E: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x00
        // 0x588FD031: je 0x588fd071
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x588FD033: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x588FD036: jne 0x588fd083
        __asm _emit 0x75
        __asm _emit 0x4B
        // 0x588FD038: mov dword ptr [esi + 0xa0], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD042: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FD048: push ebp
        __asm _emit 0x55
        // 0x588FD049: call 0x588f43f0
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0x73
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FD04E: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FD053: mov ecx, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD059: call 0x588730f0
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0x60
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588FD05E: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD064: call 0x588bc600
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0xF5
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x588FD069: add ebp, 0x180
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD06F: jmp 0x588fd083
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x588FD071: push ebp
        __asm _emit 0x55
        // 0x588FD072: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FD074: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FD076: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FD078: call 0x588fc110
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FD07D: add ebp, 0xd0
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD083: mov ecx, dword ptr [ebx + edi*8 + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xFB
        __asm _emit 0x04
        // 0x588FD087: mov edx, dword ptr [ebx + edi*8]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0xFB
        // 0x588FD08A: push ecx
        __asm _emit 0x51
        // 0x588FD08B: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x588FD08E: push edx
        __asm _emit 0x52
        // 0x588FD08F: call 0x588ffb50
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0x2A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD094: movzx eax, word ptr [esp + 0x18]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FD099: inc edi
        __asm _emit 0x47
        // 0x588FD09A: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588FD09C: jl 0x588fd011
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x6F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FD0A2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FD0A4: call 0x588f74c0
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0xA4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FD0A9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FD0AB: call 0x588f7430
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0xA3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FD0B0: pop ebp
        __asm _emit 0x5D
        // 0x588FD0B1: pop ebx
        __asm _emit 0x5B
        // 0x588FD0B2: pop edi
        __asm _emit 0x5F
        // 0x588FD0B3: pop esi
        __asm _emit 0x5E
        // 0x588FD0B4: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588FD0B7: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x588FD0BA: call 0x588ff080
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD0BF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FD0C1: je 0x588fd0b0
        __asm _emit 0x74
        __asm _emit 0xED
        // 0x588FD0C3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FD0C5: call 0x588f7e90
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0xAD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FD0CA: pop ebp
        __asm _emit 0x5D
        // 0x588FD0CB: pop ebx
        __asm _emit 0x5B
        // 0x588FD0CC: pop edi
        __asm _emit 0x5F
        // 0x588FD0CD: pop esi
        __asm _emit 0x5E
        // 0x588FD0CE: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
