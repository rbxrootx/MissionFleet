// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048F76D .. +0xAD bytes.
extern "C" __declspec(naked) void FUN_0048f76d_0048F76D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 75 11: jne 0x48f78e
        __asm _emit 0x75
        __asm _emit 0x11
        push 3eh
        push 5ca644h
        ; Exact mapped bytes E8 77 52 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x52
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x48f78e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x48f777
        __asm _emit 0x75
        __asm _emit 0xe3
        ; Exact mapped bytes E8 AA 5C 0B 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x5c
        __asm _emit 0x0b
        __asm _emit 0x00
        cmp dword ptr [eax + 1038h], 0
        ; Exact mapped bytes 75 24: jne 0x48f7c6
        __asm _emit 0x75
        __asm _emit 0x24
        push 5ca650h
        push 5ca690h
        ; Exact mapped bytes E8 64 04 04 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 8
        push 5ca694h
        push 5ca6d4h
        ; Exact mapped bytes E8 52 04 04 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 8
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 0C: je 0x48f7d8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 1ch]
        ; Exact mapped bytes E8 46 00 00 00: call 0x48f81a
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x48f7dc
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 35: jmp 0x48f811
        __asm _emit 0xeb
        __asm _emit 0x35
        push 0
        mov ecx, dword ptr [ebp + 2ch]
        push ecx
        mov edx, dword ptr [ebp + 28h]
        push edx
        mov eax, dword ptr [ebp + 24h]
        push eax
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 1ch]
        mov ecx, dword ptr [edx + 34h]
        ; Exact mapped bytes E8 D0 03 00 00: call 0x48fbe1
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 28 00: ret 0x28
        __asm _emit 0xc2
        __asm _emit 0x28
        __asm _emit 0x00
    }
}
