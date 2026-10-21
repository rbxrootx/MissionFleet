// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C5BC0 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_588c5bc0_segment_00() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 7E 7C: mov dword ptr [esi + 0x7c], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x7c
        ; Exact mapped bytes 89 7E 78: mov dword ptr [esi + 0x78], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x78
        ; Exact mapped bytes 8B 46 64: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x64
        ; Exact mapped bytes 2B 46 60: sub eax, dword ptr [esi + 0x60]
        __asm _emit 0x2b
        __asm _emit 0x46
        __asm _emit 0x60
        ; Exact mapped bytes C1 F8 02: sar eax, 2
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 76 51: jbe 0x588c5c2a
        __asm _emit 0x76
        __asm _emit 0x51
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 2B 4E 60: sub ecx, dword ptr [esi + 0x60]
        __asm _emit 0x2b
        __asm _emit 0x4e
        __asm _emit 0x60
        ; Exact mapped bytes C1 F9 02: sar ecx, 2
        __asm _emit 0xc1
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 3B 7E 7C: cmp edi, dword ptr [esi + 0x7c]
        __asm _emit 0x3b
        __asm _emit 0x7e
        __asm _emit 0x7c
        ; Exact mapped bytes 75 18: jne 0x588c5c06
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 3B F9: cmp edi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf9
        ; Exact mapped bytes 72 05: jb 0x588c5bf7
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 7B 70 0B 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x70
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 56 60: mov edx, dword ptr [esi + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x60
        ; Exact mapped bytes 8B 04 BA: mov eax, dword ptr [edx + edi*4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0xba
        ; Exact mapped bytes C7 40 50 05 00 00 00: mov dword ptr [eax + 0x50], 5
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 16: jmp 0x588c5c1c
        __asm _emit 0xeb
        __asm _emit 0x16
        ; Exact mapped bytes 3B F9: cmp edi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf9
        ; Exact mapped bytes 72 05: jb 0x588c5c0f
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 63 70 0B 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x70
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 56 60: mov edx, dword ptr [esi + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x60
        ; Exact mapped bytes 8B 04 BA: mov eax, dword ptr [edx + edi*4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0xba
        ; Exact mapped bytes C7 40 50 01 00 00 00: mov dword ptr [eax + 0x50], 1
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 2B 4E 60: sub ecx, dword ptr [esi + 0x60]
        __asm _emit 0x2b
        __asm _emit 0x4e
        __asm _emit 0x60
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes C1 F9 02: sar ecx, 2
        __asm _emit 0xc1
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 3B F9: cmp edi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf9
        ; Exact mapped bytes 72 B6: jb 0x588c5be0
        __asm _emit 0x72
        __asm _emit 0xb6
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
