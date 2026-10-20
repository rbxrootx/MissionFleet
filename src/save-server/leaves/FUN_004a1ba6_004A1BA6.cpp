// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A1BA6 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_004a1ba6_004A1BA6() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        push -1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 8A 18 00 00: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4a1bd0
        __asm _emit 0x75
        __asm _emit 0x14
        push 2bbh
        push 671534h
        ; Exact mapped bytes E8 75 71 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x71
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a1bd0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x4a1bad
        __asm _emit 0x75
        __asm _emit 0xd7
        lea edx, [ebp + 10h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DD F7 FF FF: call 0x4a13c9
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
