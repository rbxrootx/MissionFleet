// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58894A60 .. +0xD2 bytes.
extern "C" __declspec(naked) void FUN_58894a60() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 86 84 01 00 00: mov eax, dword ptr [esi + 0x184]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 46 74 00 00 00 40: mov dword ptr [esi + 0x74], 0x40000000
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes C7 40 50 00 00 00 00: mov dword ptr [eax + 0x50], 0
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 84 01 00 00: mov eax, dword ptr [esi + 0x184]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FD FF 00 00: mov ecx, 0xfffd
        __asm _emit 0xb9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 68 00 00 22 00: push 0x220000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x22
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 CE ED FF FF: call 0x58893860
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 80 01 00 00: mov eax, dword ptr [esi + 0x180]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 74 01 00 00 01 00 00 00: mov dword ptr [esi + 0x174], 1
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 78 01 00 00 00 00 00 00: mov dword ptr [esi + 0x178], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA FE FF 00 00: mov edx, 0xfffe
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 84 01 00 00: mov eax, dword ptr [esi + 0x184]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D 20 85 A2 58: mov ecx, dword ptr [0x58a28520]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 41 20: mov eax, dword ptr [ecx + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x20
        ; Exact mapped bytes 2B 41 18: sub eax, dword ptr [ecx + 0x18]
        __asm _emit 0x2b
        __asm _emit 0x41
        __asm _emit 0x18
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 89 56 50: mov dword ptr [esi + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x50
        ; Exact mapped bytes 83 C0 0A: add eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x0a
        ; Exact mapped bytes 89 46 54: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        ; Exact mapped bytes A1 20 85 A2 58: mov eax, dword ptr [0x58a28520]
        __asm _emit 0xa1
        __asm _emit 0x20
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 48 20: mov ecx, dword ptr [eax + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x20
        ; Exact mapped bytes 2B 48 18: sub ecx, dword ptr [eax + 0x18]
        __asm _emit 0x2b
        __asm _emit 0x48
        __asm _emit 0x18
        ; Exact mapped bytes 8B 50 1C: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x1c
        ; Exact mapped bytes 2B 50 14: sub edx, dword ptr [eax + 0x14]
        __asm _emit 0x2b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 AC 1C F2 FF: call 0x587b67a0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x1c
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes B9 FF E4 00 00: mov ecx, 0xe4ff
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        ; Exact mapped bytes BA 00 04 00 00: mov edx, 0x400
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes B8 FD FF 00 00: mov eax, 0xfffd
        __asm _emit 0xb8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 4E 24 05: or word ptr [esi + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x05
        ; Exact mapped bytes 8B 8E 00 05 00 00: mov ecx, dword ptr [esi + 0x500]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
