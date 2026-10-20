// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F994C .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_004f994c_004F994C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 169h
        push 674fe8h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 F5 08 FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x08
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 11 FF FF FF: call 0x4f988c
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 ED C3 FD FF: call 0x4d5d71
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xc3
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4f99a1
        __asm _emit 0x75
        __asm _emit 0x14
        push 16ch
        push 674fe8h
        ; Exact mapped bytes E8 A4 F3 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xf3
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f99a1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4f9987
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 4]
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
