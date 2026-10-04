// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Corrected Ghidra function-body extent: 0x588995E0 .. +0xB2 bytes.
// Source symbol alias: FUN_588995e0.
extern "C" __declspec(naked) void FUN_588995e0() {
    __asm {
        // 0x588995E0: push ebp
        __asm _emit 0x55
        // 0x588995E1: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x588995E3: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588995E5: push 0x58987321
        __asm _emit 0x68
        __asm _emit 0x21
        __asm _emit 0x73
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588995EA: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588995F0: push eax
        __asm _emit 0x50
        // 0x588995F1: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x588995F4: push ebx
        __asm _emit 0x53
        // 0x588995F5: push esi
        __asm _emit 0x56
        // 0x588995F6: push edi
        __asm _emit 0x57
        // 0x588995F7: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588995FC: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x588995FE: push eax
        __asm _emit 0x50
        // 0x588995FF: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x58899602: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899608: mov dword ptr [ebp - 0x10], esp
        __asm _emit 0x89
        __asm _emit 0x65
        __asm _emit 0xF0
        // 0x5889960B: mov esi, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x5889960E: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x58899611: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58899613: mov dword ptr [ebp - 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x58899616: mov dword ptr [ebp - 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xFC
        // 0x58899619: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899620: cmp edi, dword ptr [ebp + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x58899623: je 0x5889967e
        __asm _emit 0x74
        __asm _emit 0x59
        // 0x58899625: mov dword ptr [ebp + 8], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58899628: mov dword ptr [ebp - 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5889962B: mov byte ptr [ebp - 4], 1
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x01
        // 0x5889962F: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x58899631: je 0x5889964b
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x58899633: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58899635: push ebx
        __asm _emit 0x53
        // 0x58899636: mov dword ptr [esi + 0x18], 0xf
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x18
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889963D: mov dword ptr [esi + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x14
        // 0x58899640: push edi
        __asm _emit 0x57
        // 0x58899641: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58899643: mov byte ptr [esi + 4], bl
        __asm _emit 0x88
        __asm _emit 0x5E
        __asm _emit 0x04
        // 0x58899646: call 0x58734f20
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0xB8
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x5889964B: add esi, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x1C
        // 0x5889964E: mov byte ptr [ebp - 4], bl
        __asm _emit 0x88
        __asm _emit 0x5D
        __asm _emit 0xFC
        // 0x58899651: mov dword ptr [ebp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x58899654: add edi, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x1C
        // 0x58899657: jmp 0x58899620
        __asm _emit 0xEB
        __asm _emit 0xC7
        // 0x58899659: mov esi, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x5889965C: mov edi, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x10
        // 0x5889965F: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x58899661: je 0x58899675
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58899663: mov ebx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x14
        // 0x58899666: push esi
        __asm _emit 0x56
        // 0x58899667: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58899669: call 0x58791e20
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x87
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x5889966E: add esi, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x1C
        // 0x58899671: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x58899673: jne 0x58899666
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x58899675: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58899677: push ebx
        __asm _emit 0x53
        // 0x58899678: push ebx
        __asm _emit 0x53
        // 0x58899679: call 0x5897cc78
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x35
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5889967E: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58899680: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x58899683: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889968A: pop ecx
        __asm _emit 0x59
        // 0x5889968B: pop edi
        __asm _emit 0x5F
        // 0x5889968C: pop esi
        __asm _emit 0x5E
        // 0x5889968D: pop ebx
        __asm _emit 0x5B
        // 0x5889968E: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58899690: pop ebp
        __asm _emit 0x5D
        // 0x58899691: ret
        __asm _emit 0xC3
    }
}
