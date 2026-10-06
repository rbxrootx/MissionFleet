// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588D28A0 .. +0x6E bytes.
// Source symbol alias: FUN_588d28a0.
extern "C" __declspec(naked) void FUN_588d28a0() {
    __asm {
        // 0x588D28A0: push ecx
        __asm _emit 0x51
        // 0x588D28A1: push esi
        __asm _emit 0x56
        // 0x588D28A2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588D28A4: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588D28A7: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x588D28AA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D28B0: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x588D28B2: inc eax
        __asm _emit 0x40
        // 0x588D28B3: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x588D28B5: jne 0x588d28b0
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x588D28B7: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588D28B9: jne 0x588d28ed
        __asm _emit 0x75
        __asm _emit 0x32
        // 0x588D28BB: push ebx
        __asm _emit 0x53
        // 0x588D28BC: push edi
        __asm _emit 0x57
        // 0x588D28BD: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D28C1: push edi
        __asm _emit 0x57
        // 0x588D28C2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588D28C4: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0xF4
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588D28C9: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588D28CC: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x588D28CE: lea ecx, [esi + 0x8c]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D28D4: push ecx
        __asm _emit 0x51
        // 0x588D28D5: push edi
        __asm _emit 0x57
        // 0x588D28D6: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588D28DC: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x588D28DF: mov edx, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x04
        // 0x588D28E2: push eax
        __asm _emit 0x50
        // 0x588D28E3: push edi
        __asm _emit 0x57
        // 0x588D28E4: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588D28E6: pop edi
        __asm _emit 0x5F
        // 0x588D28E7: pop ebx
        __asm _emit 0x5B
        // 0x588D28E8: pop esi
        __asm _emit 0x5E
        // 0x588D28E9: pop ecx
        __asm _emit 0x59
        // 0x588D28EA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588D28ED: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588D28F1: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D28F7: push eax
        __asm _emit 0x50
        // 0x588D28F8: push ecx
        __asm _emit 0x51
        // 0x588D28F9: mov dword ptr [esi + 0x88], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2903: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588D2909: pop esi
        __asm _emit 0x5E
        // 0x588D290A: pop ecx
        __asm _emit 0x59
        // 0x588D290B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
