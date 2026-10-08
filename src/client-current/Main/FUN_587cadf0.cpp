// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 309 bytes in 1 exact ranges.
// Source symbol alias: FUN_587cadf0.

// Ghidra body range 0x587CADF0..0x587CAF25; 309 mapped bytes.
extern "C" __declspec(naked) void FUN_587cadf0_segment_00() {
    __asm {
        // 0x587CADF0: push esi
        __asm _emit 0x56
        // 0x587CADF1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587CADF3: mov ecx, dword ptr [esi + 0x204]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CADF9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587CADFB: je 0x587caf23
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAE01: call 0x587cb380
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAE06: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x587CAE09: jne 0x587caeff
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAE0F: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAE15: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CAE17: jle 0x587caee2
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAE1D: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x587CAE20: jne 0x587cae8c
        __asm _emit 0x75
        __asm _emit 0x6A
        // 0x587CAE22: cmp dword ptr [0x589c8edc], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xDC
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x587CAE29: je 0x587cae8c
        __asm _emit 0x74
        __asm _emit 0x61
        // 0x587CAE2B: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CAE30: push ebx
        __asm _emit 0x53
        // 0x587CAE31: mov ebx, dword ptr [0x58a24580]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CAE37: push ebp
        __asm _emit 0x55
        // 0x587CAE38: push edi
        __asm _emit 0x57
        // 0x587CAE39: mov edi, dword ptr [eax + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CAE3F: mov eax, dword ptr [ebx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x1C
        // 0x587CAE42: sub eax, dword ptr [ebx + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x43
        __asm _emit 0x14
        // 0x587CAE45: mov ebp, dword ptr [edi + 0x114]
        __asm _emit 0x8B
        __asm _emit 0xAF
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAE4B: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587CAE4D: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAE53: cdq
        __asm _emit 0x99
        // 0x587CAE54: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x587CAE56: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587CAE59: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x587CAE5B: mov eax, dword ptr [ebx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x20
        // 0x587CAE5E: sub eax, dword ptr [ebx + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x43
        __asm _emit 0x18
        // 0x587CAE61: sub ecx, dword ptr [edi + 0x50]
        __asm _emit 0x2B
        __asm _emit 0x4F
        __asm _emit 0x50
        // 0x587CAE64: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587CAE66: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAE6C: cdq
        __asm _emit 0x99
        // 0x587CAE6D: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x587CAE6F: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CAE75: push edx
        __asm _emit 0x52
        // 0x587CAE76: sub eax, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587CAE79: add eax, dword ptr [edi + 0x54]
        __asm _emit 0x03
        __asm _emit 0x47
        __asm _emit 0x54
        // 0x587CAE7C: push eax
        __asm _emit 0x50
        // 0x587CAE7D: push ecx
        __asm _emit 0x51
        // 0x587CAE7E: mov ecx, dword ptr [esi + 0x2b8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAE84: call 0x587b7400
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0xC5
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587CAE89: pop edi
        __asm _emit 0x5F
        // 0x587CAE8A: pop ebp
        __asm _emit 0x5D
        // 0x587CAE8B: pop ebx
        __asm _emit 0x5B
        // 0x587CAE8C: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587CAE8F: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587CAE92: push eax
        __asm _emit 0x50
        // 0x587CAE93: push ecx
        __asm _emit 0x51
        // 0x587CAE94: mov ecx, dword ptr [esi + 0x2bc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAE9A: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0x83
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CAE9F: mov edx, dword ptr [esi + 0x208]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAEA5: mov ecx, dword ptr [edx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x50
        // 0x587CAEA8: mov eax, dword ptr [esi + 0x2bc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAEAE: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x587CAEB1: dec dword ptr [esi + 0x90]
        __asm _emit 0xFF
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAEB7: mov esi, dword ptr [esi + 0x2bc]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAEBD: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587CAEC1: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587CAEC5: mov edx, 0xffff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAECA: xor ax, dx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587CAECD: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAED2: and ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x01
        // 0x587CAED6: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x587CAED9: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x587CAEDC: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587CAEE0: pop esi
        __asm _emit 0x5E
        // 0x587CAEE1: ret
        __asm _emit 0xC3
        // 0x587CAEE2: jne 0x587caf23
        __asm _emit 0x75
        __asm _emit 0x3F
        // 0x587CAEE4: mov eax, dword ptr [esi + 0x2bc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAEEA: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAEEF: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587CAEF3: mov dword ptr [esi + 0x90], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CAEFD: pop esi
        __asm _emit 0x5E
        // 0x587CAEFE: ret
        __asm _emit 0xC3
        // 0x587CAEFF: mov ecx, dword ptr [esi + 0x204]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAF05: call 0x587cb380
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAF0A: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587CAF0D: jne 0x587caf23
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x587CAF0F: mov dword ptr [esi + 0x204], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAF19: mov dword ptr [esi + 0x214], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAF23: pop esi
        __asm _emit 0x5E
        // 0x587CAF24: ret
        __asm _emit 0xC3
    }
}
