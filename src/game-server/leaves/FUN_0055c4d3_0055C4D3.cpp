// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055C4D3 .. +0x87 bytes.
extern "C" __declspec(naked) void FUN_0055c4d3_0055C4D3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 42dh
        push 5cebe0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 6E EC F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xec
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 70h], 0
        ; Exact mapped bytes 75 14: jne 0x55c50f
        __asm _emit 0x75
        __asm _emit 0x14
        push 42eh
        push 5cebe0h
        ; Exact mapped bytes E8 F6 84 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55c50f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x55c4f2
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 98h], 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2D 41 F9 FF: call 0x4f0657
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x41
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 68h], eax
        mov edx, dword ptr [ebp - 8]
        add edx, 60h
        push edx
        ; Exact mapped bytes E8 5C C8 F6 FF: call 0x4c8d98
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xc8
        __asm _emit 0xf6
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D7 D1 FF FF: call 0x55971c
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7C 41 F9 FF: call 0x4f06cc
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x41
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
