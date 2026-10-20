// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00515953 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_00515953_00515953() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 0e000h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BA 70 02 00: call 0x53ca24
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        push 0e001h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AD 70 02 00: call 0x53ca24
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 44 70 02 00: call 0x53c9cd
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5159a1
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f5h
        push 5c8b74h
        ; Exact mapped bytes E8 64 F0 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5159a1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D0: jne 0x515977
        __asm _emit 0x75
        __asm _emit 0xd0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
