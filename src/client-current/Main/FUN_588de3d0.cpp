// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 482 bytes in 1 exact ranges.
// Source symbol alias: FUN_588de3d0.

// Ghidra body range 0x588DE3D0..0x588DE5B2; 482 mapped bytes.
extern "C" __declspec(naked) void FUN_588de3d0_segment_00() {
    __asm {
        // 0x588DE3D0: push ebx
        __asm _emit 0x53
        // 0x588DE3D1: push esi
        __asm _emit 0x56
        // 0x588DE3D2: push edi
        __asm _emit 0x57
        // 0x588DE3D3: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588DE3D5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588DE3D7: mov dword ptr [esi + 0x6090], 0x50000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588DE3E1: call 0x588d7bd0
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0x97
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DE3E6: lea edi, [esi + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE3EC: mov ebx, 0x20
        __asm _emit 0xBB
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE3F1: cmp dword ptr [edi], 0
        __asm _emit 0x83
        __asm _emit 0x3F
        __asm _emit 0x00
        // 0x588DE3F4: je 0x588de3ff
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588DE3F6: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588DE3F8: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588DE3FA: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x588DE3FD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588DE3FF: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588DE402: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588DE405: jne 0x588de3f1
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x588DE407: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DE40C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DE40E: je 0x588de423
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x588DE410: mov ecx, dword ptr [eax + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588DE416: mov dword ptr [esi + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x588DE419: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588DE41B: je 0x588de423
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588DE41D: push esi
        __asm _emit 0x56
        // 0x588DE41E: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x4B
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DE423: cmp dword ptr [esi + 0x6090], 0x40000
        __asm _emit 0x81
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588DE42D: mov dword ptr [esi + 0x608c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE437: jne 0x588de450
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x588DE439: mov ecx, dword ptr [esi + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE43F: mov eax, 0xffffff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588DE444: mov dword ptr [ecx + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x60
        // 0x588DE447: mov edx, dword ptr [esi + 0x12ec]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xEC
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE44D: mov dword ptr [edx + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x60
        // 0x588DE450: mov eax, dword ptr [esi + 0x12b8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE456: mov dword ptr [esi + 0x6074], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE460: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE465: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588DE469: mov eax, dword ptr [esi + 0x12bc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE46F: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588DE471: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588DE475: mov eax, dword ptr [esi + 0x12c0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE47B: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588DE47F: mov eax, dword ptr [esi + 0x12c4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE485: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588DE489: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588DE48B: cmp dword ptr [esi + 0x141c], edi
        __asm _emit 0x39
        __asm _emit 0xBE
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE491: jle 0x588de4b5
        __asm _emit 0x7E
        __asm _emit 0x22
        // 0x588DE493: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DE495: mov eax, dword ptr [esi + eax*4 + 0x17c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE49C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DE49E: je 0x588de4a9
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588DE4A0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588DE4A2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588DE4A4: call 0x587b0920
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x24
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588DE4A9: inc edi
        __asm _emit 0x47
        // 0x588DE4AA: movzx eax, di
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC7
        // 0x588DE4AD: cmp eax, dword ptr [esi + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE4B3: jl 0x588de495
        __asm _emit 0x7C
        __asm _emit 0xE0
        // 0x588DE4B5: mov ecx, dword ptr [esi + 0x6020]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE4BB: mov edi, 0xf
        __asm _emit 0xBF
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE4C0: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588DE4C2: je 0x588de4e5
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x588DE4C4: lea eax, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x588DE4C7: push eax
        __asm _emit 0x50
        // 0x588DE4C8: push eax
        __asm _emit 0x50
        // 0x588DE4C9: call 0x587561f0
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x7D
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588DE4CE: mov eax, dword ptr [esi + 0x6020]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE4D4: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x588DE4D8: mov ecx, dword ptr [esi + 0x6020]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE4DE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588DE4E0: call 0x587565f0
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x81
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588DE4E5: mov ecx, dword ptr [esi + 0x6024]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE4EB: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588DE4ED: je 0x588de510
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x588DE4EF: lea eax, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x588DE4F2: push eax
        __asm _emit 0x50
        // 0x588DE4F3: push eax
        __asm _emit 0x50
        // 0x588DE4F4: call 0x587561f0
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x7C
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588DE4F9: mov eax, dword ptr [esi + 0x6024]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE4FF: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x588DE503: mov ecx, dword ptr [esi + 0x6024]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE509: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588DE50B: call 0x587565f0
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0x80
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588DE510: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DE515: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DE517: je 0x588de594
        __asm _emit 0x74
        __asm _emit 0x7B
        // 0x588DE519: cmp dword ptr [eax + 4], esi
        __asm _emit 0x39
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x588DE51C: jne 0x588de594
        __asm _emit 0x75
        __asm _emit 0x76
        // 0x588DE51E: cmp dword ptr [esi + 0x6020], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x20
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE525: je 0x588de594
        __asm _emit 0x74
        __asm _emit 0x6D
        // 0x588DE527: cmp dword ptr [esi + 0x6024], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE52E: je 0x588de594
        __asm _emit 0x74
        __asm _emit 0x64
        // 0x588DE530: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588DE532: call 0x588da350
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0xBE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DE537: mov ecx, dword ptr [esi + 0x6020]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE53D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588DE53F: call 0x587565f0
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x80
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588DE544: mov ecx, dword ptr [esi + 0x6020]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE54A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588DE54C: call 0x58756670
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x81
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588DE551: mov ecx, dword ptr [esi + 0x6024]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE557: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588DE559: call 0x587565f0
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0x80
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588DE55E: mov ecx, dword ptr [esi + 0x6024]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE564: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x588DE566: call 0x58756670
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x81
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588DE56B: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DE570: mov ecx, dword ptr [eax + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DE576: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588DE578: call 0x587a6dc0
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x88
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588DE57D: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DE583: mov ecx, dword ptr [ecx + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DE589: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588DE58B: call 0x587a71a0
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x8C
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588DE590: pop edi
        __asm _emit 0x5F
        // 0x588DE591: pop esi
        __asm _emit 0x5E
        // 0x588DE592: pop ebx
        __asm _emit 0x5B
        // 0x588DE593: ret
        __asm _emit 0xC3
        // 0x588DE594: cmp dword ptr [esi + 0x1258], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x58
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE59B: je 0x588de5ae
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588DE59D: mov ecx, dword ptr [esi + 0x6020]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DE5A3: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588DE5A5: je 0x588de5ae
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588DE5A7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588DE5A9: call 0x58756670
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x80
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588DE5AE: pop edi
        __asm _emit 0x5F
        // 0x588DE5AF: pop esi
        __asm _emit 0x5E
        // 0x588DE5B0: pop ebx
        __asm _emit 0x5B
        // 0x588DE5B1: ret
        __asm _emit 0xC3
    }
}
