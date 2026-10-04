// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5883F410 .. +0xAB bytes.
// Source symbol alias: FUN_5883f410.
extern "C" __declspec(naked) void FUN_5883f410() {
    __asm {
        // 0x5883F410: push esi
        __asm _emit 0x56
        // 0x5883F411: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5883F413: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F419: mov edx, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F41F: mov eax, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F425: sub edx, 8
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x5883F428: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5883F42A: jge 0x5883f4b9
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F430: inc eax
        __asm _emit 0x40
        // 0x5883F431: mov dword ptr [esi + 0xe0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F437: call 0x589086f0
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0x92
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883F43C: mov edx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F442: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5883F444: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F449: cmp dword ptr [esi + 0xe0], ecx
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F44F: jne 0x5883f456
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x5883F451: mov dword ptr [edx + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x50
        // 0x5883F454: jmp 0x5883f459
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5883F456: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5883F459: mov edx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F45F: push edi
        __asm _emit 0x57
        // 0x5883F460: mov edi, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F466: add edx, 8
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x08
        // 0x5883F469: cmp edx, dword ptr [edi + 0x88]
        __asm _emit 0x3B
        __asm _emit 0x97
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F46F: jge 0x5883f47c
        __asm _emit 0x7D
        __asm _emit 0x0B
        // 0x5883F471: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F477: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5883F47A: jmp 0x5883f485
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x5883F47C: mov edx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F482: mov dword ptr [edx + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x50
        // 0x5883F485: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F48B: mov edi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F491: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0x8C
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883F496: imul eax, eax, 0x8c
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F49C: cdq
        __asm _emit 0x99
        // 0x5883F49D: add edi, -8
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0xF8
        // 0x5883F4A0: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5883F4A2: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5883F4A5: lea edx, [eax + ecx + 0xa2]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F4AC: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F4B2: push edx
        __asm _emit 0x52
        // 0x5883F4B3: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0x3E
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883F4B8: pop edi
        __asm _emit 0x5F
        // 0x5883F4B9: pop esi
        __asm _emit 0x5E
        // 0x5883F4BA: ret
        __asm _emit 0xC3
    }
}
