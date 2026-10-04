// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F5120 .. +0x55 bytes.
// Source symbol alias: FUN_588f5120.
extern "C" __declspec(naked) void FUN_588f5120() {
    __asm {
        // 0x588F5120: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588F5124: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588F5126: je 0x588f5172
        __asm _emit 0x74
        __asm _emit 0x4A
        // 0x588F5128: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x588F512B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F512D: je 0x588f5172
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x588F512F: nop
        __asm _emit 0x90
        // 0x588F5130: cmp dword ptr [eax + 0xc], edx
        __asm _emit 0x39
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x588F5133: je 0x588f513f
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588F5135: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x588F5138: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F513A: jne 0x588f5130
        __asm _emit 0x75
        __asm _emit 0xF4
        // 0x588F513C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F513F: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588F5142: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588F5144: je 0x588f5150
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588F5146: push esi
        __asm _emit 0x56
        // 0x588F5147: mov esi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x08
        // 0x588F514A: mov dword ptr [edx + 8], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x08
        // 0x588F514D: pop esi
        __asm _emit 0x5E
        // 0x588F514E: jmp 0x588f5156
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x588F5150: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588F5153: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588F5156: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588F5159: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588F515B: je 0x588f5169
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588F515D: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x588F5160: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588F5163: dec dword ptr [ecx + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x49
        __asm _emit 0x0C
        // 0x588F5166: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F5169: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588F516C: dec dword ptr [ecx + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x49
        __asm _emit 0x0C
        // 0x588F516F: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588F5172: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
