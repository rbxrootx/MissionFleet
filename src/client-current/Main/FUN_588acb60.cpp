// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588ACB60 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_588acb60() {
    __asm {
        // 0x588ACB60: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588ACB64: push esi
        __asm _emit 0x56
        // 0x588ACB65: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588ACB68: jne 0x588acb9d
        __asm _emit 0x75
        __asm _emit 0x33
        // 0x588ACB6A: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588ACB6E: cmp eax, dword ptr [ecx + 0x70]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x70
        // 0x588ACB71: jne 0x588acbe8
        __asm _emit 0x75
        __asm _emit 0x75
        // 0x588ACB73: mov edx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x6C
        // 0x588ACB76: mov eax, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ACB7C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588ACB7E: je 0x588acbe8
        __asm _emit 0x74
        __asm _emit 0x68
        // 0x588ACB80: lea esi, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x01
        // 0x588ACB83: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x588ACB85: inc eax
        __asm _emit 0x40
        // 0x588ACB86: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x588ACB88: jne 0x588acb83
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x588ACB8A: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x588ACB8C: inc eax
        __asm _emit 0x40
        // 0x588ACB8D: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588ACB90: jle 0x588acbe8
        __asm _emit 0x7E
        __asm _emit 0x56
        // 0x588ACB92: call 0x588ac590
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588ACB97: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588ACB99: pop esi
        __asm _emit 0x5E
        // 0x588ACB9A: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588ACB9D: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x588ACBA0: jne 0x588acbd3
        __asm _emit 0x75
        __asm _emit 0x31
        // 0x588ACBA2: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588ACBA6: cmp esi, dword ptr [ecx + 0x70]
        __asm _emit 0x3B
        __asm _emit 0x71
        __asm _emit 0x70
        // 0x588ACBA9: jne 0x588acbe8
        __asm _emit 0x75
        __asm _emit 0x3D
        // 0x588ACBAB: push 0x589a07c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x07
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588ACBB0: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588ACBB6: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588ACBBC: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588ACBBF: push eax
        __asm _emit 0x50
        // 0x588ACBC0: push 0x32
        __asm _emit 0x6A
        __asm _emit 0x32
        // 0x588ACBC2: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ACBC7: push esi
        __asm _emit 0x56
        // 0x588ACBC8: call 0x587626c0
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x5A
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588ACBCD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588ACBCF: pop esi
        __asm _emit 0x5E
        // 0x588ACBD0: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588ACBD3: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x588ACBD6: jne 0x588acbe8
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x588ACBD8: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588ACBDC: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588ACBE2: push eax
        __asm _emit 0x50
        // 0x588ACBE3: call 0x58762610
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x5A
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588ACBE8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588ACBEA: pop esi
        __asm _emit 0x5E
        // 0x588ACBEB: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
