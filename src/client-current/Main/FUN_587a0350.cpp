// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A0350 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_587a0350() {
    __asm {
        // 0x587A0350: push esi
        __asm _emit 0x56
        // 0x587A0351: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587A0353: cmp byte ptr [esi + 4], 0
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A0357: je 0x587a0374
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x587A0359: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A035B: lea edx, [esi + 0x58]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x58
        // 0x587A035E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x587A0360: mov ecx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x0A
        // 0x587A0362: mov cx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x24
        // 0x587A0366: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x587A0369: jne 0x587a0378
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x587A036B: inc eax
        __asm _emit 0x40
        // 0x587A036C: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x587A036F: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x587A0372: jl 0x587a0360
        __asm _emit 0x7C
        __asm _emit 0xEC
        // 0x587A0374: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x587A0376: pop esi
        __asm _emit 0x5E
        // 0x587A0377: ret
        __asm _emit 0xC3
        // 0x587A0378: cmp byte ptr [eax + esi + 5], 0
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x587A037D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A037F: sete dl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC2
        // 0x587A0382: mov byte ptr [eax + esi + 5], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x30
        __asm _emit 0x05
        // 0x587A0386: push edx
        __asm _emit 0x52
        // 0x587A0387: push eax
        __asm _emit 0x50
        // 0x587A0388: call 0x587a0250
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A038D: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x587A038F: pop esi
        __asm _emit 0x5E
        // 0x587A0390: ret
        __asm _emit 0xC3
    }
}
