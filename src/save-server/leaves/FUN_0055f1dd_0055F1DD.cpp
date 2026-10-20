// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055F1DD .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_0055f1dd_0055F1DD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 3d7h
        push 67b3b8h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 64 B0 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xb0
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 70h], 0
        ; Exact mapped bytes 75 14: jne 0x55f219
        __asm _emit 0x75
        __asm _emit 0x14
        push 3d8h
        push 67b3b8h
        ; Exact mapped bytes E8 2C 9B FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x9b
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55f219
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x55f1fc
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 60 F3 F6 FF: call 0x4ce587
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xf3
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 68h], eax
        mov edx, dword ptr [ebp - 8]
        add edx, 60h
        push edx
        ; Exact mapped bytes E8 0B 4F F2 FF: call 0x484144
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x4f
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5A D5 FF FF: call 0x55c79c
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AF F3 F6 FF: call 0x4ce5fc
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf3
        __asm _emit 0xf6
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
