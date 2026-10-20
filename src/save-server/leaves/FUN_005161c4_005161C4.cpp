// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005161C4 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_005161c4_005161C4() {
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
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5161f3
        __asm _emit 0x75
        __asm _emit 0x14
        push 10ch
        push 674cach
        ; Exact mapped bytes E8 52 2B 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5161f3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x5161ce
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 98 68 01 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x516219
        __asm _emit 0x75
        __asm _emit 0x14
        push 10dh
        push 674cach
        ; Exact mapped bytes E8 2C 2B 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x516219
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x5161f9
        __asm _emit 0x75
        __asm _emit 0xda
        push 0
        push 0
        push 46bh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 69 68 01 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 02 54 01 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
