// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588AC590 .. +0x1B6 bytes.
extern "C" __declspec(naked) void FUN_588ac590() {
    __asm {
        // 0x588AC590: push ebx
        __asm _emit 0x53
        // 0x588AC591: push ebp
        __asm _emit 0x55
        // 0x588AC592: push esi
        __asm _emit 0x56
        // 0x588AC593: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588AC595: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588AC598: mov edx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x78
        // 0x588AC59B: mov ecx, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC5A1: push edi
        __asm _emit 0x57
        // 0x588AC5A2: shl edx, 8
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x08
        // 0x588AC5A5: push ecx
        __asm _emit 0x51
        // 0x588AC5A6: lea eax, [edx + esi + 0x80]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC5AD: push eax
        __asm _emit 0x50
        // 0x588AC5AE: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588AC5B4: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x588AC5B7: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x20
        // 0x588AC5BA: jne 0x588ac5d3
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x588AC5BC: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x588AC5BF: cmp eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1F
        // 0x588AC5C2: jne 0x588ac5cd
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x588AC5C4: mov dword ptr [esi + 0x78], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC5CB: jmp 0x588ac5e8
        __asm _emit 0xEB
        __asm _emit 0x1B
        // 0x588AC5CD: inc eax
        __asm _emit 0x40
        // 0x588AC5CE: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x588AC5D1: jmp 0x588ac5e8
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x588AC5D3: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588AC5D6: dec eax
        __asm _emit 0x48
        // 0x588AC5D7: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588AC5D9: jne 0x588ac5e4
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x588AC5DB: mov dword ptr [esi + 0x78], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC5E2: jmp 0x588ac5e8
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588AC5E4: inc ecx
        __asm _emit 0x41
        // 0x588AC5E5: mov dword ptr [esi + 0x78], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588AC5E8: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588AC5EB: mov edx, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC5F1: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588AC5F3: je 0x588ac6dd
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC5F9: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588AC5FB: lea edi, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x01
        // 0x588AC5FE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588AC600: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x588AC602: inc eax
        __asm _emit 0x40
        // 0x588AC603: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x588AC605: jne 0x588ac600
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x588AC607: mov ecx, dword ptr [0x58a24578]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x78
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AC60D: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x588AC60F: inc eax
        __asm _emit 0x40
        // 0x588AC610: push eax
        __asm _emit 0x50
        // 0x588AC611: push edx
        __asm _emit 0x52
        // 0x588AC612: call 0x587a2d40
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0x67
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x588AC617: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AC619: jne 0x588ac6dd
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC61F: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x588AC622: mov eax, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC628: mov ebp, dword ptr [0x5898c1a8]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588AC62E: push eax
        __asm _emit 0x50
        // 0x588AC62F: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588AC631: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x588AC633: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AC635: je 0x588ac6ae
        __asm _emit 0x74
        __asm _emit 0x77
        // 0x588AC637: jmp 0x588ac640
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x588AC639: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC640: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588AC643: mov eax, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC649: mov bl, byte ptr [eax + edi]
        __asm _emit 0x8A
        __asm _emit 0x1C
        __asm _emit 0x38
        // 0x588AC64C: cmp bl, 0x20
        __asm _emit 0x80
        __asm _emit 0xFB
        __asm _emit 0x20
        // 0x588AC64F: jne 0x588ac661
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x588AC651: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588AC653: je 0x588ac6dd
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC659: push eax
        __asm _emit 0x50
        // 0x588AC65A: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x588AC65C: dec eax
        __asm _emit 0x48
        // 0x588AC65D: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588AC65F: je 0x588ac6dd
        __asm _emit 0x74
        __asm _emit 0x7C
        // 0x588AC661: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588AC663: jle 0x588ac689
        __asm _emit 0x7E
        __asm _emit 0x24
        // 0x588AC665: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588AC668: mov eax, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC66E: push eax
        __asm _emit 0x50
        // 0x588AC66F: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x588AC671: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588AC673: jge 0x588ac689
        __asm _emit 0x7D
        __asm _emit 0x14
        // 0x588AC675: cmp bl, 0x20
        __asm _emit 0x80
        __asm _emit 0xFB
        __asm _emit 0x20
        // 0x588AC678: jne 0x588ac689
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x588AC67A: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x588AC67D: mov eax, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC683: cmp byte ptr [eax + edi - 1], bl
        __asm _emit 0x38
        __asm _emit 0x5C
        __asm _emit 0x38
        __asm _emit 0xFF
        // 0x588AC687: jmp 0x588ac69b
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x588AC689: cmp bl, 0x27
        __asm _emit 0x80
        __asm _emit 0xFB
        __asm _emit 0x27
        // 0x588AC68C: je 0x588ac6dd
        __asm _emit 0x74
        __asm _emit 0x4F
        // 0x588AC68E: cmp bl, 1
        __asm _emit 0x80
        __asm _emit 0xFB
        __asm _emit 0x01
        // 0x588AC691: jl 0x588ac698
        __asm _emit 0x7C
        __asm _emit 0x05
        // 0x588AC693: cmp bl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xFB
        __asm _emit 0x1F
        // 0x588AC696: jle 0x588ac6dd
        __asm _emit 0x7E
        __asm _emit 0x45
        // 0x588AC698: cmp bl, 0x7f
        __asm _emit 0x80
        __asm _emit 0xFB
        __asm _emit 0x7F
        // 0x588AC69B: je 0x588ac6dd
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x588AC69D: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588AC6A0: mov eax, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC6A6: push eax
        __asm _emit 0x50
        // 0x588AC6A7: inc edi
        __asm _emit 0x47
        // 0x588AC6A8: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x588AC6AA: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588AC6AC: jne 0x588ac640
        __asm _emit 0x75
        __asm _emit 0x92
        // 0x588AC6AE: cmp dword ptr [esi + 0x2080], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC6B5: jne 0x588ac714
        __asm _emit 0x75
        __asm _emit 0x5D
        // 0x588AC6B7: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588AC6BA: mov edx, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC6C0: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588AC6C3: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AC6C9: push edx
        __asm _emit 0x52
        // 0x588AC6CA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588AC6CC: push eax
        __asm _emit 0x50
        // 0x588AC6CD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588AC6CF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588AC6D1: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC6D6: call 0x587b98b0
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0xD1
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588AC6DB: jmp 0x588ac740
        __asm _emit 0xEB
        __asm _emit 0x63
        // 0x588AC6DD: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588AC6E0: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x32
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588AC6E5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588AC6E7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588AC6E9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588AC6EB: push 0x3e6
        __asm _emit 0x68
        __asm _emit 0xE6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC6F0: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0xF3
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588AC6F5: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AC6F7: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x86
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588AC6FC: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AC702: mov eax, dword ptr [edx + 0xdb0]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xB0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC708: mov dword ptr [eax + 0x2c8], 0
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0xC8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC712: jmp 0x588ac740
        __asm _emit 0xEB
        __asm _emit 0x2C
        // 0x588AC714: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AC71A: mov eax, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC720: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AC722: je 0x588ac740
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x588AC724: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x588AC727: mov ecx, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC72D: mov edx, dword ptr [eax + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x48
        // 0x588AC730: push ecx
        __asm _emit 0x51
        // 0x588AC731: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AC737: shr edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x588AC73A: push edx
        __asm _emit 0x52
        // 0x588AC73B: call 0x587b9870
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0xD1
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588AC740: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588AC742: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588AC745: pop edi
        __asm _emit 0x5F
    }
}
