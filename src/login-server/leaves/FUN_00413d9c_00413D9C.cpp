// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00413D9C .. +0x12B bytes.
extern "C" __declspec(naked) void FUN_00413d9c_00413D9C() {
    __asm {
        mov eax, 43a6b4h
        ; Exact mapped bytes E8 62 B8 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ecx
        push esi
        mov dword ptr [ebp - 14h], ecx
        push dword ptr [ebp + 8]
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 62 9E 01 00: call 0x42dc19
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        and dword ptr [ebp - 4], 0
        push 43d554h
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2D 01 00 00: call 0x413ef5
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 75 07: jne 0x413dd6
        __asm _emit 0x75
        __asm _emit 0x07
        xor esi, esi
        ; Exact mapped bytes E9 D4 00 00 00: jmp 0x413eaa
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 43d668h
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 12 01 00 00: call 0x413ef5
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 E8: jne 0x413dcf
        __asm _emit 0x75
        __asm _emit 0xe8
        push 43d660h
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 01 01 00 00: call 0x413ef5
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x413dcf
        __asm _emit 0x75
        __asm _emit 0xd7
        push ebx
        push edi
        push 43d54ch
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EE 00 00 00: call 0x413ef5
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 43d540h
        mov ebx, eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DF 00 00 00: call 0x413ef5
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp + 8]
        mov esi, eax
        ; Exact mapped bytes E8 53 A1 01 00: call 0x42df75
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        test esi, esi
        mov edi, eax
        ; Exact mapped bytes 74 08: je 0x413e30
        __asm _emit 0x74
        __asm _emit 0x08
        test ebx, ebx
        ; Exact mapped bytes 74 06: je 0x413e32
        __asm _emit 0x74
        __asm _emit 0x06
        cmp ebx, esi
        ; Exact mapped bytes 73 02: jae 0x413e32
        __asm _emit 0x73
        __asm _emit 0x02
        mov esi, ebx
        test esi, esi
        ; Exact mapped bytes 74 16: je 0x413e4c
        __asm _emit 0x74
        __asm _emit 0x16
        sub esi, dword ptr [ebp - 10h]
        push esi
        push dword ptr [ebp - 10h]
        push edi
        ; Exact mapped bytes E8 7D AD 00 00: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        and byte ptr [esi + edi], 0
        ; Exact mapped bytes EB 0A: jmp 0x413e56
        __asm _emit 0xeb
        __asm _emit 0x0a
        push dword ptr [ebp - 10h]
        push edi
        ; Exact mapped bytes FF 15 5C C2 43 00: call dword ptr [0x43c25c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push -1
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 64 A1 01 00: call 0x42dfc4
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5F 00 00 00: call 0x413ec7
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop ebx
        test eax, eax
        ; Exact mapped bytes 0F 85 5D FF FF FF: jne 0x413dcf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        lea ecx, [ebp + 8]
        mov eax, dword ptr [eax - 8]
        add eax, -6
        push eax
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 DD 87 01 00: call 0x42c665
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 14h]
        mov byte ptr [ebp - 4], 1
        lea ecx, [eax + 0dch]
        ; Exact mapped bytes E8 49 9E 01 00: call 0x42dce4
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        and byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 04 9D 01 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        push 1
        pop esi
        or dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 F5 9C 01 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, esi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
