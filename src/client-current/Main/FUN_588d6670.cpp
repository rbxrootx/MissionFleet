// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588D6670 .. +0x53 bytes.
// Source symbol alias: FUN_588d6670.
extern "C" __declspec(naked) void FUN_588d6670() {
    __asm {
        // 0x588D6670: mov ecx, dword ptr [0x58a244bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D6676: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588D6678: imul ecx, ecx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x64
        // 0x588D667B: imul edx, edx, 0x75
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x75
        // 0x588D667E: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588D6683: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x588D6685: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588D6688: push esi
        __asm _emit 0x56
        // 0x588D6689: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588D668D: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x588D6690: push edi
        __asm _emit 0x57
        // 0x588D6691: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x588D6693: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x588D6696: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x588D6698: cdq
        __asm _emit 0x99
        // 0x588D6699: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588D669B: push eax
        __asm _emit 0x50
        // 0x588D669C: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588D66A1: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588D66A3: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588D66A5: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588D66A8: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588D66AA: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x588D66AD: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588D66AF: cdq
        __asm _emit 0x99
        // 0x588D66B0: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588D66B2: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D66B8: push eax
        __asm _emit 0x50
        // 0x588D66B9: call 0x587e5e10
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0xF7
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588D66BE: pop edi
        __asm _emit 0x5F
        // 0x588D66BF: pop esi
        __asm _emit 0x5E
        // 0x588D66C0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
