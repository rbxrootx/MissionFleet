// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 77 bytes in 1 exact ranges.
// Source symbol alias: FUN_587ba8a0.

// Ghidra body range 0x587BA8A0..0x587BA8ED; 77 mapped bytes.
extern "C" __declspec(naked) void FUN_587ba8a0_segment_00() {
    __asm {
        // 0x587BA8A0: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xA1
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587BA8A5: push edi
        __asm _emit 0x57
        // 0x587BA8A6: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587BA8A8: mov ecx, dword ptr [eax + 0x4f4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xF4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BA8AE: cmp word ptr [ecx + 0x19c], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x587BA8B6: jne 0x587ba8e9
        __asm _emit 0x75
        __asm _emit 0x31
        // 0x587BA8B8: push esi
        __asm _emit 0x56
        // 0x587BA8B9: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587BA8BB: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587BA8BD: lea esi, [eax + 0x1a0]
        __asm _emit 0x8D
        __asm _emit 0xB0
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BA8C3: push edx
        __asm _emit 0x52
        // 0x587BA8C4: push esi
        __asm _emit 0x56
        // 0x587BA8C5: mov word ptr [eax + 0x19c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BA8CC: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587BA8D2: inc eax
        __asm _emit 0x40
        // 0x587BA8D3: push eax
        __asm _emit 0x50
        // 0x587BA8D4: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587BA8D8: push esi
        __asm _emit 0x56
        // 0x587BA8D9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA8DB: push eax
        __asm _emit 0x50
        // 0x587BA8DC: push 0x80010d02
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x0D
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BA8E1: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587BA8E3: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x63
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BA8E8: pop esi
        __asm _emit 0x5E
        // 0x587BA8E9: pop edi
        __asm _emit 0x5F
        // 0x587BA8EA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
