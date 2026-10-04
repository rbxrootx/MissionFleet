// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5890BD90 .. +0x79 bytes.
// Source symbol alias: FUN_5890bd90.
extern "C" __declspec(naked) void FUN_5890bd90() {
    __asm {
        // 0x5890BD90: push ebx
        __asm _emit 0x53
        // 0x5890BD91: push esi
        __asm _emit 0x56
        // 0x5890BD92: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5890BD94: mov eax, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x5890BD97: sub eax, dword ptr [esi + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x5890BD9A: mov ecx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x5C
        // 0x5890BD9D: cdq
        __asm _emit 0x99
        // 0x5890BD9E: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x5890BDA0: mov ebx, dword ptr [0x5898c42c]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x2C
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5890BDA6: push edi
        __asm _emit 0x57
        // 0x5890BDA7: mov edi, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890BDAD: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x5890BDAF: jg 0x5890bdb9
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x5890BDB1: cmp edi, dword ptr [esi + 0x98]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890BDB7: jle 0x5890bdda
        __asm _emit 0x7E
        __asm _emit 0x21
        // 0x5890BDB9: push ecx
        __asm _emit 0x51
        // 0x5890BDBA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890BDBC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5890BDBE: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x70
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890BDC3: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x5890BDC6: sub dword ptr [esi + 0x20], eax
        __asm _emit 0x29
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x5890BDC9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890BDCB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5890BDCD: call 0x589081e0
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0xC4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890BDD2: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5890BDD4: mov dword ptr [esi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890BDDA: mov ecx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x5C
        // 0x5890BDDD: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x5890BDDF: push ecx
        __asm _emit 0x51
        // 0x5890BDE0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890BDE2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5890BDE4: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x70
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890BDE9: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5890BDED: mov edx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x5C
        // 0x5890BDF0: add dword ptr [esi + 0x20], edx
        __asm _emit 0x01
        __asm _emit 0x56
        __asm _emit 0x20
        // 0x5890BDF3: push eax
        __asm _emit 0x50
        // 0x5890BDF4: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5890BDF6: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5890BDFA: push eax
        __asm _emit 0x50
        // 0x5890BDFB: push ecx
        __asm _emit 0x51
        // 0x5890BDFC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5890BDFE: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0xCA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890BE03: pop edi
        __asm _emit 0x5F
        // 0x5890BE04: pop esi
        __asm _emit 0x5E
        // 0x5890BE05: pop ebx
        __asm _emit 0x5B
        // 0x5890BE06: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
