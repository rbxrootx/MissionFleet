// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 681 bytes in 1 exact ranges.
// Source symbol alias: FUN_587ebda0.

// Ghidra body range 0x587EBDA0..0x587EC049; 681 mapped bytes.
extern "C" __declspec(naked) void FUN_587ebda0_segment_00() {
    __asm {
        // 0x587EBDA0: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x587EBDA3: push edi
        __asm _emit 0x57
        // 0x587EBDA4: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587EBDA6: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EBDAC: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587EBDB0: call 0x5875ee20
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0x30
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587EBDB5: cmp eax, 0x12c
        __asm _emit 0x3D
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBDBA: je 0x587ec044
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBDC0: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EBDC6: call 0x5875ee20
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x30
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587EBDCB: cmp eax, 0x3f1
        __asm _emit 0x3D
        __asm _emit 0xF1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBDD0: je 0x587ec044
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x6E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBDD6: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EBDDC: call 0x5875ee20
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x30
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587EBDE1: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x587EBDE4: je 0x587ec044
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x5A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBDEA: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EBDF0: call 0x5875ee20
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x30
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587EBDF5: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587EBDF8: je 0x587ec044
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBDFE: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EBE04: call 0x5875ee20
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x30
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587EBE09: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EBE0B: je 0x587ec044
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBE11: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EBE17: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587EBE1A: push esi
        __asm _emit 0x56
        // 0x587EBE1B: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587EBE1D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EBE1F: jl 0x587ebe40
        __asm _emit 0x7C
        __asm _emit 0x1F
        // 0x587EBE21: cmp eax, 0x1bd
        __asm _emit 0x3D
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBE26: jg 0x587ebe40
        __asm _emit 0x7F
        __asm _emit 0x18
        // 0x587EBE28: mov ecx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x587EBE2B: cmp ecx, 0x291
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBE31: jl 0x587ebe40
        __asm _emit 0x7C
        __asm _emit 0x0D
        // 0x587EBE33: cmp ecx, 0x300
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBE39: jg 0x587ebe40
        __asm _emit 0x7F
        __asm _emit 0x05
        // 0x587EBE3B: mov esi, 1
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBE40: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EBE46: cmp dword ptr [ecx + 0x78], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0x00
        // 0x587EBE4A: je 0x587ebe65
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x587EBE4C: cmp eax, 0x1be
        __asm _emit 0x3D
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBE51: jl 0x587ebe8b
        __asm _emit 0x7C
        __asm _emit 0x38
        // 0x587EBE53: cmp eax, 0x31b
        __asm _emit 0x3D
        __asm _emit 0x1B
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBE58: jg 0x587ebe8b
        __asm _emit 0x7F
        __asm _emit 0x31
        // 0x587EBE5A: mov ecx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x587EBE5D: cmp ecx, 0x266
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x66
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBE63: jmp 0x587ebe7c
        __asm _emit 0xEB
        __asm _emit 0x17
        // 0x587EBE65: cmp eax, 0x1be
        __asm _emit 0x3D
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBE6A: jl 0x587ebe8b
        __asm _emit 0x7C
        __asm _emit 0x1F
        // 0x587EBE6C: cmp eax, 0x31b
        __asm _emit 0x3D
        __asm _emit 0x1B
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBE71: jg 0x587ebe8b
        __asm _emit 0x7F
        __asm _emit 0x18
        // 0x587EBE73: mov ecx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x587EBE76: cmp ecx, 0x271
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x71
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBE7C: jl 0x587ebe8b
        __asm _emit 0x7C
        __asm _emit 0x0D
        // 0x587EBE7E: cmp ecx, 0x300
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBE84: jg 0x587ebe8b
        __asm _emit 0x7F
        __asm _emit 0x05
        // 0x587EBE86: mov esi, 1
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBE8B: cmp eax, 0x31c
        __asm _emit 0x3D
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBE90: jl 0x587ebeac
        __asm _emit 0x7C
        __asm _emit 0x1A
        // 0x587EBE92: cmp eax, 0x400
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBE97: jg 0x587ebeac
        __asm _emit 0x7F
        __asm _emit 0x13
        // 0x587EBE99: mov ecx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x587EBE9C: cmp ecx, 0x252
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBEA2: jl 0x587ebeac
        __asm _emit 0x7C
        __asm _emit 0x08
        // 0x587EBEA4: cmp ecx, 0x300
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBEAA: jle 0x587ebeb0
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x587EBEAC: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587EBEAE: je 0x587ebed0
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x587EBEB0: mov ecx, dword ptr [edi + 0x21ef4]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xF4
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EBEB6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EBEB8: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x57
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587EBEBD: mov ecx, dword ptr [edi + 0x21ef8]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xF8
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EBEC3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EBEC5: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x57
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587EBECA: pop esi
        __asm _emit 0x5E
        // 0x587EBECB: pop edi
        __asm _emit 0x5F
        // 0x587EBECC: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587EBECF: ret
        __asm _emit 0xC3
        // 0x587EBED0: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EBED6: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x587EBED9: mov esi, dword ptr [ecx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBEDF: mov si, word ptr [esi + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x0C
        // 0x587EBEE3: shr si, 0xa
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x0A
        // 0x587EBEE7: and si, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE6
        __asm _emit 0x1F
        // 0x587EBEEB: movzx esi, si
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xF6
        // 0x587EBEEE: push ebp
        __asm _emit 0x55
        // 0x587EBEEF: mov ebp, dword ptr [ecx + 0x340]
        __asm _emit 0x8B
        __asm _emit 0xA9
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBEF5: test si, si
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587EBEF8: je 0x587ec042
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBEFE: add ecx, 0x1fc
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBF04: movzx esi, byte ptr [ecx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x31
        // 0x587EBF07: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x587EBF09: je 0x587ebf0e
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x587EBF0B: inc ecx
        __asm _emit 0x41
        // 0x587EBF0C: jmp 0x587ebf04
        __asm _emit 0xEB
        __asm _emit 0xF6
        // 0x587EBF0E: mov esi, dword ptr [edi + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xB7
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EBF14: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBF1A: mov edi, dword ptr [esi + 0x114]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBF20: push ebx
        __asm _emit 0x53
        // 0x587EBF21: mov ebx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x5A
        __asm _emit 0x04
        // 0x587EBF24: cdq
        __asm _emit 0x99
        // 0x587EBF25: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587EBF27: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EBF2D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587EBF2F: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587EBF32: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBF38: cdq
        __asm _emit 0x99
        // 0x587EBF39: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587EBF3B: sub ecx, dword ptr [ebx + 4]
        __asm _emit 0x2B
        __asm _emit 0x4B
        __asm _emit 0x04
        // 0x587EBF3E: add ecx, dword ptr [esi + 0x50]
        __asm _emit 0x03
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x587EBF41: sub eax, dword ptr [ebx + 8]
        __asm _emit 0x2B
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x587EBF44: add eax, dword ptr [esi + 0x54]
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x587EBF47: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587EBF49: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x587EBF4C: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587EBF4E: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x587EBF51: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x587EBF53: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587EBF57: fild dword ptr [esp + 0x10]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587EBF5B: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587EBF60: fnstcw word ptr [esp + 0x10]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587EBF64: movzx eax, word ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587EBF69: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587EBF6D: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBF72: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EBF76: lea edx, [ebp*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xED
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBF7D: sub edx, ebp
        __asm _emit 0x2B
        __asm _emit 0xD5
        // 0x587EBF7F: fldcw word ptr [esp + 0x14]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EBF83: pop ebx
        __asm _emit 0x5B
        // 0x587EBF84: fistp qword ptr [esp + 0x10]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587EBF88: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587EBF8C: cmp ecx, dword ptr [esi + edx*8 + 0x21e8c]
        __asm _emit 0x3B
        __asm _emit 0x8C
        __asm _emit 0xD6
        __asm _emit 0x8C
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EBF93: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EBF99: fldcw word ptr [esp + 0xc]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587EBF9D: jbe 0x587ebff4
        __asm _emit 0x76
        __asm _emit 0x55
        // 0x587EBF9F: call 0x5875ee20
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x2E
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587EBFA4: sub eax, 0x3e9
        __asm _emit 0x2D
        __asm _emit 0xE9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBFA9: je 0x587ebfc3
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587EBFAB: sub eax, 3
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x03
        // 0x587EBFAE: je 0x587ebfbc
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587EBFB0: sub eax, 3
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x03
        // 0x587EBFB3: jne 0x587ebfd3
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x587EBFB5: push 0x3f0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBFBA: jmp 0x587ebfc8
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x587EBFBC: push 0x3ed
        __asm _emit 0x68
        __asm _emit 0xED
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBFC1: jmp 0x587ebfc8
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x587EBFC3: push 0x3ea
        __asm _emit 0x68
        __asm _emit 0xEA
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBFC8: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EBFCE: call 0x588c0da0
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x4D
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x587EBFD3: mov ecx, dword ptr [esi + 0x21ef4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EBFD9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587EBFDB: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x56
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587EBFE0: mov ecx, dword ptr [esi + 0x21ef8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EBFE6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587EBFE8: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587EBFED: pop ebp
        __asm _emit 0x5D
        // 0x587EBFEE: pop esi
        __asm _emit 0x5E
        // 0x587EBFEF: pop edi
        __asm _emit 0x5F
        // 0x587EBFF0: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587EBFF3: ret
        __asm _emit 0xC3
        // 0x587EBFF4: call 0x5875ee20
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x2E
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587EBFF9: sub eax, 0x3ea
        __asm _emit 0x2D
        __asm _emit 0xEA
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBFFE: je 0x587ec018
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587EC000: sub eax, 3
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x03
        // 0x587EC003: je 0x587ec011
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587EC005: sub eax, 3
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x03
        // 0x587EC008: jne 0x587ec028
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x587EC00A: push 0x3ef
        __asm _emit 0x68
        __asm _emit 0xEF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC00F: jmp 0x587ec01d
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x587EC011: push 0x3ec
        __asm _emit 0x68
        __asm _emit 0xEC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC016: jmp 0x587ec01d
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x587EC018: push 0x3e9
        __asm _emit 0x68
        __asm _emit 0xE9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EC01D: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EC023: call 0x588c0da0
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0x4D
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x587EC028: mov ecx, dword ptr [esi + 0x21ef4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC02E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EC030: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x55
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587EC035: mov ecx, dword ptr [esi + 0x21ef8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EC03B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EC03D: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x55
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587EC042: pop ebp
        __asm _emit 0x5D
        // 0x587EC043: pop esi
        __asm _emit 0x5E
        // 0x587EC044: pop edi
        __asm _emit 0x5F
        // 0x587EC045: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587EC048: ret
        __asm _emit 0xC3
    }
}
