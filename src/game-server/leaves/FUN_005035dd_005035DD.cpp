// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005035DD .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_005035dd_005035DD() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d131h
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
        ; Exact mapped bytes E8 6B D6 FF FF: call 0x500c6f
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 58460ch
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 25: je 0x50363f
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x50363f
        __asm _emit 0x75
        __asm _emit 0x14
        push 3d5h
        push 5c6db0h
        ; Exact mapped bytes E8 C6 13 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x13
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50363f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x503614
        __asm _emit 0x75
        __asm _emit 0xcf
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FF 84 03 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 10h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 10h]
        push eax
        ; Exact mapped bytes FF 15 6C 27 5E 00: call dword ptr [0x5e276c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FE D7 FF FF: call 0x500e67
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x503672
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 51 0F 00 00: call 0x5045c3
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x0f
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
