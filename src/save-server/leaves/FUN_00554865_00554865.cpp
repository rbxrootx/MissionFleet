// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00554865 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_00554865_00554865() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 52dh
        push 67c1e0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 DE 59 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x59
        __asm _emit 0xf8
        __asm _emit 0xff
        push 1
        push 10h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 D7 EB F4 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xeb
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5548a7
        __asm _emit 0x75
        __asm _emit 0x14
        push 52eh
        push 67c1e0h
        ; Exact mapped bytes E8 9E 44 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x44
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5548a7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x554882
        __asm _emit 0x75
        __asm _emit 0xd5
        push 531h
        push 67c1e0h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        push ecx
        ; Exact mapped bytes E8 9D 59 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x59
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes E8 89 72 FD FF: call 0x52bb5b
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0xfd
        __asm _emit 0xff
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
