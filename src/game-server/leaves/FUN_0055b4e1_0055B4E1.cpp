// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055B4E1 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_0055b4e1_0055B4E1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 29eh
        push 5cebe0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 60 FC F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xfc
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 70h], 0
        ; Exact mapped bytes 75 14: jne 0x55b51d
        __asm _emit 0x75
        __asm _emit 0x14
        push 29fh
        push 5cebe0h
        ; Exact mapped bytes E8 E8 94 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55b51d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x55b500
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2C 51 F9 FF: call 0x4f0657
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x51
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 68h], eax
        mov edx, dword ptr [ebp - 8]
        add edx, 60h
        push edx
        ; Exact mapped bytes E8 49 D8 F6 FF: call 0x4c8d86
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xd8
        __asm _emit 0xf6
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D6 E1 FF FF: call 0x55971c
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7B 51 F9 FF: call 0x4f06cc
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x51
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
