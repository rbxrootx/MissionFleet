// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00572879 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_00572879_00572879() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 6ch
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 75 07: jne 0x572899
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 80004005h
        ; Exact mapped bytes EB 39: jmp 0x5728d2
        __asm _emit 0xeb
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 34h], 0
        ; Exact mapped bytes 75 14: jne 0x5728b6
        __asm _emit 0x75
        __asm _emit 0x14
        push 4aah
        push 5d0930h
        ; Exact mapped bytes E8 4F 21 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x21
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5728b6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x572899
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 34h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 34h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 10: call dword ptr [ecx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x10
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
