// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x589088D0 .. +0x10C bytes.
extern "C" __declspec(naked) void FUN_589088d0() {
    __asm {
        // 0x589088D0: push ebx
        __asm _emit 0x53
        // 0x589088D1: push ebp
        __asm _emit 0x55
        // 0x589088D2: mov ebp, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x589088D6: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x589088D8: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x589088DA: je 0x589089d7
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589088E0: mov ecx, 0x7fffffff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x589088E5: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x589088E7: cmp byte ptr [eax], 0
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x00
        // 0x589088EA: je 0x589088f7
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x589088EC: inc eax
        __asm _emit 0x40
        // 0x589088ED: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x589088F0: jne 0x589088e7
        __asm _emit 0x75
        __asm _emit 0xF5
        // 0x589088F2: pop ebp
        __asm _emit 0x5D
        // 0x589088F3: pop ebx
        __asm _emit 0x5B
        // 0x589088F4: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x589088F7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x589088F9: je 0x589089d7
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589088FF: push esi
        __asm _emit 0x56
        // 0x58908900: mov eax, 0x7fffffff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58908905: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58908907: lea esi, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x01
        // 0x5890890A: push edi
        __asm _emit 0x57
        // 0x5890890B: push esi
        __asm _emit 0x56
        // 0x5890890C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x43
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58908911: push esi
        __asm _emit 0x56
        // 0x58908912: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58908914: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58908916: push edi
        __asm _emit 0x57
        // 0x58908917: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0x43
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5890891C: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5890891F: push ebp
        __asm _emit 0x55
        // 0x58908920: push esi
        __asm _emit 0x56
        // 0x58908921: push edi
        __asm _emit 0x57
        // 0x58908922: call 0x58731b60
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x92
        __asm _emit 0xE2
        __asm _emit 0xFF
        // 0x58908927: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58908929: je 0x5890893b
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5890892B: push edi
        __asm _emit 0x57
        // 0x5890892C: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0x43
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58908931: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58908934: pop edi
        __asm _emit 0x5F
        // 0x58908935: pop esi
        __asm _emit 0x5E
        // 0x58908936: pop ebp
        __asm _emit 0x5D
        // 0x58908937: pop ebx
        __asm _emit 0x5B
        // 0x58908938: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5890893B: cmp dword ptr [ebx + 0x7c], 0
        __asm _emit 0x83
        __asm _emit 0x7B
        __asm _emit 0x7C
        __asm _emit 0x00
        // 0x5890893F: push 0x18
        __asm _emit 0x6A
        __asm _emit 0x18
        // 0x58908941: jne 0x58908995
        __asm _emit 0x75
        __asm _emit 0x52
        // 0x58908943: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x43
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58908948: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5890894B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890894D: je 0x5890897a
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x5890894F: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58908953: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58908957: push ecx
        __asm _emit 0x51
        // 0x58908958: push edx
        __asm _emit 0x52
        // 0x58908959: push edi
        __asm _emit 0x57
        // 0x5890895A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5890895C: call 0x58907f80
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58908961: inc dword ptr [ebx + 0x88]
        __asm _emit 0xFF
        __asm _emit 0x83
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908967: pop edi
        __asm _emit 0x5F
        // 0x58908968: pop esi
        __asm _emit 0x5E
        // 0x58908969: pop ebp
        __asm _emit 0x5D
        // 0x5890896A: mov dword ptr [ebx + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x78
        // 0x5890896D: mov dword ptr [ebx + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908973: mov dword ptr [ebx + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x7C
        // 0x58908976: pop ebx
        __asm _emit 0x5B
        // 0x58908977: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5890897A: pop edi
        __asm _emit 0x5F
        // 0x5890897B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5890897D: inc dword ptr [ebx + 0x88]
        __asm _emit 0xFF
        __asm _emit 0x83
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908983: pop esi
        __asm _emit 0x5E
        // 0x58908984: pop ebp
        __asm _emit 0x5D
        // 0x58908985: mov dword ptr [ebx + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x78
        // 0x58908988: mov dword ptr [ebx + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890898E: mov dword ptr [ebx + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x7C
        // 0x58908991: pop ebx
        __asm _emit 0x5B
        // 0x58908992: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58908995: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0x42
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5890899A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5890899D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890899F: je 0x589089b5
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x589089A1: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x589089A5: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x589089A9: push ecx
        __asm _emit 0x51
        // 0x589089AA: push edx
        __asm _emit 0x52
        // 0x589089AB: push edi
        __asm _emit 0x57
        // 0x589089AC: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x589089AE: call 0x58907f80
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589089B3: jmp 0x589089b7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x589089B5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x589089B7: mov ecx, dword ptr [ebx + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x7C
        // 0x589089BA: mov dword ptr [ecx + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x14
        // 0x589089BD: mov eax, dword ptr [ebx + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x7C
        // 0x589089C0: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x589089C3: mov dword ptr [edx + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x589089C6: mov eax, dword ptr [ebx + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x7C
        // 0x589089C9: mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x589089CC: inc dword ptr [ebx + 0x88]
        __asm _emit 0xFF
        __asm _emit 0x83
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589089D2: pop edi
        __asm _emit 0x5F
        // 0x589089D3: mov dword ptr [ebx + 0x7c], ecx
        __asm _emit 0x89
        __asm _emit 0x4B
        __asm _emit 0x7C
        // 0x589089D6: pop esi
        __asm _emit 0x5E
        // 0x589089D7: pop ebp
        __asm _emit 0x5D
        // 0x589089D8: pop ebx
        __asm _emit 0x5B
        // 0x589089D9: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
