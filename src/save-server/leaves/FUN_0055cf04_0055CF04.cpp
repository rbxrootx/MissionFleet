// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055CF04 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_0055cf04_0055CF04() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1A 3A 00 00: call 0x560930
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 63bd3ch
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 22: je 0x55cf47
        __asm _emit 0x74
        __asm _emit 0x22
        push 63c7d0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5E D2 F7 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xd2
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x55cf47
        __asm _emit 0x75
        __asm _emit 0x11
        push 65h
        push 67b3b8h
        ; Exact mapped bytes E8 FE BD FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xbd
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55cf47
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x55cf1f
        __asm _emit 0x75
        __asm _emit 0xd2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 14h], 0
        mov eax, dword ptr [ebp - 4]
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
