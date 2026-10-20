// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00526269 .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_00526269_00526269() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x52628d
        __asm _emit 0x75
        __asm _emit 0x14
        push 57ch
        push 5c8174h
        ; Exact mapped bytes E8 78 E7 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52628d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x526273
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 78h
        ; Exact mapped bytes E8 DE 48 FD FF: call 0x4fab80
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x48
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5262ba
        __asm _emit 0x75
        __asm _emit 0x14
        push 57eh
        push 5c8174h
        ; Exact mapped bytes E8 4B E7 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5262ba
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D3: jne 0x526293
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
        ; Exact mapped bytes E8 67 00 00 00: call 0x526343
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
