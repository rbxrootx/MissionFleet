// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 93 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b78d0.

// Ghidra body range 0x587B78D0..0x587B792D; 93 mapped bytes.
extern "C" __declspec(naked) void FUN_587b78d0_segment_00() {
    __asm {
        // 0x587B78D0: push ebx
        __asm _emit 0x53
        // 0x587B78D1: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B78D5: push esi
        __asm _emit 0x56
        // 0x587B78D6: push edi
        __asm _emit 0x57
        // 0x587B78D7: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587B78D9: lea esi, [ecx + 0x130]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B78DF: nop
        __asm _emit 0x90
        // 0x587B78E0: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587B78E2: je 0x587b7911
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x587B78E4: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587B78E6: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587B78E8: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x587B78EA: cmp dl, byte ptr [ecx]
        __asm _emit 0x3A
        __asm _emit 0x11
        // 0x587B78EC: jne 0x587b7908
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x587B78EE: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x587B78F0: je 0x587b7904
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587B78F2: mov dl, byte ptr [eax + 1]
        __asm _emit 0x8A
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x587B78F5: cmp dl, byte ptr [ecx + 1]
        __asm _emit 0x3A
        __asm _emit 0x51
        __asm _emit 0x01
        // 0x587B78F8: jne 0x587b7908
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x587B78FA: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x587B78FD: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x02
        // 0x587B7900: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x587B7902: jne 0x587b78e8
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x587B7904: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587B7906: jmp 0x587b790d
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x587B7908: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x587B790A: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xD8
        __asm _emit 0xFF
        // 0x587B790D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B790F: je 0x587b7922
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587B7911: inc edi
        __asm _emit 0x47
        // 0x587B7912: add esi, 0x18
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x18
        // 0x587B7915: cmp edi, 3
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x03
        // 0x587B7918: jl 0x587b78e0
        __asm _emit 0x7C
        __asm _emit 0xC6
        // 0x587B791A: pop edi
        __asm _emit 0x5F
        // 0x587B791B: pop esi
        __asm _emit 0x5E
        // 0x587B791C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587B791E: pop ebx
        __asm _emit 0x5B
        // 0x587B791F: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587B7922: pop edi
        __asm _emit 0x5F
        // 0x587B7923: pop esi
        __asm _emit 0x5E
        // 0x587B7924: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7929: pop ebx
        __asm _emit 0x5B
        // 0x587B792A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
