// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A31E5 .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_004a31e5_004A31E5() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], -1
        ; Exact mapped bytes 74 52: je 0x4a324a
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 47: jne 0x4a324a
        __asm _emit 0x75
        __asm _emit 0x47
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4a3220
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a9h
        push 5ccb0ch
        ; Exact mapped bytes E8 E5 17 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x17
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a3220
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4a3203
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 04: call dword ptr [ecx + 4]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x04
        mov eax, 1
        ; Exact mapped bytes EB 0B: jmp 0x4a3255
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], 0
        xor eax, eax
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
