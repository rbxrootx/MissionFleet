// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B69E0 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_587b69e0() {
    __asm {
        // 0x587B69E0: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B69E4: push ebx
        __asm _emit 0x53
        // 0x587B69E5: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B69E9: push ebp
        __asm _emit 0x55
        // 0x587B69EA: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B69EE: push esi
        __asm _emit 0x56
        // 0x587B69EF: push edi
        __asm _emit 0x57
        // 0x587B69F0: mov edi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587B69F4: push ebp
        __asm _emit 0x55
        // 0x587B69F5: push edi
        __asm _emit 0x57
        // 0x587B69F6: push ebx
        __asm _emit 0x53
        // 0x587B69F7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B69F9: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587B69FD: push eax
        __asm _emit 0x50
        // 0x587B69FE: push ecx
        __asm _emit 0x51
        // 0x587B69FF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B6A01: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0xB2
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587B6A06: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B6A0A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587B6A0C: mov dword ptr [esi + 8], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x587B6A0F: mov dword ptr [esi + 0x6c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x587B6A12: pop edi
        __asm _emit 0x5F
        // 0x587B6A13: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x587B6A16: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x587B6A19: mov dword ptr [esi + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x04
        // 0x587B6A1C: mov word ptr [esi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x26
        // 0x587B6A20: mov dword ptr [esi + 0x68], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x68
        // 0x587B6A23: mov dword ptr [esi], 0x5899a0cc
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xCC
        __asm _emit 0xA0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B6A29: mov dword ptr [esi + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x50
        // 0x587B6A2C: mov dword ptr [esi + 0x64], 2
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6A33: mov dword ptr [esi + 0x58], 0xa
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6A3A: mov dword ptr [esi + 0x5c], 0x384
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x5C
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6A41: mov dword ptr [esi + 0x54], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587B6A48: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587B6A4A: pop esi
        __asm _emit 0x5E
        // 0x587B6A4B: pop ebp
        __asm _emit 0x5D
        // 0x587B6A4C: pop ebx
        __asm _emit 0x5B
        // 0x587B6A4D: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
