// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EF620 .. +0x157 bytes.
// Source symbol alias: FUN_588ef620.
extern "C" __declspec(naked) void FUN_588ef620() {
    __asm {
        // 0x588EF620: sub esp, 0x54
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x54
        // 0x588EF623: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588EF628: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588EF62A: mov dword ptr [esp + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x588EF62E: push esi
        __asm _emit 0x56
        // 0x588EF62F: push edi
        __asm _emit 0x57
        // 0x588EF630: push 0x4f
        __asm _emit 0x6A
        __asm _emit 0x4F
        // 0x588EF632: lea eax, [esp + 0xd]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0D
        // 0x588EF636: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588EF638: push eax
        __asm _emit 0x50
        // 0x588EF639: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588EF63B: mov byte ptr [esp + 0x14], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588EF640: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0xD6
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588EF645: mov edx, dword ptr [esp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x588EF649: mov edi, dword ptr [esp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x74
        // 0x588EF64D: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588EF650: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588EF652: jne 0x588ef69a
        __asm _emit 0x75
        __asm _emit 0x46
        // 0x588EF654: mov edx, dword ptr [esp + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x588EF658: mov ecx, dword ptr [esi + edi*4 + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF65F: push 0x505050
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x588EF664: push edx
        __asm _emit 0x52
        // 0x588EF665: push 0x589a178c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0x17
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588EF66A: mov dword ptr [ecx + 0x60], 0x505050
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x60
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x588EF671: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588EF677: mov ecx, dword ptr [esi + edi*4 + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF67E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588EF681: push eax
        __asm _emit 0x50
        // 0x588EF682: call 0x589089e0
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EF687: pop edi
        __asm _emit 0x5F
        // 0x588EF688: pop esi
        __asm _emit 0x5E
        // 0x588EF689: mov ecx, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x588EF68D: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588EF68F: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xD5
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588EF694: add esp, 0x54
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x54
        // 0x588EF697: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588EF69A: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EF6A0: mov ecx, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF6A6: push ebx
        __asm _emit 0x53
        // 0x588EF6A7: mov ebx, dword ptr [esp + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x588EF6AB: lea eax, [edi + ebx*2 + 0x2f0]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x5F
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF6B2: mov ecx, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x81
        // 0x588EF6B5: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588EF6B7: je 0x588ef763
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF6BD: movzx eax, word ptr [ecx + 0x98]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF6C4: and eax, 0xff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF6C9: mov dword ptr [esi + 0x40c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF6CF: movzx ecx, word ptr [ecx + 0x9a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x89
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF6D6: shr ecx, 8
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x588EF6D9: and ecx, 0xf
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x0F
        // 0x588EF6DC: cmp ecx, 5
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x05
        // 0x588EF6DF: ja 0x588ef74c
        __asm _emit 0x77
        __asm _emit 0x6B
        // 0x588EF6E1: jmp dword ptr [ecx*4 + 0x588ef778]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0xF7
        __asm _emit 0x8E
        __asm _emit 0x58
        // 0x588EF6E8: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x588EF6EB: push edx
        __asm _emit 0x52
        // 0x588EF6EC: push eax
        __asm _emit 0x50
        // 0x588EF6ED: push 0x5899df2c
        __asm _emit 0x68
        __asm _emit 0x2C
        __asm _emit 0xDF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588EF6F2: jmp 0x588ef734
        __asm _emit 0xEB
        __asm _emit 0x40
        // 0x588EF6F4: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x588EF6F7: push edx
        __asm _emit 0x52
        // 0x588EF6F8: push eax
        __asm _emit 0x50
        // 0x588EF6F9: push 0x5899df44
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0xDF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588EF6FE: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588EF704: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588EF707: push eax
        __asm _emit 0x50
        // 0x588EF708: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588EF70C: push eax
        __asm _emit 0x50
        // 0x588EF70D: jmp 0x588ef743
        __asm _emit 0xEB
        __asm _emit 0x34
        // 0x588EF70F: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x588EF712: push edx
        __asm _emit 0x52
        // 0x588EF713: push eax
        __asm _emit 0x50
        // 0x588EF714: push 0x5899df14
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0xDF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588EF719: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588EF71F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588EF722: push eax
        __asm _emit 0x50
        // 0x588EF723: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588EF727: push ecx
        __asm _emit 0x51
        // 0x588EF728: jmp 0x588ef743
        __asm _emit 0xEB
        __asm _emit 0x19
        // 0x588EF72A: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x588EF72D: push edx
        __asm _emit 0x52
        // 0x588EF72E: push eax
        __asm _emit 0x50
        // 0x588EF72F: push 0x589a1774
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0x17
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588EF734: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588EF73A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588EF73D: push eax
        __asm _emit 0x50
        // 0x588EF73E: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588EF742: push edx
        __asm _emit 0x52
        // 0x588EF743: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588EF749: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588EF74C: mov ecx, dword ptr [esi + edi*4 + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF753: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588EF758: push ebx
        __asm _emit 0x53
        // 0x588EF759: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588EF75D: push eax
        __asm _emit 0x50
        // 0x588EF75E: call 0x589089e0
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EF763: mov ecx, dword ptr [esp + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x588EF767: pop ebx
        __asm _emit 0x5B
        // 0x588EF768: pop edi
        __asm _emit 0x5F
        // 0x588EF769: pop esi
        __asm _emit 0x5E
        // 0x588EF76A: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588EF76C: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0xD4
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588EF771: add esp, 0x54
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x54
        // 0x588EF774: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
