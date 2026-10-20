// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F6ECF .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_004f6ecf_004F6ECF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f6efe
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d58h
        push 5c5574h
        ; Exact mapped bytes E8 07 DB 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xdb
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f6efe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4f6ed9
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 4], 100h
        ; Exact mapped bytes 72 0C: jb 0x4f6f1c
        __asm _emit 0x72
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 4], 108h
        ; Exact mapped bytes 76 1C: jbe 0x4f6f38
        __asm _emit 0x76
        __asm _emit 0x1c
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 4], 200h
        ; Exact mapped bytes 72 0C: jb 0x4f6f34
        __asm _emit 0x72
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 4], 209h
        ; Exact mapped bytes 76 04: jbe 0x4f6f38
        __asm _emit 0x76
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0C: jmp 0x4f6f44
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 36 7E FF FF: call 0x4eed7a
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
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
