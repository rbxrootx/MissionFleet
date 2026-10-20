// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054AE21 .. +0x4C bytes.
extern "C" __declspec(naked) void _QueryInterface_CInnerUnknown__UAGJABU_GUID__PAPAX_Z_0054AE21() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 0ch
        mov dword ptr [ebp - 4], eax
        push 640d30h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 A4 DE F0 FF: call 0x458ce0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xde
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x54ae57
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 09 01 00 00: call 0x54af54
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx], eax
        xor eax, eax
        ; Exact mapped bytes EB 10: jmp 0x54ae67
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EF FE FF FF: call 0x54ad56
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
