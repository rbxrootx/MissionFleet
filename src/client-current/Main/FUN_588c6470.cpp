// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588C6470 .. +0x97 bytes.
// Source symbol alias: FUN_588c6470.
extern "C" __declspec(naked) void FUN_588c6470() {
    __asm {
        // 0x588C6470: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588C6472: push esi
        __asm _emit 0x56
        // 0x588C6473: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588C6475: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C647B: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6481: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C6483: setl dl
        __asm _emit 0x0F
        __asm _emit 0x9C
        __asm _emit 0xC2
        // 0x588C6486: push edi
        __asm _emit 0x57
        // 0x588C6487: mov edi, 0x40000000
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588C648C: mov dword ptr [esi + 0x9c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6492: mov dword ptr [ecx + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x60
        // 0x588C6495: dec edx
        __asm _emit 0x4A
        // 0x588C6496: and edx, eax
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x588C6498: mov dword ptr [ecx + 0x5c], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x5C
        // 0x588C649B: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C64A1: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C64A7: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588C64A9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C64AB: setl dl
        __asm _emit 0x0F
        __asm _emit 0x9C
        __asm _emit 0xC2
        // 0x588C64AE: mov dword ptr [ecx + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x60
        // 0x588C64B1: dec edx
        __asm _emit 0x4A
        // 0x588C64B2: and edx, eax
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x588C64B4: mov dword ptr [ecx + 0x5c], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x5C
        // 0x588C64B7: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C64BD: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C64C3: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588C64C5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C64C7: setl dl
        __asm _emit 0x0F
        __asm _emit 0x9C
        __asm _emit 0xC2
        // 0x588C64CA: mov dword ptr [ecx + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x60
        // 0x588C64CD: dec edx
        __asm _emit 0x4A
        // 0x588C64CE: and edx, eax
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x588C64D0: mov dword ptr [ecx + 0x5c], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x5C
        // 0x588C64D3: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C64D9: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C64DF: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588C64E1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C64E3: setl dl
        __asm _emit 0x0F
        __asm _emit 0x9C
        __asm _emit 0xC2
        // 0x588C64E6: mov dword ptr [ecx + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x60
        // 0x588C64E9: dec edx
        __asm _emit 0x4A
        // 0x588C64EA: and edx, eax
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x588C64EC: mov dword ptr [ecx + 0x5c], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x5C
        // 0x588C64EF: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C64F5: call 0x5875f310
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0x8E
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588C64FA: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6500: pop edi
        __asm _emit 0x5F
        // 0x588C6501: pop esi
        __asm _emit 0x5E
        // 0x588C6502: jmp 0x5875f310
        __asm _emit 0xE9
        __asm _emit 0x09
        __asm _emit 0x8E
        __asm _emit 0xE9
        __asm _emit 0xFF
    }
}
