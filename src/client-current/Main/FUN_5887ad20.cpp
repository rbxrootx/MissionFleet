// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 160 bytes in 1 exact ranges.
// Source symbol alias: FUN_5887ad20.

// Ghidra body range 0x5887AD20..0x5887ADC0; 160 mapped bytes.
extern "C" __declspec(naked) void FUN_5887ad20_segment_00() {
    __asm {
        // 0x5887AD20: push esi
        __asm _emit 0x56
        // 0x5887AD21: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5887AD23: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887AD29: push edi
        __asm _emit 0x57
        // 0x5887AD2A: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5887AD2C: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5887AD2E: jle 0x5887adbd
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887AD34: mov ecx, dword ptr [esi + 0x1b8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887AD3A: dec eax
        __asm _emit 0x48
        // 0x5887AD3B: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887AD41: call 0x58908650
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0xD9
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887AD46: lea eax, [edi + 1]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x01
        // 0x5887AD49: cmp dword ptr [esi + 0x8c], edi
        __asm _emit 0x39
        __asm _emit 0xBE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887AD4F: jne 0x5887ad5c
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x5887AD51: mov ecx, dword ptr [esi + 0x1bc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887AD57: mov dword ptr [ecx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x5887AD5A: jmp 0x5887ad65
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x5887AD5C: mov edx, dword ptr [esi + 0x1bc]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887AD62: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5887AD65: mov edx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887AD6B: mov ecx, dword ptr [esi + 0x1b8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887AD71: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x5887AD74: cmp edx, dword ptr [ecx + 0x88]
        __asm _emit 0x3B
        __asm _emit 0x91
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887AD7A: jge 0x5887ad87
        __asm _emit 0x7D
        __asm _emit 0x0B
        // 0x5887AD7C: mov ecx, dword ptr [esi + 0x1c0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887AD82: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5887AD85: jmp 0x5887ad90
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x5887AD87: mov edx, dword ptr [esi + 0x1c0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887AD8D: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x5887AD90: mov ecx, dword ptr [esi + 0x1b8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887AD96: mov edi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887AD9C: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0xD3
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887ADA1: imul eax, eax, 0x52
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x52
        // 0x5887ADA4: cdq
        __asm _emit 0x99
        // 0x5887ADA5: add edi, -4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0xFC
        // 0x5887ADA8: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5887ADAA: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5887ADAD: lea edx, [eax + ecx + 0x58]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x58
        // 0x5887ADB1: mov ecx, dword ptr [esi + 0x1c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887ADB7: push edx
        __asm _emit 0x52
        // 0x5887ADB8: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887ADBD: pop edi
        __asm _emit 0x5F
        // 0x5887ADBE: pop esi
        __asm _emit 0x5E
        // 0x5887ADBF: ret
        __asm _emit 0xC3
    }
}
