// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F8070 .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_588f8070() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B E9: mov ebp, ecx
        __asm _emit 0x8b
        __asm _emit 0xe9
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 8D 7D 60: lea edi, [ebp + 0x60]
        __asm _emit 0x8d
        __asm _emit 0x7d
        __asm _emit 0x60
        ; Exact mapped bytes B9 0E 00 00 00: mov ecx, 0xe
        __asm _emit 0xb9
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 0F B6 48 0A: movzx ecx, byte ptr [eax + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x48
        __asm _emit 0x0a
        ; Exact mapped bytes 0F B6 50 0B: movzx edx, byte ptr [eax + 0xb]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x50
        __asm _emit 0x0b
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 CA FC FF FF: call 0x588f7d60
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 75 06: jne 0x588f80a0
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 B8 00 00 00: mov eax, dword ptr [ebp + 0xb8]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FE FF 00 00: mov ecx, 0xfffe
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 B4 00 00 00: mov eax, dword ptr [ebp + 0xb4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 80 7D 69 02: cmp byte ptr [ebp + 0x69], 2
        __asm _emit 0x80
        __asm _emit 0x7d
        __asm _emit 0x69
        __asm _emit 0x02
        ; Exact mapped bytes 75 26: jne 0x588f80e7
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes 8B 85 B4 00 00 00: mov eax, dword ptr [ebp + 0xb4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 8B 85 B8 00 00 00: mov eax, dword ptr [ebp + 0xb8]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 0F B6 85 94 00 00 00: movzx eax, byte ptr [ebp + 0x94]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D B8 00 00 00: mov ecx, dword ptr [ebp + 0xb8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 8B 55 00: mov edx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 1C: mov eax, dword ptr [edx + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x1c
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes B0 01: mov al, 1
        __asm _emit 0xb0
        __asm _emit 0x01
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
