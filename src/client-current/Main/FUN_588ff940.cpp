// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 96 bytes in 1 exact ranges.
// Source symbol alias: FUN_588ff940.

// Ghidra body range 0x588FF940..0x588FF9A0; 96 mapped bytes.
extern "C" __declspec(naked) void FUN_588ff940_segment_00() {
    __asm {
        // 0x588FF940: push esi
        __asm _emit 0x56
        // 0x588FF941: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FF943: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588FF947: push edi
        __asm _emit 0x57
        // 0x588FF948: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x588FF94A: je 0x588ff998
        __asm _emit 0x74
        __asm _emit 0x4C
        // 0x588FF94C: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x588FF94F: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588FF953: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FF955: je 0x588ff97d
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x588FF957: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x588FF95A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FF95C: je 0x588ff976
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x588FF95E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588FF960: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588FF962: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FF964: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x588FF967: push edi
        __asm _emit 0x57
        // 0x588FF968: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588FF96A: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x588FF96D: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x588FF970: je 0x588ff97d
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FF972: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FF974: jne 0x588ff960
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x588FF976: pop edi
        __asm _emit 0x5F
        // 0x588FF977: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FF979: pop esi
        __asm _emit 0x5E
        // 0x588FF97A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588FF97D: cmp dword ptr [edi + 4], 0x204
        __asm _emit 0x81
        __asm _emit 0x7F
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF984: jne 0x588ff998
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x588FF986: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FF988: call 0x588ff080
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF98D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FF98F: je 0x588ff998
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588FF991: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FF993: call 0x588f7e90
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0x84
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF998: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588FF99B: pop edi
        __asm _emit 0x5F
        // 0x588FF99C: pop esi
        __asm _emit 0x5E
        // 0x588FF99D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
