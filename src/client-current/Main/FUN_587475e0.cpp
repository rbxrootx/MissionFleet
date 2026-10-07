// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 112 bytes in 1 exact ranges.
// Source symbol alias: FUN_587475e0.

// Ghidra body range 0x587475E0..0x58747650; 112 mapped bytes.
extern "C" __declspec(naked) void FUN_587475e0_segment_00() {
    __asm {
        // 0x587475E0: sub esp, 0x88
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587475E6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587475EB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587475ED: mov dword ptr [esp + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587475F4: mov ecx, dword ptr [esp + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587475FB: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x587475FD: mov byte ptr [esp], al
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x24
        // 0x58747600: mov byte ptr [esp + 2], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58747604: mov al, byte ptr [esp + 0x90]
        __asm _emit 0x8A
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874760B: mov byte ptr [esp + 1], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x02
        // 0x58747610: mov byte ptr [esp + 3], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x07
        // 0x58747615: mov edx, dword ptr [esp]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x24
        // 0x58747618: mov dword ptr [esp + 4], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5874761C: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x5874761E: lea edx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58747622: mov byte ptr [esp + 0xe], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0E
        // 0x58747626: mov ax, word ptr [esp + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874762E: push edx
        __asm _emit 0x52
        // 0x5874762F: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x58747631: mov word ptr [esp + 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58747636: call 0x588e4260
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0xCC
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5874763B: mov ecx, dword ptr [esp + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747642: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58747644: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x55
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58747649: add esp, 0x88
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874764F: ret
        __asm _emit 0xC3
    }
}
