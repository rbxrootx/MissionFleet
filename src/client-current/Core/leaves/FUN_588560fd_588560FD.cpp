// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588560FD .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_588560fd_588560FD() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push edi
        mov edi, dword ptr [ebp + 0ch]
        mov eax, ecx
        mov dword ptr [ebp - 4], eax
        test edi, edi
        ; Exact mapped bytes 74 61: je 0x58856171
        __asm _emit 0x74
        __asm _emit 0x61
        mov eax, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        cmp dword ptr [eax + 8], edx
        ; Exact mapped bytes 75 12: jne 0x5885612c
        __asm _emit 0x75
        __asm _emit 0x12
        cmp byte ptr [eax + 0ch], 0
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 74 04: je 0x58856127
        __asm _emit 0x74
        __asm _emit 0x04
        add dword ptr [eax], edi
        ; Exact mapped bytes EB 4A: jmp 0x58856171
        __asm _emit 0xeb
        __asm _emit 0x4a
        or dword ptr [eax], 0ffffffffh
        ; Exact mapped bytes EB 45: jmp 0x58856171
        __asm _emit 0xeb
        __asm _emit 0x45
        sub edx, dword ptr [eax + 8]
        push ebx
        cmp edx, edi
        mov ebx, edi
        push esi
        cmovb ebx, edx
        lea esi, [ebx + ebx]
        push esi
        push dword ptr [ebp + 8]
        push dword ptr [eax]
        ; Exact mapped bytes E8 4A 67 FF FF: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add esp, 0ch
        mov eax, dword ptr [ecx]
        add dword ptr [eax], esi
        mov eax, dword ptr [ecx]
        add dword ptr [eax + 8], ebx
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 0ch], 0
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 74 04: je 0x58856164
        __asm _emit 0x74
        __asm _emit 0x04
        add dword ptr [eax], edi
        ; Exact mapped bytes EB 0B: jmp 0x5885616f
        __asm _emit 0xeb
        __asm _emit 0x0b
        cmp ebx, edi
        ; Exact mapped bytes 74 05: je 0x5885616d
        __asm _emit 0x74
        __asm _emit 0x05
        or dword ptr [eax], 0ffffffffh
        ; Exact mapped bytes EB 02: jmp 0x5885616f
        __asm _emit 0xeb
        __asm _emit 0x02
        add dword ptr [eax], ebx
        pop esi
        pop ebx
        pop edi
        leave
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
