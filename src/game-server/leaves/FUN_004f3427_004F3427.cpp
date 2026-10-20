// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F3427 .. +0xAA bytes.
extern "C" __declspec(naked) void FUN_004f3427_004F3427() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4f3450
        __asm _emit 0x75
        __asm _emit 0x14
        push 4beh
        push 5c5574h
        ; Exact mapped bytes E8 B5 15 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f3450
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4f3433
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E8 FA 1A 05 00: call 0x544f55
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x1a
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [ebp - 10h], edx
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 D4 86 04 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 54h], ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        push ecx
        push 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 B4 25 5E 00: call dword ptr [0x5e25b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 50h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 54h], ecx
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
