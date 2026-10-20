// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00419E23 .. +0x90 bytes.
extern "C" __declspec(naked) void FUN_00419e23_00419E23() {
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
        ; Exact mapped bytes 8B C3: mov eax, ebx
        __asm _emit 0x8b
        __asm _emit 0xc3
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B 7C 24 14: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes F7 D0: not eax
        __asm _emit 0xf7
        __asm _emit 0xd0
        ; Exact mapped bytes 23 46 6C: and eax, dword ptr [esi + 0x6c]
        __asm _emit 0x23
        __asm _emit 0x46
        __asm _emit 0x6c
        ; Exact mapped bytes 0B C7: or eax, edi
        __asm _emit 0x0b
        __asm _emit 0xc7
        ; Exact mapped bytes 23 46 68: and eax, dword ptr [esi + 0x68]
        __asm _emit 0x23
        __asm _emit 0x46
        __asm _emit 0x68
        ; Exact mapped bytes 89 46 6C: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6c
        ; Exact mapped bytes B8 00 00 00 08: mov eax, 0x8000000
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        ; Exact mapped bytes 85 D8: test eax, ebx
        __asm _emit 0x85
        __asm _emit 0xd8
        ; Exact mapped bytes 75 04: jne 0x419e4c
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 85 F8: test eax, edi
        __asm _emit 0x85
        __asm _emit 0xf8
        ; Exact mapped bytes 74 24: je 0x419e70
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 8B D7: mov edx, edi
        __asm _emit 0x8b
        __asm _emit 0xd7
        ; Exact mapped bytes F7 D2: not edx
        __asm _emit 0xf7
        __asm _emit 0xd2
        ; Exact mapped bytes 23 D0: and edx, eax
        __asm _emit 0x23
        __asm _emit 0xd0
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 0B: push 0xb
        __asm _emit 0x6a
        __asm _emit 0x0b
        ; Exact mapped bytes 68 FE FD FF FF: push 0xfffffdfe
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes FF 51 6C: call dword ptr [ecx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x6c
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 09: je 0x419e70
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes B8 FF FF FF F7: mov eax, 0xf7ffffff
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xf7
        ; Exact mapped bytes 23 D8: and ebx, eax
        __asm _emit 0x23
        __asm _emit 0xd8
        ; Exact mapped bytes 23 F8: and edi, eax
        __asm _emit 0x23
        __asm _emit 0xf8
        ; Exact mapped bytes B8 00 00 80 00: mov eax, 0x800000
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        ; Exact mapped bytes 85 D8: test eax, ebx
        __asm _emit 0x85
        __asm _emit 0xd8
        ; Exact mapped bytes 75 04: jne 0x419e7d
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 85 F8: test eax, edi
        __asm _emit 0x85
        __asm _emit 0xf8
        ; Exact mapped bytes 74 22: je 0x419e9f
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 8B D7: mov edx, edi
        __asm _emit 0x8b
        __asm _emit 0xd7
        ; Exact mapped bytes 23 D0: and edx, eax
        __asm _emit 0x23
        __asm _emit 0xd0
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 68 08 FE FF FF: push 0xfffffe08
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes FF 51 6C: call dword ptr [ecx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x6c
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 09: je 0x419e9f
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes B8 FF FF 7F FF: mov eax, 0xff7fffff
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        __asm _emit 0xff
        ; Exact mapped bytes 23 D8: and ebx, eax
        __asm _emit 0x23
        __asm _emit 0xd8
        ; Exact mapped bytes 23 F8: and edi, eax
        __asm _emit 0x23
        __asm _emit 0xf8
        ; Exact mapped bytes FF 74 24 18: push dword ptr [esp + 0x18]
        __asm _emit 0xff
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes FF 76 20: push dword ptr [esi + 0x20]
        __asm _emit 0xff
        __asm _emit 0x76
        __asm _emit 0x20
        ; Exact mapped bytes E8 C3 50 01 00: call 0x42ef70
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
