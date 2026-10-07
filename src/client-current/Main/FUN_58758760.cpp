// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 255 bytes in 2 exact ranges.
// Source symbol alias: FUN_58758760.

// Ghidra body range 0x58758760..0x587587B7; 87 mapped bytes.
extern "C" __declspec(naked) void FUN_58758760_segment_00() {
    __asm {
        // 0x58758760: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x20
        // 0x58758763: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58758765: push ebx
        __asm _emit 0x53
        // 0x58758766: push ebp
        __asm _emit 0x55
        // 0x58758767: mov dword ptr [esp + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5875876B: push esi
        __asm _emit 0x56
        // 0x5875876C: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x5875876E: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58758772: mov dword ptr [esp + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58758776: mov word ptr [esp + 0xe], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0E
        // 0x5875877B: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58758781: push edi
        __asm _emit 0x57
        // 0x58758782: mov edi, dword ptr [ecx + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758788: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875878A: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875878E: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58758790: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58758792: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58758794: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58758796: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875879A: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875879E: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587587A2: mov dword ptr [esp + 0x2c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587587A6: mov byte ptr [esp + 0x10], 0xb
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x0B
        // 0x587587AB: cmp dword ptr [esp + 0x14], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587587AF: jbe 0x58758824
        __asm _emit 0x76
        __asm _emit 0x73
        // 0x587587B1: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587587B5: jmp 0x587587c6
        __asm _emit 0xEB
        __asm _emit 0x0F
    }
}

// Ghidra body range 0x587587C0..0x58758868; 168 mapped bytes.
extern "C" __declspec(naked) void FUN_58758760_segment_01() {
    __asm {
        // 0x587587C0: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587587C6: mov word ptr [esp + 0x12], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x587587CB: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587587CF: push ebp
        __asm _emit 0x55
        // 0x587587D0: call 0x58778dc0
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587587D5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587587D7: je 0x58758809
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x587587D9: movzx edx, word ptr [eax + 0xa2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x90
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587587E0: cmp dword ptr [esp + 0x34], edx
        __asm _emit 0x39
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587587E4: jne 0x58758809
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x587587E6: test byte ptr [eax + 0x9b], 0xf
        __asm _emit 0xF6
        __asm _emit 0x80
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x587587ED: jne 0x58758809
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x587587EF: cmp esi, 3
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x03
        // 0x587587F2: jge 0x58758809
        __asm _emit 0x7D
        __asm _emit 0x15
        // 0x587587F4: movzx eax, byte ptr [eax + 0x99]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x80
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587587FB: mov dword ptr [esp + esi*4 + 0x24], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0xB4
        __asm _emit 0x24
        // 0x587587FF: mov dword ptr [esp + esi*4 + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0xB4
        __asm _emit 0x18
        // 0x58758803: cmp esi, 2
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x02
        // 0x58758806: je 0x5875880e
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58758808: inc esi
        __asm _emit 0x46
        // 0x58758809: inc edi
        __asm _emit 0x47
        // 0x5875880A: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x5875880C: jb 0x587587c0
        __asm _emit 0x72
        __asm _emit 0xB2
        // 0x5875880E: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58758812: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58758816: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875881A: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5875881E: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58758824: cmp ebx, edx
        __asm _emit 0x3B
        __asm _emit 0xDA
        // 0x58758826: jl 0x58758840
        __asm _emit 0x7C
        __asm _emit 0x18
        // 0x58758828: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x5875882A: jl 0x58758858
        __asm _emit 0x7C
        __asm _emit 0x2C
        // 0x5875882C: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58758830: pop edi
        __asm _emit 0x5F
        // 0x58758831: pop esi
        __asm _emit 0x5E
        // 0x58758832: pop ebp
        __asm _emit 0x5D
        // 0x58758833: pop ebx
        __asm _emit 0x5B
        // 0x58758834: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58758838: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x5875883B: jmp 0x58778dc0
        __asm _emit 0xE9
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58758840: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x58758842: jl 0x58758858
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x58758844: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58758848: pop edi
        __asm _emit 0x5F
        // 0x58758849: pop esi
        __asm _emit 0x5E
        // 0x5875884A: pop ebp
        __asm _emit 0x5D
        // 0x5875884B: pop ebx
        __asm _emit 0x5B
        // 0x5875884C: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58758850: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x58758853: jmp 0x58778dc0
        __asm _emit 0xE9
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58758858: push ebp
        __asm _emit 0x55
        // 0x58758859: call 0x58778dc0
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5875885E: pop edi
        __asm _emit 0x5F
        // 0x5875885F: pop esi
        __asm _emit 0x5E
        // 0x58758860: pop ebp
        __asm _emit 0x5D
        // 0x58758861: pop ebx
        __asm _emit 0x5B
        // 0x58758862: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x58758865: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
