// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588FC830 .. +0xA1 bytes.
// Source symbol alias: FUN_588fc830.
extern "C" __declspec(naked) void FUN_588fc830() {
    __asm {
        // 0x588FC830: push esi
        __asm _emit 0x56
        // 0x588FC831: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FC833: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588FC837: push edi
        __asm _emit 0x57
        // 0x588FC838: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x588FC83A: je 0x588fc8c9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC840: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x588FC843: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588FC847: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FC849: je 0x588fc86f
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x588FC84B: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x588FC84E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FC850: je 0x588fc868
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588FC852: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588FC854: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FC856: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x588FC859: push edi
        __asm _emit 0x57
        // 0x588FC85A: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588FC85C: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x588FC85F: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x588FC862: je 0x588fc86f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FC864: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FC866: jne 0x588fc852
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x588FC868: pop edi
        __asm _emit 0x5F
        // 0x588FC869: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FC86B: pop esi
        __asm _emit 0x5E
        // 0x588FC86C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588FC86F: cmp dword ptr [edi + 4], 0x200
        __asm _emit 0x81
        __asm _emit 0x7F
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC876: jne 0x588fc89a
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x588FC878: mov edx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC87E: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FC883: cmp edx, dword ptr [eax + 4]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588FC886: jne 0x588fc89a
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x588FC888: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC88E: cmp ecx, dword ptr [eax + 8]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588FC891: jne 0x588fc89a
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588FC893: mov dword ptr [edi + 4], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC89A: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FC89F: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588FC8A2: mov dword ptr [esi + 0x84], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC8A8: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x588FC8AB: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC8B1: cmp dword ptr [edi + 4], 0x100
        __asm _emit 0x81
        __asm _emit 0x7F
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC8B8: jne 0x588fc8c9
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x588FC8BA: cmp dword ptr [edi + 8], 0x1b
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x08
        __asm _emit 0x1B
        // 0x588FC8BE: jne 0x588fc8c9
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x588FC8C0: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x588FC8C2: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588FC8C5: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FC8C7: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588FC8C9: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588FC8CC: pop edi
        __asm _emit 0x5F
        // 0x588FC8CD: pop esi
        __asm _emit 0x5E
        // 0x588FC8CE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
