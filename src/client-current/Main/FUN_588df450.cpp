// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588DF450 .. +0x253 bytes.
// Source symbol alias: FUN_588df450.
extern "C" __declspec(naked) void FUN_588df450() {
    __asm {
        // 0x588DF450: push esi
        __asm _emit 0x56
        // 0x588DF451: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588DF453: mov dword ptr [esi + 0x80], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF45D: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DF462: cmp dword ptr [eax + 0x218c8], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xC8
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF469: push edi
        __asm _emit 0x57
        // 0x588DF46A: jne 0x588df475
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x588DF46C: cmp dword ptr [eax + 0x218c4], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xC4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF473: je 0x588df4e0
        __asm _emit 0x74
        __asm _emit 0x6B
        // 0x588DF475: cmp dword ptr [esi + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF47C: je 0x588df496
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x588DF47E: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF484: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x588DF486: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DF48C: push eax
        __asm _emit 0x50
        // 0x588DF48D: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x588DF48F: call 0x587bb160
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0xBC
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588DF494: jmp 0x588df4ab
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x588DF496: movzx ecx, word ptr [esi + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF49D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588DF49F: push ecx
        __asm _emit 0x51
        // 0x588DF4A0: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DF4A6: call 0x587baf70
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0xBA
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588DF4AB: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DF4B1: cmp dword ptr [edx + 0x218c4], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0xC4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF4B8: je 0x588df4e0
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x588DF4BA: cmp dword ptr [esi + 0x63b8], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xB8
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF4C1: je 0x588df4e0
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x588DF4C3: push ebx
        __asm _emit 0x53
        // 0x588DF4C4: lea edi, [esi + 0x63c8]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xC8
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF4CA: mov ebx, 8
        __asm _emit 0xBB
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF4CF: nop
        __asm _emit 0x90
        // 0x588DF4D0: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588DF4D2: call 0x58782790
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x32
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588DF4D7: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588DF4DA: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588DF4DD: jne 0x588df4d0
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x588DF4DF: pop ebx
        __asm _emit 0x5B
        // 0x588DF4E0: mov edi, dword ptr [esi + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF4E6: push edi
        __asm _emit 0x57
        // 0x588DF4E7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588DF4E9: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DF4EE: push edi
        __asm _emit 0x57
        // 0x588DF4EF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588DF4F1: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0x3A
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DF4F6: mov edi, dword ptr [esi + 0x12ec]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xEC
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF4FC: push edi
        __asm _emit 0x57
        // 0x588DF4FD: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588DF4FF: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DF504: push edi
        __asm _emit 0x57
        // 0x588DF505: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588DF507: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x3A
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DF50C: mov edi, dword ptr [esi + 0x1448]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x48
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF512: push edi
        __asm _emit 0x57
        // 0x588DF513: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588DF515: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DF51A: push edi
        __asm _emit 0x57
        // 0x588DF51B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588DF51D: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x3A
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DF522: mov eax, dword ptr [esi + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF528: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF52D: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588DF531: mov eax, dword ptr [esi + 0x12ec]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF537: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588DF539: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588DF53D: mov eax, dword ptr [esi + 0x12e0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF543: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588DF547: mov eax, dword ptr [esi + 0x12e4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF54D: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588DF551: mov eax, dword ptr [esi + 0x12a8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF557: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588DF55B: mov eax, dword ptr [esi + 0x12ac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF561: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588DF565: mov eax, dword ptr [esi + 0x12b0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF56B: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588DF56F: mov eax, dword ptr [esi + 0x12b4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF575: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588DF579: mov eax, dword ptr [esi + 0x12d8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF57F: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588DF583: mov eax, dword ptr [esi + 0x12dc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF589: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588DF58D: lea eax, [esi + 0x652c]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF593: mov edx, 6
        __asm _emit 0xBA
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF598: jmp 0x588df5a0
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x588DF59A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF5A0: mov ecx, dword ptr [eax - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0xE8
        // 0x588DF5A3: mov edi, 0xfffe
        __asm _emit 0xBF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF5A8: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x588DF5AC: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x588DF5AE: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x588DF5B2: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588DF5B5: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x588DF5B8: jne 0x588df5a0
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x588DF5BA: mov eax, dword ptr [esi + 0x12fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF5C0: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588DF5C2: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588DF5C6: mov eax, dword ptr [esi + 0x1448]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF5CC: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF5D1: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588DF5D5: mov eax, dword ptr [esi + 0x6020]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF5DB: mov eax, dword ptr [eax + 0x3b4]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xB4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF5E1: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588DF5E5: mov edx, dword ptr [esi + 0x6024]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF5EB: mov eax, dword ptr [edx + 0x3b4]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xB4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF5F1: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588DF5F5: mov eax, 0xaaaaaaaa
        __asm _emit 0xB8
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588DF5FA: mov dword ptr [esi + 0x6078], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF600: mov dword ptr [esi + 0x6080], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF606: mov dword ptr [esi + 0x6084], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF60C: mov eax, dword ptr [esi + 0x6100]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF612: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588DF614: mov dword ptr [esi + 0x607c], 0xaaaaaaab
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588DF61E: mov dword ptr [esi + 0x60c4], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF628: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588DF62C: mov eax, dword ptr [esi + 0x6104]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF632: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588DF636: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588DF638: call 0x588de5c0
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DF63D: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DF643: cmp dword ptr [edx + 0x218e0], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0xE0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF64A: je 0x588df671
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x588DF64C: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DF651: cmp dword ptr [eax + 4], esi
        __asm _emit 0x39
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x588DF654: jne 0x588df671
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x588DF656: mov eax, dword ptr [esi + 0x6020]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF65C: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF661: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588DF665: mov eax, dword ptr [esi + 0x6024]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF66B: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588DF66D: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588DF671: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DF677: push esi
        __asm _emit 0x56
        // 0x588DF678: call 0x587eb340
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0xBC
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588DF67D: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DF682: test byte ptr [eax + 0x105a8], 1
        __asm _emit 0xF6
        __asm _emit 0x80
        __asm _emit 0xA8
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588DF689: je 0x588df6a0
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588DF68B: cmp dword ptr [esi + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DF692: jne 0x588df6a0
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x588DF694: mov ecx, dword ptr [eax + 0x21c48]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DF69A: push esi
        __asm _emit 0x56
        // 0x588DF69B: call 0x58776f20
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588DF6A0: pop edi
        __asm _emit 0x5F
        // 0x588DF6A1: pop esi
        __asm _emit 0x5E
        // 0x588DF6A2: ret
        __asm _emit 0xC3
    }
}
