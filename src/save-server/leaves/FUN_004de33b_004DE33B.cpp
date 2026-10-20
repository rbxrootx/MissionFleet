// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DE33B .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_004de33b_004DE33B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 143h
        push 677f28h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 08 BF FF FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 4], -1
        ; Exact mapped bytes 75 14: jne 0x4de375
        __asm _emit 0x75
        __asm _emit 0x14
        push 144h
        push 677f28h
        ; Exact mapped bytes E8 D0 A9 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xa9
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4de375
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4de358
        __asm _emit 0x75
        __asm _emit 0xdd
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 30 B9 68 00: call dword ptr [0x68b930]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x4de3a6
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes FF 15 B8 B7 68 00: call dword ptr [0x68b7b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 EA C2 FF FF: call 0x4da690
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
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
