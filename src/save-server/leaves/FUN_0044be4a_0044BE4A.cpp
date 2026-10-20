// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044BE4A .. +0xE7 bytes.
extern "C" __declspec(naked) void FUN_0044be4a_0044BE4A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58dc30h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 34h], 0
        ; Exact mapped bytes 75 2F: jne 0x44beae
        __asm _emit 0x75
        __asm _emit 0x2f
        ; Exact mapped bytes E8 DF 47 0F 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x47
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 1038h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 34h], edx
        ; Exact mapped bytes EB 36: jmp 0x44bee6
        __asm _emit 0xeb
        __asm _emit 0x36
        push 636e20h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D3 E2 08 00: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xe2
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x44bed2
        __asm _emit 0x75
        __asm _emit 0x11
        push 56h
        push 676dcch
        ; Exact mapped bytes E8 73 CE 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xce
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44bed2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x44beb0
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B8 E0 08 00: call 0x4d9f98
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xe0
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, 44bee6h
        ret
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 74 54: je 0x44bf4a
        __asm _emit 0x74
        __asm _emit 0x54
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 48: je 0x44bf4a
        __asm _emit 0x74
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 24h]
        and ecx, 100h
        test ecx, ecx
        ; Exact mapped bytes 75 38: jne 0x44bf4a
        __asm _emit 0x75
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 24h]
        or ah, 1
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 24h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 70 0B 0E 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x0b
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        push -10h
        mov ecx, dword ptr [ebp - 18h]
    }
}
