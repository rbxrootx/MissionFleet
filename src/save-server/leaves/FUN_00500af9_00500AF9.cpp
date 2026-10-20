// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00500AF9 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_00500af9_00500AF9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 25ch
        push 675764h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 48 97 FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x97
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x500b3d
        __asm _emit 0x75
        __asm _emit 0x14
        push 25dh
        push 675764h
        ; Exact mapped bytes E8 08 82 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x500b3d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x500b18
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        push 419h
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
