// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588C60E0 .. +0x8F bytes.
// Source symbol alias: FUN_588c60e0.
extern "C" __declspec(naked) void FUN_588c60e0() {
    __asm {
        // 0x588C60E0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588C60E4: push ebx
        __asm _emit 0x53
        // 0x588C60E5: push esi
        __asm _emit 0x56
        // 0x588C60E6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588C60E8: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588C60EC: push edi
        __asm _emit 0x57
        // 0x588C60ED: mov dword ptr [esi], 0x589a0be8
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588C60F3: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x588C60F6: mov dword ptr [esi + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588C60F9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588C60FB: jne 0x588c6104
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588C60FD: add eax, 0x400
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6102: jmp 0x588c6109
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x588C6104: cmp ecx, 1
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x01
        // 0x588C6107: jne 0x588c6125
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x588C6109: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588C610B: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6110: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x588C6112: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x588C6115: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x588C6117: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x588C6119: push ecx
        __asm _emit 0x51
        // 0x588C611A: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0xB4
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588C611F: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x588C6122: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588C6125: mov ebx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x04
        // 0x588C6128: push 0x22b
        __asm _emit 0x68
        __asm _emit 0x2B
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C612D: mov dword ptr [esi + 0x94], 0x1c
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6137: call 0x5897cc3c
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x6B
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C613C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588C613F: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588C6141: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588C6143: jbe 0x588c6164
        __asm _emit 0x76
        __asm _emit 0x1F
        // 0x588C6145: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x6A
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C614A: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x588C614D: mov dword ptr [ecx + edi*4], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0xB9
        // 0x588C6150: inc edi
        __asm _emit 0x47
        // 0x588C6151: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588C6153: jb 0x588c6145
        __asm _emit 0x72
        __asm _emit 0xF0
        // 0x588C6155: pop edi
        __asm _emit 0x5F
        // 0x588C6156: mov dword ptr [esi + 0x10], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C615D: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588C615F: pop esi
        __asm _emit 0x5E
        // 0x588C6160: pop ebx
        __asm _emit 0x5B
        // 0x588C6161: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588C6164: mov dword ptr [esi + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x588C6167: pop edi
        __asm _emit 0x5F
        // 0x588C6168: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588C616A: pop esi
        __asm _emit 0x5E
        // 0x588C616B: pop ebx
        __asm _emit 0x5B
        // 0x588C616C: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
