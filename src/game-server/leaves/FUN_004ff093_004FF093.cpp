// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FF093 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_004ff093_004FF093() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 10fh
        push 5cb750h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 AE C0 FF FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 4], -1
        ; Exact mapped bytes 75 14: jne 0x4ff0cf
        __asm _emit 0x75
        __asm _emit 0x14
        push 110h
        push 5cb750h
        ; Exact mapped bytes E8 36 59 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x59
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ff0cf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4ff0b2
        __asm _emit 0x75
        __asm _emit 0xdd
        push 1
        push 0
        push 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 75 0E: jne 0x4ff0ff
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 D1 C7 FF FF: call 0x4fb8d0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xc7
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
