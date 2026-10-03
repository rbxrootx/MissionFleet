// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58794600 .. +0x164 bytes.
extern "C" __declspec(naked) void FUN_58794600() {
    __asm {
        // 0x58794600: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58794602: push 0x5897f4c3
        __asm _emit 0x68
        __asm _emit 0xC3
        __asm _emit 0xF4
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58794607: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879460D: push eax
        __asm _emit 0x50
        // 0x5879460E: push ecx
        __asm _emit 0x51
        // 0x5879460F: push ebx
        __asm _emit 0x53
        // 0x58794610: push ebp
        __asm _emit 0x55
        // 0x58794611: push esi
        __asm _emit 0x56
        // 0x58794612: push edi
        __asm _emit 0x57
        // 0x58794613: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58794618: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5879461A: push eax
        __asm _emit 0x50
        // 0x5879461B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5879461F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794625: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58794627: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5879462B: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5879462F: mov ebp, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58794633: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58794637: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5879463B: push eax
        __asm _emit 0x50
        // 0x5879463C: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58794640: push ebp
        __asm _emit 0x55
        // 0x58794641: push ecx
        __asm _emit 0x51
        // 0x58794642: push edx
        __asm _emit 0x52
        // 0x58794643: push eax
        __asm _emit 0x50
        // 0x58794644: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58794646: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0x03
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x5879464B: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5879464D: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x5879464F: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58794653: mov dword ptr [esi], 0x58997cd0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xD0
        __asm _emit 0x7C
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58794659: mov dword ptr [esi + 0xb8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879465F: mov dword ptr [esi + 0xbc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794665: mov dword ptr [esi + 0xc0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879466B: mov dword ptr [esi + 0xc4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794671: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x85
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x58794676: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58794678: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5879467B: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5879467F: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x58794684: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58794686: je 0x587946b5
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x58794688: mov cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x26
        // 0x5879468C: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58794690: dec cx
        __asm _emit 0x66
        __asm _emit 0x49
        // 0x58794692: movzx eax, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC1
        // 0x58794695: push eax
        __asm _emit 0x50
        // 0x58794696: push ebx
        __asm _emit 0x53
        // 0x58794697: push ebx
        __asm _emit 0x53
        // 0x58794698: add ebp, 3
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x03
        // 0x5879469B: push ebp
        __asm _emit 0x55
        // 0x5879469C: push edx
        __asm _emit 0x52
        // 0x5879469D: push esi
        __asm _emit 0x56
        // 0x5879469E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587946A0: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0xEA
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x587946A5: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587946AB: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x587946AE: mov dword ptr [edi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x54
        // 0x587946B1: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587946B3: jmp 0x587946b7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587946B5: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587946B7: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587946BC: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587946C0: mov dword ptr [esi + 0xb4], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587946C6: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0xE6
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x587946CB: mov eax, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587946D1: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587946D6: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587946DA: mov dword ptr [esi + 0x88], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587946E0: mov dword ptr [esi + 0x8c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587946E6: mov dword ptr [esi + 0x90], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587946EC: mov dword ptr [esi + 0x68], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x68
        // 0x587946EF: mov dword ptr [esi + 0x6c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x6C
        // 0x587946F2: mov dword ptr [esi + 0x78], 2
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587946F9: mov dword ptr [esi + 0x74], 0xa
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x74
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794700: mov dword ptr [esi + 0xc8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794706: mov dword ptr [esi + 0xcc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879470C: mov dword ptr [esi + 0xd0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794712: mov dword ptr [esi + 0x94], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794718: mov dword ptr [esi + 0x98], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879471E: mov dword ptr [esi + 0x64], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58794725: mov dword ptr [esi + 0x60], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x60
        // 0x58794728: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x5879472B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5879472D: mov dword ptr [esi + 0xac], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794733: mov dword ptr [esi + 0xb0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794739: mov edx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879473F: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x58794742: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58794744: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x58794747: call 0x58794240
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879474C: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5879474E: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58794752: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794759: pop ecx
        __asm _emit 0x59
        // 0x5879475A: pop edi
        __asm _emit 0x5F
        // 0x5879475B: pop esi
        __asm _emit 0x5E
        // 0x5879475C: pop ebp
        __asm _emit 0x5D
        // 0x5879475D: pop ebx
        __asm _emit 0x5B
        // 0x5879475E: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58794761: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
