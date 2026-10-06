// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588958C0 .. +0x1B0 bytes.
// Source symbol alias: FUN_588958c0.
extern "C" __declspec(naked) void FUN_588958c0() {
    __asm {
        // 0x588958C0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588958C4: push esi
        __asm _emit 0x56
        // 0x588958C5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588958C7: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588958C9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588958CB: setl cl
        __asm _emit 0x0F
        __asm _emit 0x9C
        __asm _emit 0xC1
        // 0x588958CE: dec ecx
        __asm _emit 0x49
        // 0x588958CF: and eax, ecx
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588958D1: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588958D4: push eax
        __asm _emit 0x50
        // 0x588958D5: mov dword ptr [esi + 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588958DB: call 0x5877e740
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x8E
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588958E0: mov edx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588958E6: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588958EC: push edx
        __asm _emit 0x52
        // 0x588958ED: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x1A
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588958F2: mov eax, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588958F8: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588958FE: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58895900: jle 0x58895905
        __asm _emit 0x7E
        __asm _emit 0x03
        // 0x58895902: push ecx
        __asm _emit 0x51
        // 0x58895903: jmp 0x58895906
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x58895905: push eax
        __asm _emit 0x50
        // 0x58895906: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x58895909: call 0x5877e740
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0x8E
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5889590E: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895914: cmp eax, dword ptr [esi + 0xb8]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889591A: jle 0x58895981
        __asm _emit 0x7E
        __asm _emit 0x65
        // 0x5889591C: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58895921: cmp dword ptr [eax + 0x164], 0x21c
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889592B: jle 0x58895944
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5889592D: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895934: je 0x58895944
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58895936: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889593C: mov eax, dword ptr [eax + 0x870]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x70
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895942: jmp 0x58895946
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58895944: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58895946: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58895949: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5889594C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889594E: je 0x58895a47
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895954: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58895957: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5889595A: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5889595D: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58895960: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58895963: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58895965: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58895968: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5889596A: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5889596D: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58895970: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58895973: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58895976: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58895979: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5889597C: jmp 0x58895a47
        __asm _emit 0xE9
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895981: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895987: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58895989: jle 0x588959bf
        __asm _emit 0x7E
        __asm _emit 0x34
        // 0x5889598B: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58895990: cmp dword ptr [eax + 0x164], 0x9b1
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xB1
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889599A: jle 0x588959f8
        __asm _emit 0x7E
        __asm _emit 0x5C
        // 0x5889599C: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588959A3: je 0x588959f8
        __asm _emit 0x74
        __asm _emit 0x53
        // 0x588959A5: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588959AB: mov eax, dword ptr [ecx + 0x26c4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588959B1: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588959B4: push eax
        __asm _emit 0x50
        // 0x588959B5: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0xBD
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588959BA: jmp 0x58895a47
        __asm _emit 0xE9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588959BF: cmp eax, dword ptr [esi + 0xc0]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588959C5: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588959CA: jle 0x58895a05
        __asm _emit 0x7E
        __asm _emit 0x39
        // 0x588959CC: cmp dword ptr [eax + 0x164], 0x9b2
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xB2
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588959D6: jle 0x588959f8
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x588959D8: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588959DF: je 0x588959f8
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x588959E1: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588959E7: mov eax, dword ptr [edx + 0x26c8]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xC8
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588959ED: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588959F0: push eax
        __asm _emit 0x50
        // 0x588959F1: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0xBC
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588959F6: jmp 0x58895a47
        __asm _emit 0xEB
        __asm _emit 0x4F
        // 0x588959F8: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588959FB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588959FD: push eax
        __asm _emit 0x50
        // 0x588959FE: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0xBC
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x58895A03: jmp 0x58895a47
        __asm _emit 0xEB
        __asm _emit 0x42
        // 0x58895A05: cmp dword ptr [eax + 0x164], 0x9b3
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xB3
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895A0F: jle 0x58895a28
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58895A11: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895A18: je 0x58895a28
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58895A1A: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895A20: mov eax, dword ptr [eax + 0x26cc]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xCC
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895A26: jmp 0x58895a2a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58895A28: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58895A2A: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58895A2D: push eax
        __asm _emit 0x50
        // 0x58895A2E: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0xBC
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x58895A33: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58895A39: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58895A3B: push 0x82
        __asm _emit 0x68
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895A40: push 0x21
        __asm _emit 0x6A
        __asm _emit 0x21
        // 0x58895A42: call 0x588ec100
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58895A47: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895A4D: cmp eax, dword ptr [esi + 0xc0]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895A53: pop esi
        __asm _emit 0x5E
        // 0x58895A54: jg 0x58895a5a
        __asm _emit 0x7F
        __asm _emit 0x04
        // 0x58895A56: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58895A58: jg 0x58895a6d
        __asm _emit 0x7F
        __asm _emit 0x13
        // 0x58895A5A: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58895A60: mov dword ptr [esp + 4], 0x21
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895A68: jmp 0x588ec080
        __asm _emit 0xE9
        __asm _emit 0x13
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58895A6D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
