// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58762A60 .. +0xF5 bytes.
// Source symbol alias: FUN_58762a60.
extern "C" __declspec(naked) void FUN_58762a60() {
    __asm {
        // 0x58762A60: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58762A64: push esi
        __asm _emit 0x56
        // 0x58762A65: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58762A67: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58762A6B: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58762A6D: push ecx
        __asm _emit 0x51
        // 0x58762A6E: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58762A71: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58762A73: mov dword ptr [esi + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58762A76: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762A7C: push edx
        __asm _emit 0x52
        // 0x58762A7D: mov dword ptr [esi + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x50
        // 0x58762A80: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x58762A83: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58762A88: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58762A8B: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58762A8E: push eax
        __asm _emit 0x50
        // 0x58762A8F: push ecx
        __asm _emit 0x51
        // 0x58762A90: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762A96: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x07
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58762A9B: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58762A9E: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58762AA1: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762AA7: add edx, 6
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x06
        // 0x58762AAA: push edx
        __asm _emit 0x52
        // 0x58762AAB: add eax, 0x38
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x38
        // 0x58762AAE: push eax
        __asm _emit 0x50
        // 0x58762AAF: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x07
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58762AB4: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58762AB7: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58762ABA: add ecx, 0x42
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x42
        // 0x58762ABD: push ecx
        __asm _emit 0x51
        // 0x58762ABE: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x58762AC1: add edx, 0x50
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x50
        // 0x58762AC4: push edx
        __asm _emit 0x52
        // 0x58762AC5: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x07
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58762ACA: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58762ACD: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58762AD0: add eax, 0x5a
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x5A
        // 0x58762AD3: add ecx, 0x50
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x50
        // 0x58762AD6: push eax
        __asm _emit 0x50
        // 0x58762AD7: push ecx
        __asm _emit 0x51
        // 0x58762AD8: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58762ADB: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x07
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58762AE0: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58762AE3: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58762AE6: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58762AE9: add edx, 0x74
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x74
        // 0x58762AEC: push edx
        __asm _emit 0x52
        // 0x58762AED: add eax, 0x50
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x50
        // 0x58762AF0: push eax
        __asm _emit 0x50
        // 0x58762AF1: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x07
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58762AF6: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58762AF9: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58762AFC: add ecx, 0x82
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762B02: push ecx
        __asm _emit 0x51
        // 0x58762B03: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762B09: add edx, 0xb6
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xB6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762B0F: push edx
        __asm _emit 0x52
        // 0x58762B10: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x07
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58762B15: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58762B18: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58762B1B: add eax, 0x82
        __asm _emit 0x05
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762B20: add ecx, 0x106
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762B26: push eax
        __asm _emit 0x50
        // 0x58762B27: push ecx
        __asm _emit 0x51
        // 0x58762B28: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762B2E: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0x07
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58762B33: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58762B36: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58762B39: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762B3F: add edx, 0x82
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762B45: push edx
        __asm _emit 0x52
        // 0x58762B46: add eax, 0xf0
        __asm _emit 0x05
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762B4B: push eax
        __asm _emit 0x50
        // 0x58762B4C: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x07
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58762B51: pop esi
        __asm _emit 0x5E
        // 0x58762B52: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
