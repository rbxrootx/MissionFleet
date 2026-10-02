// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885AD58 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_5885ad58() {
    __asm {
        // 0x5885AD58: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x5885AD5A: push 0x588ed260
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0xD2
        __asm _emit 0x8E
        __asm _emit 0x58
        // 0x5885AD5F: call 0x58832760
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x79
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5885AD64: mov esi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5885AD67: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5885AD69: jne 0x5885ad80
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x5885AD6B: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885AD70: mov dword ptr [eax], 0x16
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885AD76: call 0x58850fab
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x62
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885AD7B: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5885AD7E: jmp 0x5885adad
        __asm _emit 0xEB
        __asm _emit 0x2D
        // 0x5885AD80: or dword ptr [ebp - 0x1c], 0xffffffff
        __asm _emit 0x83
        __asm _emit 0x4D
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x5885AD84: push esi
        __asm _emit 0x56
        // 0x5885AD85: call 0x58859d02
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885AD8A: pop ecx
        __asm _emit 0x59
        // 0x5885AD8B: and dword ptr [ebp - 4], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xFC
        __asm _emit 0x00
        // 0x5885AD8F: push esi
        __asm _emit 0x56
        // 0x5885AD90: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885AD93: call 0x5885ac64
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885AD98: pop ecx
        __asm _emit 0x59
        // 0x5885AD99: pop ecx
        __asm _emit 0x59
        // 0x5885AD9A: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5885AD9C: mov dword ptr [ebp - 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xE4
        // 0x5885AD9F: mov dword ptr [ebp - 4], 0xfffffffe
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885ADA6: call 0x5885adc3
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885ADAB: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5885ADAD: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF0
        // 0x5885ADB0: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885ADB7: pop ecx
        __asm _emit 0x59
        // 0x5885ADB8: pop edi
        __asm _emit 0x5F
        // 0x5885ADB9: pop esi
        __asm _emit 0x5E
        // 0x5885ADBA: pop ebx
        __asm _emit 0x5B
        // 0x5885ADBB: leave
        __asm _emit 0xC9
        // 0x5885ADBC: ret
        __asm _emit 0xC3
    }
}
