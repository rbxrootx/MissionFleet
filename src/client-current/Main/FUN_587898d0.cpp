// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587898D0 .. +0x64 bytes.
// Source symbol alias: FUN_587898d0.
extern "C" __declspec(naked) void FUN_587898d0() {
    __asm {
        // 0x587898D0: push esi
        __asm _emit 0x56
        // 0x587898D1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587898D3: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x587898D6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587898D8: je 0x58789930
        __asm _emit 0x74
        __asm _emit 0x56
        // 0x587898DA: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587898DE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x587898E0: cmp dword ptr [eax + 0x18], edx
        __asm _emit 0x39
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x587898E3: je 0x587898ef
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587898E5: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587898E7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587898E9: jne 0x587898e0
        __asm _emit 0x75
        __asm _emit 0xF5
        // 0x587898EB: pop esi
        __asm _emit 0x5E
        // 0x587898EC: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587898EF: movzx ecx, word ptr [eax + 0x2c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x2C
        // 0x587898F3: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x587898F6: jne 0x58789925
        __asm _emit 0x75
        __asm _emit 0x2D
        // 0x587898F8: or ecx, 1
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0x01
        // 0x587898FB: mov word ptr [eax + 0x2c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x2C
        // 0x587898FF: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58789904: test byte ptr [eax + 0x105a8], 1
        __asm _emit 0xF6
        __asm _emit 0x80
        __asm _emit 0xA8
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5878990B: je 0x58789922
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x5878990D: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58789913: push edx
        __asm _emit 0x52
        // 0x58789914: call 0x5878a160
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789919: cmp dword ptr [eax + 0x438], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789920: jne 0x58789925
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x58789922: dec dword ptr [esi + 0x60]
        __asm _emit 0xFF
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x58789925: cmp dword ptr [esi + 0x60], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x60
        __asm _emit 0x00
        // 0x58789929: jne 0x58789930
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x5878992B: or word ptr [esi + 0x64], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x64
        __asm _emit 0x02
        // 0x58789930: pop esi
        __asm _emit 0x5E
        // 0x58789931: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
