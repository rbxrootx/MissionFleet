// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 323 bytes in 2 discontiguous ranges.
// Source symbol alias: FUN_588c6830.

// Ghidra body range 0x588C6830..0x588C6939; 265 mapped bytes.
extern "C" __declspec(naked) void FUN_588c6830_segment_00() {
    __asm {
        // 0x588C6830: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588C6834: push esi
        __asm _emit 0x56
        // 0x588C6835: push edi
        __asm _emit 0x57
        // 0x588C6836: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588C6838: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C683D: cmp eax, 7
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x588C6840: ja 0x588c684e
        __asm _emit 0x77
        __asm _emit 0x0C
        // 0x588C6842: mov dword ptr [esi + 0xa8], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C684C: jmp 0x588c6859
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x588C684E: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x588C6851: jne 0x588c6859
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x588C6853: mov dword ptr [esi + 0xa8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6859: movzx eax, byte ptr [esi + 0x57]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x46
        __asm _emit 0x57
        // 0x588C685D: cmp eax, dword ptr [esp + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588C6861: jl 0x588c696c
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6867: cmp eax, dword ptr [esp + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588C686B: jg 0x588c696c
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0xFB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6871: mov eax, 0x40000000
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588C6876: cmp dword ptr [esi + 0x50], eax
        __asm _emit 0x39
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588C6879: jne 0x588c6975
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C687F: or word ptr [esi + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588C6884: mov dword ptr [esi + 0x9c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C688A: call 0x588c6470
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588C688F: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6895: push 0x5899d8ec
        __asm _emit 0x68
        __asm _emit 0xEC
        __asm _emit 0xD8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588C689A: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0xB4
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588C689F: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C68A5: push 0x5899d8ec
        __asm _emit 0x68
        __asm _emit 0xEC
        __asm _emit 0xD8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588C68AA: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0xB4
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588C68AF: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C68B5: push 0x5899d8ec
        __asm _emit 0x68
        __asm _emit 0xEC
        __asm _emit 0xD8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588C68BA: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0xB4
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588C68BF: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C68C5: push 0x5899d8ec
        __asm _emit 0x68
        __asm _emit 0xEC
        __asm _emit 0xD8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588C68CA: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0xB4
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588C68CF: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C68D5: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588C68D7: jne 0x588c690f
        __asm _emit 0x75
        __asm _emit 0x36
        // 0x588C68D9: mov eax, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C68DF: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C68E4: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588C68E8: mov eax, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C68EE: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588C68F0: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588C68F4: lea ecx, [esi + 0xcc]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C68FA: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C68FF: nop
        __asm _emit 0x90
        // 0x588C6900: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588C6902: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x588C6906: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588C6909: sub edx, edi
        __asm _emit 0x2B
        __asm _emit 0xD7
        // 0x588C690B: jne 0x588c6900
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x588C690D: jmp 0x588c6953
        __asm _emit 0xEB
        __asm _emit 0x44
        // 0x588C690F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C6911: jne 0x588c6953
        __asm _emit 0x75
        __asm _emit 0x40
        // 0x588C6913: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6919: push edi
        __asm _emit 0x57
        // 0x588C691A: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0xAC
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588C691F: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6925: push edi
        __asm _emit 0x57
        // 0x588C6926: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0xAC
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588C692B: lea ecx, [esi + 0xcc]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6931: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6936: push ebx
        __asm _emit 0x53
        // 0x588C6937: jmp 0x588c6940
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x588C6940..0x588C697A; 58 mapped bytes.
extern "C" __declspec(naked) void FUN_588c6830_segment_01() {
    __asm {
        // 0x588C6940: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588C6942: mov ebx, 0xfffe
        __asm _emit 0xBB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6947: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x588C694B: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588C694E: sub edx, edi
        __asm _emit 0x2B
        __asm _emit 0xD7
        // 0x588C6950: jne 0x588c6940
        __asm _emit 0x75
        __asm _emit 0xEE
        // 0x588C6952: pop ebx
        __asm _emit 0x5B
        // 0x588C6953: mov eax, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6959: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x588C695D: mov esi, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6963: or word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x7E
        __asm _emit 0x24
        // 0x588C6967: pop edi
        __asm _emit 0x5F
        // 0x588C6968: pop esi
        __asm _emit 0x5E
        // 0x588C6969: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588C696C: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C6971: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588C6975: pop edi
        __asm _emit 0x5F
        // 0x588C6976: pop esi
        __asm _emit 0x5E
        // 0x588C6977: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
