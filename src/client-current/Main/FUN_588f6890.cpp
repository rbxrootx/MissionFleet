// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F6890 .. +0xAF bytes.
// Source symbol alias: FUN_588f6890.
extern "C" __declspec(naked) void FUN_588f6890() {
    __asm {
        // 0x588F6890: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x588F6893: push ebx
        __asm _emit 0x53
        // 0x588F6894: push ebp
        __asm _emit 0x55
        // 0x588F6895: push esi
        __asm _emit 0x56
        // 0x588F6896: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588F6898: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x588F689B: push edi
        __asm _emit 0x57
        // 0x588F689C: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x588F689F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F68A1: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x588F68A3: test ecx, 0xfffffffc
        __asm _emit 0xF7
        __asm _emit 0xC1
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F68A9: jne 0x588f68af
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x588F68AB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588F68AD: jmp 0x588f68d4
        __asm _emit 0xEB
        __asm _emit 0x25
        // 0x588F68AF: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588F68B1: jbe 0x588f68b8
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588F68B3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x63
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F68B8: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F68BC: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588F68BE: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588F68C0: je 0x588f68c6
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x588F68C2: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588F68C4: je 0x588f68cb
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588F68C6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x63
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F68CB: mov ebx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F68CF: sub ebx, edi
        __asm _emit 0x2B
        __asm _emit 0xDF
        // 0x588F68D1: sar ebx, 2
        __asm _emit 0xC1
        __asm _emit 0xFB
        __asm _emit 0x02
        // 0x588F68D4: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588F68D8: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F68DC: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F68E0: push edx
        __asm _emit 0x52
        // 0x588F68E1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F68E3: push eax
        __asm _emit 0x50
        // 0x588F68E4: push ecx
        __asm _emit 0x51
        // 0x588F68E5: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F68E7: call 0x588f66e0
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F68EC: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x588F68EF: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x588F68F2: jbe 0x588f68f9
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588F68F4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x63
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F68F9: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x588F68FB: mov ebp, esi
        __asm _emit 0x8B
        __asm _emit 0xEE
        // 0x588F68FD: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F6901: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588F6903: jne 0x588f691c
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x588F6905: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x63
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F690A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F690C: lea edi, [edi + ebx*4]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x9F
        // 0x588F690F: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x588F6912: ja 0x588f6927
        __asm _emit 0x77
        __asm _emit 0x13
        // 0x588F6914: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588F6916: je 0x588f6920
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588F6918: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x588F691A: jmp 0x588f6922
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x588F691C: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588F691E: jmp 0x588f690c
        __asm _emit 0xEB
        __asm _emit 0xEC
        // 0x588F6920: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588F6922: cmp edi, dword ptr [esi + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x588F6925: jae 0x588f692c
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x588F6927: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x63
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F692C: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588F6930: mov dword ptr [eax + 4], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x588F6933: pop edi
        __asm _emit 0x5F
        // 0x588F6934: pop esi
        __asm _emit 0x5E
        // 0x588F6935: mov dword ptr [eax], ebp
        __asm _emit 0x89
        __asm _emit 0x28
        // 0x588F6937: pop ebp
        __asm _emit 0x5D
        // 0x588F6938: pop ebx
        __asm _emit 0x5B
        // 0x588F6939: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588F693C: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
