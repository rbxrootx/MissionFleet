// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00436957 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_00436957_00436957() {
    __asm {
        mov edx, dword ptr [ecx]
        test edx, edx
        ; Exact mapped bytes 75 04: jne 0x436961
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 39: jmp 0x43699a
        __asm _emit 0xeb
        __asm _emit 0x39
        push esi
        mov esi, dword ptr [esp + 8]
        xor eax, eax
        cmp edx, esi
        ; Exact mapped bytes 75 0A: jne 0x436976
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ecx + 4]
        mov eax, dword ptr [eax + esi]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 20: jmp 0x436996
        __asm _emit 0xeb
        __asm _emit 0x20
        test edx, edx
        ; Exact mapped bytes 74 1F: je 0x436999
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ecx + 4]
        push edi
        mov edi, dword ptr [ecx + edx]
        cmp edi, esi
        ; Exact mapped bytes 74 06: je 0x43698b
        __asm _emit 0x74
        __asm _emit 0x06
        mov edx, edi
        test edx, edx
        ; Exact mapped bytes 75 F3: jne 0x43697e
        __asm _emit 0x75
        __asm _emit 0xf3
        test edx, edx
        pop edi
        ; Exact mapped bytes 74 09: je 0x436999
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx + esi]
        mov dword ptr [ecx + edx], eax
        push 1
        pop eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
