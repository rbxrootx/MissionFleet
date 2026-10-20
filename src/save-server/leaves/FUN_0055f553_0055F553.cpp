// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055F553 .. +0x87 bytes.
extern "C" __declspec(naked) void FUN_0055f553_0055F553() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 42dh
        push 67b3b8h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 EE AC F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xac
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 70h], 0
        ; Exact mapped bytes 75 14: jne 0x55f58f
        __asm _emit 0x75
        __asm _emit 0x14
        push 42eh
        push 67b3b8h
        ; Exact mapped bytes E8 B6 97 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x97
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55f58f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x55f572
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 98h], 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DD EF F6 FF: call 0x4ce587
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xef
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 68h], eax
        mov edx, dword ptr [ebp - 8]
        add edx, 60h
        push edx
        ; Exact mapped bytes E8 8E 4B F2 FF: call 0x48414a
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x4b
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D7 D1 FF FF: call 0x55c79c
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2C F0 F6 FF: call 0x4ce5fc
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf0
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
