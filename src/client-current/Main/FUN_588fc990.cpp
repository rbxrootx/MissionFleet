// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 145 bytes in 1 exact ranges.
// Source symbol alias: FUN_588fc990.

// Ghidra body range 0x588FC990..0x588FCA21; 145 mapped bytes.
extern "C" __declspec(naked) void FUN_588fc990_segment_00() {
    __asm {
        // 0x588FC990: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x20
        // 0x588FC993: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588FC998: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588FC99A: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588FC99E: mov dx, word ptr [esp + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588FC9A3: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588FC9A5: mov cx, word ptr [eax + 0x90]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC9AC: mov word ptr [esp + 0xe], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0E
        // 0x588FC9B1: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588FC9B5: mov word ptr [esp + 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588FC9BA: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588FC9BE: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FC9C2: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FC9C6: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588FC9C8: mov word ptr [eax + 0x94], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC9CF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC9D1: mov dword ptr [eax + 0x98], 1
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC9DB: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC9E0: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588FC9E4: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x588FC9E6: mov ecx, 0x7d
        __asm _emit 0xB9
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC9EB: mov word ptr [eax + 0x94], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC9F2: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FC9F6: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FC9FC: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588FCA00: push edx
        __asm _emit 0x52
        // 0x588FCA01: push eax
        __asm _emit 0x50
        // 0x588FCA02: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FCA04: push 0x80015104
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x588FCA09: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0x42
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FCA0E: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588FCA12: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588FCA14: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x588FCA16: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FCA1B: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x588FCA1E: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
