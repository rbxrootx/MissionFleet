// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E103D .. +0xB5 bytes.
extern "C" __declspec(naked) void FUN_004e103d_004E103D() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e84bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4e1078
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f5h
        push 5cb6b4h
        ; Exact mapped bytes E8 8D 39 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e1078
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4e105e
        __asm _emit 0x75
        __asm _emit 0xe0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 81 FE 04 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E7 9A 01 00: call 0x4fab80
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e10b1
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f8h
        push 5cb6b4h
        ; Exact mapped bytes E8 54 39 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e10b1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x4e108d
        __asm _emit 0x75
        __asm _emit 0xd6
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E3 FE 04 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xfe
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 DB FE FF FF: call 0x4e0fab
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 6D C7 00 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
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
