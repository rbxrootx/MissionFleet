// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DE193 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_004de193_004DE193() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 10fh
        push 677f28h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 AE C0 FF FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 4], -1
        ; Exact mapped bytes 75 14: jne 0x4de1cf
        __asm _emit 0x75
        __asm _emit 0x14
        push 110h
        push 677f28h
        ; Exact mapped bytes E8 76 AB 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xab
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4de1cf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4de1b2
        __asm _emit 0x75
        __asm _emit 0xdd
        push 1
        push 0
        push 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 75 0E: jne 0x4de1ff
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
        ; Exact mapped bytes E8 91 C4 FF FF: call 0x4da690
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xc4
        __asm _emit 0xff
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
