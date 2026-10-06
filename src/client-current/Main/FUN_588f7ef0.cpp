// Warehouse-item virtual message handler: walks a child list, tests event IDs,
// and dispatches state changes through the child vtable.
// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F7EF0 .. +0xE4 bytes.
// Source symbol alias: FUN_588f7ef0.
extern "C" __declspec(naked) void FUN_588f7ef0() {
    __asm {
        // 0x588F7EF0: push esi
        __asm _emit 0x56
        // 0x588F7EF1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588F7EF3: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588F7EF7: push edi
        __asm _emit 0x57
        // 0x588F7EF8: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x588F7EFA: je 0x588f7fcc
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7F00: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x588F7F03: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588F7F07: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F7F09: je 0x588f7f2f
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x588F7F0B: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x588F7F0E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F7F10: je 0x588f7f28
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588F7F12: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F7F14: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F7F16: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x588F7F19: push edi
        __asm _emit 0x57
        // 0x588F7F1A: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588F7F1C: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x588F7F1F: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x588F7F22: je 0x588f7f2f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588F7F24: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F7F26: jne 0x588f7f12
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x588F7F28: pop edi
        __asm _emit 0x5F
        // 0x588F7F29: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F7F2B: pop esi
        __asm _emit 0x5E
        // 0x588F7F2C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F7F2F: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x588F7F32: sub eax, 0x200
        __asm _emit 0x2D
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7F37: je 0x588f7faf
        __asm _emit 0x74
        __asm _emit 0x76
        // 0x588F7F39: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x588F7F3C: jne 0x588f7fcc
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7F42: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F7F48: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x588F7F4B: push edx
        __asm _emit 0x52
        // 0x588F7F4C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F7F4E: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0x95
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588F7F53: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588F7F56: jne 0x588f7fcc
        __asm _emit 0x75
        __asm _emit 0x74
        // 0x588F7F58: cmp byte ptr [esi + 0x98], al
        __asm _emit 0x38
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7F5E: jne 0x588f7f77
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x588F7F60: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x588F7F63: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F7F65: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588F7F68: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F7F6A: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x588F7F6C: push esi
        __asm _emit 0x56
        // 0x588F7F6D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F7F6F: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588F7F72: pop edi
        __asm _emit 0x5F
        // 0x588F7F73: pop esi
        __asm _emit 0x5E
        // 0x588F7F74: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F7F77: push 0x11
        __asm _emit 0x6A
        __asm _emit 0x11
        // 0x588F7F79: call dword ptr [0x5898c3e8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F7F7F: mov ecx, 0x8000
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7F84: test cx, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC1
        // 0x588F7F87: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x588F7F8A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588F7F8C: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x588F7F8F: je 0x588f7fa0
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588F7F91: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F7F93: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F7F95: push esi
        __asm _emit 0x56
        // 0x588F7F96: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588F7F98: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588F7F9B: pop edi
        __asm _emit 0x5F
        // 0x588F7F9C: pop esi
        __asm _emit 0x5E
        // 0x588F7F9D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F7FA0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F7FA2: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F7FA4: push esi
        __asm _emit 0x56
        // 0x588F7FA5: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588F7FA7: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588F7FAA: pop edi
        __asm _emit 0x5F
        // 0x588F7FAB: pop esi
        __asm _emit 0x5E
        // 0x588F7FAC: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F7FAF: cmp byte ptr [esi + 0x98], 1
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588F7FB6: jne 0x588f7fcc
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x588F7FB8: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F7FBD: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588F7FC0: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588F7FC3: push ecx
        __asm _emit 0x51
        // 0x588F7FC4: push edx
        __asm _emit 0x52
        // 0x588F7FC5: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F7FC7: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0xB2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7FCC: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588F7FCF: pop edi
        __asm _emit 0x5F
        // 0x588F7FD0: pop esi
        __asm _emit 0x5E
        // 0x588F7FD1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
