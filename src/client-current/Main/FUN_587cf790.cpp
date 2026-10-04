// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587CF790 .. +0x8A bytes.
// Source symbol alias: FUN_587cf790.
extern "C" __declspec(naked) void FUN_587cf790() {
    __asm {
        // 0x587CF790: push ebx
        __asm _emit 0x53
        // 0x587CF791: push esi
        __asm _emit 0x56
        // 0x587CF792: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587CF794: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF79A: cdq
        __asm _emit 0x99
        // 0x587CF79B: push edi
        __asm _emit 0x57
        // 0x587CF79C: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587CF7A0: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587CF7A2: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587CF7A6: push ebx
        __asm _emit 0x53
        // 0x587CF7A7: push edi
        __asm _emit 0x57
        // 0x587CF7A8: mov dword ptr [esi + 0xcc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF7AE: mov dword ptr [esi + 0xd0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF7B4: add dword ptr [esi + 0x80], eax
        __asm _emit 0x01
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF7BA: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF7C0: cdq
        __asm _emit 0x99
        // 0x587CF7C1: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x587CF7C3: cdq
        __asm _emit 0x99
        // 0x587CF7C4: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587CF7C6: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587CF7C8: add dword ptr [esi + 0x84], eax
        __asm _emit 0x01
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF7CE: lea eax, [esi + 0xc4]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF7D4: push eax
        __asm _emit 0x50
        // 0x587CF7D5: call 0x587cecc0
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CF7DA: imul edi, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xFB
        // 0x587CF7DD: mov dword ptr [esi + 0xd4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF7E3: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587CF7E5: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587CF7E7: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF7EC: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x587CF7EE: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x587CF7F1: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x587CF7F3: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x587CF7F5: push ecx
        __asm _emit 0x51
        // 0x587CF7F6: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x1D
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587CF7FB: lea ecx, [edi*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF802: push ecx
        __asm _emit 0x51
        // 0x587CF803: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CF805: push eax
        __asm _emit 0x50
        // 0x587CF806: mov dword ptr [esi + 0xc8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF80C: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0xD4
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587CF811: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587CF814: pop edi
        __asm _emit 0x5F
        // 0x587CF815: pop esi
        __asm _emit 0x5E
        // 0x587CF816: pop ebx
        __asm _emit 0x5B
        // 0x587CF817: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
