// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 120 bytes in 1 exact ranges.
// Source symbol alias: FUN_587baae0.

// Ghidra body range 0x587BAAE0..0x587BAB58; 120 mapped bytes.
extern "C" __declspec(naked) void FUN_587baae0_segment_00() {
    __asm {
        // 0x587BAAE0: push ebx
        __asm _emit 0x53
        // 0x587BAAE1: push ebp
        __asm _emit 0x55
        // 0x587BAAE2: push esi
        __asm _emit 0x56
        // 0x587BAAE3: push edi
        __asm _emit 0x57
        // 0x587BAAE4: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587BAAE8: push edi
        __asm _emit 0x57
        // 0x587BAAE9: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587BAAEB: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587BAAF1: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587BAAF3: lea eax, [ebx + 9]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x09
        // 0x587BAAF6: push eax
        __asm _emit 0x50
        // 0x587BAAF7: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0x6A
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BAAFC: mov ecx, dword ptr [0x58a0b4a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587BAB02: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587BAB05: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587BAB07: push edi
        __asm _emit 0x57
        // 0x587BAB08: inc ebx
        __asm _emit 0x43
        // 0x587BAB09: mov dword ptr [esi], ecx
        __asm _emit 0x89
        __asm _emit 0x0E
        // 0x587BAB0B: mov edx, dword ptr [0x58a0b4a4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587BAB11: push ebx
        __asm _emit 0x53
        // 0x587BAB12: lea eax, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587BAB15: push eax
        __asm _emit 0x50
        // 0x587BAB16: mov dword ptr [esi + 4], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x587BAB19: call 0x58731b60
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x70
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587BAB1E: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587BAB20: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x587BAB23: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x587BAB25: inc eax
        __asm _emit 0x40
        // 0x587BAB26: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587BAB28: jne 0x587bab23
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x587BAB2A: mov ecx, dword ptr [0x58a0b4a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587BAB30: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BAB32: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587BAB34: add eax, 9
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x09
        // 0x587BAB37: push eax
        __asm _emit 0x50
        // 0x587BAB38: push esi
        __asm _emit 0x56
        // 0x587BAB39: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BAB3B: push ecx
        __asm _emit 0x51
        // 0x587BAB3C: push 0x80010f0f
        __asm _emit 0x68
        __asm _emit 0x0F
        __asm _emit 0x0F
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BAB41: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587BAB43: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x61
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BAB48: push esi
        __asm _emit 0x56
        // 0x587BAB49: call 0x5897ce26
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x22
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587BAB4E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587BAB51: pop edi
        __asm _emit 0x5F
        // 0x587BAB52: pop esi
        __asm _emit 0x5E
        // 0x587BAB53: pop ebp
        __asm _emit 0x5D
        // 0x587BAB54: pop ebx
        __asm _emit 0x5B
        // 0x587BAB55: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
