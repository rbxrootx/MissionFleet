// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 744 bytes in 3 exact ranges.
// Source symbol alias: FUN_58746720.

// Ghidra body range 0x58746720..0x587469D1; 689 mapped bytes.
extern "C" __declspec(naked) void FUN_58746720_segment_00() {
    __asm {
        // 0x58746720: push ebp
        __asm _emit 0x55
        // 0x58746721: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58746723: and esp, 0xffffffc0
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xC0
        // 0x58746726: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58746728: push 0x5897e1d8
        __asm _emit 0x68
        __asm _emit 0xD8
        __asm _emit 0xE1
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5874672D: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746733: push eax
        __asm _emit 0x50
        // 0x58746734: sub esp, 0xa4
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874673A: push ebx
        __asm _emit 0x53
        // 0x5874673B: push ebp
        __asm _emit 0x55
        // 0x5874673C: push esi
        __asm _emit 0x56
        // 0x5874673D: push edi
        __asm _emit 0x57
        // 0x5874673E: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58746743: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58746745: push eax
        __asm _emit 0x50
        // 0x58746746: lea eax, [esp + 0xb8]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874674D: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746753: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58746755: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58746757: mov eax, dword ptr [eax + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874675D: movzx eax, word ptr [eax + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x58746761: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x58746764: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x58746767: je 0x58746772
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58746769: cmp eax, 7
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x5874676C: jne 0x587469f5
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746772: mov eax, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x58746775: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58746777: jne 0x587469f5
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874677D: mov byte ptr [esp + 0x4f], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4F
        // 0x58746781: call 0x58748be0
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746786: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x58746789: push eax
        __asm _emit 0x50
        // 0x5874678A: lea ecx, [esp + 0x70]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x5874678E: call 0x58744340
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0xDB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58746793: mov esi, dword ptr [esp + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x78
        // 0x58746797: mov eax, dword ptr [esp + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x5874679B: mov dword ptr [esp + 0xc0], 0
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587467A6: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x587467A8: jbe 0x587467b3
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x587467AA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x64
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587467AF: mov eax, dword ptr [esp + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x587467B3: mov edi, dword ptr [esp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x587467B7: mov dword ptr [esp + 0x64], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x587467BB: mov ebp, esi
        __asm _emit 0x8B
        __asm _emit 0xEE
        // 0x587467BD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587467C0: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587467C2: cmp dword ptr [esp + 0x78], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x78
        // 0x587467C6: jbe 0x587467cd
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587467C8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x64
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587467CD: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587467CF: je 0x587467d7
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587467D1: cmp edi, dword ptr [esp + 0x6c]
        __asm _emit 0x3B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x587467D5: je 0x587467dc
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587467D7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x64
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587467DC: cmp ebp, esi
        __asm _emit 0x3B
        __asm _emit 0xEE
        // 0x587467DE: je 0x58746889
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587467E4: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587467E6: jne 0x5874682a
        __asm _emit 0x75
        __asm _emit 0x42
        // 0x587467E8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587467ED: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587467EF: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x587467F2: jb 0x587467f9
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587467F4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x64
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587467F9: mov edi, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x00
        // 0x587467FC: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587467FE: call 0x58743080
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0xC8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58746803: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58746805: add esi, 0xf8
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874680B: je 0x5874685c
        __asm _emit 0x74
        __asm _emit 0x4F
        // 0x5874680D: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5874680F: call 0x58743080
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xC8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58746814: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58746816: jne 0x5874685c
        __asm _emit 0x75
        __asm _emit 0x44
        // 0x58746818: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5874681A: call 0x58743160
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0xC9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874681F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58746821: jle 0x5874682e
        __asm _emit 0x7E
        __asm _emit 0x0B
        // 0x58746823: mov byte ptr [esp + 0x4f], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4F
        __asm _emit 0x01
        // 0x58746828: jmp 0x5874685c
        __asm _emit 0xEB
        __asm _emit 0x32
        // 0x5874682A: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5874682C: jmp 0x587467ef
        __asm _emit 0xEB
        __asm _emit 0xC1
        // 0x5874682E: fld qword ptr [0x5898ceb8]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0xB8
        __asm _emit 0xCE
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58746834: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x58746836: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58746839: fstp qword ptr [esp]
        __asm _emit 0xDD
        __asm _emit 0x1C
        __asm _emit 0x24
        // 0x5874683C: push ecx
        __asm _emit 0x51
        // 0x5874683D: call 0x58747d70
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746842: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58746845: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58746847: je 0x5874685c
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58746849: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5874684C: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x5874684F: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x58746851: push eax
        __asm _emit 0x50
        // 0x58746852: push ecx
        __asm _emit 0x51
        // 0x58746853: push edx
        __asm _emit 0x52
        // 0x58746854: call 0x58747410
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746859: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5874685C: mov eax, dword ptr [esp + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58746860: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58746862: jne 0x58746885
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x58746864: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x64
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58746869: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874686B: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x5874686E: jb 0x58746875
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58746870: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0x63
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58746875: mov eax, dword ptr [esp + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x58746879: mov edi, dword ptr [esp + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x5874687D: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x58746880: jmp 0x587467c0
        __asm _emit 0xE9
        __asm _emit 0x3B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58746885: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58746887: jmp 0x5874686b
        __asm _emit 0xEB
        __asm _emit 0xE2
        // 0x58746889: cmp byte ptr [esp + 0x4f], 0
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x4F
        __asm _emit 0x00
        // 0x5874688E: je 0x587469c3
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x2F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746894: cmp dword ptr [ebx + 0xc8], 0
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874689B: je 0x587468a6
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5874689D: cmp dword ptr [ebx + 0xcc], 0
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587468A4: jne 0x587468c0
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x587468A6: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587468A8: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587468AB: add ecx, 0x55
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x55
        // 0x587468AE: mov dword ptr [ebx + 0xc8], ecx
        __asm _emit 0x89
        __asm _emit 0x8B
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587468B4: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587468B7: add edx, 0x55
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x55
        // 0x587468BA: mov dword ptr [ebx + 0xcc], edx
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587468C0: mov esi, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x33
        // 0x587468C2: mov ecx, dword ptr [ebx + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587468C8: mov edi, dword ptr [ebx + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0xBB
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587468CE: mov ebx, dword ptr [esi + 0x6060]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587468D4: cmp ebx, 0x708
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587468DA: mov ebp, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x04
        // 0x587468DD: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587468E0: mov dword ptr [esp + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x587468E4: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587468E9: mov dword ptr [esp + 0x60], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x60
        // 0x587468ED: mov dword ptr [esp + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x587468F1: mov dword ptr [esp + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587468F5: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x587468F7: jge 0x58746900
        __asm _emit 0x7D
        __asm _emit 0x07
        // 0x587468F9: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x587468FC: mov dword ptr [esp + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x58746900: cmp ebx, 0x384
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746906: jle 0x58746913
        __asm _emit 0x7E
        __asm _emit 0x0B
        // 0x58746908: cmp ebx, 0xa8c
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0x8C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874690E: jg 0x58746913
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x58746910: or edx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0xFF
        // 0x58746913: cmp ebp, edi
        __asm _emit 0x3B
        __asm _emit 0xEF
        // 0x58746915: je 0x587469a2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874691B: mov ecx, dword ptr [esp + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x5874691F: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58746921: je 0x587469ae
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746927: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x58746929: mov dword ptr [esp + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x5874692D: fild dword ptr [esp + 0x54]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x58746931: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58746933: mov dword ptr [esp + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x58746937: fidiv dword ptr [esp + 0x54]
        __asm _emit 0xDA
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x5874693B: fstp dword ptr [esp + 0x54]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x5874693F: fld dword ptr [esp + 0x54]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x58746943: fmul st(0), st(0)
        __asm _emit 0xDC
        __asm _emit 0xC8
        // 0x58746945: fld1
        __asm _emit 0xD9
        __asm _emit 0xE8
        // 0x58746947: fadd st(1), st(0)
        __asm _emit 0xDC
        __asm _emit 0xC1
        // 0x58746949: fld qword ptr [0x5898cae8]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874694F: fdivrp st(2)
        __asm _emit 0xDE
        __asm _emit 0xF2
        // 0x58746951: faddp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC1
        // 0x58746953: fstp dword ptr [esp + 0x58]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x58746957: fld dword ptr [esp + 0x58]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x5874695B: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x63
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58746960: fstp dword ptr [esp + 0x58]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x58746964: fld dword ptr [esp + 0x58]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x58746968: fstp dword ptr [esp + 0x5c]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x5874696C: fild dword ptr [esp + 0x50]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x58746970: fstp dword ptr [esp + 0x58]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x58746974: fld dword ptr [esp + 0x58]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x58746978: fld st(0)
        __asm _emit 0xD9
        __asm _emit 0xC0
        // 0x5874697A: fld dword ptr [esp + 0x5c]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x5874697E: fld st(0)
        __asm _emit 0xD9
        __asm _emit 0xC0
        // 0x58746980: fmulp st(2)
        __asm _emit 0xDE
        __asm _emit 0xCA
        // 0x58746982: fild dword ptr [esp + 0x60]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        // 0x58746986: faddp st(2)
        __asm _emit 0xDE
        __asm _emit 0xC2
        // 0x58746988: fxch st(1)
        __asm _emit 0xD9
        __asm _emit 0xC9
        // 0x5874698A: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0x63
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874698F: fmul dword ptr [esp + 0x54]
        __asm _emit 0xD8
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x58746993: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x58746995: fmulp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC9
        // 0x58746997: fiadd dword ptr [esp + 0x64]
        __asm _emit 0xDA
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x5874699B: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x63
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587469A0: jmp 0x587469b8
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x587469A2: imul ecx, ecx, 0x190
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587469A8: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x587469AA: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587469AC: jmp 0x587469b8
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x587469AE: imul edx, edx, 0x190
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587469B4: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x587469B6: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587469B8: push eax
        __asm _emit 0x50
        // 0x587469B9: push ebp
        __asm _emit 0x55
        // 0x587469BA: push esi
        __asm _emit 0x56
        // 0x587469BB: call 0x58747410
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587469C0: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587469C3: mov eax, dword ptr [esp + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x78
        // 0x587469C7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587469C9: je 0x587469d4
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587469CB: push eax
        __asm _emit 0x50
        // 0x587469CC: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x62
        __asm _emit 0x23
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587469D4..0x587469F2; 30 mapped bytes.
extern "C" __declspec(naked) void FUN_58746720_segment_01() {
    __asm {
        // 0x587469D4: mov edx, dword ptr [esp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x587469D8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587469DA: push edx
        __asm _emit 0x52
        // 0x587469DB: mov dword ptr [esp + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x587469DF: mov dword ptr [esp + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587469E6: mov dword ptr [esp + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587469ED: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x62
        __asm _emit 0x23
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587469F5..0x58746A0E; 25 mapped bytes.
extern "C" __declspec(naked) void FUN_58746720_segment_02() {
    __asm {
        // 0x587469F5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587469F7: mov ecx, dword ptr [esp + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587469FE: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746A05: pop ecx
        __asm _emit 0x59
        // 0x58746A06: pop edi
        __asm _emit 0x5F
        // 0x58746A07: pop esi
        __asm _emit 0x5E
        // 0x58746A08: pop ebp
        __asm _emit 0x5D
        // 0x58746A09: pop ebx
        __asm _emit 0x5B
        // 0x58746A0A: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58746A0C: pop ebp
        __asm _emit 0x5D
        // 0x58746A0D: ret
        __asm _emit 0xC3
    }
}
