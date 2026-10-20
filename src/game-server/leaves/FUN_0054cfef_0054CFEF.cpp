// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054CFEF .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_0054cfef_0054CFEF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 30 FD FF FF: call 0x54cd33
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x54d01b
        __asm _emit 0x74
        __asm _emit 0x14
        push 0f6h
        push 5cc198h
        ; Exact mapped bytes E8 EA 79 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x79
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54d01b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x54cffb
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0A FD FF FF: call 0x54cd33
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x54d041
        __asm _emit 0x74
        __asm _emit 0x14
        push 0f7h
        push 5cc198h
        ; Exact mapped bytes E8 C4 79 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54d041
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x54d021
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes DD 02: fld qword ptr [edx]
        __asm _emit 0xdd
        __asm _emit 0x02
        ; Exact mapped bytes DC 18: fcomp qword ptr [eax]
        __asm _emit 0xdc
        __asm _emit 0x18
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 09: jne 0x54d061
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 07: jmp 0x54d068
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 8]
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
