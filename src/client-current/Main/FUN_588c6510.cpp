// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 405 bytes in 5 discontiguous ranges.
// Source symbol alias: FUN_588c6510.

// Ghidra body range 0x588C6510..0x588C6589; 121 mapped bytes.
extern "C" __declspec(naked) void FUN_588c6510_segment_00() {
    __asm {
        // 0x588C6510: push ebx
        __asm _emit 0x53
        // 0x588C6511: push esi
        __asm _emit 0x56
        // 0x588C6512: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588C6514: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6519: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588C651D: push edi
        __asm _emit 0x57
        // 0x588C651E: lea edi, [esi + 0xe4]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6524: mov ebx, 3
        __asm _emit 0xBB
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6529: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6530: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588C6532: call 0x588eb2d0
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x4D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588C6537: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588C653A: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588C653D: jne 0x588c6530
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x588C653F: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6545: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x588C6548: mov dword ptr [esi + 0xa0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C654E: mov dword ptr [esi + 0x9c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6554: mov dword ptr [esi + 0xa4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C655A: mov dword ptr [esi + 0xa8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6560: call 0x5875f320
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x8D
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588C6565: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C656B: call 0x5875f320
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x8D
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588C6570: mov eax, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6576: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x588C6579: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588C657B: je 0x588c65b2
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x588C657D: mov edx, 0x5898c922
        __asm _emit 0xBA
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588C6582: mov edi, 0x80
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6587: jmp 0x588c6590
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x588C6590..0x588C65DA; 74 mapped bytes.
extern "C" __declspec(naked) void FUN_588c6510_segment_01() {
    __asm {
        // 0x588C6590: lea ecx, [edi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x588C6596: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588C6598: je 0x588c65ab
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588C659A: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x588C659C: cmp cl, bl
        __asm _emit 0x3A
        __asm _emit 0xCB
        // 0x588C659E: je 0x588c65ab
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588C65A0: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x588C65A2: inc eax
        __asm _emit 0x40
        // 0x588C65A3: inc edx
        __asm _emit 0x42
        // 0x588C65A4: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x588C65A7: jne 0x588c6590
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x588C65A9: jmp 0x588c65af
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588C65AB: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588C65AD: jne 0x588c65b0
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x588C65AF: dec eax
        __asm _emit 0x48
        // 0x588C65B0: mov byte ptr [eax], bl
        __asm _emit 0x88
        __asm _emit 0x18
        // 0x588C65B2: mov eax, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C65B8: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C65BD: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588C65C1: mov eax, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C65C7: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x588C65CA: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588C65CC: je 0x588c6602
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x588C65CE: mov edx, 0x5898c922
        __asm _emit 0xBA
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588C65D3: mov edi, 0x80
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C65D8: jmp 0x588c65e0
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x588C65E0..0x588C662A; 74 mapped bytes.
extern "C" __declspec(naked) void FUN_588c6510_segment_02() {
    __asm {
        // 0x588C65E0: lea ecx, [edi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x588C65E6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588C65E8: je 0x588c65fb
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588C65EA: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x588C65EC: cmp cl, bl
        __asm _emit 0x3A
        __asm _emit 0xCB
        // 0x588C65EE: je 0x588c65fb
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588C65F0: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x588C65F2: inc eax
        __asm _emit 0x40
        // 0x588C65F3: inc edx
        __asm _emit 0x42
        // 0x588C65F4: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x588C65F7: jne 0x588c65e0
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x588C65F9: jmp 0x588c65ff
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588C65FB: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588C65FD: jne 0x588c6600
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x588C65FF: dec eax
        __asm _emit 0x48
        // 0x588C6600: mov byte ptr [eax], bl
        __asm _emit 0x88
        __asm _emit 0x18
        // 0x588C6602: mov eax, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6608: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C660D: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588C6611: mov eax, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6617: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x588C661A: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588C661C: je 0x588c6652
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x588C661E: mov edx, 0x5898c922
        __asm _emit 0xBA
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588C6623: mov edi, 0x80
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6628: jmp 0x588c6630
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x588C6630..0x588C667A; 74 mapped bytes.
extern "C" __declspec(naked) void FUN_588c6510_segment_03() {
    __asm {
        // 0x588C6630: lea ecx, [edi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x588C6636: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588C6638: je 0x588c664b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588C663A: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x588C663C: cmp cl, bl
        __asm _emit 0x3A
        __asm _emit 0xCB
        // 0x588C663E: je 0x588c664b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588C6640: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x588C6642: inc eax
        __asm _emit 0x40
        // 0x588C6643: inc edx
        __asm _emit 0x42
        // 0x588C6644: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x588C6647: jne 0x588c6630
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x588C6649: jmp 0x588c664f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588C664B: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588C664D: jne 0x588c6650
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x588C664F: dec eax
        __asm _emit 0x48
        // 0x588C6650: mov byte ptr [eax], bl
        __asm _emit 0x88
        __asm _emit 0x18
        // 0x588C6652: mov eax, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6658: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C665D: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588C6661: mov eax, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6667: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x588C666A: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588C666C: je 0x588c66a2
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x588C666E: mov edx, 0x5898c922
        __asm _emit 0xBA
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588C6673: mov edi, 0x80
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6678: jmp 0x588c6680
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x588C6680..0x588C66BE; 62 mapped bytes.
extern "C" __declspec(naked) void FUN_588c6510_segment_04() {
    __asm {
        // 0x588C6680: lea ecx, [edi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x588C6686: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588C6688: je 0x588c669b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588C668A: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x588C668C: cmp cl, bl
        __asm _emit 0x3A
        __asm _emit 0xCB
        // 0x588C668E: je 0x588c669b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588C6690: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x588C6692: inc eax
        __asm _emit 0x40
        // 0x588C6693: inc edx
        __asm _emit 0x42
        // 0x588C6694: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x588C6697: jne 0x588c6680
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x588C6699: jmp 0x588c669f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588C669B: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588C669D: jne 0x588c66a0
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x588C669F: dec eax
        __asm _emit 0x48
        // 0x588C66A0: mov byte ptr [eax], bl
        __asm _emit 0x88
        __asm _emit 0x18
        // 0x588C66A2: mov eax, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C66A8: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C66AD: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588C66B1: mov eax, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C66B7: pop edi
        __asm _emit 0x5F
        // 0x588C66B8: pop esi
        __asm _emit 0x5E
        // 0x588C66B9: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x588C66BC: pop ebx
        __asm _emit 0x5B
        // 0x588C66BD: ret
        __asm _emit 0xC3
    }
}
