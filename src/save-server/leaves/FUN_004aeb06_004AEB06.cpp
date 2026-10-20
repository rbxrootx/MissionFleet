// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AEB06 .. +0x5A bytes.
extern "C" __declspec(naked) void FUN_004aeb06_004AEB06() {
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
        ; Exact mapped bytes 75 14: jne 0x4aeb35
        __asm _emit 0x75
        __asm _emit 0x14
        push 11eh
        push 635af0h
        ; Exact mapped bytes E8 10 A2 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xa2
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4aeb35
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4aeb10
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0
        push 0
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4E BF FF FF: call 0x4aaaa5
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
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
