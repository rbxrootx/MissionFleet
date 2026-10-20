// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CD521 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_004cd521_004CD521() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BE 39 06 00: call 0x530ef1
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x39
        __asm _emit 0x06
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 4C: je 0x4cd585
        __asm _emit 0x74
        __asm _emit 0x4c
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 0E 29 00 00: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4cd55d
        __asm _emit 0x75
        __asm _emit 0x11
        push 30h
        push 5c4c5ch
        ; Exact mapped bytes E8 A8 74 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x74
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cd55d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x4cd539
        __asm _emit 0x75
        __asm _emit 0xd6
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AA FF 01 00: call 0x4ed519
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 9E BA FD FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
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
