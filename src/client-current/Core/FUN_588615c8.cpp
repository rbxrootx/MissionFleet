// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x588615C8 .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_588615c8() {
    __asm {
        // 0x588615C8: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588615CA: push ebp
        __asm _emit 0x55
        // 0x588615CB: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x588615CD: mov edx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x6C
        // 0x588615D0: push esi
        __asm _emit 0x56
        // 0x588615D1: lea eax, [edx + 4]
        __asm _emit 0x8D
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588615D4: mov dword ptr [ecx + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x6C
        // 0x588615D7: mov esi, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x32
        // 0x588615D9: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588615DB: jne 0x588615f1
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x588615DD: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588615E2: mov dword ptr [eax], 0x16
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588615E8: call 0x58850fab
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0xF9
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x588615ED: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x588615EF: jmp 0x58861632
        __asm _emit 0xEB
        __asm _emit 0x41
        // 0x588615F1: add ecx, 0x18
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x18
        // 0x588615F4: call 0x5886074d
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588615F9: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x588615FC: je 0x5886162b
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x588615FE: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x58861601: je 0x58861622
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x58861603: dec eax
        __asm _emit 0x48
        // 0x58861604: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x58861607: je 0x5886161b
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58861609: sub eax, 4
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x5886160C: jne 0x588615ed
        __asm _emit 0x75
        __asm _emit 0xDF
        // 0x5886160E: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58861611: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x58861614: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x58861616: mov dword ptr [esi + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58861619: jmp 0x58861630
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x5886161B: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5886161E: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x58861620: jmp 0x58861630
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x58861622: mov ax, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58861626: mov word ptr [esi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x58861629: jmp 0x58861630
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x5886162B: mov al, byte ptr [ebp + 8]
        __asm _emit 0x8A
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5886162E: mov byte ptr [esi], al
        __asm _emit 0x88
        __asm _emit 0x06
        // 0x58861630: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x58861632: pop esi
        __asm _emit 0x5E
        // 0x58861633: pop ebp
        __asm _emit 0x5D
        // 0x58861634: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
