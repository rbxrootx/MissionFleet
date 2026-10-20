// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005008EF .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_005008ef_005008EF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 417h
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 A8 00 00 00: call dword ptr [edx + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x500934
        __asm _emit 0x75
        __asm _emit 0x14
        push 22ch
        push 675764h
        ; Exact mapped bytes E8 11 84 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x500934
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C7: jne 0x500901
        __asm _emit 0x75
        __asm _emit 0xc7
        mov ecx, dword ptr [ebp + 0ch]
        mov dl, byte ptr [ecx + 8]
        xor dl, 4
        mov eax, dword ptr [ebp + 0ch]
        mov byte ptr [eax + 8], dl
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
