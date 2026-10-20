// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048F81A .. +0xE7 bytes.
extern "C" __declspec(naked) void FUN_0048f81a_0048F81A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e190h
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
        ; Exact mapped bytes 75 2F: jne 0x48f87e
        __asm _emit 0x75
        __asm _emit 0x2f
        ; Exact mapped bytes E8 EF 5B 0B 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x5b
        __asm _emit 0x0b
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
        ; Exact mapped bytes EB 36: jmp 0x48f8b6
        __asm _emit 0xeb
        __asm _emit 0x36
        push 584850h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 03 B8 06 00: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x48f8a2
        __asm _emit 0x75
        __asm _emit 0x11
        push 56h
        push 5ca644h
        ; Exact mapped bytes E8 63 51 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x51
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x48f8a2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x48f880
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E8 B5 06 00: call 0x4fae98
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, 48f8b6h
        ret
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 74 54: je 0x48f91a
        __asm _emit 0x74
        __asm _emit 0x54
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 48: je 0x48f91a
        __asm _emit 0x74
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 24h]
        and ecx, 100h
        test ecx, ecx
        ; Exact mapped bytes 75 38: jne 0x48f91a
        __asm _emit 0x75
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 24h]
        or ah, 1
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 24h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 40 D7 0A 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xd7
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        push -10h
        mov ecx, dword ptr [ebp - 18h]
    }
}
