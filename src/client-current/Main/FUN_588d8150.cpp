// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588D8150 .. +0x49 bytes.
// Source symbol alias: FUN_588d8150.
extern "C" __declspec(naked) void FUN_588d8150() {
    __asm {
        // 0x588D8150: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588D8154: push esi
        __asm _emit 0x56
        // 0x588D8155: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588D8157: cmp dword ptr [ecx + 0x141c], esi
        __asm _emit 0x39
        __asm _emit 0xB1
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D815D: mov dword ptr [ecx + 0x6098], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8163: jle 0x588d8195
        __asm _emit 0x7E
        __asm _emit 0x30
        // 0x588D8165: push edi
        __asm _emit 0x57
        // 0x588D8166: lea edi, [ecx + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0xB9
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D816C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588D8170: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588D8172: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D8174: je 0x588d8188
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588D8176: mov edx, dword ptr [ecx + 0x6098]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D817C: mov dword ptr [eax + 0x11c], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8182: mov dword ptr [eax + 0x118], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8188: inc esi
        __asm _emit 0x46
        // 0x588D8189: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588D818C: cmp esi, dword ptr [ecx + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0xB1
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8192: jl 0x588d8170
        __asm _emit 0x7C
        __asm _emit 0xDC
        // 0x588D8194: pop edi
        __asm _emit 0x5F
        // 0x588D8195: pop esi
        __asm _emit 0x5E
        // 0x588D8196: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
