// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E86AD .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_004e86ad_004E86AD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 145h
        push 5cfeb0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 94 2A 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 7D 06: jge 0x4e86dd
        __asm _emit 0x7d
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 04: jge 0x4e86e1
        __asm _emit 0x7d
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 51: jmp 0x4e8732
        __asm _emit 0xeb
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 8]
        sub eax, 1
        mov dword ptr [ebp + 8], eax
        test edx, edx
        ; Exact mapped bytes 74 35: je 0x4e872f
        __asm _emit 0x74
        __asm _emit 0x35
        push 1
        push 0ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 4F 77 FE FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e871f
        __asm _emit 0x75
        __asm _emit 0x14
        push 14dh
        push 5cfeb0h
        ; Exact mapped bytes E8 E6 C2 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e871f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4e86fa
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB BB: jmp 0x4e86ea
        __asm _emit 0xeb
        __asm _emit 0xbb
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
