// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 55 bytes in 1 exact ranges.
// Source symbol alias: FUN_588c61a0.

// Ghidra body range 0x588C61A0..0x588C61D7; 55 mapped bytes.
extern "C" __declspec(naked) void FUN_588c61a0_segment_00() {
    __asm {
        // 0x588C61A0: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588C61A2: push esi
        __asm _emit 0x56
        // 0x588C61A3: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588C61A5: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588C61A8: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588C61AB: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588C61AE: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588C61B1: mov dword ptr [ecx + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x14
        // 0x588C61B4: mov dword ptr [ecx + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x18
        // 0x588C61B7: lea eax, [ecx + 0xa0]
        __asm _emit 0x8D
        __asm _emit 0x81
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C61BD: add ecx, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x1C
        // 0x588C61C0: lea esi, [edx + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x72
        __asm _emit 0x20
        // 0x588C61C3: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588C61C5: mov dword ptr [eax - 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0xFC
        // 0x588C61C8: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x588C61CA: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588C61CD: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x08
        // 0x588C61D0: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x588C61D3: jne 0x588c61c3
        __asm _emit 0x75
        __asm _emit 0xEE
        // 0x588C61D5: pop esi
        __asm _emit 0x5E
        // 0x588C61D6: ret
        __asm _emit 0xC3
    }
}
