// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EF900 .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_584ef900_584EF900() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584ef91b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 18h
        ; Exact mapped bytes E8 CA 1A 00 00: call 0x584f13f0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x584ef963
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 8]
        add ecx, 18h
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 61 F1 FF FF: call 0x584eeaa0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 104h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 17: jne 0x584ef961
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 8]
        add ecx, 18h
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 41 F1 FF FF: call 0x584eeaa0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 04: jmp 0x584ef965
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB AF: jmp 0x584ef912
        __asm _emit 0xeb
        __asm _emit 0xaf
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
