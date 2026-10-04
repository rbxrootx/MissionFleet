// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588C78F0 .. +0x154 bytes.
// Source symbol alias: FUN_588c78f0.
extern "C" __declspec(naked) void FUN_588c78f0() {
    __asm {
        // 0x588C78F0: push esi
        __asm _emit 0x56
        // 0x588C78F1: push edi
        __asm _emit 0x57
        // 0x588C78F2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588C78F4: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588C78F6: push 0x180
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C78FB: lea eax, [esi + 0xa0]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7901: push edi
        __asm _emit 0x57
        // 0x588C7902: push eax
        __asm _emit 0x50
        // 0x588C7903: mov dword ptr [esi + 0x94], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7909: mov dword ptr [esi + 0x90], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C790F: mov dword ptr [esi + 0x98], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7915: mov dword ptr [esi + 0x9c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C791B: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x53
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C7920: push 0x180
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7925: lea ecx, [esi + 0x220]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C792B: push edi
        __asm _emit 0x57
        // 0x588C792C: push ecx
        __asm _emit 0x51
        // 0x588C792D: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0x53
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C7932: mov eax, dword ptr [0x58a24698]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C7937: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x588C793A: cmp dword ptr [eax + 0x164], 0x6e
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x6E
        // 0x588C7941: jle 0x588c7959
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588C7943: cmp dword ptr [eax + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7949: je 0x588c7959
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588C794B: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7951: mov eax, dword ptr [edx + 0x1b8]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7957: jmp 0x588c795b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C7959: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C795B: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x588C795E: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588C7961: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588C7963: je 0x588c798d
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588C7965: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588C7968: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588C796B: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588C796E: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588C7971: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588C7974: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588C7976: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588C7979: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588C797B: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588C797E: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588C7981: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588C7984: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588C7987: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588C798A: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588C798D: mov eax, dword ptr [0x58a24698]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588C7992: cmp dword ptr [eax + 0x164], 0x6f
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x6F
        // 0x588C7999: jle 0x588c79b1
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588C799B: cmp dword ptr [eax + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C79A1: je 0x588c79b1
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588C79A3: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C79A9: mov eax, dword ptr [ecx + 0x1bc]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C79AF: jmp 0x588c79b3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C79B1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C79B3: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x588C79B6: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588C79B9: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588C79BB: je 0x588c79e5
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588C79BD: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588C79C0: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588C79C3: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588C79C6: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588C79C9: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588C79CC: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588C79CE: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588C79D1: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588C79D3: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588C79D6: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588C79D9: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588C79DC: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588C79DF: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588C79E2: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588C79E5: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x588C79E8: push edi
        __asm _emit 0x57
        // 0x588C79E9: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0xF9
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C79EE: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588C79F1: mov dword ptr [ecx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x588C79F4: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x588C79F7: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588C79FC: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0xA2
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588C7A01: mov edx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x74
        // 0x588C7A04: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x588C7A07: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588C7A0A: push edi
        __asm _emit 0x57
        // 0x588C7A0B: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0xF9
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C7A10: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x588C7A13: push edi
        __asm _emit 0x57
        // 0x588C7A14: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0xF9
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C7A19: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7A1F: push edi
        __asm _emit 0x57
        // 0x588C7A20: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0xF9
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588C7A25: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7A2B: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x588C7A2D: push edi
        __asm _emit 0x57
        // 0x588C7A2E: call 0x5877e7a0
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0x6D
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588C7A33: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C7A39: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x588C7A3B: push edi
        __asm _emit 0x57
        // 0x588C7A3C: call 0x5877e7a0
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x6D
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588C7A41: pop edi
        __asm _emit 0x5F
        // 0x588C7A42: pop esi
        __asm _emit 0x5E
        // 0x588C7A43: ret
        __asm _emit 0xC3
    }
}
