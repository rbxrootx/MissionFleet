// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005444DC .. +0x106 bytes.
extern "C" __declspec(naked) void FUN_005444dc_005444DC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 80h], 0
        ; Exact mapped bytes 75 11: jne 0x544505
        __asm _emit 0x75
        __asm _emit 0x11
        push 39h
        push 5c7374h
        ; Exact mapped bytes E8 00 05 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x544505
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5444e8
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 94h], 0
        ; Exact mapped bytes 75 11: jne 0x544528
        __asm _emit 0x75
        __asm _emit 0x11
        push 3ah
        push 5c7374h
        ; Exact mapped bytes E8 DD 04 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x544528
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x54450b
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 0ch], 0
        lea ecx, [ebp - 4]
        push ecx
        push 2001fh
        push 0
        push 5c7380h
        push 80000001h
        ; Exact mapped bytes FF 15 04 1E 5E 00: call dword ptr [0x5e1e04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 56: jne 0x5445b8
        __asm _emit 0x75
        __asm _emit 0x56
        lea edx, [ebp - 10h]
        push edx
        lea eax, [ebp - 0ch]
        push eax
        push 0
        push 2001fh
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 80h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 00 1E 5E 00: call dword ptr [0x5e1e00]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 29: jne 0x5445b8
        __asm _emit 0x75
        __asm _emit 0x29
        lea ecx, [ebp - 10h]
        push ecx
        lea edx, [ebp - 8]
        push edx
        push 0
        push 2001fh
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 94h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 00 1E 5E 00: call dword ptr [0x5e1e00]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0A: je 0x5445c8
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 FC 1D 5E 00: call dword ptr [0x5e1dfc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x1d
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0A: je 0x5445d8
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 FC 1D 5E 00: call dword ptr [0x5e1dfc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x1d
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
