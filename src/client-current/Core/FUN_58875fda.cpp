// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58875FDA .. +0x148 bytes.
extern "C" __declspec(naked) void FUN_58875fda() {
    __asm {
        // 0x58875FDA: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58875FDC: push ebp
        __asm _emit 0x55
        // 0x58875FDD: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58875FDF: push ecx
        __asm _emit 0x51
        // 0x58875FE0: push esi
        __asm _emit 0x56
        // 0x58875FE1: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58875FE4: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58875FEA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58875FEC: je 0x5887605a
        __asm _emit 0x74
        __asm _emit 0x6C
        // 0x58875FEE: cmp eax, 0x58907310
        __asm _emit 0x3D
        __asm _emit 0x10
        __asm _emit 0x73
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x58875FF3: je 0x5887605a
        __asm _emit 0x74
        __asm _emit 0x65
        // 0x58875FF5: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x58875FF8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58875FFA: je 0x5887605a
        __asm _emit 0x74
        __asm _emit 0x5E
        // 0x58875FFC: cmp dword ptr [eax], 0
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        // 0x58875FFF: jne 0x5887605a
        __asm _emit 0x75
        __asm _emit 0x59
        // 0x58876001: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876007: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58876009: je 0x58876023
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5887600B: cmp dword ptr [eax], 0
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        // 0x5887600E: jne 0x58876023
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x58876010: push eax
        __asm _emit 0x50
        // 0x58876011: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x6B
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876016: push dword ptr [esi + 0x88]
        __asm _emit 0xFF
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887601C: call 0x588762f7
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876021: pop ecx
        __asm _emit 0x59
        // 0x58876022: pop ecx
        __asm _emit 0x59
        // 0x58876023: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876029: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5887602B: je 0x58876045
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5887602D: cmp dword ptr [eax], 0
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        // 0x58876030: jne 0x58876045
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x58876032: push eax
        __asm _emit 0x50
        // 0x58876033: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x6B
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876038: push dword ptr [esi + 0x88]
        __asm _emit 0xFF
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887603E: call 0x58876756
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876043: pop ecx
        __asm _emit 0x59
        // 0x58876044: pop ecx
        __asm _emit 0x59
        // 0x58876045: push dword ptr [esi + 0x7c]
        __asm _emit 0xFF
        __asm _emit 0x76
        __asm _emit 0x7C
        // 0x58876048: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x6B
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5887604D: push dword ptr [esi + 0x88]
        __asm _emit 0xFF
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876053: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x6B
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876058: pop ecx
        __asm _emit 0x59
        // 0x58876059: pop ecx
        __asm _emit 0x59
        // 0x5887605A: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876060: push ebx
        __asm _emit 0x53
        // 0x58876061: push edi
        __asm _emit 0x57
        // 0x58876062: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58876064: je 0x588760ab
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x58876066: cmp dword ptr [eax], 0
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        // 0x58876069: jne 0x588760ab
        __asm _emit 0x75
        __asm _emit 0x40
        // 0x5887606B: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876071: sub eax, 0xfe
        __asm _emit 0x2D
        __asm _emit 0xFE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876076: push eax
        __asm _emit 0x50
        // 0x58876077: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x6B
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5887607C: mov eax, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876082: mov edi, 0x80
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876087: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x58876089: push eax
        __asm _emit 0x50
        // 0x5887608A: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x6B
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5887608F: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876095: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x58876097: push eax
        __asm _emit 0x50
        // 0x58876098: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x6B
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5887609D: push dword ptr [esi + 0x8c]
        __asm _emit 0xFF
        __asm _emit 0xB6
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588760A3: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x6B
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588760A8: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588760AB: push dword ptr [esi + 0x9c]
        __asm _emit 0xFF
        __asm _emit 0xB6
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588760B1: call 0x5887614b
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588760B6: pop ecx
        __asm _emit 0x59
        // 0x588760B7: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x588760B9: pop eax
        __asm _emit 0x58
        // 0x588760BA: lea ebx, [esi + 0xa0]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588760C0: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x588760C3: lea edi, [esi + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x28
        // 0x588760C6: cmp dword ptr [edi - 8], 0x58907520
        __asm _emit 0x81
        __asm _emit 0x7F
        __asm _emit 0xF8
        __asm _emit 0x20
        __asm _emit 0x75
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x588760CD: je 0x588760ec
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x588760CF: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588760D1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588760D3: je 0x588760e9
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x588760D5: cmp dword ptr [eax], 0
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        // 0x588760D8: jne 0x588760e9
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x588760DA: push eax
        __asm _emit 0x50
        // 0x588760DB: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x6B
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588760E0: push dword ptr [ebx]
        __asm _emit 0xFF
        __asm _emit 0x33
        // 0x588760E2: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0x6B
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588760E7: pop ecx
        __asm _emit 0x59
        // 0x588760E8: pop ecx
        __asm _emit 0x59
        // 0x588760E9: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x588760EC: cmp dword ptr [edi - 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0xF4
        __asm _emit 0x00
        // 0x588760F0: je 0x58876108
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588760F2: mov eax, dword ptr [edi - 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0xFC
        // 0x588760F5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588760F7: je 0x58876105
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588760F9: cmp dword ptr [eax], 0
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        // 0x588760FC: jne 0x58876105
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588760FE: push eax
        __asm _emit 0x50
        // 0x588760FF: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x6B
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876104: pop ecx
        __asm _emit 0x59
        // 0x58876105: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x58876108: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5887610B: add edi, 0x10
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x10
        // 0x5887610E: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x58876111: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x58876114: jne 0x588760c6
        __asm _emit 0x75
        __asm _emit 0xB0
        // 0x58876116: pop edi
        __asm _emit 0x5F
        // 0x58876117: pop ebx
        __asm _emit 0x5B
        // 0x58876118: push esi
        __asm _emit 0x56
        // 0x58876119: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x6A
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5887611E: pop ecx
        __asm _emit 0x59
        // 0x5887611F: pop esi
        __asm _emit 0x5E
        // 0x58876120: leave
        __asm _emit 0xC9
        // 0x58876121: ret
        __asm _emit 0xC3
    }
}
