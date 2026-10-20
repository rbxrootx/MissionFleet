// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046112E .. +0xB9 bytes.
extern "C" __declspec(naked) void FUN_0046112e_0046112E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x4611de
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 8]
        cmp eax, dword ptr [edx + 20h]
        ; Exact mapped bytes 72 11: jb 0x461164
        __asm _emit 0x72
        __asm _emit 0x11
        push 30h
        push 67c9d4h
        ; Exact mapped bytes E8 E1 7B 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x7b
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x461164
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DB: jne 0x461145
        __asm _emit 0x75
        __asm _emit 0xdb
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2ch]
        mov eax, dword ptr [edx + eax*8 + 4]
        and al, 0f3h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 2ch]
        mov dword ptr [ecx + edx*8 + 4], eax
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 24: jne 0x4611b6
        __asm _emit 0x75
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2ch]
        mov eax, dword ptr [edx + eax*8 + 4]
        or al, 4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 2ch]
        mov dword ptr [ecx + edx*8 + 4], eax
        ; Exact mapped bytes EB 28: jmp 0x4611de
        __asm _emit 0xeb
        __asm _emit 0x28
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 75 22: jne 0x4611de
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2ch]
        mov eax, dword ptr [edx + eax*8 + 4]
        or al, 8
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 2ch]
        mov dword ptr [ecx + edx*8 + 4], eax
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
