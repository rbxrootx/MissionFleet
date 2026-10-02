// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 133 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589023B0 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_589023b0_segment_00() {
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
        ; Exact mapped bytes 89 4C 24 14: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C7 01 DC 24 9A 58: mov dword ptr [ecx], 0x589a24dc
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0xdc
        __asm _emit 0x24
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes 8B 59 18: mov ebx, dword ptr [ecx + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x59
        __asm _emit 0x18
        ; Exact mapped bytes 8D 71 08: lea esi, [ecx + 8]
        __asm _emit 0x8d
        __asm _emit 0x71
        __asm _emit 0x08
        ; Exact mapped bytes C7 44 24 28 00 00 00 00: mov dword ptr [esp + 0x28], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 5E 0C: cmp dword ptr [esi + 0xc], ebx
        __asm _emit 0x39
        __asm _emit 0x5e
        __asm _emit 0x0c
        ; Exact mapped bytes 76 05: jbe 0x589023f9
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 79 A8 07 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 7E 0C: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x7e
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 2E: mov ebp, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x2e
        ; Exact mapped bytes 3B 7E 10: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x7e
        __asm _emit 0x10
        ; Exact mapped bytes 76 05: jbe 0x58902408
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 6A A8 07 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 44 24 28: lea eax, [esp + 0x28]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 96 FE FF FF: call 0x589022b0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 3F FF FF FF: call 0x58902360
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
