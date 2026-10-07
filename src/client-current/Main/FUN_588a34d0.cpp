// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588A34D0 .. +0x45A bytes.
// Source symbol alias: FUN_588a34d0.
extern "C" __declspec(naked) void FUN_588a34d0() {
    __asm {
        // 0x588A34D0: push ebx
        __asm _emit 0x53
        // 0x588A34D1: push esi
        __asm _emit 0x56
        // 0x588A34D2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588A34D4: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588A34D8: push edi
        __asm _emit 0x57
        // 0x588A34D9: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x588A34DB: je 0x588a3921
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A34E1: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x588A34E4: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588A34E8: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588A34EA: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588A34EC: je 0x588a3513
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x588A34EE: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x588A34F1: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588A34F3: je 0x588a350b
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588A34F5: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588A34F7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A34F9: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x588A34FC: push edi
        __asm _emit 0x57
        // 0x588A34FD: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588A34FF: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x588A3502: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x588A3505: je 0x588a3513
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588A3507: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588A3509: jne 0x588a34f5
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x588A350B: pop edi
        __asm _emit 0x5F
        // 0x588A350C: pop esi
        __asm _emit 0x5E
        // 0x588A350D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A350F: pop ebx
        __asm _emit 0x5B
        // 0x588A3510: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588A3513: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x588A3516: cmp eax, 0x201
        __asm _emit 0x3D
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A351B: ja 0x588a3861
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3521: je 0x588a3771
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x4A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3527: cmp eax, 0x100
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A352C: je 0x588a373d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x0B
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3532: cmp eax, 0x200
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3537: jne 0x588a3921
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A353D: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3542: cmp dword ptr [esi + 0x104], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3548: jne 0x588a35eb
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A354E: mov edx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3554: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A355A: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588A355D: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x588A3560: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588A3562: jge 0x588a358e
        __asm _emit 0x7D
        __asm _emit 0x2A
        // 0x588A3564: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A356A: push eax
        __asm _emit 0x50
        // 0x588A356B: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0xFD
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A3570: mov edx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3576: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588A3579: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A357F: push eax
        __asm _emit 0x50
        // 0x588A3580: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0xFD
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A3585: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588A3588: pop edi
        __asm _emit 0x5F
        // 0x588A3589: pop esi
        __asm _emit 0x5E
        // 0x588A358A: pop ebx
        __asm _emit 0x5B
        // 0x588A358B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588A358E: add eax, 0x5f
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x5F
        // 0x588A3591: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588A3593: jle 0x588a35c2
        __asm _emit 0x7E
        __asm _emit 0x2D
        // 0x588A3595: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A359B: push eax
        __asm _emit 0x50
        // 0x588A359C: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0xFD
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A35A1: mov ecx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A35A7: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588A35AA: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A35B0: add edx, 0x5f
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x5F
        // 0x588A35B3: push edx
        __asm _emit 0x52
        // 0x588A35B4: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0xFD
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A35B9: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588A35BC: pop edi
        __asm _emit 0x5F
        // 0x588A35BD: pop esi
        __asm _emit 0x5E
        // 0x588A35BE: pop ebx
        __asm _emit 0x5B
        // 0x588A35BF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588A35C2: push ecx
        __asm _emit 0x51
        // 0x588A35C3: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A35C9: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0xFD
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A35CE: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A35D3: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588A35D6: push ecx
        __asm _emit 0x51
        // 0x588A35D7: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A35DD: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0xFC
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A35E2: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588A35E5: pop edi
        __asm _emit 0x5F
        // 0x588A35E6: pop esi
        __asm _emit 0x5E
        // 0x588A35E7: pop ebx
        __asm _emit 0x5B
        // 0x588A35E8: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588A35EB: cmp dword ptr [esi + 0x108], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A35F1: jne 0x588a3694
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A35F7: mov edx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A35FD: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A3603: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588A3606: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x588A3609: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588A360B: jge 0x588a3637
        __asm _emit 0x7D
        __asm _emit 0x2A
        // 0x588A360D: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3613: push eax
        __asm _emit 0x50
        // 0x588A3614: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0xFC
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A3619: mov edx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A361F: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588A3622: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3628: push eax
        __asm _emit 0x50
        // 0x588A3629: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0xFC
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A362E: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588A3631: pop edi
        __asm _emit 0x5F
        // 0x588A3632: pop esi
        __asm _emit 0x5E
        // 0x588A3633: pop ebx
        __asm _emit 0x5B
        // 0x588A3634: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588A3637: add eax, 0x5f
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x5F
        // 0x588A363A: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588A363C: jle 0x588a366b
        __asm _emit 0x7E
        __asm _emit 0x2D
        // 0x588A363E: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3644: push eax
        __asm _emit 0x50
        // 0x588A3645: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0xFC
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A364A: mov ecx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3650: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588A3653: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3659: add edx, 0x5f
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x5F
        // 0x588A365C: push edx
        __asm _emit 0x52
        // 0x588A365D: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0xFC
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A3662: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588A3665: pop edi
        __asm _emit 0x5F
        // 0x588A3666: pop esi
        __asm _emit 0x5E
        // 0x588A3667: pop ebx
        __asm _emit 0x5B
        // 0x588A3668: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588A366B: push ecx
        __asm _emit 0x51
        // 0x588A366C: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3672: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0xFC
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A3677: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A367C: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588A367F: push ecx
        __asm _emit 0x51
        // 0x588A3680: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3686: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0xFC
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A368B: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588A368E: pop edi
        __asm _emit 0x5F
        // 0x588A368F: pop esi
        __asm _emit 0x5E
        // 0x588A3690: pop ebx
        __asm _emit 0x5B
        // 0x588A3691: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588A3694: cmp dword ptr [esi + 0x10c], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A369A: jne 0x588a3921
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A36A0: mov edx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A36A6: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A36AC: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588A36AF: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x588A36B2: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588A36B4: jge 0x588a36e0
        __asm _emit 0x7D
        __asm _emit 0x2A
        // 0x588A36B6: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A36BC: push eax
        __asm _emit 0x50
        // 0x588A36BD: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0xFC
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A36C2: mov edx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A36C8: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588A36CB: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A36D1: push eax
        __asm _emit 0x50
        // 0x588A36D2: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0xFC
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A36D7: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588A36DA: pop edi
        __asm _emit 0x5F
        // 0x588A36DB: pop esi
        __asm _emit 0x5E
        // 0x588A36DC: pop ebx
        __asm _emit 0x5B
        // 0x588A36DD: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588A36E0: add eax, 0x5f
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x5F
        // 0x588A36E3: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588A36E5: jle 0x588a3714
        __asm _emit 0x7E
        __asm _emit 0x2D
        // 0x588A36E7: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A36ED: push eax
        __asm _emit 0x50
        // 0x588A36EE: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0xFB
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A36F3: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A36F9: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588A36FC: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3702: add edx, 0x5f
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x5F
        // 0x588A3705: push edx
        __asm _emit 0x52
        // 0x588A3706: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0xFB
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A370B: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588A370E: pop edi
        __asm _emit 0x5F
        // 0x588A370F: pop esi
        __asm _emit 0x5E
        // 0x588A3710: pop ebx
        __asm _emit 0x5B
        // 0x588A3711: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588A3714: push ecx
        __asm _emit 0x51
        // 0x588A3715: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A371B: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0xFB
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A3720: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A3725: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588A3728: push ecx
        __asm _emit 0x51
        // 0x588A3729: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A372F: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0xFB
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A3734: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588A3737: pop edi
        __asm _emit 0x5F
        // 0x588A3738: pop esi
        __asm _emit 0x5E
        // 0x588A3739: pop ebx
        __asm _emit 0x5B
        // 0x588A373A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588A373D: cmp dword ptr [edi + 8], 0xe5
        __asm _emit 0x81
        __asm _emit 0x7F
        __asm _emit 0x08
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3744: jne 0x588a374d
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588A3746: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A3748: call 0x5889ecd0
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0xB5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A374D: mov eax, dword ptr [esi + 0x35c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3753: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x588A3756: je 0x588a3921
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A375C: mov edx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x08
        // 0x588A375F: push edx
        __asm _emit 0x52
        // 0x588A3760: push eax
        __asm _emit 0x50
        // 0x588A3761: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A3763: call 0x588a12b0
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0xDB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A3768: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588A376B: pop edi
        __asm _emit 0x5F
        // 0x588A376C: pop esi
        __asm _emit 0x5E
        // 0x588A376D: pop ebx
        __asm _emit 0x5B
        // 0x588A376E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588A3771: push ebp
        __asm _emit 0x55
        // 0x588A3772: mov ebp, dword ptr [0x5898c1a8]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588A3778: lea edi, [esi + 0x2e0]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xE0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A377E: mov ebx, 0x1f
        __asm _emit 0xBB
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3783: mov eax, dword ptr [edi - 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x84
        // 0x588A3786: mov dword ptr [eax + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A378D: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588A378F: mov eax, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x6C
        // 0x588A3792: push eax
        __asm _emit 0x50
        // 0x588A3793: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x588A3795: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588A3797: jne 0x588a37af
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x588A3799: mov edx, dword ptr [edi - 0x114]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0xEC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A379F: push edx
        __asm _emit 0x52
        // 0x588A37A0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A37A2: call 0x5889ed80
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xB5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A37A7: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588A37A9: push eax
        __asm _emit 0x50
        // 0x588A37AA: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0xE5
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588A37AF: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588A37B2: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588A37B5: jne 0x588a3783
        __asm _emit 0x75
        __asm _emit 0xCC
        // 0x588A37B7: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A37BD: mov edi, 5
        __asm _emit 0xBF
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A37C2: mov dword ptr [esi + 0x35c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A37CC: pop ebp
        __asm _emit 0x5D
        // 0x588A37CD: cmp dword ptr [eax + 0x50], edi
        __asm _emit 0x39
        __asm _emit 0x78
        __asm _emit 0x50
        // 0x588A37D0: jne 0x588a37f5
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x588A37D2: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A37D8: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588A37DB: push ecx
        __asm _emit 0x51
        // 0x588A37DC: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A37E2: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0xDD
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588A37E7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588A37E9: je 0x588a37f5
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588A37EB: mov dword ptr [esi + 0x104], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A37F5: mov edx, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A37FB: cmp dword ptr [edx + 0x50], edi
        __asm _emit 0x39
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x588A37FE: jne 0x588a3822
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x588A3800: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A3805: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A380B: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588A380E: push eax
        __asm _emit 0x50
        // 0x588A380F: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0xDD
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588A3814: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588A3816: je 0x588a3822
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588A3818: mov dword ptr [esi + 0x108], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3822: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3828: cmp dword ptr [ecx + 0x50], edi
        __asm _emit 0x39
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x588A382B: jne 0x588a3921
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3831: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A3837: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A383D: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x588A3840: push edx
        __asm _emit 0x52
        // 0x588A3841: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0xDC
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588A3846: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588A3848: je 0x588a3921
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A384E: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588A3851: pop edi
        __asm _emit 0x5F
        // 0x588A3852: mov dword ptr [esi + 0x10c], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A385C: pop esi
        __asm _emit 0x5E
        // 0x588A385D: pop ebx
        __asm _emit 0x5B
        // 0x588A385E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588A3861: cmp eax, 0x202
        __asm _emit 0x3D
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3866: jne 0x588a3921
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A386C: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3872: mov edi, 5
        __asm _emit 0xBF
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3877: cmp dword ptr [eax + 0x50], edi
        __asm _emit 0x39
        __asm _emit 0x78
        __asm _emit 0x50
        // 0x588A387A: jne 0x588a38a6
        __asm _emit 0x75
        __asm _emit 0x2A
        // 0x588A387C: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A3882: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588A3885: push ecx
        __asm _emit 0x51
        // 0x588A3886: mov ecx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A388C: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0xDC
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588A3891: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588A3893: jne 0x588a389e
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x588A3895: cmp dword ptr [esi + 0x104], 1
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588A389C: jne 0x588a38a6
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x588A389E: push ebx
        __asm _emit 0x53
        // 0x588A389F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A38A1: call 0x588a1040
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0xD7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A38A6: mov edx, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A38AC: cmp dword ptr [edx + 0x50], edi
        __asm _emit 0x39
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x588A38AF: jne 0x588a38da
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x588A38B1: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A38B6: mov ecx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A38BC: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588A38BF: push eax
        __asm _emit 0x50
        // 0x588A38C0: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0xDC
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588A38C5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588A38C7: jne 0x588a38d2
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x588A38C9: cmp dword ptr [esi + 0x108], 1
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588A38D0: jne 0x588a38da
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x588A38D2: push ebx
        __asm _emit 0x53
        // 0x588A38D3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A38D5: call 0x588a1110
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0xD8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A38DA: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A38E0: cmp dword ptr [ecx + 0x50], edi
        __asm _emit 0x39
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x588A38E3: jne 0x588a390f
        __asm _emit 0x75
        __asm _emit 0x2A
        // 0x588A38E5: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A38EB: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A38F1: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x588A38F4: push edx
        __asm _emit 0x52
        // 0x588A38F5: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xDC
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588A38FA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588A38FC: jne 0x588a3907
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x588A38FE: cmp dword ptr [esi + 0x10c], 1
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588A3905: jne 0x588a390f
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x588A3907: push ebx
        __asm _emit 0x53
        // 0x588A3908: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588A390A: call 0x588a11e0
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0xD8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A390F: mov dword ptr [esi + 0x104], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3915: mov dword ptr [esi + 0x108], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A391B: mov dword ptr [esi + 0x10c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3921: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588A3924: pop edi
        __asm _emit 0x5F
        // 0x588A3925: pop esi
        __asm _emit 0x5E
        // 0x588A3926: pop ebx
        __asm _emit 0x5B
        // 0x588A3927: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
