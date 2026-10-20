// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D1813 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_004d1813_004D1813() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], ecx
        mov ecx, 686d24h
        ; Exact mapped bytes E8 FB BD 06 00: call 0x53d630
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xbd
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 38h]
        sub eax, 132h
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 73 14: jae 0x4d1860
        __asm _emit 0x73
        __asm _emit 0x14
        push 57fh
        push 671a64h
        ; Exact mapped bytes E8 E5 74 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d1860
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4d1846
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 76 14: jbe 0x4d1880
        __asm _emit 0x76
        __asm _emit 0x14
        push 580h
        push 671a64h
        ; Exact mapped bytes E8 C5 74 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d1880
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4d1866
        __asm _emit 0x75
        __asm _emit 0xe0
        lea eax, [ebp - 10h]
        push eax
        push 0
        push 19h
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 92 A0 00 00 00: call dword ptr [edx + 0xa0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa0
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
