// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 78 bytes in 1 exact ranges.
// Source symbol alias: FUN_588fb8e0.

// Ghidra body range 0x588FB8E0..0x588FB92E; 78 mapped bytes.
extern "C" __declspec(naked) void FUN_588fb8e0_segment_00() {
    __asm {
        // 0x588FB8E0: push ebx
        __asm _emit 0x53
        // 0x588FB8E1: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588FB8E5: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x588FB8E7: cdq
        __asm _emit 0x99
        // 0x588FB8E8: push esi
        __asm _emit 0x56
        // 0x588FB8E9: mov esi, dword ptr [ecx + 0x90]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB8EF: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588FB8F1: push edi
        __asm _emit 0x57
        // 0x588FB8F2: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x588FB8F4: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588FB8F6: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x588FB8F8: jl 0x588fb90e
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588FB8FA: mov ecx, dword ptr [ecx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x68
        // 0x588FB8FD: mov edi, 2
        __asm _emit 0xBF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB902: push edi
        __asm _emit 0x57
        // 0x588FB903: call 0x588ff420
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x3B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB908: pop edi
        __asm _emit 0x5F
        // 0x588FB909: pop esi
        __asm _emit 0x5E
        // 0x588FB90A: pop ebx
        __asm _emit 0x5B
        // 0x588FB90B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588FB90E: lea eax, [ebx + 1]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x01
        // 0x588FB911: cdq
        __asm _emit 0x99
        // 0x588FB912: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588FB914: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x588FB916: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x588FB918: jne 0x588fb91f
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x588FB91A: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB91F: mov ecx, dword ptr [ecx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x68
        // 0x588FB922: push edi
        __asm _emit 0x57
        // 0x588FB923: call 0x588ff420
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0x3A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB928: pop edi
        __asm _emit 0x5F
        // 0x588FB929: pop esi
        __asm _emit 0x5E
        // 0x588FB92A: pop ebx
        __asm _emit 0x5B
        // 0x588FB92B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
