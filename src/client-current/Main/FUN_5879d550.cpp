// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5879D550 .. +0xD3 bytes.
extern "C" __declspec(naked) void FUN_5879d550() {
    __asm {
        // 0x5879D550: push esi
        __asm _emit 0x56
        // 0x5879D551: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5879D553: cmp dword ptr [esi + 0x300], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D55A: jne 0x5879d577
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x5879D55C: movzx eax, word ptr [esi + 0x26c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D563: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x5879D567: je 0x5879d61f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D56D: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x5879D571: je 0x5879d61f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D577: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879D57C: push edi
        __asm _emit 0x57
        // 0x5879D57D: mov edi, 0x24
        __asm _emit 0xBF
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D582: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D588: jle 0x5879d5a1
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5879D58A: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D591: je 0x5879d5a1
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5879D593: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D599: mov ecx, dword ptr [eax + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D59F: jmp 0x5879d5a3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5879D5A1: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5879D5A3: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879D5A9: push edx
        __asm _emit 0x52
        // 0x5879D5AA: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0xA3
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879D5AF: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879D5B4: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D5BA: jle 0x5879d5d3
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5879D5BC: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D5C3: je 0x5879d5d3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5879D5C5: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D5CB: mov ecx, dword ptr [eax + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D5D1: jmp 0x5879d5d5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5879D5D3: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5879D5D5: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5879D5D7: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5879D5DA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5879D5DC: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5879D5DE: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5879D5E2: lea ecx, [edi + 1]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x01
        // 0x5879D5E5: push ecx
        __asm _emit 0x51
        // 0x5879D5E6: mov ecx, dword ptr [esi + 0x1c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D5EC: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0x5D
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879D5F1: mov eax, dword ptr [esi + 0x1c4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D5F7: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5879D5FB: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5879D600: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D606: add edi, 0xf
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x0F
        // 0x5879D609: push edi
        __asm _emit 0x57
        // 0x5879D60A: push edx
        __asm _emit 0x52
        // 0x5879D60B: call 0x58908750
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0xB1
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879D610: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5879D612: call 0x58797960
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0xA3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879D617: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5879D619: call 0x5879b3b0
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0xDD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879D61E: pop edi
        __asm _emit 0x5F
        // 0x5879D61F: pop esi
        __asm _emit 0x5E
        // 0x5879D620: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
