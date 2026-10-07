// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 112 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887B240 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_5887b240_segment_00() {
    __asm {
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B D9: mov ebx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd9
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8D B3 70 02 00 00: lea esi, [ebx + 0x270]
        __asm _emit 0x8d
        __asm _emit 0xb3
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8B 44 02 00 00: mov ecx, dword ptr [ebx + 0x244]
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B A9 88 00 00 00: mov ebp, dword ptr [ecx + 0x88]
        __asm _emit 0x8b
        __asm _emit 0xa9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 0F CF 08 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xcf
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 3B C5: cmp eax, ebp
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 7D 27: jge 0x5887b28e
        __asm _emit 0x7d
        __asm _emit 0x27
        ; Exact mapped bytes 8B 8B 4C 02 00 00: mov ecx, dword ptr [ebx + 0x24c]
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FE CE 08 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xce
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8B 4C 02 00 00: mov ecx, dword ptr [ebx + 0x24c]
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 C0 CE 08 00: call 0x58908140
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xce
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes EB 14: jmp 0x5887b2a2
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes 8B 16: mov edx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes C7 42 50 00 00 00 00: mov dword ptr [edx + 0x50], 0
        __asm _emit 0xc7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
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
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 83 C6 04: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x04
        ; Exact mapped bytes 83 FF 0A: cmp edi, 0xa
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x0a
        ; Exact mapped bytes 7C A5: jl 0x5887b250
        __asm _emit 0x7c
        __asm _emit 0xa5
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
