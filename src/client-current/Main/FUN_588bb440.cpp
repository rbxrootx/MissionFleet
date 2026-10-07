// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 86 bytes in 1 exact ranges.
// Source symbol alias: FUN_588bb440.

// Ghidra body range 0x588BB440..0x588BB496; 86 mapped bytes.
extern "C" __declspec(naked) void FUN_588bb440_segment_00() {
    __asm {
        // 0x588BB440: push ebp
        __asm _emit 0x55
        // 0x588BB441: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x588BB443: mov cl, byte ptr [esp + 8]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588BB447: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BB449: cmp cl, byte ptr [ebp + 0x13a5]
        __asm _emit 0x3A
        __asm _emit 0x8D
        __asm _emit 0xA5
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB44F: jae 0x588bb481
        __asm _emit 0x73
        __asm _emit 0x30
        // 0x588BB451: movzx edx, byte ptr [ebp + 0xa0]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x95
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB458: push ebx
        __asm _emit 0x53
        // 0x588BB459: push esi
        __asm _emit 0x56
        // 0x588BB45A: push edi
        __asm _emit 0x57
        // 0x588BB45B: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588BB45D: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588BB45F: jle 0x588bb47c
        __asm _emit 0x7E
        __asm _emit 0x1B
        // 0x588BB461: lea esi, [ebp + 0xfa4]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0xA4
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB467: cmp dword ptr [esi], 0
        __asm _emit 0x83
        __asm _emit 0x3E
        __asm _emit 0x00
        // 0x588BB46A: je 0x588bb474
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588BB46C: movzx ebx, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD9
        // 0x588BB46F: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588BB471: je 0x588bb485
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588BB473: inc edi
        __asm _emit 0x47
        // 0x588BB474: inc eax
        __asm _emit 0x40
        // 0x588BB475: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588BB478: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588BB47A: jl 0x588bb467
        __asm _emit 0x7C
        __asm _emit 0xEB
        // 0x588BB47C: pop edi
        __asm _emit 0x5F
        // 0x588BB47D: pop esi
        __asm _emit 0x5E
        // 0x588BB47E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BB480: pop ebx
        __asm _emit 0x5B
        // 0x588BB481: pop ebp
        __asm _emit 0x5D
        // 0x588BB482: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BB485: mov eax, dword ptr [ebp + eax*4 + 0xda4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB48C: mov eax, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x50
        // 0x588BB48F: pop edi
        __asm _emit 0x5F
        // 0x588BB490: pop esi
        __asm _emit 0x5E
        // 0x588BB491: pop ebx
        __asm _emit 0x5B
        // 0x588BB492: pop ebp
        __asm _emit 0x5D
        // 0x588BB493: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
