// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1735 bytes in 4 discontiguous ranges.
// Source symbol alias: FUN_587555c0.

// Ghidra body range 0x587555C0..0x587558DD; 797 mapped bytes.
extern "C" __declspec(naked) void FUN_587555c0_segment_00() {
    __asm {
        // 0x587555C0: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x587555C3: push ebx
        __asm _emit 0x53
        // 0x587555C4: push ebp
        __asm _emit 0x55
        // 0x587555C5: push esi
        __asm _emit 0x56
        // 0x587555C6: push edi
        __asm _emit 0x57
        // 0x587555C7: push 0x174
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587555CC: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587555CE: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x76
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587555D3: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587555D7: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587555D9: mov eax, dword ptr [edi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x587555DC: mov ebp, dword ptr [eax + ecx*4]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x88
        // 0x587555DF: mov edx, dword ptr [ebp + 2]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x02
        // 0x587555E2: movzx edi, word ptr [ebp + 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x7D
        __asm _emit 0x1C
        // 0x587555E6: sub edx, 0x36
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x36
        // 0x587555E9: push edx
        __asm _emit 0x52
        // 0x587555EA: shr edi, 3
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x03
        // 0x587555ED: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0xBF
        __asm _emit 0x21
        __asm _emit 0x00
        // 0x587555F2: mov ecx, dword ptr [ebp + 0x16]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x16
        // 0x587555F5: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587555F9: mov eax, dword ptr [ebp + 2]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x02
        // 0x587555FC: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587555FE: sub eax, 0x36
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x36
        // 0x58755601: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x58755603: movzx edx, word ptr [ebp + 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x55
        __asm _emit 0x1C
        // 0x58755607: lea ebx, [ecx - 1]
        __asm _emit 0x8D
        __asm _emit 0x59
        __asm _emit 0xFF
        // 0x5875560A: shr edx, 3
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x03
        // 0x5875560D: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58755610: mov dword ptr [esp + 0x10], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755618: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875561C: mov eax, dword ptr [ebp + 0x12]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x12
        // 0x5875561F: imul ebx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD8
        // 0x58755622: imul ebx, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xDA
        // 0x58755625: add ebx, dword ptr [esp + 0x14]
        __asm _emit 0x03
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58755629: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5875562B: jle 0x58755669
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x5875562D: lea ecx, [ebp + 0x36]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x36
        // 0x58755630: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x58755633: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58755637: push eax
        __asm _emit 0x50
        // 0x58755638: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875563C: push eax
        __asm _emit 0x50
        // 0x5875563D: push ebx
        __asm _emit 0x53
        // 0x5875563E: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x77
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58755643: movzx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x45
        __asm _emit 0x1C
        // 0x58755647: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875564B: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5875564F: add dword ptr [esp + 0x24], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58755653: shr eax, 3
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x03
        // 0x58755656: imul eax, dword ptr [ebp + 0x12]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x45
        __asm _emit 0x12
        // 0x5875565A: inc ecx
        __asm _emit 0x41
        // 0x5875565B: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5875565E: sub ebx, eax
        __asm _emit 0x2B
        __asm _emit 0xD8
        // 0x58755660: cmp ecx, dword ptr [ebp + 0x16]
        __asm _emit 0x3B
        __asm _emit 0x4D
        __asm _emit 0x16
        // 0x58755663: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58755667: jl 0x58755637
        __asm _emit 0x7C
        __asm _emit 0xCE
        // 0x58755669: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5875566D: push eax
        __asm _emit 0x50
        // 0x5875566E: push 0x5898d6b4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58755673: push esi
        __asm _emit 0x56
        // 0x58755674: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875567A: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5875567E: push ecx
        __asm _emit 0x51
        // 0x5875567F: lea edx, [esi + 0x104]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755685: push 0x5898d6b4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875568A: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5875568C: push edx
        __asm _emit 0x52
        // 0x5875568D: mov dword ptr [esi + 0x100], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755693: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58755699: mov byte ptr [esi + 0x12c], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875569F: mov byte ptr [esi + 0x12d], 3
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x2D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x587556A6: mov dword ptr [esi + 0x130], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587556AC: mov eax, dword ptr [ebp + 0x12]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x12
        // 0x587556AF: mov dword ptr [esi + 0x134], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587556B5: mov ecx, dword ptr [ebp + 0x16]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x16
        // 0x587556B8: mov dword ptr [esi + 0x138], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587556BE: mov dword ptr [esi + 0x13c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587556C4: mov edx, dword ptr [ebp + 0x12]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x12
        // 0x587556C7: mov dword ptr [esi + 0x144], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587556CD: mov dword ptr [esi + 0x140], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587556D3: mov eax, dword ptr [ebp + 0x16]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x16
        // 0x587556D6: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x587556D9: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587556DB: mov dword ptr [esi + 0x148], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587556E1: mov dword ptr [esi + 0x14c], 0x100
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587556EB: mov dword ptr [esi + 0x150], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587556F1: mov dword ptr [esi + 0x154], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587556F7: mov dword ptr [esi + 0x158], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587556FD: mov dword ptr [esi + 0x15c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755703: mov dword ptr [esi + 0x160], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755709: mov dword ptr [esi + 0x164], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875570F: mov dword ptr [esi + 0x168], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755715: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58755719: jle 0x587557e2
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875571F: mov eax, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755725: imul eax, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC7
        // 0x58755728: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5875572C: mov dword ptr [esp + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58755730: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58755732: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58755734: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58755738: jle 0x587557be
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875573E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58755740: xor cl, cl
        __asm _emit 0x32
        __asm _emit 0xC9
        // 0x58755742: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58755744: jle 0x5875575e
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x58755746: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875574A: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875574E: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58755750: add eax, dword ptr [esp + 0x14]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58755754: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x58755756: or cl, byte ptr [eax]
        __asm _emit 0x0A
        __asm _emit 0x08
        // 0x58755758: inc eax
        __asm _emit 0x40
        // 0x58755759: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5875575C: jne 0x58755756
        __asm _emit 0x75
        __asm _emit 0xF8
        // 0x5875575E: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58755760: jne 0x58755773
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x58755762: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58755764: jne 0x5875577c
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x58755766: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875576B: mov byte ptr [esi + 0x12c], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755771: jmp 0x587557a3
        __asm _emit 0xEB
        __asm _emit 0x30
        // 0x58755773: cmp ebx, 1
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x01
        // 0x58755776: jne 0x58755783
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x58755778: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5875577A: je 0x587557a3
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x5875577C: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755781: jmp 0x587557a3
        __asm _emit 0xEB
        __asm _emit 0x20
        // 0x58755783: cmp ebx, 2
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x02
        // 0x58755786: jne 0x5875579a
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x58755788: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5875578A: jne 0x587557a3
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x5875578C: mov byte ptr [esi + 0x12c], 1
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58755793: mov ebx, 3
        __asm _emit 0xBB
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755798: jmp 0x587557a3
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x5875579A: cmp ebx, 3
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x03
        // 0x5875579D: jne 0x587557a3
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x5875579F: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587557A1: jne 0x587557d9
        __asm _emit 0x75
        __asm _emit 0x36
        // 0x587557A3: mov ecx, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587557A9: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587557AD: imul ecx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCF
        // 0x587557B0: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x587557B2: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587557B4: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587557B8: jl 0x58755740
        __asm _emit 0x7C
        __asm _emit 0x86
        // 0x587557BA: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587557BE: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587557C2: add dword ptr [esp + 0x1c], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587557C6: inc ecx
        __asm _emit 0x41
        // 0x587557C7: cmp ecx, dword ptr [esi + 0x138]
        __asm _emit 0x3B
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587557CD: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587557D1: jl 0x58755730
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x59
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587557D7: jmp 0x587557e0
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x587557D9: mov byte ptr [esi + 0x12c], 2
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x587557E0: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587557E2: mov al, byte ptr [esi + 0x12c]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587557E8: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x587557EA: jne 0x587559f3
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587557F0: mov eax, dword ptr [ebp + 0x16]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x16
        // 0x587557F3: imul eax, dword ptr [ebp + 0x12]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x45
        __asm _emit 0x12
        // 0x587557F7: lea edx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x40
        // 0x587557FA: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x587557FC: push edx
        __asm _emit 0x52
        // 0x587557FD: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0xBD
        __asm _emit 0x21
        __asm _emit 0x00
        // 0x58755802: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58755805: cmp dword ptr [esi + 0x138], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875580B: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875580F: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58755813: jle 0x587559d4
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755819: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755820: mov eax, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755826: imul eax, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC7
        // 0x58755829: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5875582B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5875582D: jle 0x587559a7
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755833: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58755835: xor cl, cl
        __asm _emit 0x32
        __asm _emit 0xC9
        // 0x58755837: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x58755839: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875583D: jle 0x5875585d
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x5875583F: mov eax, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755845: imul eax, dword ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875584A: imul eax, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC7
        // 0x5875584D: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x5875584F: add eax, dword ptr [esp + 0x14]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58755853: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x58755855: or cl, byte ptr [eax]
        __asm _emit 0x0A
        __asm _emit 0x08
        // 0x58755857: inc eax
        __asm _emit 0x40
        // 0x58755858: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5875585B: jne 0x58755855
        __asm _emit 0x75
        __asm _emit 0xF8
        // 0x5875585D: mov eax, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755863: imul eax, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC7
        // 0x58755866: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x58755868: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5875586C: jge 0x587558a9
        __asm _emit 0x7D
        __asm _emit 0x3B
        // 0x5875586E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58755870: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58755872: jne 0x587558a9
        __asm _emit 0x75
        __asm _emit 0x35
        // 0x58755874: inc dword ptr [esp + 0x1c]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58755878: add ebx, edi
        __asm _emit 0x03
        __asm _emit 0xDF
        // 0x5875587A: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5875587C: jle 0x5875589c
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x5875587E: mov eax, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755884: imul eax, dword ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58755889: imul eax, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC7
        // 0x5875588C: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x5875588E: add eax, dword ptr [esp + 0x14]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58755892: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x58755894: or cl, byte ptr [eax]
        __asm _emit 0x0A
        __asm _emit 0x08
        // 0x58755896: inc eax
        __asm _emit 0x40
        // 0x58755897: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5875589A: jne 0x58755894
        __asm _emit 0x75
        __asm _emit 0xF8
        // 0x5875589C: mov edx, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587558A2: imul edx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD7
        // 0x587558A5: cmp ebx, edx
        __asm _emit 0x3B
        __asm _emit 0xDA
        // 0x587558A7: jl 0x58755870
        __asm _emit 0x7C
        __asm _emit 0xC7
        // 0x587558A9: xor cl, cl
        __asm _emit 0x32
        __asm _emit 0xC9
        // 0x587558AB: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587558AD: jle 0x587558cd
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x587558AF: mov eax, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587558B5: imul eax, dword ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587558BA: imul eax, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC7
        // 0x587558BD: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x587558BF: add eax, dword ptr [esp + 0x14]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587558C3: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x587558C5: or cl, byte ptr [eax]
        __asm _emit 0x0A
        __asm _emit 0x08
        // 0x587558C7: inc eax
        __asm _emit 0x40
        // 0x587558C8: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x587558CB: jne 0x587558c5
        __asm _emit 0x75
        __asm _emit 0xF8
        // 0x587558CD: cmp ebx, dword ptr [esp + 0x24]
        __asm _emit 0x3B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587558D1: jge 0x587559a7
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587558D7: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587558DB: jmp 0x587558e0
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x587558E0..0x58755BEE; 782 mapped bytes.
extern "C" __declspec(naked) void FUN_587555c0_segment_01() {
    __asm {
        // 0x587558E0: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587558E2: je 0x5875591e
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x587558E4: add dword ptr [esp + 0x24], edi
        __asm _emit 0x01
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587558E8: inc ebp
        __asm _emit 0x45
        // 0x587558E9: xor cl, cl
        __asm _emit 0x32
        __asm _emit 0xC9
        // 0x587558EB: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587558ED: jle 0x5875590f
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x587558EF: mov eax, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587558F5: imul eax, dword ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587558FA: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x587558FC: imul eax, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC7
        // 0x587558FF: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x58755901: add eax, dword ptr [esp + 0x14]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58755905: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x58755907: or cl, byte ptr [eax]
        __asm _emit 0x0A
        __asm _emit 0x08
        // 0x58755909: inc eax
        __asm _emit 0x40
        // 0x5875590A: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5875590D: jne 0x58755907
        __asm _emit 0x75
        __asm _emit 0xF8
        // 0x5875590F: mov eax, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755915: imul eax, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC7
        // 0x58755918: cmp dword ptr [esp + 0x24], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5875591C: jl 0x587558e0
        __asm _emit 0x7C
        __asm _emit 0xC2
        // 0x5875591E: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58755920: je 0x587559a7
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755926: mov ecx, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875592C: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58755930: mov dx, word ptr [esp + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58755935: mov word ptr [eax + ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x08
        // 0x58755939: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875593E: add dword ptr [esi + 0x130], edx
        __asm _emit 0x01
        __asm _emit 0x96
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755944: mov ecx, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875594A: mov byte ptr [ecx + eax], 0
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5875594E: inc dword ptr [esi + 0x130]
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755954: mov ecx, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875595A: mov word ptr [ecx + eax], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x2C
        __asm _emit 0x01
        // 0x5875595E: imul ebp, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xEF
        // 0x58755961: add dword ptr [esi + 0x130], edx
        __asm _emit 0x01
        __asm _emit 0x96
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755967: mov edx, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875596D: imul edx, dword ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58755972: mov ecx, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755978: imul edx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD7
        // 0x5875597B: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xD3
        // 0x5875597D: add edx, dword ptr [esp + 0x14]
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58755981: push ebp
        __asm _emit 0x55
        // 0x58755982: push edx
        __asm _emit 0x52
        // 0x58755983: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x58755985: push ecx
        __asm _emit 0x51
        // 0x58755986: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x73
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875598B: add dword ptr [esi + 0x130], ebp
        __asm _emit 0x01
        __asm _emit 0xAE
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755991: mov eax, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755997: imul eax, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC7
        // 0x5875599A: add ebx, ebp
        __asm _emit 0x03
        __asm _emit 0xDD
        // 0x5875599C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5875599F: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x587559A1: jl 0x58755833
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x8C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587559A7: mov ecx, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587559AD: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587559B1: or edx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0xFF
        // 0x587559B4: mov word ptr [eax + ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x08
        // 0x587559B8: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587559BC: add dword ptr [esi + 0x130], 2
        __asm _emit 0x83
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x587559C3: inc eax
        __asm _emit 0x40
        // 0x587559C4: cmp eax, dword ptr [esi + 0x138]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587559CA: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587559CE: jl 0x58755820
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x4C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587559D4: add dword ptr [esi + 0x130], -2
        __asm _emit 0x83
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFE
        // 0x587559DB: mov eax, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587559E1: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587559E5: mov ecx, 0xfffffffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587559EA: mov word ptr [eax + edi], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0C
        __asm _emit 0x38
        // 0x587559EE: jmp 0x58755bc1
        __asm _emit 0xE9
        __asm _emit 0xCE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587559F3: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x587559F5: jne 0x58755bf5
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587559FB: mov eax, dword ptr [ebp + 0x16]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x16
        // 0x587559FE: imul eax, dword ptr [ebp + 0x12]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x45
        __asm _emit 0x12
        // 0x58755A02: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x58755A05: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x58755A07: push eax
        __asm _emit 0x50
        // 0x58755A08: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0xBB
        __asm _emit 0x21
        __asm _emit 0x00
        // 0x58755A0D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58755A10: cmp dword ptr [esi + 0x138], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755A16: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58755A1A: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58755A1E: jle 0x58755bae
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x8A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755A24: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58755A26: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58755A28: xor cl, cl
        __asm _emit 0x32
        __asm _emit 0xC9
        // 0x58755A2A: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x58755A2C: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58755A30: jle 0x58755a4e
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x58755A32: mov eax, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755A38: imul eax, dword ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58755A3D: imul eax, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC7
        // 0x58755A40: add eax, dword ptr [esp + 0x14]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58755A44: mov ebx, edi
        __asm _emit 0x8B
        __asm _emit 0xDF
        // 0x58755A46: or cl, byte ptr [eax]
        __asm _emit 0x0A
        __asm _emit 0x08
        // 0x58755A48: inc eax
        __asm _emit 0x40
        // 0x58755A49: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x58755A4C: jne 0x58755a46
        __asm _emit 0x75
        __asm _emit 0xF8
        // 0x58755A4E: mov eax, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755A54: imul eax, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC7
        // 0x58755A57: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58755A5B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58755A5D: jle 0x58755a99
        __asm _emit 0x7E
        __asm _emit 0x3A
        // 0x58755A5F: nop
        __asm _emit 0x90
        // 0x58755A60: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58755A62: jne 0x58755a99
        __asm _emit 0x75
        __asm _emit 0x35
        // 0x58755A64: inc dword ptr [esp + 0x1c]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58755A68: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xD7
        // 0x58755A6A: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58755A6C: jle 0x58755a8c
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x58755A6E: mov eax, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755A74: imul eax, dword ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58755A79: imul eax, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC7
        // 0x58755A7C: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58755A7E: add eax, dword ptr [esp + 0x14]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58755A82: mov ebx, edi
        __asm _emit 0x8B
        __asm _emit 0xDF
        // 0x58755A84: or cl, byte ptr [eax]
        __asm _emit 0x0A
        __asm _emit 0x08
        // 0x58755A86: inc eax
        __asm _emit 0x40
        // 0x58755A87: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x58755A8A: jne 0x58755a84
        __asm _emit 0x75
        __asm _emit 0xF8
        // 0x58755A8C: mov eax, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755A92: imul eax, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC7
        // 0x58755A95: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x58755A97: jl 0x58755a60
        __asm _emit 0x7C
        __asm _emit 0xC7
        // 0x58755A99: xor cl, cl
        __asm _emit 0x32
        __asm _emit 0xC9
        // 0x58755A9B: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58755A9D: jle 0x58755abd
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x58755A9F: mov eax, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755AA5: imul eax, dword ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58755AAA: imul eax, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC7
        // 0x58755AAD: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58755AAF: add eax, dword ptr [esp + 0x14]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58755AB3: mov ebx, edi
        __asm _emit 0x8B
        __asm _emit 0xDF
        // 0x58755AB5: or cl, byte ptr [eax]
        __asm _emit 0x0A
        __asm _emit 0x08
        // 0x58755AB7: inc eax
        __asm _emit 0x40
        // 0x58755AB8: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x58755ABB: jne 0x58755ab5
        __asm _emit 0x75
        __asm _emit 0xF8
        // 0x58755ABD: cmp edx, dword ptr [esp + 0x24]
        __asm _emit 0x3B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58755AC1: jge 0x58755b0b
        __asm _emit 0x7D
        __asm _emit 0x48
        // 0x58755AC3: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58755AC7: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58755AC9: je 0x58755b07
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x58755ACB: add dword ptr [esp + 0x24], edi
        __asm _emit 0x01
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58755ACF: inc ebp
        __asm _emit 0x45
        // 0x58755AD0: xor cl, cl
        __asm _emit 0x32
        __asm _emit 0xC9
        // 0x58755AD2: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58755AD4: jle 0x58755af8
        __asm _emit 0x7E
        __asm _emit 0x22
        // 0x58755AD6: mov eax, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755ADC: imul eax, dword ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58755AE1: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x58755AE3: imul eax, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC7
        // 0x58755AE6: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58755AE8: add eax, dword ptr [esp + 0x14]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58755AEC: mov ebx, edi
        __asm _emit 0x8B
        __asm _emit 0xDF
        // 0x58755AEE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58755AF0: or cl, byte ptr [eax]
        __asm _emit 0x0A
        __asm _emit 0x08
        // 0x58755AF2: inc eax
        __asm _emit 0x40
        // 0x58755AF3: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x58755AF6: jne 0x58755af0
        __asm _emit 0x75
        __asm _emit 0xF8
        // 0x58755AF8: mov eax, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755AFE: imul eax, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC7
        // 0x58755B01: cmp dword ptr [esp + 0x24], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58755B05: jl 0x58755ac7
        __asm _emit 0x7C
        __asm _emit 0xC0
        // 0x58755B07: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58755B09: jne 0x58755b25
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58755B0B: mov ecx, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755B11: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58755B15: or edx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0xFF
        // 0x58755B18: mov word ptr [eax + ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x08
        // 0x58755B1C: add dword ptr [esi + 0x130], 2
        __asm _emit 0x83
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x58755B23: jmp 0x58755b99
        __asm _emit 0xEB
        __asm _emit 0x74
        // 0x58755B25: mov ecx, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755B2B: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58755B2F: mov ax, word ptr [esp + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58755B34: mov word ptr [ebx + ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x0B
        // 0x58755B38: mov ecx, 2
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755B3D: add dword ptr [esi + 0x130], ecx
        __asm _emit 0x01
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755B43: mov eax, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755B49: mov byte ptr [eax + ebx], 0
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x58755B4D: inc dword ptr [esi + 0x130]
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755B53: mov eax, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755B59: mov word ptr [eax + ebx], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x2C
        __asm _emit 0x18
        // 0x58755B5D: add dword ptr [esi + 0x130], ecx
        __asm _emit 0x01
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755B63: mov ecx, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755B69: imul ecx, dword ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58755B6E: mov eax, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755B74: imul ecx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCF
        // 0x58755B77: mov ebx, ebp
        __asm _emit 0x8B
        __asm _emit 0xDD
        // 0x58755B79: imul ebx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xDF
        // 0x58755B7C: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58755B7E: add ecx, dword ptr [esp + 0x14]
        __asm _emit 0x03
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58755B82: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58755B86: push ebx
        __asm _emit 0x53
        // 0x58755B87: push ecx
        __asm _emit 0x51
        // 0x58755B88: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58755B8A: push eax
        __asm _emit 0x50
        // 0x58755B8B: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0x71
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58755B90: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58755B93: add dword ptr [esi + 0x130], ebx
        __asm _emit 0x01
        __asm _emit 0x9E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755B99: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58755B9D: inc eax
        __asm _emit 0x40
        // 0x58755B9E: cmp eax, dword ptr [esi + 0x138]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755BA4: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58755BA8: jl 0x58755a24
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x76
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58755BAE: mov eax, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755BB4: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58755BB8: mov ecx, 0xfffffffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58755BBD: mov word ptr [edi + eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0C
        __asm _emit 0x07
        // 0x58755BC1: add dword ptr [esi + 0x130], 2
        __asm _emit 0x83
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x58755BC8: mov eax, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755BCE: push eax
        __asm _emit 0x50
        // 0x58755BCF: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0xB9
        __asm _emit 0x21
        __asm _emit 0x00
        // 0x58755BD4: mov edx, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755BDA: push edx
        __asm _emit 0x52
        // 0x58755BDB: push edi
        __asm _emit 0x57
        // 0x58755BDC: push eax
        __asm _emit 0x50
        // 0x58755BDD: mov dword ptr [esi + 0x170], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755BE3: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0x71
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58755BE8: push edi
        __asm _emit 0x57
        // 0x58755BE9: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0x70
        __asm _emit 0x22
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58755BF5..0x58755C5C; 103 mapped bytes.
extern "C" __declspec(naked) void FUN_587555c0_segment_02() {
    __asm {
        // 0x58755BF5: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58755BF7: jne 0x58755c4c
        __asm _emit 0x75
        __asm _emit 0x53
        // 0x58755BF9: mov eax, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755BFF: imul eax, dword ptr [esi + 0x138]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755C06: imul eax, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC7
        // 0x58755C09: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x58755C0C: push eax
        __asm _emit 0x50
        // 0x58755C0D: mov dword ptr [esi + 0x130], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755C13: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0xB9
        __asm _emit 0x21
        __asm _emit 0x00
        // 0x58755C18: mov ecx, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755C1E: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58755C22: sub ecx, 2
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x58755C25: push ecx
        __asm _emit 0x51
        // 0x58755C26: push edx
        __asm _emit 0x52
        // 0x58755C27: push eax
        __asm _emit 0x50
        // 0x58755C28: mov dword ptr [esi + 0x170], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755C2E: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x71
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58755C33: mov eax, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755C39: mov ecx, dword ptr [esi + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755C3F: mov edx, 0xfffffffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58755C44: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58755C47: mov word ptr [eax + ecx - 2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0xFE
        // 0x58755C4C: cmp dword ptr [esp + 0x14], ebx
        __asm _emit 0x39
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58755C50: je 0x58755c5f
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58755C52: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58755C56: push eax
        __asm _emit 0x50
        // 0x58755C57: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x6F
        __asm _emit 0x22
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58755C5F..0x58755C94; 53 mapped bytes.
extern "C" __declspec(naked) void FUN_587555c0_segment_03() {
    __asm {
        // 0x58755C5F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58755C61: cmp dword ptr [esi + 0x130], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755C67: mov dword ptr [esi + 0x16c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755C6D: jle 0x58755c88
        __asm _emit 0x7E
        __asm _emit 0x19
        // 0x58755C6F: mov ecx, dword ptr [esi + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755C75: movsx edx, byte ptr [ecx + eax]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x58755C79: add dword ptr [esi + 0x16c], edx
        __asm _emit 0x01
        __asm _emit 0x96
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755C7F: inc eax
        __asm _emit 0x40
        // 0x58755C80: cmp eax, dword ptr [esi + 0x130]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755C86: jl 0x58755c75
        __asm _emit 0x7C
        __asm _emit 0xED
        // 0x58755C88: pop edi
        __asm _emit 0x5F
        // 0x58755C89: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58755C8B: pop esi
        __asm _emit 0x5E
        // 0x58755C8C: pop ebp
        __asm _emit 0x5D
        // 0x58755C8D: pop ebx
        __asm _emit 0x5B
        // 0x58755C8E: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58755C91: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
