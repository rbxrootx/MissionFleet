// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58798850 .. +0x4C7 bytes.
extern "C" __declspec(naked) void FUN_58798850() {
    __asm {
        // 0x58798850: push ecx
        __asm _emit 0x51
        // 0x58798851: push ebp
        __asm _emit 0x55
        // 0x58798852: push esi
        __asm _emit 0x56
        // 0x58798853: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58798855: movzx eax, word ptr [esi + 0x26c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879885C: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798861: mov dword ptr [esi + 0x2c8], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xC8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798867: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x5879886B: je 0x58798879
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5879886D: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x58798871: je 0x58798879
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58798873: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58798877: jne 0x58798898
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x58798879: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879887E: mov ecx, dword ptr [eax + 0xd84]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798884: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x58798888: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x5879888C: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x5879888F: cmp dl, 5
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58798892: jne 0x58798cf9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x61
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798898: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879889E: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587988A2: shr cl, 1
        __asm _emit 0xD0
        __asm _emit 0xE9
        // 0x587988A4: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x587988A7: je 0x58798cf9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x4C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587988AD: cmp dword ptr [esi + 0x2f8], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587988B4: je 0x58798cf9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3F
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587988BA: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587988C0: cmp dword ptr [eax + 0x50], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x587988C4: je 0x58798cf9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x2F
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587988CA: mov dword ptr [eax + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587988D1: mov edx, dword ptr [esi + 0x2f8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587988D7: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587988DA: movzx ecx, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x08
        // 0x587988DD: add ecx, -5
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xFB
        // 0x587988E0: cmp ecx, 7
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x07
        // 0x587988E3: ja 0x5879893a
        __asm _emit 0x77
        __asm _emit 0x55
        // 0x587988E5: jmp dword ptr [ecx*4 + 0x58798d18]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x8D
        __asm _emit 0x18
        __asm _emit 0x8D
        __asm _emit 0x79
        __asm _emit 0x58
        // 0x587988EC: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587988EE: mov dword ptr [esi + 0x2b4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587988F4: jmp 0x5879893a
        __asm _emit 0xEB
        __asm _emit 0x44
        // 0x587988F6: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587988F8: mov dword ptr [esi + 0x2b8], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587988FE: jmp 0x5879893a
        __asm _emit 0xEB
        __asm _emit 0x3A
        // 0x58798900: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58798902: mov ecx, dword ptr [esi + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798908: mov dword ptr [esi + 0x2bc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879890E: mov ax, word ptr [ecx + 0x80]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798915: mov word ptr [esi + 0x2c4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879891C: jmp 0x5879893a
        __asm _emit 0xEB
        __asm _emit 0x1C
        // 0x5879891E: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58798920: mov eax, dword ptr [esi + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798926: mov dword ptr [esi + 0x2c0], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879892C: mov cx, word ptr [eax + 0x80]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798933: mov word ptr [esi + 0x2c6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xC6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879893A: mov ecx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x5879893D: movzx eax, byte ptr [ecx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x01
        // 0x58798940: dec eax
        __asm _emit 0x48
        // 0x58798941: cmp eax, 0xd
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0D
        // 0x58798944: ja 0x58798c7a
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879894A: movzx eax, byte ptr [eax + 0x58798d48]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x80
        __asm _emit 0x48
        __asm _emit 0x8D
        __asm _emit 0x79
        __asm _emit 0x58
        // 0x58798951: jmp dword ptr [eax*4 + 0x58798d38]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0x8D
        __asm _emit 0x79
        __asm _emit 0x58
        // 0x58798958: cmp byte ptr [esi + 0x2d8], 2
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0xD8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x5879895F: jne 0x5879896d
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58798961: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58798963: pop esi
        __asm _emit 0x5E
        // 0x58798964: pop ebp
        __asm _emit 0x5D
        // 0x58798965: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58798968: jmp 0x587985f0
        __asm _emit 0xE9
        __asm _emit 0x83
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879896D: cmp dword ptr [esi + 0x270], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798974: jne 0x587989ea
        __asm _emit 0x75
        __asm _emit 0x74
        // 0x58798976: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58798978: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879897E: push eax
        __asm _emit 0x50
        // 0x5879897F: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58798983: call 0x58778b20
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58798988: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5879898A: je 0x587989ae
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x5879898C: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58798990: mov ecx, 0x3e0
        __asm _emit 0xB9
        __asm _emit 0xE0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798995: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD1
        // 0x58798998: cmp dx, 0x40
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x40
        // 0x5879899C: jne 0x587989ae
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x5879899E: lea edx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587989A2: push edx
        __asm _emit 0x52
        // 0x587989A3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587989A5: call 0x58797610
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587989AA: pop esi
        __asm _emit 0x5E
        // 0x587989AB: pop ebp
        __asm _emit 0x5D
        // 0x587989AC: pop ecx
        __asm _emit 0x59
        // 0x587989AD: ret
        __asm _emit 0xC3
        // 0x587989AE: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587989B2: mov ecx, 0x3e0
        __asm _emit 0xB9
        __asm _emit 0xE0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587989B7: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x587989BA: mov edx, 0xc0
        __asm _emit 0xBA
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587989BF: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587989C2: jne 0x587989df
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x587989C4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587989C6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587989C8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587989CA: push 0x4a4
        __asm _emit 0x68
        __asm _emit 0xA4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587989CF: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x31
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x587989D4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587989D6: call 0x5876a570
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x1B
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x587989DB: pop esi
        __asm _emit 0x5E
        // 0x587989DC: pop ebp
        __asm _emit 0x5D
        // 0x587989DD: pop ecx
        __asm _emit 0x59
        // 0x587989DE: ret
        __asm _emit 0xC3
        // 0x587989DF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587989E1: call 0x587987b0
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587989E6: pop esi
        __asm _emit 0x5E
        // 0x587989E7: pop ebp
        __asm _emit 0x5D
        // 0x587989E8: pop ecx
        __asm _emit 0x59
        // 0x587989E9: ret
        __asm _emit 0xC3
        // 0x587989EA: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x587989EC: push ecx
        __asm _emit 0x51
        // 0x587989ED: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587989F3: call 0x58778b20
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587989F8: mov eax, dword ptr [esi + 0x2f8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587989FE: movzx edx, word ptr [esi + 0x278]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798A05: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58798A08: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58798A0A: movzx ecx, byte ptr [esi + 0x274]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798A11: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58798A13: push edx
        __asm _emit 0x52
        // 0x58798A14: movzx edx, word ptr [esi + 0x26e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0x6E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798A1B: push eax
        __asm _emit 0x50
        // 0x58798A1C: movzx eax, byte ptr [esi + 0x270]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798A23: push eax
        __asm _emit 0x50
        // 0x58798A24: push ecx
        __asm _emit 0x51
        // 0x58798A25: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58798A2B: push edx
        __asm _emit 0x52
        // 0x58798A2C: call 0x587b98b0
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0x0E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58798A31: pop esi
        __asm _emit 0x5E
        // 0x58798A32: pop ebp
        __asm _emit 0x5D
        // 0x58798A33: pop ecx
        __asm _emit 0x59
        // 0x58798A34: ret
        __asm _emit 0xC3
        // 0x58798A35: cmp byte ptr [esi + 0x2d8], 2
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0xD8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x58798A3C: jne 0x58798a57
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x58798A3E: mov eax, dword ptr [esi + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798A44: movzx ecx, word ptr [eax + 0x80]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798A4B: push ecx
        __asm _emit 0x51
        // 0x58798A4C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58798A4E: call 0x587986e0
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58798A53: pop esi
        __asm _emit 0x5E
        // 0x58798A54: pop ebp
        __asm _emit 0x5D
        // 0x58798A55: pop ecx
        __asm _emit 0x59
        // 0x58798A56: ret
        __asm _emit 0xC3
        // 0x58798A57: mov edx, dword ptr [esi + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798A5D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58798A5F: push ebx
        __asm _emit 0x53
        // 0x58798A60: push edi
        __asm _emit 0x57
        // 0x58798A61: mov edi, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0xBA
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798A67: movzx ebx, di
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xDF
        // 0x58798A6A: cmp eax, dword ptr [esi + 0x250]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798A70: jne 0x58798a87
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x58798A72: mov edx, 0xaa
        __asm _emit 0xBA
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798A77: xor dx, word ptr [esi + 0x25c]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x96
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798A7E: mov ax, di
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58798A81: sub ax, dx
        __asm _emit 0x66
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58798A84: movzx ebx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD8
        // 0x58798A87: movzx eax, word ptr [esi + 0x252]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798A8E: mov edx, 0x2b0
        __asm _emit 0xBA
        __asm _emit 0xB0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798A93: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58798A96: jb 0x58798aa2
        __asm _emit 0x72
        __asm _emit 0x0A
        // 0x58798A98: mov edx, 0x2b3
        __asm _emit 0xBA
        __asm _emit 0xB3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798A9D: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58798AA0: jbe 0x58798b15
        __asm _emit 0x76
        __asm _emit 0x73
        // 0x58798AA2: mov edx, 0x2dc
        __asm _emit 0xBA
        __asm _emit 0xDC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798AA7: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58798AAA: je 0x58798b15
        __asm _emit 0x74
        __asm _emit 0x69
        // 0x58798AAC: mov edx, 0x3af
        __asm _emit 0xBA
        __asm _emit 0xAF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798AB1: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58798AB4: je 0x58798b15
        __asm _emit 0x74
        __asm _emit 0x5F
        // 0x58798AB6: movzx eax, word ptr [ecx + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x41
        __asm _emit 0x02
        // 0x58798ABA: mov ecx, 0x2b0
        __asm _emit 0xB9
        __asm _emit 0xB0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798ABF: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58798AC2: jb 0x58798ace
        __asm _emit 0x72
        __asm _emit 0x0A
        // 0x58798AC4: mov edx, 0x2b3
        __asm _emit 0xBA
        __asm _emit 0xB3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798AC9: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58798ACC: jbe 0x58798ae2
        __asm _emit 0x76
        __asm _emit 0x14
        // 0x58798ACE: mov ecx, 0x2dc
        __asm _emit 0xB9
        __asm _emit 0xDC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798AD3: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58798AD6: je 0x58798ae2
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58798AD8: mov edx, 0x3af
        __asm _emit 0xBA
        __asm _emit 0xAF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798ADD: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58798AE0: jne 0x58798b5f
        __asm _emit 0x75
        __asm _emit 0x7D
        // 0x58798AE2: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58798AE8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58798AEA: push ebp
        __asm _emit 0x55
        // 0x58798AEB: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58798AED: call 0x588804f0
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0x79
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58798AF2: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x58798AF4: js 0x58798b05
        __asm _emit 0x78
        __asm _emit 0x0F
        // 0x58798AF6: mov eax, dword ptr [esi + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798AFC: movzx ebx, word ptr [eax + 0x80]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x98
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798B03: jmp 0x58798b5f
        __asm _emit 0xEB
        __asm _emit 0x5A
        // 0x58798B05: mov ecx, dword ptr [esi + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798B0B: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58798B0D: push ebx
        __asm _emit 0x53
        // 0x58798B0E: call 0x5890bc40
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x31
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58798B13: jmp 0x58798b5f
        __asm _emit 0xEB
        __asm _emit 0x4A
        // 0x58798B15: movzx eax, word ptr [ecx + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x41
        __asm _emit 0x02
        // 0x58798B19: mov ecx, 0x2b0
        __asm _emit 0xB9
        __asm _emit 0xB0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798B1E: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58798B21: jb 0x58798b2d
        __asm _emit 0x72
        __asm _emit 0x0A
        // 0x58798B23: mov edx, 0x2b3
        __asm _emit 0xBA
        __asm _emit 0xB3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798B28: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58798B2B: jbe 0x58798b5f
        __asm _emit 0x76
        __asm _emit 0x32
        // 0x58798B2D: mov ecx, 0x2dc
        __asm _emit 0xB9
        __asm _emit 0xDC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798B32: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58798B35: je 0x58798b5f
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58798B37: mov edx, 0x3af
        __asm _emit 0xBA
        __asm _emit 0xAF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798B3C: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58798B3F: je 0x58798b5f
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x58798B41: mov eax, 0xaa
        __asm _emit 0xB8
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798B46: xor ax, word ptr [esi + 0x25c]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798B4D: movzx ecx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC8
        // 0x58798B50: push ecx
        __asm _emit 0x51
        // 0x58798B51: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58798B57: push ebp
        __asm _emit 0x55
        // 0x58798B58: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58798B5A: call 0x58880630
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x7A
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58798B5F: mov edx, dword ptr [esi + 0x2f8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798B65: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58798B68: mov ebp, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x28
        // 0x58798B6A: movzx eax, word ptr [esi + 0x26e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x6E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798B71: cmp ax, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x64
        // 0x58798B75: jbe 0x58798bab
        __asm _emit 0x76
        __asm _emit 0x34
        // 0x58798B77: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798B7D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58798B7F: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x8A
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x58798B84: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798B8A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58798B8C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58798B8E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58798B90: push 0xd
        __asm _emit 0x6A
        __asm _emit 0x0D
        // 0x58798B92: mov dword ptr [ecx + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798B99: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x2F
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x58798B9E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58798BA0: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0xC1
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x58798BA5: pop edi
        __asm _emit 0x5F
        // 0x58798BA6: pop ebx
        __asm _emit 0x5B
        // 0x58798BA7: pop esi
        __asm _emit 0x5E
        // 0x58798BA8: pop ebp
        __asm _emit 0x5D
        // 0x58798BA9: pop ecx
        __asm _emit 0x59
        // 0x58798BAA: ret
        __asm _emit 0xC3
        // 0x58798BAB: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58798BB1: movzx edx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD0
        // 0x58798BB4: push edx
        __asm _emit 0x52
        // 0x58798BB5: call 0x588f4060
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0xB4
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x58798BBA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58798BBC: je 0x58798c78
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798BC2: mov ecx, dword ptr [esi + 0x2f8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798BC8: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58798BCB: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x58798BCD: cmp cl, 0xb
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x0B
        // 0x58798BD0: je 0x58798c04
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x58798BD2: cmp cl, 0xc
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x0C
        // 0x58798BD5: je 0x58798c04
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x58798BD7: movzx eax, byte ptr [esi + 0x270]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798BDE: movzx ecx, byte ptr [esi + 0x274]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798BE5: movzx edx, word ptr [esi + 0x26e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0x6E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798BEC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58798BEE: push ebx
        __asm _emit 0x53
        // 0x58798BEF: push ebp
        __asm _emit 0x55
        // 0x58798BF0: push eax
        __asm _emit 0x50
        // 0x58798BF1: push ecx
        __asm _emit 0x51
        // 0x58798BF2: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58798BF8: push edx
        __asm _emit 0x52
        // 0x58798BF9: call 0x587b98b0
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58798BFE: pop edi
        __asm _emit 0x5F
        // 0x58798BFF: pop ebx
        __asm _emit 0x5B
        // 0x58798C00: pop esi
        __asm _emit 0x5E
        // 0x58798C01: pop ebp
        __asm _emit 0x5D
        // 0x58798C02: pop ecx
        __asm _emit 0x59
        // 0x58798C03: ret
        __asm _emit 0xC3
        // 0x58798C04: mov ecx, dword ptr [esi + 0x270]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798C0A: mov edx, dword ptr [esi + 0x274]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798C10: lea edi, [edx + ecx*2 + 0x2f0]
        __asm _emit 0x8D
        __asm _emit 0xBC
        __asm _emit 0x4A
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798C17: mov edi, dword ptr [eax + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0xB8
        // 0x58798C1A: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58798C1C: je 0x58798c7e
        __asm _emit 0x74
        __asm _emit 0x60
        // 0x58798C1E: lea ecx, [edx + ecx*2 + 0x560]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x4A
        __asm _emit 0x60
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798C25: movzx edx, word ptr [eax + ecx*2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x14
        __asm _emit 0x48
        // 0x58798C29: mov eax, dword ptr [esi + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798C2F: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798C35: cmp edx, dword ptr [eax + 0x80]
        __asm _emit 0x3B
        __asm _emit 0x90
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798C3B: jne 0x58798c51
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x58798C3D: cmp dword ptr [edi], ebp
        __asm _emit 0x39
        __asm _emit 0x2F
        // 0x58798C3F: jne 0x58798c51
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x58798C41: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58798C43: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58798C46: pop edi
        __asm _emit 0x5F
        // 0x58798C47: pop ebx
        __asm _emit 0x5B
        // 0x58798C48: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58798C4A: pop esi
        __asm _emit 0x5E
        // 0x58798C4B: pop ebp
        __asm _emit 0x5D
        // 0x58798C4C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58798C4F: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
        // 0x58798C51: movzx ecx, byte ptr [esi + 0x270]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798C58: movzx edx, byte ptr [esi + 0x274]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798C5F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58798C61: push ebx
        __asm _emit 0x53
        // 0x58798C62: push ebp
        __asm _emit 0x55
        // 0x58798C63: push ecx
        __asm _emit 0x51
        // 0x58798C64: movzx eax, word ptr [esi + 0x26e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x6E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798C6B: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58798C71: push edx
        __asm _emit 0x52
        // 0x58798C72: push eax
        __asm _emit 0x50
        // 0x58798C73: call 0x587b98b0
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58798C78: pop edi
        __asm _emit 0x5F
        // 0x58798C79: pop ebx
        __asm _emit 0x5B
        // 0x58798C7A: pop esi
        __asm _emit 0x5E
        // 0x58798C7B: pop ebp
        __asm _emit 0x5D
        // 0x58798C7C: pop ecx
        __asm _emit 0x59
        // 0x58798C7D: ret
        __asm _emit 0xC3
        // 0x58798C7E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58798C80: push ebx
        __asm _emit 0x53
        // 0x58798C81: movzx ecx, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC9
        // 0x58798C84: push ebp
        __asm _emit 0x55
        // 0x58798C85: push ecx
        __asm _emit 0x51
        // 0x58798C86: movzx edx, dl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD2
        // 0x58798C89: jmp 0x58798c64
        __asm _emit 0xEB
        __asm _emit 0xD9
        // 0x58798C8B: cmp byte ptr [esi + 0x2d8], 2
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0xD8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x58798C92: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x58798C94: jne 0x58798ca2
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58798C96: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58798C98: pop esi
        __asm _emit 0x5E
        // 0x58798C99: pop ebp
        __asm _emit 0x5D
        // 0x58798C9A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58798C9D: jmp 0x58798630
        __asm _emit 0xE9
        __asm _emit 0x8E
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58798CA2: movzx eax, word ptr [esi + 0x26e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x6E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798CA9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58798CAB: cmp ax, 0x64
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x64
        // 0x58798CAF: jbe 0x58798cd0
        __asm _emit 0x76
        __asm _emit 0x1F
        // 0x58798CB1: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798CB7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58798CB9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58798CBB: push 0xd
        __asm _emit 0x6A
        __asm _emit 0x0D
        // 0x58798CBD: mov dword ptr [ecx + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x50
        // 0x58798CC0: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x2E
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x58798CC5: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58798CC7: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0xC0
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x58798CCC: pop esi
        __asm _emit 0x5E
        // 0x58798CCD: pop ebp
        __asm _emit 0x5D
        // 0x58798CCE: pop ecx
        __asm _emit 0x59
        // 0x58798CCF: ret
        __asm _emit 0xC3
        // 0x58798CD0: movzx edx, word ptr [esi + 0x278]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798CD7: push edx
        __asm _emit 0x52
        // 0x58798CD8: movzx edx, byte ptr [esi + 0x274]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798CDF: push ecx
        __asm _emit 0x51
        // 0x58798CE0: movzx ecx, byte ptr [esi + 0x270]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798CE7: push ecx
        __asm _emit 0x51
        // 0x58798CE8: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58798CEE: push edx
        __asm _emit 0x52
        // 0x58798CEF: push eax
        __asm _emit 0x50
        // 0x58798CF0: call 0x587b98b0
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x0B
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58798CF5: pop esi
        __asm _emit 0x5E
        // 0x58798CF6: pop ebp
        __asm _emit 0x5D
        // 0x58798CF7: pop ecx
        __asm _emit 0x59
        // 0x58798CF8: ret
        __asm _emit 0xC3
        // 0x58798CF9: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798CFF: cmp dword ptr [eax + 0x50], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x58798D03: jne 0x58798c7a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x71
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58798D09: mov dword ptr [esi + 0x2c8], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58798D13: pop esi
        __asm _emit 0x5E
        // 0x58798D14: pop ebp
        __asm _emit 0x5D
        // 0x58798D15: pop ecx
        __asm _emit 0x59
        // 0x58798D16: ret
        __asm _emit 0xC3
    }
}
