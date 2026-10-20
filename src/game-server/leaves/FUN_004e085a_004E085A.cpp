// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E085A .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_004e085a_004E085A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 34h], ecx
        mov esi, dword ptr [ebp + 0ch]
        mov ecx, 0bh
        lea edi, [ebp - 2ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 62: jne 0x4e08db
        __asm _emit 0x75
        __asm _emit 0x62
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 74 5C: je 0x4e08db
        __asm _emit 0x74
        __asm _emit 0x5c
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 56: je 0x4e08db
        __asm _emit 0x74
        __asm _emit 0x56
        lea eax, [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        add ecx, 3ch
        ; Exact mapped bytes E8 49 B6 00 00: call 0x4ebee1
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4e08ad
        __asm _emit 0x75
        __asm _emit 0x11
        push 0
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        add ecx, 3ch
        ; Exact mapped bytes E8 33 30 05 00: call 0x5338e0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x00
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        add ecx, 3ch
        ; Exact mapped bytes E8 70 B6 00 00: call 0x4ebf30
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4e08d5
        __asm _emit 0x75
        __asm _emit 0x11
        push 57h
        push 5cb6b4h
        ; Exact mapped bytes E8 30 41 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x41
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e08d5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x4e08ad
        __asm _emit 0x75
        __asm _emit 0xd2
        lea eax, [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 404h
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 90 A8 00 00 00: call dword ptr [eax + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
