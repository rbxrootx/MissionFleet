// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F41E0 .. +0xA3 bytes.
// Source symbol alias: FUN_588f41e0.
extern "C" __declspec(naked) void FUN_588f41e0() {
    __asm {
        // 0x588F41E0: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x588F41E3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F41E5: je 0x588f4205
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x588F41E7: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588F41EB: push edi
        __asm _emit 0x57
        // 0x588F41EC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588F41F0: mov edi, dword ptr [eax + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x48
        // 0x588F41F3: shr edi, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x0A
        // 0x588F41F6: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x588F41F8: je 0x588f4208
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F41FA: mov eax, dword ptr [eax + 0xce4]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4200: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F4202: jne 0x588f41f0
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x588F4204: pop edi
        __asm _emit 0x5F
        // 0x588F4205: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F4208: mov edx, dword ptr [eax + 0xce0]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xE0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F420E: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588F4210: jne 0x588f4236
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x588F4212: mov edx, dword ptr [eax + 0xce4]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4218: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588F421B: mov edx, dword ptr [eax + 0xce4]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4221: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588F4223: jne 0x588f422a
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x588F4225: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588F4228: jmp 0x588f4263
        __asm _emit 0xEB
        __asm _emit 0x39
        // 0x588F422A: mov dword ptr [edx + 0xce0], 0
        __asm _emit 0xC7
        __asm _emit 0x82
        __asm _emit 0xE0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4234: jmp 0x588f4263
        __asm _emit 0xEB
        __asm _emit 0x2D
        // 0x588F4236: mov edi, dword ptr [eax + 0xce4]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F423C: mov dword ptr [edx + 0xce4], edi
        __asm _emit 0x89
        __asm _emit 0xBA
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4242: mov edx, dword ptr [eax + 0xce4]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4248: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588F424A: jne 0x588f4257
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x588F424C: mov edx, dword ptr [eax + 0xce0]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xE0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4252: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588F4255: jmp 0x588f4263
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x588F4257: mov edi, dword ptr [eax + 0xce0]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0xE0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F425D: mov dword ptr [edx + 0xce0], edi
        __asm _emit 0x89
        __asm _emit 0xBA
        __asm _emit 0xE0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4263: dec dword ptr [ecx + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x49
        __asm _emit 0x0C
        // 0x588F4266: cmp eax, dword ptr [ecx + 0x30]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x30
        // 0x588F4269: jne 0x588f4272
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588F426B: mov dword ptr [ecx + 0x30], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4272: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F4274: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F4276: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588F4278: pop edi
        __asm _emit 0x5F
        // 0x588F4279: mov dword ptr [esp + 4], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4281: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
    }
}
