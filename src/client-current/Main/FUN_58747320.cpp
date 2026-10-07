// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 186 bytes in 1 exact ranges.
// Source symbol alias: FUN_58747320.

// Ghidra body range 0x58747320..0x587473DA; 186 mapped bytes.
extern "C" __declspec(naked) void FUN_58747320_segment_00() {
    __asm {
        // 0x58747320: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58747324: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58747326: push esi
        __asm _emit 0x56
        // 0x58747327: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5874732B: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5874732D: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5874732F: jne 0x58747342
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x58747331: push edi
        __asm _emit 0x57
        // 0x58747332: mov edi, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x7A
        __asm _emit 0x04
        // 0x58747335: cmp edi, dword ptr [esi + 4]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x58747338: pop edi
        __asm _emit 0x5F
        // 0x58747339: jne 0x58747342
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5874733B: mov eax, 0x2710
        __asm _emit 0xB8
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747340: pop esi
        __asm _emit 0x5E
        // 0x58747341: ret
        __asm _emit 0xC3
        // 0x58747342: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58747344: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x58747347: sub ecx, dword ptr [esi + 4]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5874734A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874734C: jle 0x58747385
        __asm _emit 0x7E
        __asm _emit 0x37
        // 0x5874734E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58747350: jle 0x58747360
        __asm _emit 0x7E
        __asm _emit 0x0E
        // 0x58747352: pop esi
        __asm _emit 0x5E
        // 0x58747353: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58747357: mov dword ptr [esp + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5874735B: jmp 0x587a0740
        __asm _emit 0xE9
        __asm _emit 0xE0
        __asm _emit 0x93
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58747360: jne 0x58747369
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x58747362: mov eax, 0x384
        __asm _emit 0xB8
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747367: pop esi
        __asm _emit 0x5E
        // 0x58747368: ret
        __asm _emit 0xC3
        // 0x58747369: push eax
        __asm _emit 0x50
        // 0x5874736A: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5874736C: cdq
        __asm _emit 0x99
        // 0x5874736D: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x5874736F: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58747371: push eax
        __asm _emit 0x50
        // 0x58747372: call 0x587a0740
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x93
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58747377: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5874737A: mov ecx, 0x708
        __asm _emit 0xB9
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874737F: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58747381: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58747383: pop esi
        __asm _emit 0x5E
        // 0x58747384: ret
        __asm _emit 0xC3
        // 0x58747385: jge 0x587473cb
        __asm _emit 0x7D
        __asm _emit 0x44
        // 0x58747387: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58747389: jge 0x587473a8
        __asm _emit 0x7D
        __asm _emit 0x1D
        // 0x5874738B: cdq
        __asm _emit 0x99
        // 0x5874738C: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x5874738E: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58747390: push eax
        __asm _emit 0x50
        // 0x58747391: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58747393: cdq
        __asm _emit 0x99
        // 0x58747394: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58747396: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58747398: push eax
        __asm _emit 0x50
        // 0x58747399: call 0x587a0740
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0x93
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x5874739E: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587473A1: add eax, 0x708
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587473A6: pop esi
        __asm _emit 0x5E
        // 0x587473A7: ret
        __asm _emit 0xC3
        // 0x587473A8: jne 0x587473b1
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587473AA: mov eax, 0xa8c
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587473AF: pop esi
        __asm _emit 0x5E
        // 0x587473B0: ret
        __asm _emit 0xC3
        // 0x587473B1: cdq
        __asm _emit 0x99
        // 0x587473B2: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587473B4: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587473B6: push eax
        __asm _emit 0x50
        // 0x587473B7: push ecx
        __asm _emit 0x51
        // 0x587473B8: call 0x587a0740
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0x93
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x587473BD: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587473C0: mov edx, 0xe10
        __asm _emit 0xBA
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587473C5: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587473C7: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587473C9: pop esi
        __asm _emit 0x5E
        // 0x587473CA: ret
        __asm _emit 0xC3
        // 0x587473CB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587473CD: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587473CF: setge al
        __asm _emit 0x0F
        __asm _emit 0x9D
        __asm _emit 0xC0
        // 0x587473D2: pop esi
        __asm _emit 0x5E
        // 0x587473D3: dec eax
        __asm _emit 0x48
        // 0x587473D4: and eax, 0x708
        __asm _emit 0x25
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587473D9: ret
        __asm _emit 0xC3
    }
}
