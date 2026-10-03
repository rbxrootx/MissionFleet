// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5884E500 .. +0x13C bytes.
extern "C" __declspec(naked) void FUN_5884e500() {
    __asm {
        // 0x5884E500: push esi
        __asm _emit 0x56
        // 0x5884E501: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5884E503: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5884E507: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x5884E509: je 0x5884e636
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E50F: mov al, byte ptr [esi + 0xd4]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E515: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5884E517: jne 0x5884e57a
        __asm _emit 0x75
        __asm _emit 0x61
        // 0x5884E519: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5884E51C: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5884E51F: cmp edx, 0x336
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E525: je 0x5884e558
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x5884E527: mov eax, 0x336
        __asm _emit 0xB8
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E52C: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5884E52E: lea edx, [eax + 7]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x07
        // 0x5884E531: cmp edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0E
        // 0x5884E534: ja 0x5884e5d4
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E53A: lea edx, [eax + 3]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x5884E53D: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5884E540: ja 0x5884e5c7
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E546: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884E548: jge 0x5884e5b6
        __asm _emit 0x7D
        __asm _emit 0x6C
        // 0x5884E54A: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5884E54D: push eax
        __asm _emit 0x50
        // 0x5884E54E: call 0x58902e60
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0x49
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884E553: jmp 0x5884e618
        __asm _emit 0xE9
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E558: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5884E55B: mov byte ptr [esi + 0xd4], 1
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5884E562: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5884E567: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884E569: call 0x5884e210
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884E56E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884E570: call 0x5884e1c0
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884E575: jmp 0x5884e618
        __asm _emit 0xE9
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E57A: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x5884E57C: jne 0x5884e618
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E582: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5884E585: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5884E588: cmp edx, 0x406
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0x06
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E58E: je 0x5884e5e5
        __asm _emit 0x74
        __asm _emit 0x55
        // 0x5884E590: mov eax, 0x406
        __asm _emit 0xB8
        __asm _emit 0x06
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E595: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5884E597: lea edx, [eax + 7]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x07
        // 0x5884E59A: cmp edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0E
        // 0x5884E59D: ja 0x5884e5d4
        __asm _emit 0x77
        __asm _emit 0x35
        // 0x5884E59F: lea edx, [eax + 3]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x5884E5A2: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5884E5A5: ja 0x5884e5c7
        __asm _emit 0x77
        __asm _emit 0x20
        // 0x5884E5A7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884E5A9: jge 0x5884e5b6
        __asm _emit 0x7D
        __asm _emit 0x0B
        // 0x5884E5AB: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5884E5AE: push eax
        __asm _emit 0x50
        // 0x5884E5AF: call 0x58902e60
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x48
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884E5B4: jmp 0x5884e618
        __asm _emit 0xEB
        __asm _emit 0x62
        // 0x5884E5B6: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5884E5B8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884E5BA: setg dl
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC2
        // 0x5884E5BD: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5884E5BF: push eax
        __asm _emit 0x50
        // 0x5884E5C0: call 0x58902e60
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x48
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884E5C5: jmp 0x5884e618
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5884E5C7: cdq
        __asm _emit 0x99
        // 0x5884E5C8: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5884E5CA: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x5884E5CC: push eax
        __asm _emit 0x50
        // 0x5884E5CD: call 0x58902e60
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884E5D2: jmp 0x5884e618
        __asm _emit 0xEB
        __asm _emit 0x44
        // 0x5884E5D4: cdq
        __asm _emit 0x99
        // 0x5884E5D5: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x5884E5D8: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5884E5DA: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5884E5DD: push eax
        __asm _emit 0x50
        // 0x5884E5DE: call 0x58902e60
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x48
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884E5E3: jmp 0x5884e618
        __asm _emit 0xEB
        __asm _emit 0x33
        // 0x5884E5E5: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5884E5E8: mov byte ptr [esi + 0xd4], 3
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x5884E5EF: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5884E5F4: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E5FA: mov dword ptr [esi + 0xdc], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884E604: mov dword ptr [eax + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E60B: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E611: mov dword ptr [ecx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E618: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5884E61B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884E61D: je 0x5884e636
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x5884E61F: push edi
        __asm _emit 0x57
        // 0x5884E620: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x5884E623: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5884E625: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x5884E628: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x5884E62B: je 0x5884e638
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5884E62D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5884E62F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5884E631: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5884E633: jne 0x5884e620
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x5884E635: pop edi
        __asm _emit 0x5F
        // 0x5884E636: pop esi
        __asm _emit 0x5E
        // 0x5884E637: ret
        __asm _emit 0xC3
        // 0x5884E638: pop edi
        __asm _emit 0x5F
        // 0x5884E639: pop esi
        __asm _emit 0x5E
        // 0x5884E63A: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
    }
}
