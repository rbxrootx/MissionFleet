// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58908AA0 .. +0x4F bytes.
// Source symbol alias: FUN_58908aa0.
extern "C" __declspec(naked) void FUN_58908aa0() {
    __asm {
        // 0x58908AA0: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58908AA5: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58908AA8: push esi
        __asm _emit 0x56
        // 0x58908AA9: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58908AAB: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58908AAE: push edi
        __asm _emit 0x57
        // 0x58908AAF: mov edi, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58908AB2: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xF9
        // 0x58908AB4: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x58908AB6: jl 0x58908ae7
        __asm _emit 0x7C
        __asm _emit 0x2F
        // 0x58908AB8: mov edi, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x58908ABB: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xF9
        // 0x58908ABD: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x58908ABF: jge 0x58908ae7
        __asm _emit 0x7D
        __asm _emit 0x26
        // 0x58908AC1: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58908AC4: mov edi, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x58908AC7: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58908ACA: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xF9
        // 0x58908ACC: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x58908ACE: jl 0x58908ae7
        __asm _emit 0x7C
        __asm _emit 0x17
        // 0x58908AD0: mov edi, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x58908AD3: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xF9
        // 0x58908AD5: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x58908AD7: jge 0x58908ae7
        __asm _emit 0x7D
        __asm _emit 0x0E
        // 0x58908AD9: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58908ADC: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58908ADE: push eax
        __asm _emit 0x50
        // 0x58908ADF: push ecx
        __asm _emit 0x51
        // 0x58908AE0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58908AE2: call 0x58908750
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58908AE7: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58908AEA: pop edi
        __asm _emit 0x5F
        // 0x58908AEB: pop esi
        __asm _emit 0x5E
        // 0x58908AEC: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
