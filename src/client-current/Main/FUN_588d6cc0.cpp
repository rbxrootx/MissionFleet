// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588D6CC0 .. +0x42 bytes.
// Source symbol alias: FUN_588d6cc0.
extern "C" __declspec(naked) void FUN_588d6cc0() {
    __asm {
        // 0x588D6CC0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588D6CC4: mov dword ptr [ecx + 0x6074], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x74
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6CCA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D6CCC: mov eax, dword ptr [ecx + 0x12b8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6CD2: je 0x588d6cea
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588D6CD4: mov edx, 1
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6CD9: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588D6CDD: mov ecx, dword ptr [ecx + 0x12bc]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xBC
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6CE3: or word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588D6CE7: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588D6CEA: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6CEF: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588D6CF3: mov ecx, dword ptr [ecx + 0x12bc]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xBC
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6CF9: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588D6CFB: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588D6CFF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
