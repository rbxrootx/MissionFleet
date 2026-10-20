// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00560A90 .. +0xBA bytes.
extern "C" __declspec(naked) void FUN_00560a90_00560A90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 1eh
        push 67c678h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 B4 97 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x97
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 8004000bh
        ; Exact mapped bytes 7F 26: jg 0x560ae8
        __asm _emit 0x7f
        __asm _emit 0x26
        cmp dword ptr [ebp - 0ch], 8004000bh
        ; Exact mapped bytes 74 28: je 0x560af3
        __asm _emit 0x74
        __asm _emit 0x28
        cmp dword ptr [ebp - 0ch], 80004001h
        ; Exact mapped bytes 7C 3A: jl 0x560b0e
        __asm _emit 0x7c
        __asm _emit 0x3a
        cmp dword ptr [ebp - 0ch], 80004002h
        ; Exact mapped bytes 7E 1F: jle 0x560afc
        __asm _emit 0x7e
        __asm _emit 0x1f
        cmp dword ptr [ebp - 0ch], 80004005h
        ; Exact mapped bytes 74 16: je 0x560afc
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes EB 26: jmp 0x560b0e
        __asm _emit 0xeb
        __asm _emit 0x26
        cmp dword ptr [ebp - 0ch], 8007000eh
        ; Exact mapped bytes 74 14: je 0x560b05
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes EB 1B: jmp 0x560b0e
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov dword ptr [ebp - 4], 0f180h
        ; Exact mapped bytes EB 16: jmp 0x560b12
        __asm _emit 0xeb
        __asm _emit 0x16
        mov dword ptr [ebp - 4], 0f181h
        ; Exact mapped bytes EB 0D: jmp 0x560b12
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov dword ptr [ebp - 4], 0f10ah
        ; Exact mapped bytes EB 04: jmp 0x560b12
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2F: jmp 0x560b41
        __asm _emit 0xeb
        __asm _emit 0x2f
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 11: jne 0x560b29
        __asm _emit 0x75
        __asm _emit 0x11
        push 35h
        push 67c678h
        ; Exact mapped bytes E8 1C 82 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x82
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x560b29
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E3: jne 0x560b12
        __asm _emit 0x75
        __asm _emit 0xe3
        push -1
        push 0
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 ED 5F F9 FF: call 0x4f6b29
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x5f
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, 1
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
