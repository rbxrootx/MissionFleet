// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054BEDB .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_0054bedb_0054BEDB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x54befc
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a3h
        push 5cc18ch
        ; Exact mapped bytes E8 09 8B FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54befc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x54bee2
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 21: je 0x54bf2b
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx], 0
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 02: jmp 0x54bf2d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
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
