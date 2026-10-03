// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5890BCA0 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_5890bca0() {
    __asm {
        // 0x5890BCA0: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5890BCA4: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5890BCA8: push esi
        __asm _emit 0x56
        // 0x5890BCA9: push edi
        __asm _emit 0x57
        // 0x5890BCAA: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5890BCAC: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5890BCB0: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5890BCB2: push edi
        __asm _emit 0x57
        // 0x5890BCB3: push eax
        __asm _emit 0x50
        // 0x5890BCB4: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5890BCB8: push ecx
        __asm _emit 0x51
        // 0x5890BCB9: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5890BCBD: push edx
        __asm _emit 0x52
        // 0x5890BCBE: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5890BCC2: push eax
        __asm _emit 0x50
        // 0x5890BCC3: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5890BCC7: push ecx
        __asm _emit 0x51
        // 0x5890BCC8: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5890BCCC: push edx
        __asm _emit 0x52
        // 0x5890BCCD: push eax
        __asm _emit 0x50
        // 0x5890BCCE: push edi
        __asm _emit 0x57
        // 0x5890BCCF: push ecx
        __asm _emit 0x51
        // 0x5890BCD0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5890BCD2: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x75
        __asm _emit 0xE2
        __asm _emit 0xFF
        // 0x5890BCD7: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x5890BCDA: push edi
        __asm _emit 0x57
        // 0x5890BCDB: push 0x589a2b5c
        __asm _emit 0x68
        __asm _emit 0x5C
        __asm _emit 0x2B
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5890BCE0: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890BCE5: push edx
        __asm _emit 0x52
        // 0x5890BCE6: mov dword ptr [esi], 0x589a2b3c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x3C
        __asm _emit 0x2B
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5890BCEC: mov dword ptr [esi + 0x70], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x70
        // 0x5890BCEF: mov dword ptr [esi + 0x74], 0x7fffffff
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x74
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5890BCF6: mov dword ptr [esi + 0x54], 2
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890BCFD: mov dword ptr [esi + 0x7c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x7C
        // 0x5890BD00: mov dword ptr [esi + 0x80], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890BD06: mov dword ptr [esi + 0x78], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x78
        // 0x5890BD09: mov dword ptr [esi + 0x84], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890BD13: mov dword ptr [esi + 0x88], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890BD19: mov dword ptr [esi + 0x8c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890BD1F: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0xFD
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x5890BD24: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5890BD27: pop edi
        __asm _emit 0x5F
        // 0x5890BD28: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5890BD2A: pop esi
        __asm _emit 0x5E
        // 0x5890BD2B: ret 0x20
        __asm _emit 0xC2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
