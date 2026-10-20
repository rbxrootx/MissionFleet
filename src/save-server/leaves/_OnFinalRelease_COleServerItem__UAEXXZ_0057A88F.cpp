// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057A88F .. +0xA1 bytes.
extern "C" __declspec(naked) void _OnFinalRelease_COleServerItem__UAEXXZ_0057A88F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 10h], ecx
        push 355h
        push 67d108h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 B5 F9 F5 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xf9
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 18 E2 FF FF: call 0x578acb
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 358h
        push 67d108h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 97 F9 F5 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xf9
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 83 06 FD FF: call 0x54af54
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x06
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 28h], 0
        ; Exact mapped bytes 74 16: je 0x57a8f0
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9C 1F FF FF: call 0x56c882
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x1f
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 28h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 2ch], 0
        ; Exact mapped bytes 74 2B: je 0x57a924
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 12: je 0x57a91d
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x57a924
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DB 00 FD FF: call 0x54aa07
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
