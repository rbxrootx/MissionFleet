// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053B58F .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_0053b58f_0053B58F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 1C 28 5E 00: call dword ptr [0x5e281c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x53b5be
        __asm _emit 0x75
        __asm _emit 0x14
        push 41bh
        push 581fc0h
        ; Exact mapped bytes E8 47 94 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53b5be
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x53b599
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 EC 27 5E 00: call dword ptr [0x5e27ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 7E 00 FC FF: call 0x4fb659
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0xfc
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
