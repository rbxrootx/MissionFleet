// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A083B .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_004a083b_004A083B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E0 C2 0A 00: call 0x54cb2f
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xc2
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4a0867
        __asm _emit 0x74
        __asm _emit 0x14
        push 7d8h
        push 5cbe8ch
        ; Exact mapped bytes E8 9E 41 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x41
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a0867
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x4a0847
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BA C2 0A 00: call 0x54cb2f
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xc2
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4a088d
        __asm _emit 0x74
        __asm _emit 0x14
        push 7d9h
        push 5cbe8ch
        ; Exact mapped bytes E8 78 41 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x41
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a088d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x4a086d
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [edx]
        push ecx
        ; Exact mapped bytes E8 C6 F9 FF FF: call 0x4a0268
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes DD 5D F4: fstp qword ptr [ebp - 0xc]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf4
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [edx]
        push ecx
        ; Exact mapped bytes E8 B4 F9 FF FF: call 0x4a0268
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes DC 5D F4: fcomp qword ptr [ebp - 0xc]
        __asm _emit 0xdc
        __asm _emit 0x5d
        __asm _emit 0xf4
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 09: jne 0x4a08c7
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 07: jmp 0x4a08ce
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 10h]
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
