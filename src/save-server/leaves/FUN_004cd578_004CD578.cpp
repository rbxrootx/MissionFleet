// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CD578 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_004cd578_004CD578() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4cd59c
        __asm _emit 0x7d
        __asm _emit 0x14
        push 25bh
        push 6714ach
        ; Exact mapped bytes E8 A9 B7 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cd59c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4cd582
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0F 77 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x77
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 7C 14: jl 0x4cd5c6
        __asm _emit 0x7c
        __asm _emit 0x14
        push 25ch
        push 6714ach
        ; Exact mapped bytes E8 7F B7 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cd5c6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x4cd5a2
        __asm _emit 0x75
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 23 F2 FF FF: call 0x4cc7f7
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [ebp + 0ch]
        mov byte ptr [ecx + edx], al
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
