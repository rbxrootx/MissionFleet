// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587D6830 .. +0x59 bytes.
// Source symbol alias: FUN_587d6830.
extern "C" __declspec(naked) void FUN_587d6830() {
    __asm {
        // 0x587D6830: mov dl, byte ptr [esp + 4]
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587D6834: push esi
        __asm _emit 0x56
        // 0x587D6835: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587D6837: mov eax, dword ptr [esi + 0x47c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D683D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D683F: je 0x587d6861
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x587D6841: push ebx
        __asm _emit 0x53
        // 0x587D6842: mov cl, dl
        __asm _emit 0x8A
        __asm _emit 0xCA
        // 0x587D6844: push edi
        __asm _emit 0x57
        // 0x587D6845: mov di, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x587D6849: and cl, 1
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x01
        // 0x587D684C: mov ebx, 0xfffe
        __asm _emit 0xBB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6851: movzx cx, cl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC9
        // 0x587D6855: and di, bx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xFB
        // 0x587D6858: or cx, di
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xCF
        // 0x587D685B: pop edi
        __asm _emit 0x5F
        // 0x587D685C: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587D6860: pop ebx
        __asm _emit 0x5B
        // 0x587D6861: mov eax, dword ptr [esi + 0x480]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6867: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D6869: je 0x587d6885
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x587D686B: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587D686F: and dl, 1
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x01
        // 0x587D6872: mov esi, 0xfffe
        __asm _emit 0xBE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6877: movzx dx, dl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD2
        // 0x587D687B: and cx, si
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCE
        // 0x587D687E: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xCA
        // 0x587D6881: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587D6885: pop esi
        __asm _emit 0x5E
        // 0x587D6886: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
