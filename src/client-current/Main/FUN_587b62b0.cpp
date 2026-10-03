// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B62B0 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_587b62b0() {
    __asm {
        // 0x587B62B0: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B62B4: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B62B8: push ebx
        __asm _emit 0x53
        // 0x587B62B9: mov ebx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B62BD: push esi
        __asm _emit 0x56
        // 0x587B62BE: push edi
        __asm _emit 0x57
        // 0x587B62BF: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B62C3: push eax
        __asm _emit 0x50
        // 0x587B62C4: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B62C8: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B62CA: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587B62CE: push ecx
        __asm _emit 0x51
        // 0x587B62CF: push edx
        __asm _emit 0x52
        // 0x587B62D0: push edi
        __asm _emit 0x57
        // 0x587B62D1: push ebx
        __asm _emit 0x53
        // 0x587B62D2: push eax
        __asm _emit 0x50
        // 0x587B62D3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B62D5: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0xCE
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587B62DA: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B62E0: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587B62E5: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x587B62E8: imul edx, edx, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B62EE: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B62F3: mov dword ptr [esi + 0x60], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587B62F6: mov dword ptr [esi + 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x587B62F9: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587B62FC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587B62FE: mov dword ptr [esi + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x587B6301: mov dword ptr [esi + 0x70], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x70
        // 0x587B6304: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x587B6307: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x587B630A: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x587B630D: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x587B6310: pop edi
        __asm _emit 0x5F
        // 0x587B6311: mov dword ptr [esi + 0x6c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x6C
        // 0x587B6314: mov dword ptr [esi], 0x5899a090
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x90
        __asm _emit 0xA0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B631A: mov dword ptr [esi + 0x68], 2
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6321: mov dword ptr [esi + 0x58], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x58
        // 0x587B6324: mov dword ptr [esi + 0x7c], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x587B6327: mov dword ptr [esi + 0x80], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B632D: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587B632F: pop esi
        __asm _emit 0x5E
        // 0x587B6330: pop ebx
        __asm _emit 0x5B
        // 0x587B6331: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
