// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055DA10 .. +0xBA bytes.
extern "C" __declspec(naked) void FUN_0055da10_0055DA10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 1eh
        push 5cfea0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 34 D7 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xd7
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 8004000bh
        ; Exact mapped bytes 7F 26: jg 0x55da68
        __asm _emit 0x7f
        __asm _emit 0x26
        cmp dword ptr [ebp - 0ch], 8004000bh
        ; Exact mapped bytes 74 28: je 0x55da73
        __asm _emit 0x74
        __asm _emit 0x28
        cmp dword ptr [ebp - 0ch], 80004001h
        ; Exact mapped bytes 7C 3A: jl 0x55da8e
        __asm _emit 0x7c
        __asm _emit 0x3a
        cmp dword ptr [ebp - 0ch], 80004002h
        ; Exact mapped bytes 7E 1F: jle 0x55da7c
        __asm _emit 0x7e
        __asm _emit 0x1f
        cmp dword ptr [ebp - 0ch], 80004005h
        ; Exact mapped bytes 74 16: je 0x55da7c
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes EB 26: jmp 0x55da8e
        __asm _emit 0xeb
        __asm _emit 0x26
        cmp dword ptr [ebp - 0ch], 8007000eh
        ; Exact mapped bytes 74 14: je 0x55da85
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes EB 1B: jmp 0x55da8e
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov dword ptr [ebp - 4], 0f180h
        ; Exact mapped bytes EB 16: jmp 0x55da92
        __asm _emit 0xeb
        __asm _emit 0x16
        mov dword ptr [ebp - 4], 0f181h
        ; Exact mapped bytes EB 0D: jmp 0x55da92
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov dword ptr [ebp - 4], 0f10ah
        ; Exact mapped bytes EB 04: jmp 0x55da92
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2F: jmp 0x55dac1
        __asm _emit 0xeb
        __asm _emit 0x2f
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 11: jne 0x55daa9
        __asm _emit 0x75
        __asm _emit 0x11
        push 35h
        push 5cfea0h
        ; Exact mapped bytes E8 5C 6F FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x6f
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55daa9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E3: jne 0x55da92
        __asm _emit 0x75
        __asm _emit 0xe3
        push -1
        push 0
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 0D FE FA FF: call 0x50d8c9
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xfe
        __asm _emit 0xfa
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
