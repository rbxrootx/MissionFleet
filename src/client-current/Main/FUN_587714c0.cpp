// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 888 bytes in 1 exact ranges.
// Source symbol alias: FUN_587714c0.

// Ghidra body range 0x587714C0..0x58771838; 888 mapped bytes.
extern "C" __declspec(naked) void FUN_587714c0_segment_00() {
    __asm {
        // 0x587714C0: movzx eax, byte ptr [esp + 4]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587714C5: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587714C8: push esi
        __asm _emit 0x56
        // 0x587714C9: push edi
        __asm _emit 0x57
        // 0x587714CA: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587714CC: je 0x587717c6
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587714D2: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587714D5: push ebx
        __asm _emit 0x53
        // 0x587714D6: push ebp
        __asm _emit 0x55
        // 0x587714D7: je 0x587716ee
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587714DD: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587714E0: je 0x58771641
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x5B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587714E6: mov ebx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x68
        // 0x587714E9: mov eax, dword ptr [ebx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587714EF: mov edi, dword ptr [0x5898c198]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587714F5: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587714FA: push eax
        __asm _emit 0x50
        // 0x587714FB: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587714FD: mov eax, dword ptr [ebx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771503: lea ebp, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x68
        __asm _emit 0x01
        // 0x58771506: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x58771508: inc eax
        __asm _emit 0x40
        // 0x58771509: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5877150B: jne 0x58771506
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x5877150D: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x5877150F: mov dword ptr [ebx + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771515: mov dword ptr [ebx + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877151B: mov ebx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x6C
        // 0x5877151E: mov ecx, dword ptr [ebx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771524: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58771529: push ecx
        __asm _emit 0x51
        // 0x5877152A: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5877152C: mov eax, dword ptr [ebx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771532: lea ebp, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x68
        __asm _emit 0x01
        // 0x58771535: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x58771537: inc eax
        __asm _emit 0x40
        // 0x58771538: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5877153A: jne 0x58771535
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x5877153C: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x5877153E: mov dword ptr [ebx + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771544: mov dword ptr [ebx + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877154A: mov ebx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x70
        // 0x5877154D: mov edx, dword ptr [ebx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771553: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58771558: push edx
        __asm _emit 0x52
        // 0x58771559: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5877155B: mov eax, dword ptr [ebx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771561: lea ebp, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x68
        __asm _emit 0x01
        // 0x58771564: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x58771566: inc eax
        __asm _emit 0x40
        // 0x58771567: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58771569: jne 0x58771564
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x5877156B: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x5877156D: mov dword ptr [ebx + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771573: mov dword ptr [ebx + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771579: mov ebx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x74
        // 0x5877157C: mov eax, dword ptr [ebx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771582: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58771587: push eax
        __asm _emit 0x50
        // 0x58771588: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5877158A: mov eax, dword ptr [ebx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771590: lea ebp, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x68
        __asm _emit 0x01
        // 0x58771593: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x58771595: inc eax
        __asm _emit 0x40
        // 0x58771596: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58771598: jne 0x58771593
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x5877159A: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x5877159C: mov dword ptr [ebx + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587715A2: mov dword ptr [ebx + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587715A8: mov ebx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x78
        // 0x587715AB: mov ecx, dword ptr [ebx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587715B1: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587715B6: push ecx
        __asm _emit 0x51
        // 0x587715B7: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587715B9: mov eax, dword ptr [ebx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587715BF: lea ebp, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x68
        __asm _emit 0x01
        // 0x587715C2: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x587715C4: inc eax
        __asm _emit 0x40
        // 0x587715C5: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587715C7: jne 0x587715c2
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x587715C9: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x587715CB: mov dword ptr [ebx + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587715D1: mov dword ptr [ebx + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587715D7: mov ebx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x7C
        // 0x587715DA: mov edx, dword ptr [ebx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587715E0: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587715E5: push edx
        __asm _emit 0x52
        // 0x587715E6: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587715E8: mov eax, dword ptr [ebx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587715EE: lea ebp, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x68
        __asm _emit 0x01
        // 0x587715F1: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x587715F3: inc eax
        __asm _emit 0x40
        // 0x587715F4: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587715F6: jne 0x587715f1
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x587715F8: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x587715FA: mov dword ptr [ebx + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771600: mov dword ptr [ebx + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771606: mov esi, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877160C: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771612: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58771617: push eax
        __asm _emit 0x50
        // 0x58771618: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5877161A: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771620: lea ecx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x01
        // 0x58771623: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x58771625: inc eax
        __asm _emit 0x40
        // 0x58771626: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x58771628: jne 0x58771623
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x5877162A: pop ebp
        __asm _emit 0x5D
        // 0x5877162B: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x5877162D: pop ebx
        __asm _emit 0x5B
        // 0x5877162E: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771634: mov dword ptr [esi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877163A: pop edi
        __asm _emit 0x5F
        // 0x5877163B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877163D: pop esi
        __asm _emit 0x5E
        // 0x5877163E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58771641: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58771647: push 0x589962a4
        __asm _emit 0x68
        __asm _emit 0xA4
        __asm _emit 0x62
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877164C: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5877164E: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58771651: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58771654: push eax
        __asm _emit 0x50
        // 0x58771655: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877165A: push 0x58996284
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x62
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877165F: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58771661: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58771664: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58771667: push eax
        __asm _emit 0x50
        // 0x58771668: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877166D: push 0x58996268
        __asm _emit 0x68
        __asm _emit 0x68
        __asm _emit 0x62
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58771672: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58771674: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58771677: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5877167A: push eax
        __asm _emit 0x50
        // 0x5877167B: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58771680: push 0x58996248
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x62
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58771685: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58771687: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x5877168A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5877168D: push eax
        __asm _emit 0x50
        // 0x5877168E: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58771693: push 0x58996268
        __asm _emit 0x68
        __asm _emit 0x68
        __asm _emit 0x62
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58771698: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5877169A: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x5877169D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587716A0: push eax
        __asm _emit 0x50
        // 0x587716A1: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587716A6: push 0x58996228
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x62
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587716AB: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587716AD: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x587716B0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587716B3: push eax
        __asm _emit 0x50
        // 0x587716B4: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587716B9: mov esi, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587716BF: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587716C5: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587716CA: push ecx
        __asm _emit 0x51
        // 0x587716CB: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587716D1: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587716D7: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x587716DA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587716E0: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x587716E2: inc eax
        __asm _emit 0x40
        // 0x587716E3: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587716E5: jne 0x587716e0
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x587716E7: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587716E9: jmp 0x587717ae
        __asm _emit 0xE9
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587716EE: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587716F4: push 0x58996200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x62
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587716F9: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x587716FB: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x587716FE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58771701: push eax
        __asm _emit 0x50
        // 0x58771702: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58771707: push 0x58996284
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x62
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877170C: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5877170E: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58771711: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58771714: push eax
        __asm _emit 0x50
        // 0x58771715: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877171A: push 0x58996268
        __asm _emit 0x68
        __asm _emit 0x68
        __asm _emit 0x62
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877171F: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58771721: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58771724: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58771727: push eax
        __asm _emit 0x50
        // 0x58771728: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877172D: push 0x58996248
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x62
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58771732: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58771734: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x58771737: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5877173A: push eax
        __asm _emit 0x50
        // 0x5877173B: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58771740: mov edi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x78
        // 0x58771743: mov edx, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771749: mov ebp, dword ptr [0x5898c198]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5877174F: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58771754: push edx
        __asm _emit 0x52
        // 0x58771755: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x58771757: mov eax, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877175D: lea ecx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x01
        // 0x58771760: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x58771762: inc eax
        __asm _emit 0x40
        // 0x58771763: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x58771765: jne 0x58771760
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x58771767: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58771769: push 0x58996228
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x62
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877176E: mov dword ptr [edi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771774: mov dword ptr [edi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877177A: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5877177C: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x5877177F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58771782: push eax
        __asm _emit 0x50
        // 0x58771783: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58771788: mov esi, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877178E: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771794: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58771799: push eax
        __asm _emit 0x50
        // 0x5877179A: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x5877179C: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587717A2: lea ecx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x01
        // 0x587717A5: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x587717A7: inc eax
        __asm _emit 0x40
        // 0x587717A8: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x587717AA: jne 0x587717a5
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x587717AC: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x587717AE: pop ebp
        __asm _emit 0x5D
        // 0x587717AF: pop ebx
        __asm _emit 0x5B
        // 0x587717B0: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587717B6: mov dword ptr [esi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587717BC: pop edi
        __asm _emit 0x5F
        // 0x587717BD: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587717C2: pop esi
        __asm _emit 0x5E
        // 0x587717C3: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587717C6: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587717CC: push 0x589961d8
        __asm _emit 0x68
        __asm _emit 0xD8
        __asm _emit 0x61
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587717D1: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587717D3: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x587717D6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587717D9: push eax
        __asm _emit 0x50
        // 0x587717DA: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587717DF: push 0x58996284
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x62
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587717E4: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587717E6: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x587717E9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587717EC: push eax
        __asm _emit 0x50
        // 0x587717ED: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587717F2: push 0x58996248
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x62
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587717F7: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587717F9: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x587717FC: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587717FF: push eax
        __asm _emit 0x50
        // 0x58771800: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58771805: push 0x58996228
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x62
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877180A: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5877180C: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x5877180F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58771812: push eax
        __asm _emit 0x50
        // 0x58771813: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58771818: push 0x589961ac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x61
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877181D: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5877181F: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771825: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58771828: push eax
        __asm _emit 0x50
        // 0x58771829: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877182E: pop edi
        __asm _emit 0x5F
        // 0x5877182F: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771834: pop esi
        __asm _emit 0x5E
        // 0x58771835: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
