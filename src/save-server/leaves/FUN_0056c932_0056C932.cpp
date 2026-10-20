// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056C932 .. +0xC4 bytes.
extern "C" __declspec(naked) void FUN_0056c932_0056C932() {
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
        ; Exact mapped bytes 75 14: jne 0x56c95c
        __asm _emit 0x75
        __asm _emit 0x14
        push 1a8h
        push 67d450h
        ; Exact mapped bytes E8 E9 C3 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56c95c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x56c93c
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8ch]
        sub eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8ch], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 90h], 0
        ; Exact mapped bytes 74 67: je 0x56c9ea
        __asm _emit 0x74
        __asm _emit 0x67
        push 1ach
        push 67d450h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        push ecx
        ; Exact mapped bytes E8 C4 D8 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xd8
        __asm _emit 0xf6
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 12: jne 0x56c9b4
        __asm _emit 0x75
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        push eax
        ; Exact mapped bytes E8 95 F6 FD FF: call 0x54c046
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xf6
        __asm _emit 0xfd
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
        ; Exact mapped bytes E8 BB D5 F6 FF: call 0x4d9f98
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xd5
        __asm _emit 0xf6
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
