// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x589082E0 .. +0x29 bytes.
// Source symbol alias: FUN_589082e0.
extern "C" __declspec(naked) void FUN_589082e0() {
    __asm {
        // 0x589082E0: push esi
        __asm _emit 0x56
        // 0x589082E1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x589082E3: mov eax, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x30
        // 0x589082E6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589082E8: je 0x58908304
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x589082EA: mov ax, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x24
        // 0x589082EE: shr al, 5
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x05
        // 0x589082F1: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x589082F3: je 0x58908304
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x589082F5: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x589082F8: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x589082FA: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x589082FD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x589082FF: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58908301: push esi
        __asm _emit 0x56
        // 0x58908302: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58908304: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58908307: pop esi
        __asm _emit 0x5E
        // 0x58908308: ret
        __asm _emit 0xC3
    }
}
