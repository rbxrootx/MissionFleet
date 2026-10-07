// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 302 bytes in 1 exact ranges.
// Source symbol alias: FUN_5878cd60.

// Ghidra body range 0x5878CD60..0x5878CE8E; 302 mapped bytes.
extern "C" __declspec(naked) void FUN_5878cd60_segment_00() {
    __asm {
        // 0x5878CD60: push esi
        __asm _emit 0x56
        // 0x5878CD61: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5878CD63: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5878CD67: mov ecx, 0xe1ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878CD6C: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5878CD6F: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878CD74: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x5878CD77: mov dword ptr [esi + 0x12144], 0x1e
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878CD81: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5878CD85: mov eax, dword ptr [esi + 0x12138]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5878CD8B: push edi
        __asm _emit 0x57
        // 0x5878CD8C: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5878CD8E: mov dword ptr [esi + 0x88], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878CD98: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5878CD9A: je 0x5878cdb6
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x5878CD9C: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5878CD9F: jne 0x5878cde7
        __asm _emit 0x75
        __asm _emit 0x46
        // 0x5878CDA1: mov dword ptr [esi + 0x88], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878CDA7: mov dword ptr [esi + 0x12144], 0x64
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878CDB1: lea edi, [eax - 1]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0xFF
        // 0x5878CDB4: jmp 0x5878cde7
        __asm _emit 0xEB
        __asm _emit 0x31
        // 0x5878CDB6: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878CDBB: cmp dword ptr [eax + 0x170], 0x27
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x27
        // 0x5878CDC2: jle 0x5878cdda
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5878CDC4: cmp dword ptr [eax + 0x194], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878CDCA: je 0x5878cdda
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5878CDCC: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878CDD2: mov eax, dword ptr [eax + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878CDD8: jmp 0x5878cddc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5878CDDA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5878CDDC: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878CDE2: mov edi, 2
        __asm _emit 0xBF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878CDE7: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878CDED: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5878CDEF: je 0x5878ce0c
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5878CDF1: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878CDF7: push edx
        __asm _emit 0x52
        // 0x5878CDF8: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0xAB
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5878CDFD: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878CE03: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5878CE05: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5878CE08: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5878CE0A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5878CE0C: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5878CE0F: cmp dword ptr [eax + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878CE15: jle 0x5878ce2e
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5878CE17: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5878CE19: jl 0x5878ce2e
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x5878CE1B: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878CE21: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5878CE23: je 0x5878ce2e
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5878CE25: shl edi, 6
        __asm _emit 0xC1
        __asm _emit 0xE7
        __asm _emit 0x06
        // 0x5878CE28: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x5878CE2A: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5878CE2C: jmp 0x5878ce30
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5878CE2E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5878CE30: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878CE36: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5878CE39: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5878CE3B: je 0x5878ce65
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5878CE3D: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5878CE40: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5878CE43: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5878CE46: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5878CE49: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5878CE4C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5878CE4E: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5878CE51: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5878CE53: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5878CE56: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5878CE59: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5878CE5C: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5878CE5F: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5878CE62: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5878CE65: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878CE6B: call 0x58793e00
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x6F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878CE70: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878CE76: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5878CE78: call 0x58793da0
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x6F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878CE7D: pop edi
        __asm _emit 0x5F
        // 0x5878CE7E: mov dword ptr [esi + 0x28], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878CE85: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878CE8C: pop esi
        __asm _emit 0x5E
        // 0x5878CE8D: ret
        __asm _emit 0xC3
    }
}
