// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 98 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58902628 .. +0x62 bytes.
extern "C" __declspec(naked) void Catch_All_58902628_segment_00() {
    __asm {
        ; Exact mapped bytes 8B 5D 9C: mov ebx, dword ptr [ebp - 0x64]
        __asm _emit 0x8b
        __asm _emit 0x5d
        __asm _emit 0x9c
        ; Exact mapped bytes 83 FB 01: cmp ebx, 1
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x01
        ; Exact mapped bytes 8B 75 AC: mov esi, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0xac
        ; Exact mapped bytes 8B 7D A4: mov edi, dword ptr [ebp - 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0xa4
        ; Exact mapped bytes 7E 16: jle 0x5890264c
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 8B 4D A0: mov ecx, dword ptr [ebp - 0x60]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa0
        ; Exact mapped bytes 8D 14 F5 00 00 00 00: lea edx, [esi*8]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B D6: sub edx, esi
        __asm _emit 0x2b
        __asm _emit 0xd6
        ; Exact mapped bytes 8D 04 97: lea eax, [edi + edx*4]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x97
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 14 FC FF FF: call 0x58902260
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 7E 28: jle 0x58902678
        __asm _emit 0x7e
        __asm _emit 0x28
        ; Exact mapped bytes 8B 4D 10: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 8D 04 0E: lea eax, [esi + ecx]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x0e
        ; Exact mapped bytes 8D 14 C5 00 00 00 00: lea edx, [eax*8]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B D0: sub edx, eax
        __asm _emit 0x2b
        __asm _emit 0xd0
        ; Exact mapped bytes 8D 04 97: lea eax, [edi + edx*4]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x97
        ; Exact mapped bytes 8D 0C F5 00 00 00 00: lea ecx, [esi*8]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B CE: sub ecx, esi
        __asm _emit 0x2b
        __asm _emit 0xce
        ; Exact mapped bytes 8D 14 8F: lea edx, [edi + ecx*4]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x8f
        ; Exact mapped bytes 8B 4D A0: mov ecx, dword ptr [ebp - 0x60]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 E8 FB FF FF: call 0x58902260
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 C4 A5 07 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xa5
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 EE A5 07 00: call 0x5897cc78
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xa5
        __asm _emit 0x07
        __asm _emit 0x00
    }
}
