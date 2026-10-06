// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588FB0E0 .. +0x104 bytes.
// Source symbol alias: FUN_588fb0e0.
extern "C" __declspec(naked) void FUN_588fb0e0() {
    __asm {
        // 0x588FB0E0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588FB0E2: push 0x5898a303
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0xA3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FB0E7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB0ED: push eax
        __asm _emit 0x50
        // 0x588FB0EE: push ecx
        __asm _emit 0x51
        // 0x588FB0EF: push ebx
        __asm _emit 0x53
        // 0x588FB0F0: push ebp
        __asm _emit 0x55
        // 0x588FB0F1: push esi
        __asm _emit 0x56
        // 0x588FB0F2: push edi
        __asm _emit 0x57
        // 0x588FB0F3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588FB0F8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588FB0FA: push eax
        __asm _emit 0x50
        // 0x588FB0FB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FB0FF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB105: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FB107: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FB10B: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FB10F: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FB113: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588FB117: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588FB11B: push eax
        __asm _emit 0x50
        // 0x588FB11C: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588FB120: push ecx
        __asm _emit 0x51
        // 0x588FB121: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588FB125: push edx
        __asm _emit 0x52
        // 0x588FB126: push ebp
        __asm _emit 0x55
        // 0x588FB127: push eax
        __asm _emit 0x50
        // 0x588FB128: push ecx
        __asm _emit 0x51
        // 0x588FB129: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FB12B: call 0x588f8100
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0xCF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FB130: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588FB132: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x588FB134: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FB138: mov dword ptr [esi], 0x589a21d4
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xD4
        __asm _emit 0x21
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588FB13E: mov dword ptr [esi + 0xc0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB144: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x1B
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FB149: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588FB14B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FB14E: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FB152: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588FB157: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588FB159: je 0x588fb17e
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x588FB15B: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588FB15F: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588FB161: push ebx
        __asm _emit 0x53
        // 0x588FB162: push ebx
        __asm _emit 0x53
        // 0x588FB163: lea edx, [ebp + 0x46]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x46
        // 0x588FB166: push edx
        __asm _emit 0x52
        // 0x588FB167: push eax
        __asm _emit 0x50
        // 0x588FB168: push esi
        __asm _emit 0x56
        // 0x588FB169: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588FB16B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB170: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FB176: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x588FB179: mov dword ptr [edi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x54
        // 0x588FB17C: jmp 0x588fb180
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FB17E: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588FB180: mov dword ptr [esi + 0xc0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB186: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB18B: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x588FB18F: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB195: lea edi, [ebp + 6]
        __asm _emit 0x8D
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x588FB198: push edi
        __asm _emit 0x57
        // 0x588FB199: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FB19D: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB1A2: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB1A8: push edi
        __asm _emit 0x57
        // 0x588FB1A9: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB1AE: mov ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB1B4: lea edi, [ebp + 0x8d]
        __asm _emit 0x8D
        __asm _emit 0xBD
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB1BA: push edi
        __asm _emit 0x57
        // 0x588FB1BB: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB1C0: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB1C6: push edi
        __asm _emit 0x57
        // 0x588FB1C7: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB1CC: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588FB1CE: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FB1D2: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB1D9: pop ecx
        __asm _emit 0x59
        // 0x588FB1DA: pop edi
        __asm _emit 0x5F
        // 0x588FB1DB: pop esi
        __asm _emit 0x5E
        // 0x588FB1DC: pop ebp
        __asm _emit 0x5D
        // 0x588FB1DD: pop ebx
        __asm _emit 0x5B
        // 0x588FB1DE: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588FB1E1: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
