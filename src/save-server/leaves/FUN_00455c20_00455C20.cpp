// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00455C20 .. +0xE2 bytes.
extern "C" __declspec(naked) void FUN_00455c20_00455C20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5C 14 00 00: call 0x457090
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x455c59
        __asm _emit 0x75
        __asm _emit 0x21
        push 677658h
        push 0
        push 4c3h
        push 677614h
        push 2
        ; Exact mapped bytes E8 10 72 01 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x455c59
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CD: jne 0x455c2c
        __asm _emit 0x75
        __asm _emit 0xcd
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 75 21: jne 0x455c89
        __asm _emit 0x75
        __asm _emit 0x21
        push 677668h
        push 0
        push 4c4h
        push 677614h
        push 2
        ; Exact mapped bytes E8 E0 71 01 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x455c89
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D0: jne 0x455c5f
        __asm _emit 0x75
        __asm _emit 0xd0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 75 21: jne 0x455cb9
        __asm _emit 0x75
        __asm _emit 0x21
        push 6776e8h
        push 0
        push 4c5h
        push 677614h
        push 2
        ; Exact mapped bytes E8 B0 71 01 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x455cb9
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D0: jne 0x455c8f
        __asm _emit 0x75
        __asm _emit 0xd0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 96 00 00 00: call 0x455d60
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 36 00 00 00: call 0x455d10
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B6 13 00 00: call 0x4570a0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
