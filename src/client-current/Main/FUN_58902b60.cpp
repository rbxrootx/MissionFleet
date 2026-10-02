// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 165 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58902B60 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_58902b60_segment_00() {
    __asm {
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 EB A7 98 58: push 0x5898a7eb
        __asm _emit 0x68
        __asm _emit 0xeb
        __asm _emit 0xa7
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 83 EC 0C: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x0c
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 33 C4: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xc4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 44 24 20: lea eax, [esp + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F9: mov edi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf9
        ; Exact mapped bytes 89 7C 24 14: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8D 77 08: lea esi, [edi + 8]
        __asm _emit 0x8d
        __asm _emit 0x77
        __asm _emit 0x08
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C7 07 DC 24 9A 58: mov dword ptr [edi], 0x589a24dc
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0xdc
        __asm _emit 0x24
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes 89 5F 04: mov dword ptr [edi + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x04
        ; Exact mapped bytes E8 0E D2 FF FF: call 0x588ffdb0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 5C 24 28: mov dword ptr [esp + 0x28], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 8B 5E 10: mov ebx, dword ptr [esi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x5e
        __asm _emit 0x10
        ; Exact mapped bytes 39 5E 0C: cmp dword ptr [esi + 0xc], ebx
        __asm _emit 0x39
        __asm _emit 0x5e
        __asm _emit 0x0c
        ; Exact mapped bytes 76 05: jbe 0x58902bb3
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 BF A0 07 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 6E 0C: mov ebp, dword ptr [esi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x6e
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 3B 6E 10: cmp ebp, dword ptr [esi + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x6e
        __asm _emit 0x10
        ; Exact mapped bytes 76 05: jbe 0x58902bc6
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 AC A0 07 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 18: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 54 24 28: lea edx, [esp + 0x28]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 D4 F6 FF FF: call 0x589022b0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 44 24 34: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 8B 4C 24 30: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 83 FD FF FF: call 0x58902970
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 8B 4C 24 20: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
