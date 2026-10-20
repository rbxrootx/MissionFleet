// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051CFE6 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_0051cfe6_0051CFE6() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 0d3h
        push 6778d4h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 5D D2 FB FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xd2
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 14: jne 0x51d020
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d4h
        push 6778d4h
        ; Exact mapped bytes E8 25 BD 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51d020
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x51d003
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 90 B6 68 00: call dword ptr [0x68b690]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        push 2
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 DC B3 68 00: call dword ptr [0x68b3dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xb3
        __asm _emit 0x68
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
