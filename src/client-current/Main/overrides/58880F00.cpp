// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880F00 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_58880f00_segment_00() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B 74 24 08: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 8B 46 24: mov eax, dword ptr [esi + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B F9: mov edi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 09 7C EF FF: call 0x58778b20
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x7c
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8A 91 54 0D 00 00: mov dl, byte ptr [ecx + 0xd54]
        __asm _emit 0x8a
        __asm _emit 0x91
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 E2 0F: and dl, 0xf
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0x0f
        ; Exact mapped bytes 3A 90 5C 03 00 00: cmp dl, byte ptr [eax + 0x35c]
        __asm _emit 0x3a
        __asm _emit 0x90
        __asm _emit 0x5c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 1D: jne 0x58880f4b
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 00: mov eax, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 51 F1 F5 FF: call 0x587e0090
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xf1
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 AA FE FF FF: call 0x58880df0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E B8 00 00 00: lea ecx, [esi + 0xb8]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 12 2F 07 00: call 0x588f3e70
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x2f
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 8B FE FF FF: call 0x58880df0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
