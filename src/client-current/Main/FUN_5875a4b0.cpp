// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5875A4B0 .. +0x326 bytes.
// Source symbol alias: FUN_5875a4b0.
extern "C" __declspec(naked) void FUN_5875a4b0() {
    __asm {
        // 0x5875A4B0: push ebx
        __asm _emit 0x53
        // 0x5875A4B1: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5875A4B5: movzx ax, byte ptr [ebx]
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x03
        // 0x5875A4B9: push esi
        __asm _emit 0x56
        // 0x5875A4BA: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5875A4BC: push edi
        __asm _emit 0x57
        // 0x5875A4BD: lea ecx, [ebx + 1]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x01
        // 0x5875A4C0: push ecx
        __asm _emit 0x51
        // 0x5875A4C1: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x5875A4C4: mov word ptr [esi + 0xac], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A4CB: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x78
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5875A4D0: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x5875A4D3: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5875A4D8: mov edi, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x70
        // 0x5875A4DB: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x5875A4DF: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5875A4E2: inc dx
        __asm _emit 0x66
        __asm _emit 0x42
        // 0x5875A4E4: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x5875A4E8: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5875A4EA: je 0x5875a4f2
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5875A4EC: push edi
        __asm _emit 0x57
        // 0x5875A4ED: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x8A
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875A4F2: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x5875A4F5: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5875A4F7: je 0x5875a4ff
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5875A4F9: push edi
        __asm _emit 0x57
        // 0x5875A4FA: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x89
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875A4FF: mov eax, dword ptr [ebx + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x3C
        // 0x5875A502: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5875A505: mov ecx, dword ptr [ebx + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x40
        // 0x5875A508: mov dword ptr [esi + 0x7c], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x5875A50B: mov edx, dword ptr [ebx + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x48
        // 0x5875A50E: mov dword ptr [esi + 0x84], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A514: mov ax, word ptr [ebx + 0x44]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x44
        // 0x5875A518: mov word ptr [esi + 0x80], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A51F: mov ecx, dword ptr [ebx + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x58
        // 0x5875A522: mov dword ptr [esi + 0x94], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A528: cmp word ptr [ebx + 0x44], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7B
        __asm _emit 0x44
        __asm _emit 0x00
        // 0x5875A52D: je 0x5875a569
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x5875A52F: lea eax, [esi + 0x88]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A535: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5875A537: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5875A539: mov edx, 9
        __asm _emit 0xBA
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A53E: lea edi, [ecx + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x79
        __asm _emit 0x4C
        // 0x5875A541: lea ecx, [edx + 0x7ffffff5]
        __asm _emit 0x8D
        __asm _emit 0x8A
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5875A547: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5875A549: je 0x5875a55f
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x5875A54B: mov cl, byte ptr [edi + eax]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x07
        // 0x5875A54E: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5875A550: je 0x5875a55f
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5875A552: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5875A554: inc eax
        __asm _emit 0x40
        // 0x5875A555: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5875A558: jne 0x5875a541
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x5875A55A: dec eax
        __asm _emit 0x48
        // 0x5875A55B: mov byte ptr [eax], dl
        __asm _emit 0x88
        __asm _emit 0x10
        // 0x5875A55D: jmp 0x5875a573
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x5875A55F: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5875A561: jne 0x5875a564
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5875A563: dec eax
        __asm _emit 0x48
        // 0x5875A564: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A567: jmp 0x5875a573
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x5875A569: mov dword ptr [esi + 0x88], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A573: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A579: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5875A57B: jne 0x5875a60a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A581: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xA1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875A586: cmp dword ptr [eax + 0x164], 0x5a
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x5A
        // 0x5875A58D: jle 0x5875a5a6
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5875A58F: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A596: je 0x5875a5a6
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5875A598: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A59E: mov eax, dword ptr [edx + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A5A4: jmp 0x5875a5a8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875A5A6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875A5A8: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x5875A5AB: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5875A5AE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5875A5B0: je 0x5875a5da
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5875A5B2: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5875A5B5: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5875A5B8: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5875A5BB: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5875A5BE: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5875A5C1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5875A5C3: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5875A5C6: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5875A5C8: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5875A5CB: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5875A5CE: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5875A5D1: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5875A5D4: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5875A5D7: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5875A5DA: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xA1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875A5DF: cmp dword ptr [eax + 0x164], 0x59
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x59
        // 0x5875A5E6: jle 0x5875a739
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x4D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A5EC: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A5F3: je 0x5875a739
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A5F9: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A5FF: mov eax, dword ptr [ecx + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A605: jmp 0x5875a73b
        __asm _emit 0xE9
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A60A: mov ecx, dword ptr [0x58a245e0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875A610: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5875A612: je 0x5875a6bb
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A618: cmp dword ptr [ecx + 4], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5875A61C: je 0x5875a64a
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x5875A61E: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5875A621: dec eax
        __asm _emit 0x48
        // 0x5875A622: cmp dword ptr [edx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A628: jbe 0x5875a64a
        __asm _emit 0x76
        __asm _emit 0x20
        // 0x5875A62A: push eax
        __asm _emit 0x50
        // 0x5875A62B: call 0x58755ff0
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875A630: mov ecx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x5C
        // 0x5875A633: push eax
        __asm _emit 0x50
        // 0x5875A634: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0x70
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5875A639: mov eax, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x5875A63C: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A641: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5875A645: jmp 0x5875a77b
        __asm _emit 0xE9
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A64A: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xA1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875A64F: cmp dword ptr [eax + 0x164], 0x5a
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x5A
        // 0x5875A656: jle 0x5875a66f
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5875A658: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A65F: je 0x5875a66f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5875A661: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A667: mov eax, dword ptr [edx + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A66D: jmp 0x5875a671
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875A66F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875A671: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x5875A674: push eax
        __asm _emit 0x50
        // 0x5875A675: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x70
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5875A67A: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xA1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875A67F: cmp dword ptr [eax + 0x164], 0x59
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x59
        // 0x5875A686: jle 0x5875a6ab
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x5875A688: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A68F: je 0x5875a6ab
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x5875A691: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A697: mov eax, dword ptr [eax + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A69D: mov ecx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x5C
        // 0x5875A6A0: push eax
        __asm _emit 0x50
        // 0x5875A6A1: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x70
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5875A6A6: jmp 0x5875a76e
        __asm _emit 0xE9
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A6AB: mov ecx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x5C
        // 0x5875A6AE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875A6B0: push eax
        __asm _emit 0x50
        // 0x5875A6B1: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x70
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5875A6B6: jmp 0x5875a76e
        __asm _emit 0xE9
        __asm _emit 0xB3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A6BB: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xA1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875A6C0: cmp dword ptr [eax + 0x164], 0x5a
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x5A
        // 0x5875A6C7: jle 0x5875a6e0
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5875A6C9: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A6D0: je 0x5875a6e0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5875A6D2: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A6D8: mov eax, dword ptr [ecx + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A6DE: jmp 0x5875a6e2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875A6E0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875A6E2: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x5875A6E5: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5875A6E8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5875A6EA: je 0x5875a714
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5875A6EC: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5875A6EF: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5875A6F2: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5875A6F5: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5875A6F8: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5875A6FB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5875A6FD: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5875A700: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5875A702: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5875A705: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5875A708: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5875A70B: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5875A70E: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5875A711: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5875A714: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xA1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875A719: cmp dword ptr [eax + 0x164], 0x59
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x59
        // 0x5875A720: jle 0x5875a739
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5875A722: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A729: je 0x5875a739
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5875A72B: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A731: mov eax, dword ptr [ecx + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A737: jmp 0x5875a73b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875A739: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875A73B: mov ecx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x5C
        // 0x5875A73E: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5875A741: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5875A743: je 0x5875a76e
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x5875A745: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5875A748: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5875A74B: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5875A74E: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5875A751: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5875A754: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5875A757: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5875A75A: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5875A75C: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5875A75F: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5875A762: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5875A765: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5875A768: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5875A76B: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5875A76E: mov ecx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x5C
        // 0x5875A771: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A776: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x85
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875A77B: mov eax, dword ptr [ebx + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x34
        // 0x5875A77E: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x5875A781: mov dword ptr [esi + 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A787: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5875A78A: mov dx, word ptr [ebx + 0x1a]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x1A
        // 0x5875A78E: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x5875A791: add ebx, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x1C
        // 0x5875A794: push ebx
        __asm _emit 0x53
        // 0x5875A795: mov word ptr [esi + 0x9e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875A79C: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x75
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5875A7A1: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5875A7A4: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5875A7A9: mov edi, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x5875A7AC: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x26
        // 0x5875A7B0: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5875A7B3: inc ax
        __asm _emit 0x66
        __asm _emit 0x40
        // 0x5875A7B5: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x5875A7B9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5875A7BB: je 0x5875a7c3
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5875A7BD: push edi
        __asm _emit 0x57
        // 0x5875A7BE: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x87
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875A7C3: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x5875A7C6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5875A7C8: je 0x5875a7d0
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5875A7CA: push edi
        __asm _emit 0x57
        // 0x5875A7CB: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x87
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875A7D0: pop edi
        __asm _emit 0x5F
        // 0x5875A7D1: pop esi
        __asm _emit 0x5E
        // 0x5875A7D2: pop ebx
        __asm _emit 0x5B
        // 0x5875A7D3: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
