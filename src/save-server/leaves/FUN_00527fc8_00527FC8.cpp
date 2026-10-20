// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00527FC8 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_00527fc8_00527FC8() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 11: jne 0x527fec
        __asm _emit 0x75
        __asm _emit 0x11
        push 2ah
        push 634608h
        ; Exact mapped bytes E8 59 0D 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x527fec
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x527fd2
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 20h]
        push edx
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 5A CD FF FF: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 9B CD FF FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 94 BF 68 00: call dword ptr [0x68bf94]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DF 9B 00 00: call 0x531c0d
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
