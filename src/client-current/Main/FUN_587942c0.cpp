// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587942C0 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_587942c0() {
    __asm {
        // 0x587942C0: push esi
        __asm _emit 0x56
        // 0x587942C1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587942C3: cmp dword ptr [esi + 0x80], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587942CA: jne 0x58794307
        __asm _emit 0x75
        __asm _emit 0x3B
        // 0x587942CC: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x587942CF: mov dword ptr [esi + 0x80], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587942D9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587942DB: je 0x587942f4
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x587942DD: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587942E2: push eax
        __asm _emit 0x50
        // 0x587942E3: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0x36
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587942E8: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x587942EB: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587942ED: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587942F0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587942F2: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587942F4: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x587942F7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587942F9: je 0x58794307
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587942FB: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587942FD: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x58794300: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58794302: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58794304: push esi
        __asm _emit 0x56
        // 0x58794305: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58794307: cmp dword ptr [esi + 0x7c], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x7C
        __asm _emit 0x00
        // 0x5879430B: jne 0x5879433b
        __asm _emit 0x75
        __asm _emit 0x2E
        // 0x5879430D: mov eax, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794313: mov dword ptr [esi + 0x7c], 1
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879431A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5879431C: je 0x5879433b
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x5879431E: cmp dword ptr [esi + 0x60], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x60
        __asm _emit 0x00
        // 0x58794322: jne 0x5879433b
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x58794324: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879432A: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x5879432D: mov dword ptr [esi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794334: mov dword ptr [ecx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879433B: pop esi
        __asm _emit 0x5E
        // 0x5879433C: ret
        __asm _emit 0xC3
    }
}
