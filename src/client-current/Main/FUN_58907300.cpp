// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58907300 .. +0x58 bytes.
// Source symbol alias: FUN_58907300.
extern "C" __declspec(naked) void FUN_58907300() {
    __asm {
        // 0x58907300: push esi
        __asm _emit 0x56
        // 0x58907301: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58907303: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x58907306: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x58907309: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5890730B: jle 0x58907352
        __asm _emit 0x7E
        __asm _emit 0x45
        // 0x5890730D: push edi
        __asm _emit 0x57
        // 0x5890730E: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58907312: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58907314: sub edx, edi
        __asm _emit 0x2B
        __asm _emit 0xD7
        // 0x58907316: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x58907318: jge 0x5890731e
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x5890731A: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5890731C: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x5890731E: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x58907320: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x58907323: mov eax, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x30
        // 0x58907326: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58907328: je 0x58907344
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x5890732A: mov ax, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x24
        // 0x5890732E: shr al, 5
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x05
        // 0x58907331: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x58907333: je 0x58907344
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x58907335: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x58907338: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5890733A: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x5890733D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890733F: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58907341: push esi
        __asm _emit 0x56
        // 0x58907342: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58907344: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58907346: call 0x58907040
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890734B: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5890734D: pop edi
        __asm _emit 0x5F
        // 0x5890734E: pop esi
        __asm _emit 0x5E
        // 0x5890734F: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58907352: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58907354: pop esi
        __asm _emit 0x5E
        // 0x58907355: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
