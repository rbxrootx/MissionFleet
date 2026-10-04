// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B8300 .. +0x6C bytes.
// Source symbol alias: FUN_587b8300.
extern "C" __declspec(naked) void FUN_587b8300() {
    __asm {
        // 0x587B8300: push ebx
        __asm _emit 0x53
        // 0x587B8301: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B8305: push esi
        __asm _emit 0x56
        // 0x587B8306: push edi
        __asm _emit 0x57
        // 0x587B8307: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B830B: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B830D: lea eax, [edi - 0x30]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0xD0
        // 0x587B8310: push eax
        __asm _emit 0x50
        // 0x587B8311: lea ecx, [ebx + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x30
        // 0x587B8314: push ecx
        __asm _emit 0x51
        // 0x587B8315: mov ecx, dword ptr [0x58a24578]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x78
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B831B: call 0x587a2d40
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0xAA
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587B8320: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B8322: je 0x587b832c
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587B8324: pop edi
        __asm _emit 0x5F
        // 0x587B8325: pop esi
        __asm _emit 0x5E
        // 0x587B8326: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587B8328: pop ebx
        __asm _emit 0x5B
        // 0x587B8329: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587B832C: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B8330: push edx
        __asm _emit 0x52
        // 0x587B8331: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B8333: call 0x587b7bd0
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B8338: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B833A: je 0x587b8361
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x587B833C: mov eax, dword ptr [esi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B8342: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B8344: jl 0x587b8361
        __asm _emit 0x7C
        __asm _emit 0x1B
        // 0x587B8346: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B8348: push edi
        __asm _emit 0x57
        // 0x587B8349: push ebx
        __asm _emit 0x53
        // 0x587B834A: or eax, 0x30000
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x587B834F: push eax
        __asm _emit 0x50
        // 0x587B8350: push 0x20000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587B8355: push 0x80020a00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x02
        __asm _emit 0x80
        // 0x587B835A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B835C: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x89
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B8361: pop edi
        __asm _emit 0x5F
        // 0x587B8362: pop esi
        __asm _emit 0x5E
        // 0x587B8363: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B8368: pop ebx
        __asm _emit 0x5B
        // 0x587B8369: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
