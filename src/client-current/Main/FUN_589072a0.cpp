// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x589072A0 .. +0x57 bytes.
// Source symbol alias: FUN_589072a0.
extern "C" __declspec(naked) void FUN_589072a0() {
    __asm {
        // 0x589072A0: push esi
        __asm _emit 0x56
        // 0x589072A1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x589072A3: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x589072A6: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x589072A9: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x589072AB: jge 0x589072f1
        __asm _emit 0x7D
        __asm _emit 0x44
        // 0x589072AD: push edi
        __asm _emit 0x57
        // 0x589072AE: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x589072B2: lea edx, [ecx + edi]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x39
        // 0x589072B5: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x589072B7: jle 0x589072bd
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x589072B9: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x589072BB: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x589072BD: mov eax, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x30
        // 0x589072C0: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x589072C2: mov dword ptr [esi + 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x589072C5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589072C7: je 0x589072e3
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x589072C9: mov ax, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x24
        // 0x589072CD: shr al, 5
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x05
        // 0x589072D0: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x589072D2: je 0x589072e3
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x589072D4: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x589072D7: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x589072D9: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x589072DC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x589072DE: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x589072E0: push esi
        __asm _emit 0x56
        // 0x589072E1: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x589072E3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x589072E5: call 0x58907040
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589072EA: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x589072EC: pop edi
        __asm _emit 0x5F
        // 0x589072ED: pop esi
        __asm _emit 0x5E
        // 0x589072EE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x589072F1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x589072F3: pop esi
        __asm _emit 0x5E
        // 0x589072F4: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
