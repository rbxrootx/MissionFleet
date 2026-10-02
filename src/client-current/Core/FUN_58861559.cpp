// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58861559 .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_58861559() {
    __asm {
        // 0x58861559: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5886155B: push ebp
        __asm _emit 0x55
        // 0x5886155C: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5886155E: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x58861561: push esi
        __asm _emit 0x56
        // 0x58861562: lea eax, [edx + 4]
        __asm _emit 0x8D
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58861565: mov dword ptr [ecx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x58861568: mov esi, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x32
        // 0x5886156A: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5886156C: jne 0x58861582
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x5886156E: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58861573: mov dword ptr [eax], 0x16
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58861579: call 0x58850fab
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0xFA
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5886157E: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58861580: jmp 0x588615c3
        __asm _emit 0xEB
        __asm _emit 0x41
        // 0x58861582: add ecx, 0x10
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x10
        // 0x58861585: call 0x5886074d
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5886158A: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x5886158D: je 0x588615bc
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x5886158F: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x58861592: je 0x588615b3
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x58861594: dec eax
        __asm _emit 0x48
        // 0x58861595: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x58861598: je 0x588615ac
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5886159A: sub eax, 4
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x5886159D: jne 0x5886157e
        __asm _emit 0x75
        __asm _emit 0xDF
        // 0x5886159F: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x588615A2: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x588615A5: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x588615A7: mov dword ptr [esi + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588615AA: jmp 0x588615c1
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x588615AC: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x588615AF: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x588615B1: jmp 0x588615c1
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x588615B3: mov ax, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x588615B7: mov word ptr [esi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x588615BA: jmp 0x588615c1
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x588615BC: mov al, byte ptr [ebp + 8]
        __asm _emit 0x8A
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x588615BF: mov byte ptr [esi], al
        __asm _emit 0x88
        __asm _emit 0x06
        // 0x588615C1: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x588615C3: pop esi
        __asm _emit 0x5E
        // 0x588615C4: pop ebp
        __asm _emit 0x5D
        // 0x588615C5: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
