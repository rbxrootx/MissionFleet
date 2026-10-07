// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 109 bytes in 1 exact ranges.
// Source symbol alias: FUN_58747570.

// Ghidra body range 0x58747570..0x587475DD; 109 mapped bytes.
extern "C" __declspec(naked) void FUN_58747570_segment_00() {
    __asm {
        // 0x58747570: sub esp, 0x88
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747576: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5874757B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5874757D: mov dword ptr [esp + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747584: mov dl, byte ptr [esp + 0x94]
        __asm _emit 0x8A
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874758B: mov ecx, dword ptr [esp + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747592: mov eax, 5
        __asm _emit 0xB8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747597: push eax
        __asm _emit 0x50
        // 0x58747598: mov byte ptr [esp + 5], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x5874759C: mov byte ptr [esp + 6], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x06
        // 0x587475A0: mov dl, byte ptr [esp + 0x94]
        __asm _emit 0x8A
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587475A7: mov byte ptr [esp + 7], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x07
        // 0x587475AB: lea eax, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587475AF: mov byte ptr [esp + 0xc], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587475B3: push eax
        __asm _emit 0x50
        // 0x587475B4: mov byte ptr [esp + 8], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x587475B9: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587475BD: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x587475BF: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587475C3: call 0x588e4260
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0xCC
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587475C8: mov ecx, dword ptr [esp + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587475CF: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587475D1: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x56
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587475D6: add esp, 0x88
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587475DC: ret
        __asm _emit 0xC3
    }
}
