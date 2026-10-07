// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 356 bytes in 4 discontiguous ranges.
// Source symbol alias: FUN_587aaed0.

// Ghidra body range 0x587AAED0..0x587AAFBD; 237 mapped bytes.
extern "C" __declspec(naked) void FUN_587aaed0_segment_00() {
    __asm {
        // 0x587AAED0: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587AAED5: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587AAED8: push ebx
        __asm _emit 0x53
        // 0x587AAED9: push ebp
        __asm _emit 0x55
        // 0x587AAEDA: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587AAEDC: mov ecx, dword ptr [eax + 0x21c48]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587AAEE2: mov eax, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587AAEE5: push esi
        __asm _emit 0x56
        // 0x587AAEE6: push edi
        __asm _emit 0x57
        // 0x587AAEE7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AAEE9: je 0x587aafa9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AAEEF: mov eax, dword ptr [eax + 0x17c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AAEF5: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AAEF9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AAEFB: je 0x587aafa9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AAF01: mov esi, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x587AAF04: cmp esi, dword ptr [ebp + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x587AAF07: jbe 0x587aaf0e
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AAF09: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0x1D
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AAF0E: mov edi, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x587AAF11: mov ebx, esi
        __asm _emit 0x8B
        __asm _emit 0xDE
        // 0x587AAF13: mov esi, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x587AAF16: cmp dword ptr [ebp + 0x10], esi
        __asm _emit 0x39
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x587AAF19: jbe 0x587aaf20
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AAF1B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x1D
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AAF20: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x587AAF23: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AAF25: je 0x587aaf2b
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587AAF27: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x587AAF29: je 0x587aaf30
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587AAF2B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x1D
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AAF30: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x587AAF32: je 0x587aafa9
        __asm _emit 0x74
        __asm _emit 0x75
        // 0x587AAF34: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AAF36: jne 0x587aafa1
        __asm _emit 0x75
        __asm _emit 0x69
        // 0x587AAF38: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x1D
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AAF3D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AAF3F: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587AAF42: jb 0x587aaf49
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AAF44: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0x1D
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AAF49: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x587AAF4B: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587AAF4D: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AAF51: cmp dword ptr [ecx + 0x170], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AAF57: jle 0x587aaf84
        __asm _emit 0x7E
        __asm _emit 0x2B
        // 0x587AAF59: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AAF5B: jl 0x587aaf84
        __asm _emit 0x7C
        __asm _emit 0x27
        // 0x587AAF5D: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AAF63: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587AAF65: je 0x587aaf84
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x587AAF67: mov esi, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x34
        __asm _emit 0x81
        // 0x587AAF6A: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587AAF6C: je 0x587aaf84
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x587AAF6E: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587AAF70: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587AAF73: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587AAF75: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587AAF77: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AAF79: je 0x587aaf84
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587AAF7B: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587AAF7D: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587AAF80: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587AAF82: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587AAF84: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AAF86: jne 0x587aafa5
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x587AAF88: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0x1C
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AAF8D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AAF8F: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587AAF92: jb 0x587aaf99
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AAF94: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x1C
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AAF99: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587AAF9C: jmp 0x587aaf13
        __asm _emit 0xE9
        __asm _emit 0x72
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AAFA1: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AAFA3: jmp 0x587aaf3f
        __asm _emit 0xEB
        __asm _emit 0x9A
        // 0x587AAFA5: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AAFA7: jmp 0x587aaf8f
        __asm _emit 0xEB
        __asm _emit 0xE6
        // 0x587AAFA9: mov ebx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x10
        // 0x587AAFAC: cmp ebx, dword ptr [ebp + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x5D
        __asm _emit 0x14
        // 0x587AAFAF: lea esi, [ebp + 4]
        __asm _emit 0x8D
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x587AAFB2: jbe 0x587aafb9
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AAFB4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x1C
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AAFB9: mov edi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x3E
        // 0x587AAFBB: jmp 0x587aafc0
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x587AAFC0..0x587AAFFD; 61 mapped bytes.
extern "C" __declspec(naked) void FUN_587aaed0_segment_01() {
    __asm {
        // 0x587AAFC0: mov ebp, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x587AAFC3: cmp dword ptr [esi + 0xc], ebp
        __asm _emit 0x39
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x587AAFC6: jbe 0x587aafcd
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AAFC8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x1C
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AAFCD: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587AAFCF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AAFD1: je 0x587aafd7
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587AAFD3: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x587AAFD5: je 0x587aafdc
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587AAFD7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x1C
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AAFDC: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x587AAFDE: je 0x587ab022
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x587AAFE0: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587AAFE2: jne 0x587ab01a
        __asm _emit 0x75
        __asm _emit 0x36
        // 0x587AAFE4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0x1C
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AAFE9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AAFEB: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x587AAFEE: jb 0x587aaff5
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AAFF0: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x1C
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AAFF5: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587AAFF7: push eax
        __asm _emit 0x50
        // 0x587AAFF8: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x1C
        __asm _emit 0x1D
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587AB01A..0x587AB01E; 4 mapped bytes.
extern "C" __declspec(naked) void FUN_587aaed0_segment_02() {
    __asm {
        // 0x587AB01A: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AB01C: jmp 0x587aafeb
        __asm _emit 0xEB
        __asm _emit 0xCD
    }
}

// Ghidra body range 0x587AB022..0x587AB058; 54 mapped bytes.
extern "C" __declspec(naked) void FUN_587aaed0_segment_03() {
    __asm {
        // 0x587AB022: mov ebp, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x587AB025: cmp dword ptr [esi + 0xc], ebp
        __asm _emit 0x39
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x587AB028: jbe 0x587ab02f
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AB02A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x1C
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB02F: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587AB032: mov ebx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x1E
        // 0x587AB034: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587AB037: jbe 0x587ab03e
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AB039: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x1C
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB03E: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587AB040: push ebp
        __asm _emit 0x55
        // 0x587AB041: push ebx
        __asm _emit 0x53
        // 0x587AB042: push edi
        __asm _emit 0x57
        // 0x587AB043: push eax
        __asm _emit 0x50
        // 0x587AB044: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587AB048: push ecx
        __asm _emit 0x51
        // 0x587AB049: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587AB04B: call 0x587aedb0
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB050: pop edi
        __asm _emit 0x5F
        // 0x587AB051: pop esi
        __asm _emit 0x5E
        // 0x587AB052: pop ebp
        __asm _emit 0x5D
        // 0x587AB053: pop ebx
        __asm _emit 0x5B
        // 0x587AB054: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587AB057: ret
        __asm _emit 0xC3
    }
}
