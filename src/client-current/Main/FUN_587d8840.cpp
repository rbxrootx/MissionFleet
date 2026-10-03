// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587D8840 .. +0x1A7 bytes.
extern "C" __declspec(naked) void FUN_587d8840() {
    __asm {
        // 0x587D8840: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x587D8843: push esi
        __asm _emit 0x56
        // 0x587D8844: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587D8846: mov eax, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D884C: mov ecx, dword ptr [eax + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x48
        // 0x587D884F: movsx eax, word ptr [esi + 0xe22]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x86
        __asm _emit 0x22
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8856: shr ecx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x0A
        // 0x587D8859: movzx edx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD1
        // 0x587D885C: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587D885E: jne 0x587d89e2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8864: lea ecx, [esi + 0xf2c]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x2C
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D886A: push ebx
        __asm _emit 0x53
        // 0x587D886B: mov dword ptr [esp + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587D886F: mov eax, 0xfffffc98
        __asm _emit 0xB8
        __asm _emit 0x98
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D8874: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x587D8876: mov ecx, 0xfffff1d8
        __asm _emit 0xB9
        __asm _emit 0xD8
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D887B: push ebp
        __asm _emit 0x55
        // 0x587D887C: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587D887E: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x587D8880: push edi
        __asm _emit 0x57
        // 0x587D8881: lea edi, [esi + 0xe28]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x28
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8887: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D888B: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D888F: jmp 0x587d8895
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587D8891: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D8895: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587D8897: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587D8899: je 0x587d89cd
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x2E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D889F: cmp byte ptr [ecx], 0xd
        __asm _emit 0x80
        __asm _emit 0x39
        __asm _emit 0x0D
        // 0x587D88A2: jne 0x587d8932
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D88A8: mov edx, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D88AE: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x587D88B0: mov ebp, 0xaa
        __asm _emit 0xBD
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D88B5: xor bp, word ptr [eax + edx]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x2C
        __asm _emit 0x10
        // 0x587D88B9: mov ax, word ptr [edi + 0x80]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D88C0: sub ax, bp
        __asm _emit 0x66
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x587D88C3: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x587D88C6: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D88C9: je 0x587d88e7
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x587D88CB: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x587D88CD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D88CF: push eax
        __asm _emit 0x50
        // 0x587D88D0: push ecx
        __asm _emit 0x51
        // 0x587D88D1: movzx ecx, word ptr [esi + 0xe22]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x22
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D88D8: push ebx
        __asm _emit 0x53
        // 0x587D88D9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D88DB: push ecx
        __asm _emit 0x51
        // 0x587D88DC: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D88E2: call 0x587b98b0
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x0F
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587D88E7: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D88EB: mov eax, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D88F1: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xD7
        // 0x587D88F3: mov ecx, 0xaa
        __asm _emit 0xB9
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D88F8: xor cx, word ptr [edx + eax + 0xac2]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x8C
        __asm _emit 0x02
        __asm _emit 0xC2
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8900: mov dx, word ptr [edi + 0x82]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8907: sub dx, cx
        __asm _emit 0x66
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x587D890A: movzx eax, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC2
        // 0x587D890D: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D8910: je 0x587d89cd
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8916: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D891A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587D891C: mov ecx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x0A
        // 0x587D891E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D8920: push eax
        __asm _emit 0x50
        // 0x587D8921: movzx eax, word ptr [esi + 0xe22]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x22
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8928: push ecx
        __asm _emit 0x51
        // 0x587D8929: push ebx
        __asm _emit 0x53
        // 0x587D892A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D892C: push eax
        __asm _emit 0x50
        // 0x587D892D: jmp 0x587d89c2
        __asm _emit 0xE9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8932: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D8936: mov ecx, dword ptr [ecx - 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0xFC
        // 0x587D8939: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587D893B: je 0x587d897c
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x587D893D: mov edx, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8943: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x587D8945: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x587D8947: mov ebp, 0xaa
        __asm _emit 0xBD
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D894C: xor bp, word ptr [eax + edx]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x2C
        __asm _emit 0x10
        // 0x587D8950: mov ax, word ptr [edi + 0x80]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8957: sub ax, bp
        __asm _emit 0x66
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x587D895A: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x587D895D: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D8960: je 0x587d897c
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x587D8962: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D8964: push eax
        __asm _emit 0x50
        // 0x587D8965: push ecx
        __asm _emit 0x51
        // 0x587D8966: movzx ecx, word ptr [esi + 0xe22]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x22
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D896D: push ebx
        __asm _emit 0x53
        // 0x587D896E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D8970: push ecx
        __asm _emit 0x51
        // 0x587D8971: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D8977: call 0x587b98b0
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x0F
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587D897C: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D8980: mov ecx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x0A
        // 0x587D8982: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587D8984: je 0x587d89cd
        __asm _emit 0x74
        __asm _emit 0x47
        // 0x587D8986: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D898A: mov edx, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8990: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x587D8992: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x587D8994: mov ebp, 0xaa
        __asm _emit 0xBD
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8999: xor bp, word ptr [eax + edx + 0xac2]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xAC
        __asm _emit 0x10
        __asm _emit 0xC2
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D89A1: mov ax, word ptr [edi + 0x82]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D89A8: sub ax, bp
        __asm _emit 0x66
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x587D89AB: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x587D89AE: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D89B1: je 0x587d89cd
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x587D89B3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D89B5: push eax
        __asm _emit 0x50
        // 0x587D89B6: push ecx
        __asm _emit 0x51
        // 0x587D89B7: movzx ecx, word ptr [esi + 0xe22]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x22
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D89BE: push ebx
        __asm _emit 0x53
        // 0x587D89BF: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D89C1: push ecx
        __asm _emit 0x51
        // 0x587D89C2: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D89C8: call 0x587b98b0
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0x0E
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587D89CD: add dword ptr [esp + 0x10], 8
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x08
        // 0x587D89D2: inc ebx
        __asm _emit 0x43
        // 0x587D89D3: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587D89D6: cmp ebx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x20
        // 0x587D89D9: jl 0x587d8891
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xB2
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D89DF: pop edi
        __asm _emit 0x5F
        // 0x587D89E0: pop ebp
        __asm _emit 0x5D
        // 0x587D89E1: pop ebx
        __asm _emit 0x5B
        // 0x587D89E2: pop esi
        __asm _emit 0x5E
        // 0x587D89E3: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587D89E6: ret
        __asm _emit 0xC3
    }
}
