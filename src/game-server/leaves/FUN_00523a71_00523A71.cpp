// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00523A71 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_00523a71_00523A71() {
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
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x523aa0
        __asm _emit 0x75
        __asm _emit 0x14
        push 123h
        push 5c8174h
        ; Exact mapped bytes E8 65 0F 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x523aa0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x523a7b
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8B 95 01 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x523ac6
        __asm _emit 0x75
        __asm _emit 0x14
        push 124h
        push 5c8174h
        ; Exact mapped bytes E8 3F 0F 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x523ac6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x523aa6
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 46ch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 58 95 01 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F1 80 01 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x80
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
