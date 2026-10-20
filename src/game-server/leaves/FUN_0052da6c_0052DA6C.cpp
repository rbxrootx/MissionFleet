// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052DA6C .. +0xED bytes.
extern "C" __declspec(naked) void FUN_0052da6c_0052DA6C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 18: je 0x52da9e
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 EC 00 00 00: call dword ptr [edx + 0xec]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        and ecx, 2
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x52dabe
        __asm _emit 0x74
        __asm _emit 0x10
        push 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 E8 00 00 00: call dword ptr [eax + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b8h]
        and edx, 8
        test edx, edx
        ; Exact mapped bytes 74 23: je 0x52daf1
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        and ecx, 4
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 D0 00 00 00: call dword ptr [eax + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 23 E9 00 00: call 0x53c414
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 90h]
        cmp eax, dword ptr [edx + 94h]
        ; Exact mapped bytes 74 40: je 0x52db45
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CA F3 FF FF: call 0x52cee1
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 90h]
        cmp edx, dword ptr [ecx + 94h]
        ; Exact mapped bytes 74 14: je 0x52db3f
        __asm _emit 0x74
        __asm _emit 0x14
        push 799h
        push 5c8fcch
        ; Exact mapped bytes E8 C6 6E 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52db3f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D2: jne 0x52db17
        __asm _emit 0x75
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0b8h], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
