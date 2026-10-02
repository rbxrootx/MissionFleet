// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885A821 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_5885a821() {
    __asm {
        // 0x5885A821: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885A823: push ebp
        __asm _emit 0x55
        // 0x5885A824: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885A826: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x20
        // 0x5885A829: cmp dword ptr [ebp + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5885A82D: je 0x5885a85a
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x5885A82F: cmp dword ptr [ebp + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5885A833: je 0x5885a85a
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x5885A835: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x5885A838: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885A83A: jne 0x5885a85e
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x5885A83C: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5885A83F: push eax
        __asm _emit 0x50
        // 0x5885A840: mov byte ptr [eax + 0x1c], 1
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x5885A844: mov dword ptr [eax + 0x18], 0x16
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x18
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A84B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885A84D: push eax
        __asm _emit 0x50
        // 0x5885A84E: push eax
        __asm _emit 0x50
        // 0x5885A84F: push eax
        __asm _emit 0x50
        // 0x5885A850: push eax
        __asm _emit 0x50
        // 0x5885A851: push eax
        __asm _emit 0x50
        // 0x5885A852: call 0x58850f2e
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A857: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5885A85A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885A85C: leave
        __asm _emit 0xC9
        // 0x5885A85D: ret
        __asm _emit 0xC3
        // 0x5885A85E: lea eax, [ebp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x5885A861: mov dword ptr [ebp - 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xF8
        // 0x5885A864: mov dword ptr [ebp - 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE0
        // 0x5885A867: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5885A86A: mov dword ptr [ebp - 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x5885A86D: lea eax, [ebp + 8]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885A870: mov dword ptr [ebp - 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE8
        // 0x5885A873: lea eax, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5885A876: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x5885A879: lea eax, [ebp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5885A87C: mov dword ptr [ebp - 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885A87F: lea eax, [ebp - 8]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x5885A882: push eax
        __asm _emit 0x50
        // 0x5885A883: lea eax, [ebp - 0x20]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xE0
        // 0x5885A886: mov dword ptr [ebp - 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x5885A889: push eax
        __asm _emit 0x50
        // 0x5885A88A: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x5885A88D: push eax
        __asm _emit 0x50
        // 0x5885A88E: lea ecx, [ebp - 1]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xFF
        // 0x5885A891: call 0x5885a77a
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A896: leave
        __asm _emit 0xC9
        // 0x5885A897: ret
        __asm _emit 0xC3
    }
}
