// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 348 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D0940 .. +0x15C bytes.
extern "C" __declspec(naked) void FUN_587d0940_segment_00() {
    __asm {
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
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
        ; Exact mapped bytes 8B 8E 78 07 00 00: mov ecx, dword ptr [esi + 0x778]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 A9 8C FB FF: call 0x58789620
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x8c
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E F4 09 00 00: mov ecx, dword ptr [esi + 0x9f4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 51 08: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 68 B0 04 00 00: push 0x4b0
        __asm _emit 0x68
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 15 5E FE FF: call 0x587b67a0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8D BE 10 05 00 00: lea edi, [esi + 0x510]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BB 19 00 00 00: mov ebx, 0x19
        __asm _emit 0xbb
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 40 23 13 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x23
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 EB 01: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xeb
        __asm _emit 0x01
        ; Exact mapped bytes 75 F0: jne 0x587d0998
        __asm _emit 0x75
        __asm _emit 0xf0
        ; Exact mapped bytes 68 00 01 00 00: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 2C 23 13 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x23
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE FC 00 00 00 64: cmp dword ptr [esi + 0xfc], 0x64
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x64
        ; Exact mapped bytes 89 6E 58: mov dword ptr [esi + 0x58], ebp
        __asm _emit 0x89
        __asm _emit 0x6e
        __asm _emit 0x58
        ; Exact mapped bytes BF 00 00 00 40: mov edi, 0x40000000
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 75 19: jne 0x587d09de
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 8B 86 08 05 00 00: mov eax, dword ptr [esi + 0x508]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 28 00 01 00 00: mov dword ptr [eax + 0x28], 0x100
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 A8 84 00 00 00: mov dword ptr [eax + 0x84], ebp
        __asm _emit 0x89
        __asm _emit 0xa8
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 B8 8C 00 00 00: mov dword ptr [eax + 0x8c], edi
        __asm _emit 0x89
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C8 FF: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xff
        ; Exact mapped bytes 89 86 88 00 00 00: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 8C 00 00 00: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 98 00 00 00: mov dword ptr [esi + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 9C 00 00 00: mov dword ptr [esi + 0x9c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 F4 04 00 00: mov eax, dword ptr [esi + 0x4f4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FE FF FF FF: mov ecx, 0xfffffffe
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 8E 90 00 00 00: mov dword ptr [esi + 0x90], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8E 94 00 00 00: mov dword ptr [esi + 0x94], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x94
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
        ; Exact mapped bytes 8B 86 F8 04 00 00: mov eax, dword ptr [esi + 0x4f8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0x04
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
        ; Exact mapped bytes 8B 86 84 07 00 00: mov eax, dword ptr [esi + 0x784]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 AE 80 07 00 00: mov dword ptr [esi + 0x780], ebp
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 88 07 00 00: mov dword ptr [esi + 0x788], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D FC 47 A2 58: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 68 2C 01 00 00: push 0x12c
        __asm _emit 0x68
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 59 03 0F 00: call 0x588c0da0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x03
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 39 AE E8 09 00 00: cmp dword ptr [esi + 0x9e8], ebp
        __asm _emit 0x39
        __asm _emit 0xae
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 FC 00 00 00 C8 00 00 00: mov dword ptr [esi + 0xfc], 0xc8
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 1A: jle 0x587d0a75
        __asm _emit 0x7e
        __asm _emit 0x1a
        ; Exact mapped bytes 8D 96 10 08 00 00: lea edx, [esi + 0x810]
        __asm _emit 0x8d
        __asm _emit 0x96
        __asm _emit 0x10
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 89 68 7C: mov dword ptr [eax + 0x7c], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x7c
        ; Exact mapped bytes 89 78 74: mov dword ptr [eax + 0x74], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x74
        ; Exact mapped bytes 83 C2 04: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x04
        ; Exact mapped bytes 3B 8E E8 09 00 00: cmp ecx, dword ptr [esi + 0x9e8]
        __asm _emit 0x3b
        __asm _emit 0x8e
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C EC: jl 0x587d0a61
        __asm _emit 0x7c
        __asm _emit 0xec
        ; Exact mapped bytes 8B 0D BC 45 A2 58: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 A0 7C 0B 00: call 0x58888720
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x7c
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E DC 0A 00 00: mov ecx, dword ptr [esi + 0xadc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xdc
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 08: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes E9 14 3C 0C 00: jmp 0x588946b0
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x3c
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
