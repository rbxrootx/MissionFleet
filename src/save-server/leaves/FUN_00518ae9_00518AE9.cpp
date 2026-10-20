// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00518AE9 .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_00518ae9_00518AE9() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x518b0d
        __asm _emit 0x75
        __asm _emit 0x14
        push 57ch
        push 674cach
        ; Exact mapped bytes E8 38 02 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x518b0d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x518af3
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 78h
        ; Exact mapped bytes E8 5E 11 FC FF: call 0x4d9c80
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x11
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x518b3a
        __asm _emit 0x75
        __asm _emit 0x14
        push 57eh
        push 674cach
        ; Exact mapped bytes E8 0B 02 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x518b3a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D3: jne 0x518b13
        __asm _emit 0x75
        __asm _emit 0xd3
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 67 00 00 00: call 0x518bc3
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
