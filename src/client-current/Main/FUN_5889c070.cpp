// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1472 bytes in 9 exact ranges.
// Source symbol alias: FUN_5889c070.

// Ghidra body range 0x5889C070..0x5889C109; 153 mapped bytes.
extern "C" __declspec(naked) void FUN_5889c070_segment_00() {
    __asm {
        // 0x5889C070: push ebp
        __asm _emit 0x55
        // 0x5889C071: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x5889C073: movzx eax, byte ptr [ebp + 0xb75]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x85
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C07A: cmp eax, 0xb
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0B
        // 0x5889C07D: ja 0x5889c666
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xE3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C083: push ebx
        __asm _emit 0x53
        // 0x5889C084: push esi
        __asm _emit 0x56
        // 0x5889C085: push edi
        __asm _emit 0x57
        // 0x5889C086: jmp dword ptr [eax*4 + 0x5889c668]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xC6
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x5889C08D: mov ebx, 0xfffff69d
        __asm _emit 0xBB
        __asm _emit 0x9D
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889C092: lea esi, [ebp + 0x974]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C098: mov edi, 0x440
        __asm _emit 0xBF
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C09D: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889C09F: nop
        __asm _emit 0x90
        // 0x5889C0A0: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889C0A3: lea ecx, [ebx + esi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x33
        // 0x5889C0A6: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C0AC: jle 0x5889c0c0
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889C0AE: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889C0B0: jl 0x5889c0c0
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889C0B2: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C0B8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889C0BA: je 0x5889c0c0
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889C0BC: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889C0BE: jmp 0x5889c0c2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889C0C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889C0C2: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C0C4: push eax
        __asm _emit 0x50
        // 0x5889C0C5: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x88
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x5889C0CA: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C0CC: push 0x25
        __asm _emit 0x6A
        __asm _emit 0x25
        // 0x5889C0CE: push 0x8d
        __asm _emit 0x68
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C0D3: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x71
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889C0D8: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889C0DA: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889C0DF: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C0E5: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889C0E8: cmp edi, 0x640
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C0EE: jl 0x5889c0a0
        __asm _emit 0x7C
        __asm _emit 0xB0
        // 0x5889C0F0: pop edi
        __asm _emit 0x5F
        // 0x5889C0F1: pop esi
        __asm _emit 0x5E
        // 0x5889C0F2: pop ebx
        __asm _emit 0x5B
        // 0x5889C0F3: pop ebp
        __asm _emit 0x5D
        // 0x5889C0F4: ret
        __asm _emit 0xC3
        // 0x5889C0F5: mov ebx, 0xfffff69d
        __asm _emit 0xBB
        __asm _emit 0x9D
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889C0FA: lea esi, [ebp + 0x974]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C100: mov edi, 0x440
        __asm _emit 0xBF
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C105: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889C107: jmp 0x5889c110
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x5889C110..0x5889C1DD; 205 mapped bytes.
extern "C" __declspec(naked) void FUN_5889c070_segment_01() {
    __asm {
        // 0x5889C110: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889C113: lea ecx, [esi + ebx]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x1E
        // 0x5889C116: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C11C: jle 0x5889c130
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889C11E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889C120: jl 0x5889c130
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889C122: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C128: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889C12A: je 0x5889c130
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889C12C: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889C12E: jmp 0x5889c132
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889C130: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889C132: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C134: push eax
        __asm _emit 0x50
        // 0x5889C135: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x87
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x5889C13A: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C13C: push 0x47
        __asm _emit 0x6A
        __asm _emit 0x47
        // 0x5889C13E: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x5889C140: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0x71
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889C145: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889C147: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889C14C: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C152: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889C155: cmp edi, 0x640
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C15B: jl 0x5889c110
        __asm _emit 0x7C
        __asm _emit 0xB3
        // 0x5889C15D: pop edi
        __asm _emit 0x5F
        // 0x5889C15E: pop esi
        __asm _emit 0x5E
        // 0x5889C15F: pop ebx
        __asm _emit 0x5B
        // 0x5889C160: pop ebp
        __asm _emit 0x5D
        // 0x5889C161: ret
        __asm _emit 0xC3
        // 0x5889C162: mov ebx, 0xfffff69d
        __asm _emit 0xBB
        __asm _emit 0x9D
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889C167: lea esi, [ebp + 0x974]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C16D: mov edi, 0x440
        __asm _emit 0xBF
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C172: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889C174: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889C177: lea ecx, [esi + ebx]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x1E
        // 0x5889C17A: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C180: jle 0x5889c194
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889C182: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889C184: jl 0x5889c194
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889C186: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C18C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889C18E: je 0x5889c194
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889C190: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889C192: jmp 0x5889c196
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889C194: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889C196: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C198: push eax
        __asm _emit 0x50
        // 0x5889C199: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x87
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x5889C19E: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C1A0: push 0x47
        __asm _emit 0x6A
        __asm _emit 0x47
        // 0x5889C1A2: push 0x19b
        __asm _emit 0x68
        __asm _emit 0x9B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C1A7: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889C1AC: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889C1AE: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889C1B3: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C1B9: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889C1BC: cmp edi, 0x640
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C1C2: jl 0x5889c174
        __asm _emit 0x7C
        __asm _emit 0xB0
        // 0x5889C1C4: pop edi
        __asm _emit 0x5F
        // 0x5889C1C5: pop esi
        __asm _emit 0x5E
        // 0x5889C1C6: pop ebx
        __asm _emit 0x5B
        // 0x5889C1C7: pop ebp
        __asm _emit 0x5D
        // 0x5889C1C8: ret
        __asm _emit 0xC3
        // 0x5889C1C9: mov ebx, 0xfffff69d
        __asm _emit 0xBB
        __asm _emit 0x9D
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889C1CE: lea esi, [ebp + 0x974]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C1D4: mov edi, 0x440
        __asm _emit 0xBF
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C1D9: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889C1DB: jmp 0x5889c1e0
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x5889C1E0..0x5889C249; 105 mapped bytes.
extern "C" __declspec(naked) void FUN_5889c070_segment_02() {
    __asm {
        // 0x5889C1E0: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889C1E3: lea ecx, [esi + ebx]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x1E
        // 0x5889C1E6: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C1EC: jle 0x5889c200
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889C1EE: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889C1F0: jl 0x5889c200
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889C1F2: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C1F8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889C1FA: je 0x5889c200
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889C1FC: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889C1FE: jmp 0x5889c202
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889C200: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889C202: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C204: push eax
        __asm _emit 0x50
        // 0x5889C205: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0x87
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x5889C20A: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C20C: push 0x47
        __asm _emit 0x6A
        __asm _emit 0x47
        // 0x5889C20E: push 0x258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C213: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889C218: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889C21A: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889C21F: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C225: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889C228: cmp edi, 0x640
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C22E: jl 0x5889c1e0
        __asm _emit 0x7C
        __asm _emit 0xB0
        // 0x5889C230: pop edi
        __asm _emit 0x5F
        // 0x5889C231: pop esi
        __asm _emit 0x5E
        // 0x5889C232: pop ebx
        __asm _emit 0x5B
        // 0x5889C233: pop ebp
        __asm _emit 0x5D
        // 0x5889C234: ret
        __asm _emit 0xC3
        // 0x5889C235: mov ebx, 0xfffff69c
        __asm _emit 0xBB
        __asm _emit 0x9C
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889C23A: lea esi, [ebp + 0x974]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C240: mov edi, 0x400
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C245: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889C247: jmp 0x5889c250
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x5889C250..0x5889C2B9; 105 mapped bytes.
extern "C" __declspec(naked) void FUN_5889c070_segment_03() {
    __asm {
        // 0x5889C250: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889C253: lea ecx, [ebx + esi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x33
        // 0x5889C256: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C25C: jle 0x5889c270
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889C25E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889C260: jl 0x5889c270
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889C262: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C268: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889C26A: je 0x5889c270
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889C26C: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889C26E: jmp 0x5889c272
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889C270: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889C272: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C274: push eax
        __asm _emit 0x50
        // 0x5889C275: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0x86
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x5889C27A: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C27C: push 0x22
        __asm _emit 0x6A
        __asm _emit 0x22
        // 0x5889C27E: push 0x2dd
        __asm _emit 0x68
        __asm _emit 0xDD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C283: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889C288: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889C28A: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889C28F: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C295: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889C298: cmp edi, 0x600
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C29E: jl 0x5889c250
        __asm _emit 0x7C
        __asm _emit 0xB0
        // 0x5889C2A0: pop edi
        __asm _emit 0x5F
        // 0x5889C2A1: pop esi
        __asm _emit 0x5E
        // 0x5889C2A2: pop ebx
        __asm _emit 0x5B
        // 0x5889C2A3: pop ebp
        __asm _emit 0x5D
        // 0x5889C2A4: ret
        __asm _emit 0xC3
        // 0x5889C2A5: mov ebx, 0xfffff69c
        __asm _emit 0xBB
        __asm _emit 0x9C
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889C2AA: lea esi, [ebp + 0x974]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C2B0: mov edi, 0x400
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C2B5: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889C2B7: jmp 0x5889c2c0
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x5889C2C0..0x5889C329; 105 mapped bytes.
extern "C" __declspec(naked) void FUN_5889c070_segment_04() {
    __asm {
        // 0x5889C2C0: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889C2C3: lea ecx, [esi + ebx]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x1E
        // 0x5889C2C6: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C2CC: jle 0x5889c2e0
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889C2CE: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889C2D0: jl 0x5889c2e0
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889C2D2: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C2D8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889C2DA: je 0x5889c2e0
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889C2DC: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889C2DE: jmp 0x5889c2e2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889C2E0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889C2E2: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C2E4: push eax
        __asm _emit 0x50
        // 0x5889C2E5: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x86
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x5889C2EA: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C2EC: push 0x33
        __asm _emit 0x6A
        __asm _emit 0x33
        // 0x5889C2EE: push 0x2dd
        __asm _emit 0x68
        __asm _emit 0xDD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C2F3: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x6F
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889C2F8: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889C2FA: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889C2FF: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C305: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889C308: cmp edi, 0x600
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C30E: jl 0x5889c2c0
        __asm _emit 0x7C
        __asm _emit 0xB0
        // 0x5889C310: pop edi
        __asm _emit 0x5F
        // 0x5889C311: pop esi
        __asm _emit 0x5E
        // 0x5889C312: pop ebx
        __asm _emit 0x5B
        // 0x5889C313: pop ebp
        __asm _emit 0x5D
        // 0x5889C314: ret
        __asm _emit 0xC3
        // 0x5889C315: mov ebx, 0xfffff69c
        __asm _emit 0xBB
        __asm _emit 0x9C
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889C31A: lea esi, [ebp + 0x974]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C320: mov edi, 0x400
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C325: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889C327: jmp 0x5889c330
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x5889C330..0x5889C397; 103 mapped bytes.
extern "C" __declspec(naked) void FUN_5889c070_segment_05() {
    __asm {
        // 0x5889C330: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889C333: lea ecx, [esi + ebx]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x1E
        // 0x5889C336: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C33C: jle 0x5889c350
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889C33E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889C340: jl 0x5889c350
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889C342: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C348: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889C34A: je 0x5889c350
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889C34C: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889C34E: jmp 0x5889c352
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889C350: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889C352: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C354: push eax
        __asm _emit 0x50
        // 0x5889C355: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x85
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x5889C35A: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C35C: push 0x2ac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C361: push 0x127
        __asm _emit 0x68
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C366: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x6F
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889C36B: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889C36D: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889C372: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C378: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889C37B: cmp edi, 0x600
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C381: jl 0x5889c330
        __asm _emit 0x7C
        __asm _emit 0xAD
        // 0x5889C383: mov ebx, 0xfffff693
        __asm _emit 0xBB
        __asm _emit 0x93
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889C388: lea esi, [ebp + 0x97c]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x7C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C38E: mov edi, 0x3c0
        __asm _emit 0xBF
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C393: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889C395: jmp 0x5889c3a0
        __asm _emit 0xEB
        __asm _emit 0x09
    }
}

// Ghidra body range 0x5889C3A0..0x5889C499; 249 mapped bytes.
extern "C" __declspec(naked) void FUN_5889c070_segment_06() {
    __asm {
        // 0x5889C3A0: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889C3A3: lea ecx, [ebx + esi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x33
        // 0x5889C3A6: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C3AC: jle 0x5889c3c0
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889C3AE: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889C3B0: jl 0x5889c3c0
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889C3B2: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C3B8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889C3BA: je 0x5889c3c0
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889C3BC: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889C3BE: jmp 0x5889c3c2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889C3C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889C3C2: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C3C4: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5889C3C7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889C3C9: je 0x5889c3f3
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5889C3CB: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5889C3CE: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5889C3D1: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5889C3D4: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5889C3D7: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5889C3DA: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889C3DC: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5889C3DF: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5889C3E1: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5889C3E4: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5889C3E7: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5889C3EA: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5889C3ED: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5889C3F0: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5889C3F3: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C3F5: push 0x2ac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C3FA: push 0x22
        __asm _emit 0x6A
        __asm _emit 0x22
        // 0x5889C3FC: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x6E
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889C401: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889C403: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889C408: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C40E: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889C411: cmp edi, 0x5c0
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xC0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C417: jl 0x5889c3a0
        __asm _emit 0x7C
        __asm _emit 0x87
        // 0x5889C419: pop edi
        __asm _emit 0x5F
        // 0x5889C41A: pop esi
        __asm _emit 0x5E
        // 0x5889C41B: pop ebx
        __asm _emit 0x5B
        // 0x5889C41C: pop ebp
        __asm _emit 0x5D
        // 0x5889C41D: ret
        __asm _emit 0xC3
        // 0x5889C41E: mov ebx, 0xfffff69e
        __asm _emit 0xBB
        __asm _emit 0x9E
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889C423: lea esi, [ebp + 0x974]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C429: mov edi, 0x480
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C42E: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889C430: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889C433: lea ecx, [ebx + esi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x33
        // 0x5889C436: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C43C: jle 0x5889c450
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889C43E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889C440: jl 0x5889c450
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889C442: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C448: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889C44A: je 0x5889c450
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889C44C: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889C44E: jmp 0x5889c452
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889C450: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889C452: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C454: push eax
        __asm _emit 0x50
        // 0x5889C455: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x5889C45A: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C45C: push 0x262
        __asm _emit 0x68
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C461: push 0x60
        __asm _emit 0x6A
        __asm _emit 0x60
        // 0x5889C463: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x6E
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889C468: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889C46A: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889C46F: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C475: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889C478: cmp edi, 0x680
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C47E: jl 0x5889c430
        __asm _emit 0x7C
        __asm _emit 0xB0
        // 0x5889C480: pop edi
        __asm _emit 0x5F
        // 0x5889C481: pop esi
        __asm _emit 0x5E
        // 0x5889C482: pop ebx
        __asm _emit 0x5B
        // 0x5889C483: pop ebp
        __asm _emit 0x5D
        // 0x5889C484: ret
        __asm _emit 0xC3
        // 0x5889C485: mov ebx, 0xfffff69c
        __asm _emit 0xBB
        __asm _emit 0x9C
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889C48A: lea esi, [ebp + 0x974]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C490: mov edi, 0x400
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C495: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889C497: jmp 0x5889c4a0
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x5889C4A0..0x5889C597; 247 mapped bytes.
extern "C" __declspec(naked) void FUN_5889c070_segment_07() {
    __asm {
        // 0x5889C4A0: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889C4A3: lea ecx, [ebx + esi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x33
        // 0x5889C4A6: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C4AC: jle 0x5889c4c0
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889C4AE: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889C4B0: jl 0x5889c4c0
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889C4B2: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C4B8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889C4BA: je 0x5889c4c0
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889C4BC: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889C4BE: jmp 0x5889c4c2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889C4C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889C4C2: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C4C4: push eax
        __asm _emit 0x50
        // 0x5889C4C5: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x84
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x5889C4CA: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C4CC: push 0x2cf
        __asm _emit 0x68
        __asm _emit 0xCF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C4D1: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x5889C4D3: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x6D
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889C4D8: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889C4DA: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889C4DF: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C4E5: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889C4E8: cmp edi, 0x600
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C4EE: jl 0x5889c4a0
        __asm _emit 0x7C
        __asm _emit 0xB0
        // 0x5889C4F0: mov ebx, 0xfffff693
        __asm _emit 0xBB
        __asm _emit 0x93
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889C4F5: lea esi, [ebp + 0x97c]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x7C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C4FB: mov edi, 0x3c0
        __asm _emit 0xBF
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C500: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889C502: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889C505: lea ecx, [ebx + esi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x33
        // 0x5889C508: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C50E: jle 0x5889c522
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889C510: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889C512: jl 0x5889c522
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889C514: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C51A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889C51C: je 0x5889c522
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889C51E: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889C520: jmp 0x5889c524
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889C522: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889C524: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C526: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5889C529: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889C52B: je 0x5889c555
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5889C52D: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5889C530: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5889C533: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5889C536: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5889C539: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5889C53C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889C53E: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5889C541: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5889C543: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5889C546: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5889C549: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5889C54C: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5889C54F: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5889C552: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5889C555: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C557: push 0x2c5
        __asm _emit 0x68
        __asm _emit 0xC5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C55C: push 0xce
        __asm _emit 0x68
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C561: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x6D
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889C566: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889C568: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889C56D: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C573: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889C576: cmp edi, 0x5c0
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xC0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C57C: jl 0x5889c502
        __asm _emit 0x7C
        __asm _emit 0x84
        // 0x5889C57E: pop edi
        __asm _emit 0x5F
        // 0x5889C57F: pop esi
        __asm _emit 0x5E
        // 0x5889C580: pop ebx
        __asm _emit 0x5B
        // 0x5889C581: pop ebp
        __asm _emit 0x5D
        // 0x5889C582: ret
        __asm _emit 0xC3
        // 0x5889C583: mov ebx, 0xfffff69e
        __asm _emit 0xBB
        __asm _emit 0x9E
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889C588: lea esi, [ebp + 0x974]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C58E: mov edi, 0x480
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C593: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889C595: jmp 0x5889c5a0
        __asm _emit 0xEB
        __asm _emit 0x09
    }
}

// Ghidra body range 0x5889C5A0..0x5889C668; 200 mapped bytes.
extern "C" __declspec(naked) void FUN_5889c070_segment_08() {
    __asm {
        // 0x5889C5A0: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889C5A3: lea ecx, [ebx + esi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x33
        // 0x5889C5A6: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C5AC: jle 0x5889c5c0
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889C5AE: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889C5B0: jl 0x5889c5c0
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889C5B2: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C5B8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889C5BA: je 0x5889c5c0
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889C5BC: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889C5BE: jmp 0x5889c5c2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889C5C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889C5C2: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C5C4: push eax
        __asm _emit 0x50
        // 0x5889C5C5: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x5889C5CA: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C5CC: push 0x230
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C5D1: push 0x320
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C5D6: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x6C
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889C5DB: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889C5DD: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889C5E2: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C5E8: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889C5EB: cmp edi, 0x680
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C5F1: jl 0x5889c5a0
        __asm _emit 0x7C
        __asm _emit 0xAD
        // 0x5889C5F3: pop edi
        __asm _emit 0x5F
        // 0x5889C5F4: pop esi
        __asm _emit 0x5E
        // 0x5889C5F5: pop ebx
        __asm _emit 0x5B
        // 0x5889C5F6: pop ebp
        __asm _emit 0x5D
        // 0x5889C5F7: ret
        __asm _emit 0xC3
        // 0x5889C5F8: mov ebx, 0xfffff69e
        __asm _emit 0xBB
        __asm _emit 0x9E
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889C5FD: lea esi, [ebp + 0x974]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C603: mov edi, 0x480
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C608: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889C60A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C610: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889C613: lea ecx, [ebx + esi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x33
        // 0x5889C616: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C61C: jle 0x5889c630
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889C61E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889C620: jl 0x5889c630
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889C622: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C628: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889C62A: je 0x5889c630
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889C62C: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889C62E: jmp 0x5889c632
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889C630: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889C632: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C634: push eax
        __asm _emit 0x50
        // 0x5889C635: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x82
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x5889C63A: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889C63C: push 0x226
        __asm _emit 0x68
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C641: push 0x389
        __asm _emit 0x68
        __asm _emit 0x89
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C646: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x6C
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889C64B: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889C64D: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889C652: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C658: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889C65B: cmp edi, 0x680
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C661: jl 0x5889c610
        __asm _emit 0x7C
        __asm _emit 0xAD
        // 0x5889C663: pop edi
        __asm _emit 0x5F
        // 0x5889C664: pop esi
        __asm _emit 0x5E
        // 0x5889C665: pop ebx
        __asm _emit 0x5B
        // 0x5889C666: pop ebp
        __asm _emit 0x5D
        // 0x5889C667: ret
        __asm _emit 0xC3
    }
}
