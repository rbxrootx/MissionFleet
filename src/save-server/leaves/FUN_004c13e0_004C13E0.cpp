// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C13E0 .. +0xAC bytes.
extern "C" __declspec(naked) void FUN_004c13e0_004C13E0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d999h
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
        ; Exact mapped bytes E8 89 33 06 00: call 0x524790
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x33
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 638e7ch
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7F 11: jg 0x4c142e
        __asm _emit 0x7f
        __asm _emit 0x11
        push 25h
        push 6769ach
        ; Exact mapped bytes E8 17 79 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x79
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c142e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x4c1417
        __asm _emit 0x75
        __asm _emit 0xe3
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 10h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 8], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 14h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 18h], edx
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
