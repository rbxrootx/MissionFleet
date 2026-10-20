// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E1EEE .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_004e1eee_004E1EEE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 83h
        push 5c7a18h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 53 92 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 14: jne 0x4e1f29
        __asm _emit 0x75
        __asm _emit 0x14
        push 84h
        push 5c7a18h
        ; Exact mapped bytes E8 DC 2A 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x2a
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e1f29
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x4e1f0d
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 4], ecx
        push -1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp + 8]
        add eax, dword ptr [ecx + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C8 FC FF FF: call 0x4e1c17
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 B4 70 FC FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x70
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
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
