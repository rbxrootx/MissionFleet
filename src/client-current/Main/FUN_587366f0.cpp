// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 193 bytes in 1 exact ranges.
// Source symbol alias: FUN_587366f0.

// Ghidra body range 0x587366F0..0x587367B1; 193 mapped bytes.
extern "C" __declspec(naked) void FUN_587366f0_segment_00() {
    __asm {
        // 0x587366F0: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587366F4: push esi
        __asm _emit 0x56
        // 0x587366F5: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587366F9: cmp esi, 0x64
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x64
        // 0x587366FC: jge 0x58736705
        __asm _emit 0x7D
        __asm _emit 0x07
        // 0x587366FE: mov esi, 0x64
        __asm _emit 0xBE
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736703: jmp 0x58736712
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x58736705: cmp esi, 0x319c
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0x9C
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873670B: jle 0x58736712
        __asm _emit 0x7E
        __asm _emit 0x05
        // 0x5873670D: mov esi, 0x319c
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736712: cmp edx, 0x64
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x64
        // 0x58736715: jge 0x5873671e
        __asm _emit 0x7D
        __asm _emit 0x07
        // 0x58736717: mov edx, 0x64
        __asm _emit 0xBA
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873671C: jmp 0x5873672b
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x5873671E: cmp edx, 0x189c
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0x9C
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736724: jle 0x5873672b
        __asm _emit 0x7E
        __asm _emit 0x05
        // 0x58736726: mov edx, 0x189c
        __asm _emit 0xBA
        __asm _emit 0x9C
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873672B: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5873672F: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x58736732: jne 0x587367ad
        __asm _emit 0x75
        __asm _emit 0x79
        // 0x58736734: mov eax, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x10
        // 0x58736737: cmp dword ptr [eax + 0x11c], 3
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x5873673E: jne 0x58736749
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x58736740: cmp dword ptr [ecx + 0x29c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x9C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736747: jne 0x587367ad
        __asm _emit 0x75
        __asm _emit 0x64
        // 0x58736749: cmp dword ptr [ecx + 0x250], 0xf4240
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        __asm _emit 0x42
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58736753: jne 0x5873678d
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x58736755: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873675A: mov eax, dword ptr [eax + 0x21c48]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x48
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58736760: push edi
        __asm _emit 0x57
        // 0x58736761: add eax, 0x9c
        __asm _emit 0x05
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736766: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58736768: cmp esi, dword ptr [eax]
        __asm _emit 0x3B
        __asm _emit 0x30
        // 0x5873676A: jl 0x58736771
        __asm _emit 0x7C
        __asm _emit 0x05
        // 0x5873676C: cmp esi, dword ptr [eax + 8]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x08
        // 0x5873676F: jle 0x58736776
        __asm _emit 0x7E
        __asm _emit 0x05
        // 0x58736771: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736776: cmp edx, dword ptr [eax + 4]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58736779: jl 0x58736784
        __asm _emit 0x7C
        __asm _emit 0x09
        // 0x5873677B: cmp edx, dword ptr [eax + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5873677E: jg 0x58736784
        __asm _emit 0x7F
        __asm _emit 0x04
        // 0x58736780: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58736782: je 0x5873678c
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58736784: mov eax, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x10
        // 0x58736787: mov esi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x30
        // 0x58736789: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5873678C: pop edi
        __asm _emit 0x5F
        // 0x5873678D: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x0C
        // 0x58736790: shl edx, 0xf
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x0F
        // 0x58736793: and esi, 0x7fff
        __asm _emit 0x81
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736799: or edx, esi
        __asm _emit 0x0B
        __asm _emit 0xD6
        // 0x5873679B: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x5873679D: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x5873679F: mov dword ptr [esp + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587367A3: lea edx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587367A7: push edx
        __asm _emit 0x52
        // 0x587367A8: call 0x588d7ec0
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x17
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587367AD: pop esi
        __asm _emit 0x5E
        // 0x587367AE: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
