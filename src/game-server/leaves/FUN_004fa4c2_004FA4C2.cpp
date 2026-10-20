// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FA4C2 .. +0x90 bytes.
extern "C" __declspec(naked) void FUN_004fa4c2_004FA4C2() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 75 AF 04 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xaf
        __asm _emit 0x04
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 75 1D: jne 0x4fa4f4
        __asm _emit 0x75
        __asm _emit 0x1d
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 09: jge 0x4fa4e6
        __asm _emit 0x7d
        __asm _emit 0x09
        cmp dword ptr [ebp + 8], 8001h
        ; Exact mapped bytes 75 0E: jne 0x4fa4f4
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes E8 CE F2 FF FF: call 0x4f97b9
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 22: jne 0x4fa516
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, 5de7b4h
        ; Exact mapped bytes E8 86 7F 04 00: call 0x542490
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x7f
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [eax + 30h]
        push edx
        ; Exact mapped bytes FF 15 D0 25 5E 00: call dword ptr [0x5e25d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 33: jmp 0x4fa549
        __asm _emit 0xeb
        __asm _emit 0x33
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4fa530
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c3h
        push 5c60d0h
        ; Exact mapped bytes E8 D5 A4 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xa4
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fa530
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4fa516
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 78: call dword ptr [edx + 0x78]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x78
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
