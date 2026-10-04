// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5883F360 .. +0xA6 bytes.
// Source symbol alias: FUN_5883f360.
extern "C" __declspec(naked) void FUN_5883f360() {
    __asm {
        // 0x5883F360: push esi
        __asm _emit 0x56
        // 0x5883F361: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5883F363: mov eax, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F369: push edi
        __asm _emit 0x57
        // 0x5883F36A: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5883F36C: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5883F36E: jle 0x5883f403
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F374: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F37A: dec eax
        __asm _emit 0x48
        // 0x5883F37B: mov dword ptr [esi + 0xe0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F381: call 0x58908650
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x92
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883F386: lea eax, [edi + 1]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x01
        // 0x5883F389: cmp dword ptr [esi + 0xe0], edi
        __asm _emit 0x39
        __asm _emit 0xBE
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F38F: jne 0x5883f39c
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x5883F391: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F397: mov dword ptr [ecx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x5883F39A: jmp 0x5883f3a5
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x5883F39C: mov edx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F3A2: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5883F3A5: mov edx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F3AB: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F3B1: add edx, 8
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x08
        // 0x5883F3B4: cmp edx, dword ptr [ecx + 0x88]
        __asm _emit 0x3B
        __asm _emit 0x91
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F3BA: jge 0x5883f3c7
        __asm _emit 0x7D
        __asm _emit 0x0B
        // 0x5883F3BC: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F3C2: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5883F3C5: jmp 0x5883f3d0
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x5883F3C7: mov edx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F3CD: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x5883F3D0: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F3D6: mov edi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F3DC: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883F3E1: imul eax, eax, 0x8c
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F3E7: cdq
        __asm _emit 0x99
        // 0x5883F3E8: add edi, -8
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0xF8
        // 0x5883F3EB: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5883F3ED: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5883F3F0: lea edx, [eax + ecx + 0xa2]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F3F7: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883F3FD: push edx
        __asm _emit 0x52
        // 0x5883F3FE: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0x3F
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883F403: pop edi
        __asm _emit 0x5F
        // 0x5883F404: pop esi
        __asm _emit 0x5E
        // 0x5883F405: ret
        __asm _emit 0xC3
    }
}
