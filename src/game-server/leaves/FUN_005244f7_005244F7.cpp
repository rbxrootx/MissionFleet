// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005244F7 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_005244f7_005244F7() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x52451b
        __asm _emit 0x75
        __asm _emit 0x14
        push 262h
        push 5c8174h
        ; Exact mapped bytes E8 EA 04 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52451b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x524501
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 78h
        ; Exact mapped bytes E8 50 66 FD FF: call 0x4fab80
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x66
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x524548
        __asm _emit 0x75
        __asm _emit 0x14
        push 264h
        push 5c8174h
        ; Exact mapped bytes E8 BD 04 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x524548
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D3: jne 0x524521
        __asm _emit 0x75
        __asm _emit 0xd3
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5B 00 00 00: call 0x5245b9
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
