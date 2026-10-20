// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00492FDF .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_00492fdf_00492FDF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 4]
        push eax
        push 58e4f0h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4ch]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4ch]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 7C 3C: jl 0x49304c
        __asm _emit 0x7c
        __asm _emit 0x3c
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x49302a
        __asm _emit 0x75
        __asm _emit 0x14
        push 373h
        push 5ca8a4h
        ; Exact mapped bytes E8 DB 19 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x19
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x49302a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x493010
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 51 18: call dword ptr [ecx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
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
