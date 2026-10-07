// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 80 bytes in 1 exact ranges.
// Source symbol alias: FUN_5874add0.

// Ghidra body range 0x5874ADD0..0x5874AE20; 80 mapped bytes.
extern "C" __declspec(naked) void FUN_5874add0_segment_00() {
    __asm {
        // 0x5874ADD0: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xA1
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874ADD5: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x5874ADD8: mov edx, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874ADDE: mov al, byte ptr [edx + 4]
        __asm _emit 0x8A
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5874ADE1: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x5874ADE3: cmp al, 8
        __asm _emit 0x3C
        __asm _emit 0x08
        // 0x5874ADE5: je 0x5874aded
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5874ADE7: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874ADEC: ret
        __asm _emit 0xC3
        // 0x5874ADED: mov eax, 0x1c
        __asm _emit 0xB8
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874ADF2: add ecx, 0xefc
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xFC
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874ADF8: cmp dword ptr [ecx], 1
        __asm _emit 0x83
        __asm _emit 0x39
        __asm _emit 0x01
        // 0x5874ADFB: je 0x5874ade7
        __asm _emit 0x74
        __asm _emit 0xEA
        // 0x5874ADFD: inc eax
        __asm _emit 0x40
        // 0x5874ADFE: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5874AE01: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x20
        // 0x5874AE04: jl 0x5874adf8
        __asm _emit 0x7C
        __asm _emit 0xF2
        // 0x5874AE06: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874AE08: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874AE0A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874AE0C: push 0x2714
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874AE11: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5874AE16: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874AE18: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x9F
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5874AE1D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874AE1F: ret
        __asm _emit 0xC3
    }
}
