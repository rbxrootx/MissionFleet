// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005162F1 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_005162f1_005162F1() {
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
        ; Exact mapped bytes 75 14: jne 0x516320
        __asm _emit 0x75
        __asm _emit 0x14
        push 123h
        push 674cach
        ; Exact mapped bytes E8 25 2A 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x516320
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x5162fb
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6B 67 01 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x516346
        __asm _emit 0x75
        __asm _emit 0x14
        push 124h
        push 674cach
        ; Exact mapped bytes E8 FF 29 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x516346
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x516326
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 46ch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 38 67 01 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 D1 52 01 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
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
