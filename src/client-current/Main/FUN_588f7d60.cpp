// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F7D60 .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_588f7d60() {
    __asm {
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B 5C 24 08: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 8B 50 24: mov edx, dword ptr [eax + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 75 05: jne 0x588f7d79
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 10: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 88 5E 6B: mov byte ptr [esi + 0x6b], bl
        __asm _emit 0x88
        __asm _emit 0x5e
        __asm _emit 0x6b
        ; Exact mapped bytes 83 F8 FF: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 74 03: je 0x588f7d88
        __asm _emit 0x74
        __asm _emit 0x03
        ; Exact mapped bytes 88 46 6A: mov byte ptr [esi + 0x6a], al
        __asm _emit 0x88
        __asm _emit 0x46
        __asm _emit 0x6a
        ; Exact mapped bytes 4B: dec ebx
        __asm _emit 0x4b
        ; Exact mapped bytes B8 AB AA AA 2A: mov eax, 0x2aaaaaab
        __asm _emit 0xb8
        __asm _emit 0xab
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0x2a
        ; Exact mapped bytes F7 EB: imul ebx
        __asm _emit 0xf7
        __asm _emit 0xeb
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 8B 56 30: mov edx, dword ptr [esi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x30
        ; Exact mapped bytes 8D 0C 40: lea ecx, [eax + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x40
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B F9: mov edi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf9
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes 2B CF: sub ecx, edi
        __asm _emit 0x2b
        __asm _emit 0xcf
        ; Exact mapped bytes 6B C9 47: imul ecx, ecx, 0x47
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x47
        ; Exact mapped bytes 03 4A 04: add ecx, dword ptr [edx + 4]
        __asm _emit 0x03
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes 8B 52 08: mov edx, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 74 05: je 0x588f7db9
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 6B C0 53: imul eax, eax, 0x53
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x53
        ; Exact mapped bytes 03 D0: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xd0
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 CE B4 00 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 56 6A: movzx edx, byte ptr [esi + 0x6a]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x56
        __asm _emit 0x6a
        ; Exact mapped bytes A1 F0 45 A2 58: mov eax, dword ptr [0x58a245f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 90 90 00 00 00: cmp dword ptr [eax + 0x90], edx
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x588f7ddc
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes B9 FE FF 00 00: mov ecx, 0xfffe
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes B0 01: mov al, 1
        __asm _emit 0xb0
        __asm _emit 0x01
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
