// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D68E1 .. +0x5A bytes.
extern "C" __declspec(naked) void FUN_004d68e1_004D68E1() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4d690d
        __asm _emit 0x75
        __asm _emit 0x11
        push 1fh
        push 5835a8h
        ; Exact mapped bytes E8 F8 E0 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xe0
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d690d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4d68eb
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 404h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
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
