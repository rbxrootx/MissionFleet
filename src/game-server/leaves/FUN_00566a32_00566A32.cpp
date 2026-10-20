// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00566A32 .. +0xC4 bytes.
extern "C" __declspec(naked) void FUN_00566a32_00566A32() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8ch], 0
        ; Exact mapped bytes 75 14: jne 0x566a5c
        __asm _emit 0x75
        __asm _emit 0x14
        push 1a8h
        push 5d0c78h
        ; Exact mapped bytes E8 A9 DF FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xdf
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x566a5c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x566a3c
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8ch]
        sub eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8ch], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 90h], 0
        ; Exact mapped bytes 74 67: je 0x566aea
        __asm _emit 0x74
        __asm _emit 0x67
        push 1ach
        push 5d0c78h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        push ecx
        ; Exact mapped bytes E8 C4 46 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 12: jne 0x566ab4
        __asm _emit 0x75
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        push eax
        ; Exact mapped bytes E8 25 6B FE FF: call 0x54d5d6
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x6b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        mov eax, dword ptr [edx + 4]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        ; Exact mapped bytes E8 BB 43 F9 FF: call 0x4fae98
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x43
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 90h], 0
        mov eax, dword ptr [ebp + 8]
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
