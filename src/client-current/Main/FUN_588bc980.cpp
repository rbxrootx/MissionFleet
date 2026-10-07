// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 88 bytes in 1 exact ranges.
// Source symbol alias: FUN_588bc980.

// Ghidra body range 0x588BC980..0x588BC9D8; 88 mapped bytes.
extern "C" __declspec(naked) void FUN_588bc980_segment_00() {
    __asm {
        // 0x588BC980: push ebp
        __asm _emit 0x55
        // 0x588BC981: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x588BC983: mov cl, byte ptr [esp + 8]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588BC987: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BC989: cmp cl, byte ptr [ebp + 0xad]
        __asm _emit 0x3A
        __asm _emit 0x8D
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC98F: jae 0x588bc9c1
        __asm _emit 0x73
        __asm _emit 0x30
        // 0x588BC991: movzx edx, byte ptr [ebp + 0xac]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x95
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC998: push ebx
        __asm _emit 0x53
        // 0x588BC999: push esi
        __asm _emit 0x56
        // 0x588BC99A: push edi
        __asm _emit 0x57
        // 0x588BC99B: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588BC99D: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588BC99F: jle 0x588bc9bc
        __asm _emit 0x7E
        __asm _emit 0x1B
        // 0x588BC9A1: lea esi, [ebp + 0xb0]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC9A7: cmp dword ptr [esi], 0
        __asm _emit 0x83
        __asm _emit 0x3E
        __asm _emit 0x00
        // 0x588BC9AA: je 0x588bc9b4
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588BC9AC: movzx ebx, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD9
        // 0x588BC9AF: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588BC9B1: je 0x588bc9c5
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588BC9B3: inc edi
        __asm _emit 0x47
        // 0x588BC9B4: inc eax
        __asm _emit 0x40
        // 0x588BC9B5: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588BC9B8: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588BC9BA: jl 0x588bc9a7
        __asm _emit 0x7C
        __asm _emit 0xEB
        // 0x588BC9BC: pop edi
        __asm _emit 0x5F
        // 0x588BC9BD: pop esi
        __asm _emit 0x5E
        // 0x588BC9BE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BC9C0: pop ebx
        __asm _emit 0x5B
        // 0x588BC9C1: pop ebp
        __asm _emit 0x5D
        // 0x588BC9C2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BC9C5: mov ecx, dword ptr [ebp + 0x3d4]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xD4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC9CB: push eax
        __asm _emit 0x50
        // 0x588BC9CC: call 0x589080e0
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BC9D1: pop edi
        __asm _emit 0x5F
        // 0x588BC9D2: pop esi
        __asm _emit 0x5E
        // 0x588BC9D3: pop ebx
        __asm _emit 0x5B
        // 0x588BC9D4: pop ebp
        __asm _emit 0x5D
        // 0x588BC9D5: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
