// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005605D3 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_005605d3_005605D3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        push 158h
        push 67b3c8h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 67 9C F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x9c
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DA DF FF FF: call 0x55e5db
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x560619
        __asm _emit 0x75
        __asm _emit 0x14
        push 159h
        push 67b3c8h
        ; Exact mapped bytes E8 2C 87 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x87
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x560619
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x5605f9
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 8]
        add edx, 0d0h
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 47 C3 F6 FF: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xc3
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        or al, 1
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
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
