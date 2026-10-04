// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588ED750 .. +0x4FA bytes.
// Source symbol alias: FUN_588ed750.
extern "C" __declspec(naked) void FUN_588ed750() {
    __asm {
        // 0x588ED750: mov ax, word ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588ED755: push ebx
        __asm _emit 0x53
        // 0x588ED756: push ebp
        __asm _emit 0x55
        // 0x588ED757: push esi
        __asm _emit 0x56
        // 0x588ED758: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588ED75A: mov word ptr [esi + 0x13c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED761: mov eax, dword ptr [esi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED767: mov ecx, 0xf
        __asm _emit 0xB9
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED76C: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588ED770: mov eax, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED776: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588ED77A: mov eax, dword ptr [esi + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED780: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588ED784: mov eax, dword ptr [esi + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED78A: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588ED78E: mov eax, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED794: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588ED798: mov eax, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED79E: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588ED7A2: mov eax, dword ptr [0x58a246bc]
        __asm _emit 0xA1
        __asm _emit 0xBC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588ED7A7: cmp dword ptr [eax + 0x164], 0x17
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x17
        // 0x588ED7AE: push edi
        __asm _emit 0x57
        // 0x588ED7AF: mov edi, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x588ED7B2: jle 0x588ed7c8
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588ED7B4: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED7BB: je 0x588ed7c8
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588ED7BD: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED7C3: mov eax, dword ptr [ecx + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x5C
        // 0x588ED7C6: jmp 0x588ed7ca
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588ED7C8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588ED7CA: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588ED7CD: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588ED7D0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588ED7D2: je 0x588ed7fc
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588ED7D4: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588ED7D7: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588ED7DA: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588ED7DD: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588ED7E0: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588ED7E3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588ED7E5: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588ED7E8: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588ED7EA: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588ED7ED: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588ED7F0: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588ED7F3: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588ED7F6: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588ED7F9: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588ED7FC: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x588ED7FF: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED804: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588ED808: mov eax, dword ptr [0x58a246bc]
        __asm _emit 0xA1
        __asm _emit 0xBC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588ED80D: cmp dword ptr [eax + 0x164], 0x15
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x15
        // 0x588ED814: jle 0x588ed82a
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588ED816: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED81D: je 0x588ed82a
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588ED81F: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED825: mov eax, dword ptr [edx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x54
        // 0x588ED828: jmp 0x588ed82c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588ED82A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588ED82C: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x588ED82F: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588ED832: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588ED834: je 0x588ed85e
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588ED836: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588ED839: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588ED83C: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588ED83F: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588ED842: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588ED845: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588ED847: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588ED84A: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588ED84C: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588ED84F: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588ED852: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588ED855: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588ED858: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588ED85B: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588ED85E: mov eax, dword ptr [0x58a246bc]
        __asm _emit 0xA1
        __asm _emit 0xBC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588ED863: cmp dword ptr [eax + 0x164], 0x16
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x16
        // 0x588ED86A: jle 0x588ed880
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588ED86C: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED873: je 0x588ed880
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588ED875: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED87B: mov eax, dword ptr [ecx + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x58
        // 0x588ED87E: jmp 0x588ed882
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588ED880: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588ED882: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588ED885: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588ED888: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588ED88A: je 0x588ed8b4
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588ED88C: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588ED88F: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588ED892: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588ED895: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588ED898: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588ED89B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588ED89D: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588ED8A0: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588ED8A2: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588ED8A5: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588ED8A8: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588ED8AB: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588ED8AE: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588ED8B1: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588ED8B4: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED8BA: lea ebx, [edi + 0x41]
        __asm _emit 0x8D
        __asm _emit 0x5F
        __asm _emit 0x41
        // 0x588ED8BD: push ebx
        __asm _emit 0x53
        // 0x588ED8BE: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x588ED8C0: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588ED8C5: lea ecx, [edi + 0x57]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x57
        // 0x588ED8C8: push ecx
        __asm _emit 0x51
        // 0x588ED8C9: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED8CF: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x588ED8D1: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588ED8D6: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED8DC: push ebx
        __asm _emit 0x53
        // 0x588ED8DD: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x588ED8DF: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588ED8E4: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED8EA: lea edx, [edi + 0x11]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x11
        // 0x588ED8ED: push edx
        __asm _emit 0x52
        // 0x588ED8EE: push 0x38
        __asm _emit 0x6A
        __asm _emit 0x38
        // 0x588ED8F0: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588ED8F5: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED8FB: lea eax, [edi + 0x21]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x21
        // 0x588ED8FE: push eax
        __asm _emit 0x50
        // 0x588ED8FF: push 0x38
        __asm _emit 0x6A
        __asm _emit 0x38
        // 0x588ED901: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588ED906: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED90C: lea ebx, [edi + 0x31]
        __asm _emit 0x8D
        __asm _emit 0x5F
        __asm _emit 0x31
        // 0x588ED90F: push ebx
        __asm _emit 0x53
        // 0x588ED910: push 0x65
        __asm _emit 0x6A
        __asm _emit 0x65
        // 0x588ED912: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588ED917: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED91D: push ebx
        __asm _emit 0x53
        // 0x588ED91E: push 0x9f
        __asm _emit 0x68
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED923: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588ED928: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED92E: lea ebx, [edi + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x5F
        __asm _emit 0x48
        // 0x588ED931: push ebx
        __asm _emit 0x53
        // 0x588ED932: push 0x65
        __asm _emit 0x6A
        __asm _emit 0x65
        // 0x588ED934: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588ED939: mov ecx, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED93F: push ebx
        __asm _emit 0x53
        // 0x588ED940: push 0x9f
        __asm _emit 0x68
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED945: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588ED94A: mov ecx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED950: lea ebx, [edi + 0x70]
        __asm _emit 0x8D
        __asm _emit 0x5F
        __asm _emit 0x70
        // 0x588ED953: push ebx
        __asm _emit 0x53
        // 0x588ED954: push 0x51
        __asm _emit 0x6A
        __asm _emit 0x51
        // 0x588ED956: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588ED95B: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED961: push ebx
        __asm _emit 0x53
        // 0x588ED962: push 0x83
        __asm _emit 0x68
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED967: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588ED96C: lea ecx, [edi + 0x7d]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x7D
        // 0x588ED96F: push ecx
        __asm _emit 0x51
        // 0x588ED970: mov ecx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED976: push 0x45
        __asm _emit 0x6A
        __asm _emit 0x45
        // 0x588ED978: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588ED97D: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED983: lea edx, [edi + 0xa5]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xA5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED989: push edx
        __asm _emit 0x52
        // 0x588ED98A: push 0x45
        __asm _emit 0x6A
        __asm _emit 0x45
        // 0x588ED98C: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588ED991: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED997: lea ebx, [edi + 0x89]
        __asm _emit 0x8D
        __asm _emit 0x9F
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED99D: push ebx
        __asm _emit 0x53
        // 0x588ED99E: push 0x51
        __asm _emit 0x6A
        __asm _emit 0x51
        // 0x588ED9A0: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588ED9A5: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED9AB: lea ebp, [edi + 0x96]
        __asm _emit 0x8D
        __asm _emit 0xAF
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED9B1: push ebp
        __asm _emit 0x55
        // 0x588ED9B2: push 0x51
        __asm _emit 0x6A
        __asm _emit 0x51
        // 0x588ED9B4: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588ED9B9: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED9BF: push ebx
        __asm _emit 0x53
        // 0x588ED9C0: push 0x79
        __asm _emit 0x6A
        __asm _emit 0x79
        // 0x588ED9C2: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588ED9C7: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED9CD: push ebp
        __asm _emit 0x55
        // 0x588ED9CE: push 0x79
        __asm _emit 0x6A
        __asm _emit 0x79
        // 0x588ED9D0: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588ED9D5: lea eax, [edi + 0xc4]
        __asm _emit 0x8D
        __asm _emit 0x87
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED9DB: push eax
        __asm _emit 0x50
        // 0x588ED9DC: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED9E2: push 0x36
        __asm _emit 0x6A
        __asm _emit 0x36
        // 0x588ED9E4: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588ED9E9: lea ecx, [edi + 0x104]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED9EF: push ecx
        __asm _emit 0x51
        // 0x588ED9F0: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ED9F6: push 0x36
        __asm _emit 0x6A
        __asm _emit 0x36
        // 0x588ED9F8: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588ED9FD: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDA03: lea edx, [edi + 0xd7]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xD7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDA09: push edx
        __asm _emit 0x52
        // 0x588EDA0A: push 0x8e
        __asm _emit 0x68
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDA0F: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EDA14: mov ecx, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDA1A: lea eax, [edi + 0xe3]
        __asm _emit 0x8D
        __asm _emit 0x87
        __asm _emit 0xE3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDA20: push eax
        __asm _emit 0x50
        // 0x588EDA21: push 0x8e
        __asm _emit 0x68
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDA26: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EDA2B: lea ecx, [edi + 0x117]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDA31: push ecx
        __asm _emit 0x51
        // 0x588EDA32: mov ecx, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDA38: push 0x91
        __asm _emit 0x68
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDA3D: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EDA42: mov ecx, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDA48: lea ebx, [edi + 0x123]
        __asm _emit 0x8D
        __asm _emit 0x9F
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDA4E: push ebx
        __asm _emit 0x53
        // 0x588EDA4F: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDA54: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EDA59: mov ecx, dword ptr [esi + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDA5F: push ebx
        __asm _emit 0x53
        // 0x588EDA60: push 0x8a
        __asm _emit 0x68
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDA65: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EDA6A: mov eax, dword ptr [0x58a246bc]
        __asm _emit 0xA1
        __asm _emit 0xBC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EDA6F: cmp dword ptr [eax + 0x160], 6
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        // 0x588EDA76: jle 0x588eda8e
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588EDA78: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDA7F: je 0x588eda8e
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588EDA81: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDA87: add eax, 0x180
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDA8C: jmp 0x588eda90
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588EDA8E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EDA90: mov ecx, dword ptr [esi + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDA96: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588EDA99: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588EDA9B: je 0x588edac5
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588EDA9D: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588EDAA0: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588EDAA3: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588EDAA6: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588EDAA9: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588EDAAC: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EDAAE: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588EDAB1: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588EDAB3: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588EDAB6: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588EDAB9: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588EDABC: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588EDABF: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588EDAC2: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588EDAC5: mov eax, dword ptr [0x58a246bc]
        __asm _emit 0xA1
        __asm _emit 0xBC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EDACA: cmp dword ptr [eax + 0x160], 4
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x588EDAD1: jle 0x588edae9
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588EDAD3: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDADA: je 0x588edae9
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588EDADC: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDAE2: add eax, 0x100
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDAE7: jmp 0x588edaeb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588EDAE9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EDAEB: mov ecx, dword ptr [esi + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDAF1: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588EDAF4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588EDAF6: je 0x588edb20
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588EDAF8: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588EDAFB: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588EDAFE: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588EDB01: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588EDB04: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588EDB07: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EDB09: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588EDB0C: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588EDB0E: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588EDB11: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588EDB14: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588EDB17: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588EDB1A: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588EDB1D: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588EDB20: mov eax, dword ptr [0x58a246bc]
        __asm _emit 0xA1
        __asm _emit 0xBC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EDB25: cmp dword ptr [eax + 0x160], 8
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        // 0x588EDB2C: jle 0x588edb44
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588EDB2E: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDB35: je 0x588edb44
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588EDB37: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDB3D: add eax, 0x200
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDB42: jmp 0x588edb46
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588EDB44: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EDB46: mov ecx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDB4C: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588EDB4F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588EDB51: je 0x588edb7b
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588EDB53: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588EDB56: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588EDB59: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588EDB5C: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588EDB5F: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588EDB62: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EDB64: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588EDB67: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588EDB69: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588EDB6C: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588EDB6F: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588EDB72: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588EDB75: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588EDB78: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588EDB7B: mov eax, dword ptr [0x58a246bc]
        __asm _emit 0xA1
        __asm _emit 0xBC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EDB80: cmp dword ptr [eax + 0x160], 7
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x588EDB87: jle 0x588edb9f
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588EDB89: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDB90: je 0x588edb9f
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588EDB92: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDB98: add eax, 0x1c0
        __asm _emit 0x05
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDB9D: jmp 0x588edba1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588EDB9F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EDBA1: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDBA7: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588EDBAA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588EDBAC: je 0x588edbd6
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588EDBAE: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588EDBB1: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588EDBB4: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588EDBB7: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588EDBBA: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588EDBBD: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EDBBF: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588EDBC2: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588EDBC4: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588EDBC7: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588EDBCA: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588EDBCD: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588EDBD0: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588EDBD3: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588EDBD6: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDBDC: lea ebx, [edi + 0x13e]
        __asm _emit 0x8D
        __asm _emit 0x9F
        __asm _emit 0x3E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDBE2: push ebx
        __asm _emit 0x53
        // 0x588EDBE3: push 0x6a
        __asm _emit 0x6A
        __asm _emit 0x6A
        // 0x588EDBE5: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EDBEA: mov ecx, dword ptr [esi + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDBF0: push ebx
        __asm _emit 0x53
        // 0x588EDBF1: push 0xf
        __asm _emit 0x6A
        __asm _emit 0x0F
        // 0x588EDBF3: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EDBF8: mov ecx, dword ptr [esi + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDBFE: push ebx
        __asm _emit 0x53
        // 0x588EDBFF: push 0xb8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDC04: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EDC09: mov ecx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDC0F: push ebx
        __asm _emit 0x53
        // 0x588EDC10: push 0x99
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDC15: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EDC1A: lea ecx, [edi + 0x11d]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x1D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDC20: push ecx
        __asm _emit 0x51
        // 0x588EDC21: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588EDC24: push 0x2d
        __asm _emit 0x6A
        __asm _emit 0x2D
        // 0x588EDC26: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EDC2B: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x588EDC2E: add edi, 0xdf
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0xDF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EDC34: push edi
        __asm _emit 0x57
        // 0x588EDC35: push 0x28
        __asm _emit 0x6A
        __asm _emit 0x28
        // 0x588EDC37: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EDC3C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588EDC3E: call 0x588ecea0
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EDC43: pop edi
        __asm _emit 0x5F
        // 0x588EDC44: pop esi
        __asm _emit 0x5E
        // 0x588EDC45: pop ebp
        __asm _emit 0x5D
        // 0x588EDC46: pop ebx
        __asm _emit 0x5B
        // 0x588EDC47: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
