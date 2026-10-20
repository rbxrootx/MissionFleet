// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AD5E4 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_004ad5e4_004AD5E4() {
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
        ; Exact mapped bytes 75 14: jne 0x4ad613
        __asm _emit 0x75
        __asm _emit 0x14
        push 9ch
        push 635af0h
        ; Exact mapped bytes E8 32 B7 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xb7
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ad613
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4ad5ee
        __asm _emit 0x75
        __asm _emit 0xd5
        push 2
        push -1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 62 FF FF FF: call 0x4ad587
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
