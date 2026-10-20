// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00426A00 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_00426a00_00426A00() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B 74 24 08: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 3B 35 80 11 45 00: cmp esi, dword ptr [0x451180]
        __asm _emit 0x3b
        __asm _emit 0x35
        __asm _emit 0x80
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 73 40: jae 0x426a4d
        __asm _emit 0x73
        __asm _emit 0x40
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes C1 F9 05: sar ecx, 5
        __asm _emit 0xc1
        __asm _emit 0xf9
        __asm _emit 0x05
        ; Exact mapped bytes 83 E0 1F: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 0C 8D 80 10 45 00: mov ecx, dword ptr [ecx*4 + 0x451080]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x8d
        __asm _emit 0x80
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 8D 04 C0: lea eax, [eax + eax*8]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0xc0
        ; Exact mapped bytes F6 44 81 04 01: test byte ptr [ecx + eax*4 + 4], 1
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x01
        ; Exact mapped bytes 74 25: je 0x426a4d
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 31 0E 00 00: call 0x427860
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 74 24 18: push dword ptr [esp + 0x18]
        __asm _emit 0xff
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes FF 74 24 18: push dword ptr [esp + 0x18]
        __asm _emit 0xff
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 28 00 00 00: call 0x426a65
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes E8 7A 0E 00 00: call 0x4278bf
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes E8 88 B1 FF FF: call 0x421bda
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 00 09 00 00 00: mov dword ptr [eax], 9
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 86 B1 FF FF: call 0x421be3
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 20 00: and dword ptr [eax], 0
        __asm _emit 0x83
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes 83 C8 FF: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xff
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
