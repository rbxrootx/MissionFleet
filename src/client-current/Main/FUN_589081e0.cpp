// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x589081E0 .. +0xC9 bytes.
// Source symbol alias: FUN_589081e0.
extern "C" __declspec(naked) void FUN_589081e0() {
    __asm {
        // 0x589081E0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x589081E4: push edi
        __asm _emit 0x57
        // 0x589081E5: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x589081E7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589081E9: jl 0x589082a5
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xB6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589081EF: push esi
        __asm _emit 0x56
        // 0x589081F0: mov esi, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x78
        // 0x589081F3: jle 0x58908205
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x589081F5: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x589081F7: je 0x589082a4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589081FD: mov esi, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x14
        // 0x58908200: dec eax
        __asm _emit 0x48
        // 0x58908201: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58908203: jg 0x589081f5
        __asm _emit 0x7F
        __asm _emit 0xF0
        // 0x58908205: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58908207: je 0x589082a4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890820D: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58908210: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58908212: je 0x5890821c
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58908214: mov ecx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x58908217: mov dword ptr [eax + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x5890821A: jmp 0x58908222
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x5890821C: mov edx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x5890821F: mov dword ptr [edi + 0x78], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x78
        // 0x58908222: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x58908225: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58908227: je 0x58908231
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58908229: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x5890822C: mov dword ptr [eax + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x5890822F: jmp 0x58908237
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x58908231: mov edx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x58908234: mov dword ptr [edi + 0x7c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x7C
        // 0x58908237: mov eax, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890823D: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x5890823F: jne 0x58908255
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x58908241: mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x58908244: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58908246: je 0x5890824c
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58908248: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5890824A: jmp 0x5890824f
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5890824C: mov eax, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x10
        // 0x5890824F: mov dword ptr [edi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908255: mov eax, dword ptr [edi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890825B: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x5890825D: jne 0x58908294
        __asm _emit 0x75
        __asm _emit 0x35
        // 0x5890825F: mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x58908262: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58908264: je 0x5890826a
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58908266: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58908268: jmp 0x5890826d
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5890826A: mov eax, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x10
        // 0x5890826D: mov dword ptr [edi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908273: mov eax, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x30
        // 0x58908276: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58908278: je 0x58908294
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x5890827A: mov ax, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x24
        // 0x5890827E: shr al, 5
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x05
        // 0x58908281: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x58908283: je 0x58908294
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x58908285: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x58908288: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5890828A: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x5890828D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890828F: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58908291: push edi
        __asm _emit 0x57
        // 0x58908292: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58908294: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58908296: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58908298: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5890829A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5890829C: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5890829E: dec dword ptr [edi + 0x88]
        __asm _emit 0xFF
        __asm _emit 0x8F
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589082A4: pop esi
        __asm _emit 0x5E
        // 0x589082A5: pop edi
        __asm _emit 0x5F
        // 0x589082A6: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
