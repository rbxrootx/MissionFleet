// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00570A65 .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_00570a65_00570A65() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 0ddh
        push 5d0930h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 DE A6 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xa6
        __asm _emit 0xf8
        __asm _emit 0xff
        push 1
        push 8
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 C7 F3 F5 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xf3
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x570aa7
        __asm _emit 0x75
        __asm _emit 0x14
        push 0deh
        push 5d0930h
        ; Exact mapped bytes E8 5E 3F FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x3f
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x570aa7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x570a82
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 4], 0
        xor eax, eax
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
