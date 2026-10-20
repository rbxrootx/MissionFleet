// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054CD5A .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_0054cd5a_0054CD5A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C7 FF FF FF: call 0x54cd33
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x54cd84
        __asm _emit 0x74
        __asm _emit 0x14
        push 0d4h
        push 5cc198h
        ; Exact mapped bytes E8 81 7C FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x7c
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54cd84
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x54cd64
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes DD 01: fld qword ptr [ecx]
        __asm _emit 0xdd
        __asm _emit 0x01
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
