// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 126 bytes in 1 exact ranges.
// Source symbol alias: FUN_587474f0.

// Ghidra body range 0x587474F0..0x5874756E; 126 mapped bytes.
extern "C" __declspec(naked) void FUN_587474f0_segment_00() {
    __asm {
        // 0x587474F0: sub esp, 0x88
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587474F6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587474FB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587474FD: mov dword ptr [esp + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747504: mov ecx, dword ptr [esp + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874750B: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x5874750D: mov byte ptr [esp], al
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x24
        // 0x58747510: mov byte ptr [esp + 1], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58747514: mov al, byte ptr [esp + 0x90]
        __asm _emit 0x8A
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874751B: mov byte ptr [esp + 0xc], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5874751F: mov ax, word ptr [esp + 0x94]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747527: mov word ptr [esp + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5874752C: push 9
        __asm _emit 0x6A
        __asm _emit 0x09
        // 0x5874752E: mov byte ptr [esp + 6], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58747533: mov byte ptr [esp + 7], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x07
        __asm _emit 0x09
        // 0x58747538: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5874753C: lea eax, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58747540: mov dword ptr [esp + 8], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58747544: mov dx, word ptr [esp + 0x9c]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874754C: push eax
        __asm _emit 0x50
        // 0x5874754D: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x5874754F: mov word ptr [esp + 0x16], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x16
        // 0x58747554: call 0x588e4260
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0xCD
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58747559: mov ecx, dword ptr [esp + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747560: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58747562: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x56
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58747567: add esp, 0x88
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874756D: ret
        __asm _emit 0xC3
    }
}
