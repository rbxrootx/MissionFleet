// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 137 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f6300.

// Ghidra body range 0x588F6300..0x588F6389; 137 mapped bytes.
extern "C" __declspec(naked) void FUN_588f6300_segment_00() {
    __asm {
        // 0x588F6300: push ebx
        __asm _emit 0x53
        // 0x588F6301: push ebp
        __asm _emit 0x55
        // 0x588F6302: push esi
        __asm _emit 0x56
        // 0x588F6303: push edi
        __asm _emit 0x57
        // 0x588F6304: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x588F6306: push 0xb8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F630B: mov dword ptr [ebp + 4], 0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6312: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x69
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F6317: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588F631B: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588F631D: mov dword ptr [ebp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x588F6320: mov ecx, 0x2e
        __asm _emit 0xB9
        __asm _emit 0x2E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6325: mov esi, ebx
        __asm _emit 0x8B
        __asm _emit 0xF3
        // 0x588F6327: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x588F6329: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x588F632B: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x588F632D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588F632F: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x588F6332: mov edx, 0x18
        __asm _emit 0xBA
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6337: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x588F6339: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x588F633C: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x588F633E: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x588F6340: push ecx
        __asm _emit 0x51
        // 0x588F6341: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588F6346: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F634A: mov dword ptr [ebp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x588F634D: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x588F634F: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x588F6351: and ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x588F6354: lea ecx, [ecx + ecx*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x49
        // 0x588F6357: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x588F6359: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x588F635B: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x588F635D: push ecx
        __asm _emit 0x51
        // 0x588F635E: push edx
        __asm _emit 0x52
        // 0x588F635F: push eax
        __asm _emit 0x50
        // 0x588F6360: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x69
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F6365: push 0xe0
        __asm _emit 0x68
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F636A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F636F: mov esi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588F6373: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x588F6376: mov dword ptr [ebp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x588F6379: mov ecx, 0x38
        __asm _emit 0xB9
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F637E: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588F6380: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x588F6382: pop edi
        __asm _emit 0x5F
        // 0x588F6383: pop esi
        __asm _emit 0x5E
        // 0x588F6384: pop ebp
        __asm _emit 0x5D
        // 0x588F6385: pop ebx
        __asm _emit 0x5B
        // 0x588F6386: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
