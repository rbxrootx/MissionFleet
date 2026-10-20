// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D48B9 .. +0x105 bytes.
extern "C" __declspec(naked) void FUN_004d48b9_004D48B9() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ce6ch
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
        sub esp, 3ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 48h], ecx
        mov dword ptr [ebp - 44h], 0
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d4906
        __asm _emit 0x75
        __asm _emit 0x14
        push 1f7h
        push 5c64b4h
        ; Exact mapped bytes E8 FF 00 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d4906
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4d48e1
        __asm _emit 0x75
        __asm _emit 0xd5
        push 28h
        push 0
        lea eax, [ebp - 3ch]
        push eax
        ; Exact mapped bytes E8 57 4A FD FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x4a
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 34h], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 DD C5 05 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        mov dword ptr [ebp - 40h], 80h
        mov edx, dword ptr [ebp - 40h]
        shl edx, 1
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 55 98 01 00: call 0x4ee1a7
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        lea edx, [ebp - 3ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 102dh
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 40h]
        sub eax, 1
        cmp dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 74 BB: je 0x4d4938
        __asm _emit 0x74
        __asm _emit 0xbb
        push -1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 AC 97 01 00: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E7 8A 01 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        or edx, 1
        mov dword ptr [ebp - 44h], edx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 A4 8E 01 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
