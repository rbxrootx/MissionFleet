// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588A4860 .. +0x805 bytes.
// Source symbol alias: FUN_588a4860.
extern "C" __declspec(naked) void FUN_588a4860() {
    __asm {
        // 0x588A4860: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588A4862: push 0x58987abd
        __asm _emit 0x68
        __asm _emit 0xBD
        __asm _emit 0x7A
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588A4867: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A486D: push eax
        __asm _emit 0x50
        // 0x588A486E: push ecx
        __asm _emit 0x51
        // 0x588A486F: push ebx
        __asm _emit 0x53
        // 0x588A4870: push ebp
        __asm _emit 0x55
        // 0x588A4871: push esi
        __asm _emit 0x56
        // 0x588A4872: push edi
        __asm _emit 0x57
        // 0x588A4873: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588A4878: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588A487A: push eax
        __asm _emit 0x50
        // 0x588A487B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588A487F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4885: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588A4887: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588A488B: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588A488F: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588A4893: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588A4897: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588A489B: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588A489F: push eax
        __asm _emit 0x50
        // 0x588A48A0: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588A48A4: push ecx
        __asm _emit 0x51
        // 0x588A48A5: push edx
        __asm _emit 0x52
        // 0x588A48A6: push edi
        __asm _emit 0x57
        // 0x588A48A7: push ebx
        __asm _emit 0x53
        // 0x588A48A8: push eax
        __asm _emit 0x50
        // 0x588A48A9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A48AB: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A48B0: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588A48B6: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588A48BB: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x588A48BE: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588A48C0: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x588A48C3: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A48CA: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x588A48CD: mov dword ptr [esi], 0x589a0680
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A48D3: mov ecx, dword ptr [0x58a24768]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A48D9: lea eax, [esi + 0x80]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A48DF: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588A48E3: mov dword ptr [esi + 0x60], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588A48E6: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588A48EA: mov dword ptr [esp + 0x38], 7
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A48F2: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588A48F4: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x83
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588A48F9: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588A48FB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A48FE: mov dword ptr [esp + 0x34], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588A4902: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588A4907: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588A4909: je 0x588a4979
        __asm _emit 0x74
        __asm _emit 0x6E
        // 0x588A490B: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588A490E: cmp dword ptr [eax + 0x164], 0x155
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4918: jle 0x588a492c
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588A491A: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4920: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588A4922: je 0x588a492c
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588A4924: mov ebp, dword ptr [eax + 0x554]
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A492A: jmp 0x588a492e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A492C: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588A492E: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588A4932: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588A4936: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588A4938: push ebx
        __asm _emit 0x53
        // 0x588A4939: push ebx
        __asm _emit 0x53
        // 0x588A493A: push edx
        __asm _emit 0x52
        // 0x588A493B: push eax
        __asm _emit 0x50
        // 0x588A493C: push esi
        __asm _emit 0x56
        // 0x588A493D: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588A493F: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A4944: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588A494A: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x588A494D: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x588A494F: je 0x588a497b
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x588A4951: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x588A4954: mov dword ptr [edi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x588A4957: mov edx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x588A495A: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x588A495D: mov dword ptr [edi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x10
        // 0x588A4960: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x588A4962: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x588A4965: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588A4968: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x588A496B: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588A496E: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x588A4971: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x588A4974: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x588A4977: jmp 0x588a497b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A4979: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588A497B: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588A497F: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588A4981: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588A4985: mov dword ptr [eax - 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0xE4
        // 0x588A4988: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x82
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588A498D: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588A498F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A4992: mov dword ptr [esp + 0x34], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588A4996: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x588A499B: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588A499D: je 0x588a4a0d
        __asm _emit 0x74
        __asm _emit 0x6E
        // 0x588A499F: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588A49A2: cmp dword ptr [eax + 0x164], 0x156
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A49AC: jle 0x588a49c0
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588A49AE: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A49B4: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588A49B6: je 0x588a49c0
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588A49B8: mov ebp, dword ptr [eax + 0x558]
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A49BE: jmp 0x588a49c2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A49C0: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588A49C2: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588A49C6: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588A49CA: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588A49CC: push ebx
        __asm _emit 0x53
        // 0x588A49CD: push ebx
        __asm _emit 0x53
        // 0x588A49CE: push ecx
        __asm _emit 0x51
        // 0x588A49CF: push edx
        __asm _emit 0x52
        // 0x588A49D0: push esi
        __asm _emit 0x56
        // 0x588A49D1: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588A49D3: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0xE7
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A49D8: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588A49DE: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x588A49E1: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x588A49E3: je 0x588a4a0f
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x588A49E5: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x588A49E8: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x588A49EB: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x588A49EE: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x588A49F1: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x588A49F4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588A49F6: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        // 0x588A49F9: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588A49FC: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x588A49FF: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588A4A02: mov dword ptr [edi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x1C
        // 0x588A4A05: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588A4A08: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x588A4A0B: jmp 0x588a4a0f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A4A0D: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588A4A0F: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588A4A13: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        // 0x588A4A15: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588A4A18: sub dword ptr [esp + 0x38], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        // 0x588A4A1D: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588A4A21: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588A4A25: jne 0x588a48f2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC7
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A4A2B: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588A4A2D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x82
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588A4A32: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588A4A34: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A4A37: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588A4A3B: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x588A4A40: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588A4A42: je 0x588a4ab2
        __asm _emit 0x74
        __asm _emit 0x6E
        // 0x588A4A44: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588A4A47: cmp dword ptr [eax + 0x164], 0x157
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4A51: jle 0x588a4a65
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588A4A53: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4A59: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588A4A5B: je 0x588a4a65
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588A4A5D: mov ebp, dword ptr [eax + 0x55c]
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0x5C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4A63: jmp 0x588a4a67
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A4A65: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588A4A67: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588A4A6B: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588A4A6F: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588A4A71: push ebx
        __asm _emit 0x53
        // 0x588A4A72: push ebx
        __asm _emit 0x53
        // 0x588A4A73: push ecx
        __asm _emit 0x51
        // 0x588A4A74: push edx
        __asm _emit 0x52
        // 0x588A4A75: push esi
        __asm _emit 0x56
        // 0x588A4A76: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588A4A78: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xE7
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A4A7D: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588A4A83: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x588A4A86: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x588A4A88: je 0x588a4ab4
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x588A4A8A: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x588A4A8D: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x588A4A90: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x588A4A93: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x588A4A96: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x588A4A99: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588A4A9B: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        // 0x588A4A9E: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588A4AA1: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x588A4AA4: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588A4AA7: mov dword ptr [edi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x1C
        // 0x588A4AAA: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588A4AAD: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x588A4AB0: jmp 0x588a4ab4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A4AB2: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588A4AB4: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588A4AB6: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588A4ABA: mov dword ptr [esi + 0x9c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4AC0: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588A4AC5: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588A4AC7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A4ACA: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588A4ACE: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x588A4AD3: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588A4AD5: je 0x588a4b45
        __asm _emit 0x74
        __asm _emit 0x6E
        // 0x588A4AD7: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588A4ADA: cmp dword ptr [eax + 0x164], 0x158
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4AE4: jle 0x588a4af8
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588A4AE6: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4AEC: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588A4AEE: je 0x588a4af8
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588A4AF0: mov ebp, dword ptr [eax + 0x560]
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0x60
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4AF6: jmp 0x588a4afa
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A4AF8: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588A4AFA: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588A4AFE: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588A4B02: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588A4B04: push ebx
        __asm _emit 0x53
        // 0x588A4B05: push ebx
        __asm _emit 0x53
        // 0x588A4B06: push ecx
        __asm _emit 0x51
        // 0x588A4B07: push edx
        __asm _emit 0x52
        // 0x588A4B08: push esi
        __asm _emit 0x56
        // 0x588A4B09: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588A4B0B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0xE6
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A4B10: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588A4B16: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x588A4B19: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x588A4B1B: je 0x588a4b47
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x588A4B1D: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x588A4B20: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x588A4B23: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x588A4B26: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x588A4B29: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x588A4B2C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588A4B2E: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        // 0x588A4B31: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588A4B34: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x588A4B37: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588A4B3A: mov dword ptr [edi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x1C
        // 0x588A4B3D: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588A4B40: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x588A4B43: jmp 0x588a4b47
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A4B45: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588A4B47: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588A4B49: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588A4B4D: mov dword ptr [esi + 0xa0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4B53: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x80
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588A4B58: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588A4B5A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A4B5D: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588A4B61: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x588A4B66: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588A4B68: je 0x588a4bd8
        __asm _emit 0x74
        __asm _emit 0x6E
        // 0x588A4B6A: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588A4B6D: cmp dword ptr [eax + 0x164], 0x159
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4B77: jle 0x588a4b8b
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588A4B79: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4B7F: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588A4B81: je 0x588a4b8b
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588A4B83: mov ebp, dword ptr [eax + 0x564]
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0x64
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4B89: jmp 0x588a4b8d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A4B8B: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588A4B8D: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588A4B91: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588A4B95: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588A4B97: push ebx
        __asm _emit 0x53
        // 0x588A4B98: push ebx
        __asm _emit 0x53
        // 0x588A4B99: push ecx
        __asm _emit 0x51
        // 0x588A4B9A: push edx
        __asm _emit 0x52
        // 0x588A4B9B: push esi
        __asm _emit 0x56
        // 0x588A4B9C: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588A4B9E: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0xE5
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A4BA3: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588A4BA9: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x588A4BAC: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x588A4BAE: je 0x588a4bda
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x588A4BB0: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x588A4BB3: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x588A4BB6: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x588A4BB9: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x588A4BBC: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x588A4BBF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588A4BC1: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        // 0x588A4BC4: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588A4BC7: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x588A4BCA: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588A4BCD: mov dword ptr [edi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x1C
        // 0x588A4BD0: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588A4BD3: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x588A4BD6: jmp 0x588a4bda
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A4BD8: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588A4BDA: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588A4BDC: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588A4BE0: mov dword ptr [esi + 0xa4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4BE6: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0x80
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588A4BEB: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588A4BED: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A4BF0: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588A4BF4: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x588A4BF9: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588A4BFB: je 0x588a4c6b
        __asm _emit 0x74
        __asm _emit 0x6E
        // 0x588A4BFD: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588A4C00: cmp dword ptr [eax + 0x164], 0x15a
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x5A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4C0A: jle 0x588a4c1e
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588A4C0C: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4C12: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588A4C14: je 0x588a4c1e
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588A4C16: mov ebp, dword ptr [eax + 0x568]
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4C1C: jmp 0x588a4c20
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A4C1E: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588A4C20: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588A4C24: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588A4C28: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588A4C2A: push ebx
        __asm _emit 0x53
        // 0x588A4C2B: push ebx
        __asm _emit 0x53
        // 0x588A4C2C: push ecx
        __asm _emit 0x51
        // 0x588A4C2D: push edx
        __asm _emit 0x52
        // 0x588A4C2E: push esi
        __asm _emit 0x56
        // 0x588A4C2F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588A4C31: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0xE5
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A4C36: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588A4C3C: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x588A4C3F: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x588A4C41: je 0x588a4c6d
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x588A4C43: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x588A4C46: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x588A4C49: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x588A4C4C: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x588A4C4F: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x588A4C52: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588A4C54: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        // 0x588A4C57: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588A4C5A: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x588A4C5D: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588A4C60: mov dword ptr [edi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x1C
        // 0x588A4C63: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588A4C66: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x588A4C69: jmp 0x588a4c6d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A4C6B: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588A4C6D: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4C72: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588A4C76: mov dword ptr [esi + 0xa8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4C7C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x7F
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588A4C81: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A4C84: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588A4C88: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x588A4C8D: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588A4C8F: je 0x588a4cce
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x588A4C91: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588A4C94: cmp dword ptr [ecx + 0x160], 0x3e
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3E
        // 0x588A4C9B: jle 0x588a4caf
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588A4C9D: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4CA3: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588A4CA5: je 0x588a4caf
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588A4CA7: add ecx, 0xf80
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x80
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4CAD: jmp 0x588a4cb1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A4CAF: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A4CB1: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A4CB7: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588A4CB9: push ebx
        __asm _emit 0x53
        // 0x588A4CBA: push ebx
        __asm _emit 0x53
        // 0x588A4CBB: push ecx
        __asm _emit 0x51
        // 0x588A4CBC: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A4CC2: push esi
        __asm _emit 0x56
        // 0x588A4CC3: push ecx
        __asm _emit 0x51
        // 0x588A4CC4: push edx
        __asm _emit 0x52
        // 0x588A4CC5: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A4CC7: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x90
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588A4CCC: jmp 0x588a4cd0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A4CCE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A4CD0: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4CD5: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588A4CD9: mov dword ptr [esi + 0xac], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4CDF: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0x7F
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588A4CE4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A4CE7: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588A4CEB: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x588A4CF0: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588A4CF2: je 0x588a4d31
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x588A4CF4: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588A4CF7: cmp dword ptr [ecx + 0x160], 0x3f
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3F
        // 0x588A4CFE: jle 0x588a4d12
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588A4D00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4D06: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588A4D08: je 0x588a4d12
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588A4D0A: add ecx, 0xfc0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4D10: jmp 0x588a4d14
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A4D12: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A4D14: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A4D1A: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588A4D1C: push ebx
        __asm _emit 0x53
        // 0x588A4D1D: push ebx
        __asm _emit 0x53
        // 0x588A4D1E: push ecx
        __asm _emit 0x51
        // 0x588A4D1F: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A4D25: push esi
        __asm _emit 0x56
        // 0x588A4D26: push ecx
        __asm _emit 0x51
        // 0x588A4D27: push edx
        __asm _emit 0x52
        // 0x588A4D28: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A4D2A: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x90
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588A4D2F: jmp 0x588a4d33
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A4D31: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A4D33: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4D38: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588A4D3C: mov dword ptr [esi + 0xb0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4D42: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x7F
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588A4D47: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A4D4A: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588A4D4E: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        // 0x588A4D53: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588A4D55: je 0x588a4d94
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x588A4D57: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588A4D5A: cmp dword ptr [ecx + 0x160], 0x40
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588A4D61: jle 0x588a4d75
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588A4D63: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4D69: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588A4D6B: je 0x588a4d75
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588A4D6D: add ecx, 0x1000
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4D73: jmp 0x588a4d77
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A4D75: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A4D77: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A4D7D: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588A4D7F: push ebx
        __asm _emit 0x53
        // 0x588A4D80: push ebx
        __asm _emit 0x53
        // 0x588A4D81: push ecx
        __asm _emit 0x51
        // 0x588A4D82: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A4D88: push esi
        __asm _emit 0x56
        // 0x588A4D89: push ecx
        __asm _emit 0x51
        // 0x588A4D8A: push edx
        __asm _emit 0x52
        // 0x588A4D8B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A4D8D: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x90
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588A4D92: jmp 0x588a4d96
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A4D94: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A4D96: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4D9B: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588A4D9F: mov dword ptr [esi + 0xb4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4DA5: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x7E
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588A4DAA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A4DAD: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588A4DB1: mov byte ptr [esp + 0x20], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0A
        // 0x588A4DB6: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588A4DB8: je 0x588a4df7
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x588A4DBA: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588A4DBD: cmp dword ptr [ecx + 0x160], 0x41
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x41
        // 0x588A4DC4: jle 0x588a4dd8
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588A4DC6: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4DCC: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588A4DCE: je 0x588a4dd8
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588A4DD0: add ecx, 0x1040
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x40
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4DD6: jmp 0x588a4dda
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A4DD8: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A4DDA: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A4DE0: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588A4DE2: push ebx
        __asm _emit 0x53
        // 0x588A4DE3: push ebx
        __asm _emit 0x53
        // 0x588A4DE4: push ecx
        __asm _emit 0x51
        // 0x588A4DE5: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A4DEB: push esi
        __asm _emit 0x56
        // 0x588A4DEC: push ecx
        __asm _emit 0x51
        // 0x588A4DED: push edx
        __asm _emit 0x52
        // 0x588A4DEE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A4DF0: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0x8F
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588A4DF5: jmp 0x588a4df9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A4DF7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A4DF9: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4DFE: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588A4E02: mov dword ptr [esi + 0xb8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4E08: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0x7E
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588A4E0D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A4E10: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588A4E14: mov byte ptr [esp + 0x20], 0xb
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0B
        // 0x588A4E19: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588A4E1B: je 0x588a4e5a
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x588A4E1D: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588A4E20: cmp dword ptr [ecx + 0x160], 0x42
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x42
        // 0x588A4E27: jle 0x588a4e3b
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588A4E29: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4E2F: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588A4E31: je 0x588a4e3b
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588A4E33: add ecx, 0x1080
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x80
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4E39: jmp 0x588a4e3d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A4E3B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A4E3D: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A4E43: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588A4E45: push ebx
        __asm _emit 0x53
        // 0x588A4E46: push ebx
        __asm _emit 0x53
        // 0x588A4E47: push ecx
        __asm _emit 0x51
        // 0x588A4E48: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A4E4E: push esi
        __asm _emit 0x56
        // 0x588A4E4F: push ecx
        __asm _emit 0x51
        // 0x588A4E50: push edx
        __asm _emit 0x52
        // 0x588A4E51: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A4E53: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0x8F
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588A4E58: jmp 0x588a4e5c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A4E5A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A4E5C: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4E61: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588A4E65: mov dword ptr [esi + 0xbc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4E6B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x7D
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588A4E70: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A4E73: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588A4E77: mov byte ptr [esp + 0x20], 0xc
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0C
        // 0x588A4E7C: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588A4E7E: je 0x588a4ebd
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x588A4E80: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588A4E83: cmp dword ptr [ecx + 0x160], 0x43
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x43
        // 0x588A4E8A: jle 0x588a4e9e
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588A4E8C: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4E92: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588A4E94: je 0x588a4e9e
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588A4E96: add ecx, 0x10c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4E9C: jmp 0x588a4ea0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A4E9E: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A4EA0: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A4EA6: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588A4EA8: push ebx
        __asm _emit 0x53
        // 0x588A4EA9: push ebx
        __asm _emit 0x53
        // 0x588A4EAA: push ecx
        __asm _emit 0x51
        // 0x588A4EAB: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A4EB1: push esi
        __asm _emit 0x56
        // 0x588A4EB2: push ecx
        __asm _emit 0x51
        // 0x588A4EB3: push edx
        __asm _emit 0x52
        // 0x588A4EB4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A4EB6: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0x8E
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588A4EBB: jmp 0x588a4ebf
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A4EBD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A4EBF: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4EC4: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588A4EC8: mov dword ptr [esi + 0xc0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4ECE: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x7D
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588A4ED3: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A4ED6: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588A4EDA: mov byte ptr [esp + 0x20], 0xd
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0D
        // 0x588A4EDF: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588A4EE1: je 0x588a4f20
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x588A4EE3: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588A4EE6: cmp dword ptr [ecx + 0x160], 0x44
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x44
        // 0x588A4EED: jle 0x588a4f01
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588A4EEF: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4EF5: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588A4EF7: je 0x588a4f01
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588A4EF9: add ecx, 0x1100
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4EFF: jmp 0x588a4f03
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A4F01: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A4F03: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A4F09: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588A4F0B: push ebx
        __asm _emit 0x53
        // 0x588A4F0C: push ebx
        __asm _emit 0x53
        // 0x588A4F0D: push ecx
        __asm _emit 0x51
        // 0x588A4F0E: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A4F14: push esi
        __asm _emit 0x56
        // 0x588A4F15: push ecx
        __asm _emit 0x51
        // 0x588A4F16: push edx
        __asm _emit 0x52
        // 0x588A4F17: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A4F19: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x8E
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588A4F1E: jmp 0x588a4f22
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A4F20: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A4F22: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4F27: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588A4F2B: mov dword ptr [esi + 0xc4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4F31: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x7D
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588A4F36: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A4F39: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588A4F3D: mov byte ptr [esp + 0x20], 0xe
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0E
        // 0x588A4F42: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588A4F44: je 0x588a4f83
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x588A4F46: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588A4F49: cmp dword ptr [ecx + 0x160], 0x45
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x45
        // 0x588A4F50: jle 0x588a4f64
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588A4F52: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4F58: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588A4F5A: je 0x588a4f64
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588A4F5C: add ecx, 0x1140
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x40
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4F62: jmp 0x588a4f66
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A4F64: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A4F66: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A4F6C: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588A4F6E: push ebx
        __asm _emit 0x53
        // 0x588A4F6F: push ebx
        __asm _emit 0x53
        // 0x588A4F70: push ecx
        __asm _emit 0x51
        // 0x588A4F71: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A4F77: push esi
        __asm _emit 0x56
        // 0x588A4F78: push ecx
        __asm _emit 0x51
        // 0x588A4F79: push edx
        __asm _emit 0x52
        // 0x588A4F7A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A4F7C: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x8E
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588A4F81: jmp 0x588a4f85
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A4F83: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A4F85: push 0x78
        __asm _emit 0x6A
        __asm _emit 0x78
        // 0x588A4F87: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588A4F8B: mov dword ptr [esi + 0xc8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4F91: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x7C
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588A4F96: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A4F99: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588A4F9D: mov byte ptr [esp + 0x20], 0xf
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0F
        // 0x588A4FA2: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588A4FA4: je 0x588a4fb6
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x588A4FA6: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588A4FA8: push ebx
        __asm _emit 0x53
        // 0x588A4FA9: push ebx
        __asm _emit 0x53
        // 0x588A4FAA: push ebx
        __asm _emit 0x53
        // 0x588A4FAB: push ebx
        __asm _emit 0x53
        // 0x588A4FAC: push esi
        __asm _emit 0x56
        // 0x588A4FAD: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A4FAF: call 0x5883e3f0
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x94
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x588A4FB4: jmp 0x588a4fb8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A4FB6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A4FB8: push 0x1f4
        __asm _emit 0x68
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4FBD: push 0x258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4FC2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A4FC4: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588A4FC8: mov dword ptr [esi + 0xcc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4FCE: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0xE2
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A4FD3: lea edi, [esi + 0x80]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4FD9: mov ebp, 7
        __asm _emit 0xBD
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4FDE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588A4FE0: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588A4FE2: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A4FE7: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A4FEC: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588A4FEF: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x588A4FF2: jne 0x588a4fe0
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x588A4FF4: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A4FFA: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A4FFF: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A5004: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A500A: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A500F: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A5014: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A5019: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588A501D: mov dword ptr [esi + 0xd0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A5023: mov dword ptr [esi + 0xd4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A5029: mov dword ptr [esi + 0xd8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A502F: mov dword ptr [esi + 0xdc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A5035: mov dword ptr [esi + 0xe0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A503B: mov dword ptr [esi + 0xe4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A5041: mov dword ptr [esi + 0xe8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A5047: mov dword ptr [esi + 0xec], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A504D: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588A504F: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588A5053: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A505A: pop ecx
        __asm _emit 0x59
        // 0x588A505B: pop edi
        __asm _emit 0x5F
        // 0x588A505C: pop esi
        __asm _emit 0x5E
        // 0x588A505D: pop ebp
        __asm _emit 0x5D
        // 0x588A505E: pop ebx
        __asm _emit 0x5B
        // 0x588A505F: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588A5062: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
