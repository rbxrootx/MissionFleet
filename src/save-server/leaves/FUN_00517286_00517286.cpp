// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00517286 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_00517286_00517286() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A9 DE FB FF: call 0x4d5143
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xde
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x5172a2
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 42: jmp 0x5172e4
        __asm _emit 0xeb
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5172c7
        __asm _emit 0x75
        __asm _emit 0x14
        push 2f9h
        push 674cach
        ; Exact mapped bytes E8 7E 1A 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5172c7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x5172a2
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0
        push 0
        push 476h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5B 43 01 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
