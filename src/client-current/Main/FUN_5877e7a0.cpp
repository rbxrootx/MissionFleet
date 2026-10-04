// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5877E7A0 .. +0x52 bytes.
// Source symbol alias: FUN_5877e7a0.
extern "C" __declspec(naked) void FUN_5877e7a0() {
    __asm {
        // 0x5877E7A0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5877E7A4: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5877E7A6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877E7A8: setl dl
        __asm _emit 0x0F
        __asm _emit 0x9C
        __asm _emit 0xC2
        // 0x5877E7AB: push esi
        __asm _emit 0x56
        // 0x5877E7AC: mov esi, dword ptr [ecx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x70
        // 0x5877E7AF: dec edx
        __asm _emit 0x4A
        // 0x5877E7B0: and edx, eax
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x5877E7B2: mov dword ptr [esi + 0x58], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x58
        // 0x5877E7B5: mov esi, dword ptr [ecx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x70
        // 0x5877E7B8: mov dword ptr [esi + 0x5c], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x5C
        // 0x5877E7BB: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5877E7BF: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x5877E7C1: mov dword ptr [esi + 0x60], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5877E7C8: jl 0x5877e7cc
        __asm _emit 0x7C
        __asm _emit 0x02
        // 0x5877E7CA: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5877E7CC: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5877E7CF: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5877E7D2: mov esi, 1
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877E7D7: jl 0x5877e7db
        __asm _emit 0x7C
        __asm _emit 0x02
        // 0x5877E7D9: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5877E7DB: mov eax, dword ptr [ecx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x70
        // 0x5877E7DE: mov dword ptr [ecx + 0x54], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x54
        // 0x5877E7E1: mov eax, dword ptr [eax + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x58
        // 0x5877E7E4: imul eax, dword ptr [ecx + 0x68]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x41
        __asm _emit 0x68
        // 0x5877E7E8: cdq
        __asm _emit 0x99
        // 0x5877E7E9: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x5877E7EB: pop esi
        __asm _emit 0x5E
        // 0x5877E7EC: mov dword ptr [ecx + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x60
        // 0x5877E7EF: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
