// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 133 bytes in 1 exact ranges.
// Source symbol alias: FUN_58770b90.

// Ghidra body range 0x58770B90..0x58770C15; 133 mapped bytes.
extern "C" __declspec(naked) void FUN_58770b90_segment_00() {
    __asm {
        // 0x58770B90: push esi
        __asm _emit 0x56
        // 0x58770B91: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58770B93: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58770B97: push edi
        __asm _emit 0x57
        // 0x58770B98: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x58770B9A: je 0x58770c0d
        __asm _emit 0x74
        __asm _emit 0x71
        // 0x58770B9C: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x58770B9F: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58770BA3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58770BA5: je 0x58770bcd
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x58770BA7: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x58770BAA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58770BAC: je 0x58770bc6
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x58770BAE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58770BB0: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58770BB2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58770BB4: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x58770BB7: push edi
        __asm _emit 0x57
        // 0x58770BB8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58770BBA: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x58770BBD: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x58770BC0: je 0x58770bcd
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58770BC2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58770BC4: jne 0x58770bb0
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x58770BC6: pop edi
        __asm _emit 0x5F
        // 0x58770BC7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58770BC9: pop esi
        __asm _emit 0x5E
        // 0x58770BCA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58770BCD: cmp dword ptr [edi + 4], 0x20a
        __asm _emit 0x81
        __asm _emit 0x7F
        __asm _emit 0x04
        __asm _emit 0x0A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58770BD4: jne 0x58770c0d
        __asm _emit 0x75
        __asm _emit 0x37
        // 0x58770BD6: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58770BDC: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x58770BDF: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x58770BE2: push edx
        __asm _emit 0x52
        // 0x58770BE3: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x09
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x58770BE8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58770BEA: je 0x58770c0d
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x58770BEC: movzx eax, word ptr [edi + 0xa]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x47
        __asm _emit 0x0A
        // 0x58770BF0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58770BF3: jle 0x58770bfa
        __asm _emit 0x7E
        __asm _emit 0x05
        // 0x58770BF5: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58770BF8: jmp 0x58770bff
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x58770BFA: jge 0x58770c0d
        __asm _emit 0x7D
        __asm _emit 0x11
        // 0x58770BFC: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x58770BFF: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58770C01: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x58770C04: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58770C06: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58770C08: push ecx
        __asm _emit 0x51
        // 0x58770C09: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58770C0B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58770C0D: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58770C10: pop edi
        __asm _emit 0x5F
        // 0x58770C11: pop esi
        __asm _emit 0x5E
        // 0x58770C12: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
