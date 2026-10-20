// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00559E84 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_00559e84_00559E84() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1A 3A 00 00: call 0x55d8b0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 589714h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 22: je 0x559ec7
        __asm _emit 0x74
        __asm _emit 0x22
        push 58a1a8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DE 11 FA FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x11
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x559ec7
        __asm _emit 0x75
        __asm _emit 0x11
        push 65h
        push 5cebe0h
        ; Exact mapped bytes E8 3E AB FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xab
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x559ec7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x559e9f
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
