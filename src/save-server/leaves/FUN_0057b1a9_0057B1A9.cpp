// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057B1A9 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_0057b1a9_0057B1A9() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 6ch
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 34h], 0
        ; Exact mapped bytes 75 18: jne 0x57b1e3
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        add eax, 34h
        push eax
        ; Exact mapped bytes FF 15 90 C2 68 00: call dword ptr [0x68c290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x57b1e3
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 8007000eh
        ; Exact mapped bytes EB 3D: jmp 0x57b220
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 75 14: jne 0x57b200
        __asm _emit 0x75
        __asm _emit 0x14
        push 49fh
        push 67d108h
        ; Exact mapped bytes E8 45 DB FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xdb
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57b200
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x57b1e3
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 34h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 34h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
