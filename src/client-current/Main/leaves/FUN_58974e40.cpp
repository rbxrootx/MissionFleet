// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58974E40 .. +0xF6 bytes.
extern "C" __declspec(naked) void FUN_58974e40() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 14h]
        mov ebp, dword ptr [esp + 18h]
        push -1
        push edi
        mov eax, dword ptr [edi]
        mov esi, dword ptr [edi + 17ch]
        mov dword ptr [eax + 14h], 79h
        mov ecx, dword ptr [edi]
        mov dword ptr [ecx + 18h], esi
        mov edx, dword ptr [edi]
        mov dword ptr [edx + 1ch], ebp
        mov eax, dword ptr [edi]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        add esp, 8
        cmp esi, 0c0h
        ; Exact mapped bytes 7D 07: jge 0x58974e7f
        __asm _emit 0x7d
        __asm _emit 0x07
        mov ebx, 2
        ; Exact mapped bytes EB 5B: jmp 0x58974eda
        __asm _emit 0xeb
        __asm _emit 0x5b
        cmp esi, 0d0h
        ; Exact mapped bytes 7C 4E: jl 0x58974ed5
        __asm _emit 0x7c
        __asm _emit 0x4e
        cmp esi, 0d7h
        ; Exact mapped bytes 7F 46: jg 0x58974ed5
        __asm _emit 0x7f
        __asm _emit 0x46
        lea ecx, [ebp + 1]
        and ecx, 7
        add ecx, 0d0h
        cmp esi, ecx
        ; Exact mapped bytes 74 36: je 0x58974ed5
        __asm _emit 0x74
        __asm _emit 0x36
        lea edx, [ebp + 2]
        and edx, 7
        add edx, 0d0h
        cmp esi, edx
        ; Exact mapped bytes 74 26: je 0x58974ed5
        __asm _emit 0x74
        __asm _emit 0x26
        lea eax, [ebp - 1]
        and eax, 7
        add eax, 0d0h
        cmp esi, eax
        ; Exact mapped bytes 74 BA: je 0x58974e78
        __asm _emit 0x74
        __asm _emit 0xba
        lea ecx, [ebp - 2]
        and ecx, 7
        add ecx, 0d0h
        cmp esi, ecx
        ; Exact mapped bytes 74 AA: je 0x58974e78
        __asm _emit 0x74
        __asm _emit 0xaa
        mov ebx, 1
        ; Exact mapped bytes EB 05: jmp 0x58974eda
        __asm _emit 0xeb
        __asm _emit 0x05
        mov ebx, 3
        mov edx, dword ptr [edi]
        push 4
        push edi
        mov dword ptr [edx + 14h], 61h
        mov eax, dword ptr [edi]
        mov dword ptr [eax + 18h], esi
        mov ecx, dword ptr [edi]
        mov dword ptr [ecx + 1ch], ebx
        mov edx, dword ptr [edi]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        add esp, 8
        dec ebx
        ; Exact mapped bytes 74 2A: je 0x58974f25
        __asm _emit 0x74
        __asm _emit 0x2a
        dec ebx
        ; Exact mapped bytes 74 08: je 0x58974f06
        __asm _emit 0x74
        __asm _emit 0x08
        dec ebx
        ; Exact mapped bytes 74 2E: je 0x58974f2f
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes E9 6A FF FF FF: jmp 0x58974e70
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        ; Exact mapped bytes E8 34 00 00 00: call 0x58974f40
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test al, al
        ; Exact mapped bytes 74 0B: je 0x58974f1e
        __asm _emit 0x74
        __asm _emit 0x0b
        mov esi, dword ptr [edi + 17ch]
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x58974e70
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret
        mov dword ptr [edi + 17ch], 0
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret
    }
}
