// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00546103 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_00546103_00546103() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 14 BB 68 00: call dword ptr [0x68bb14]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 0
        push 0
        ; Exact mapped bytes FF 15 1C BA 68 00: call dword ptr [0x68ba1c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        push 0
        ; Exact mapped bytes FF 15 50 BB 68 00: call dword ptr [0x68bb50]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 0
        push 0
        ; Exact mapped bytes FF 15 1C BA 68 00: call dword ptr [0x68ba1c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 11: je 0x546179
        __asm _emit 0x74
        __asm _emit 0x11
        push 35h
        push 6792d4h
        ; Exact mapped bytes E8 CC 2B FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x2b
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x546179
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C6: jne 0x546145
        __asm _emit 0x75
        __asm _emit 0xc6
        mov eax, dword ptr [ebp - 4]
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
