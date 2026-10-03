// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5879D480 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_5879d480() {
    __asm {
        // 0x5879D480: push ebx
        __asm _emit 0x53
        // 0x5879D481: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5879D483: cmp dword ptr [ebx + 0x300], 0
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D48A: jne 0x5879d490
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x5879D48C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5879D48E: pop ebx
        __asm _emit 0x5B
        // 0x5879D48F: ret
        __asm _emit 0xC3
        // 0x5879D490: mov ecx, dword ptr [ebx + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D496: push esi
        __asm _emit 0x56
        // 0x5879D497: mov esi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D49D: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0xAD
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879D4A2: dec esi
        __asm _emit 0x4E
        // 0x5879D4A3: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x5879D4A5: jge 0x5879d4e4
        __asm _emit 0x7D
        __asm _emit 0x3D
        // 0x5879D4A7: mov ecx, dword ptr [ebx + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D4AD: push edi
        __asm _emit 0x57
        // 0x5879D4AE: call 0x58908680
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0xB1
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879D4B3: lea esi, [ebx + 0xb4]
        __asm _emit 0x8D
        __asm _emit 0xB3
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D4B9: mov edi, 6
        __asm _emit 0xBF
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D4BE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5879D4C0: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5879D4C2: call 0x58908680
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0xB1
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879D4C7: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5879D4CA: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x5879D4CD: jne 0x5879d4c0
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x5879D4CF: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5879D4D1: call 0x58797960
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0xA4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879D4D6: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5879D4D8: call 0x5879b3b0
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0xDE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879D4DD: lea eax, [edi + 1]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x01
        // 0x5879D4E0: pop edi
        __asm _emit 0x5F
        // 0x5879D4E1: pop esi
        __asm _emit 0x5E
        // 0x5879D4E2: pop ebx
        __asm _emit 0x5B
        // 0x5879D4E3: ret
        __asm _emit 0xC3
        // 0x5879D4E4: pop esi
        __asm _emit 0x5E
        // 0x5879D4E5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5879D4E7: pop ebx
        __asm _emit 0x5B
        // 0x5879D4E8: ret
        __asm _emit 0xC3
    }
}
