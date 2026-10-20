// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005039BF .. +0xC4 bytes.
extern "C" __declspec(naked) void FUN_005039bf_005039BF() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d17dh
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
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 89 D2 FF FF: call 0x500c6f
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 58470ch
        push 415h
        push 5c6db0h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 57 77 FF FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x503a2e
        __asm _emit 0x75
        __asm _emit 0x14
        push 416h
        push 5c6db0h
        ; Exact mapped bytes E8 D7 0F 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x0f
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x503a2e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x503a09
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 10h]
        add edx, 14h
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [eax + 10h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        ; Exact mapped bytes FF 15 74 27 5E 00: call dword ptr [0x5e2774]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0A D4 FF FF: call 0x500e67
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x503a66
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 5D 0B 00 00: call 0x5045c3
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
