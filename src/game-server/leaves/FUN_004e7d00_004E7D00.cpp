// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E7D00 .. +0xAC bytes.
extern "C" __declspec(naked) void FUN_004e7d00_004E7D00() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57fa79h
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
        ; Exact mapped bytes E8 69 8C 04 00: call 0x530990
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x8c
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 58a4d4h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7F 11: jg 0x4e7d4e
        __asm _emit 0x7f
        __asm _emit 0x11
        push 25h
        push 5cfeb0h
        ; Exact mapped bytes E8 B7 CC 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xcc
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e7d4e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x4e7d37
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
