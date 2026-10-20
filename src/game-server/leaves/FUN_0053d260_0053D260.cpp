// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053D260 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_0053d260_0053D260() {
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
        ; Exact mapped bytes 75 14: jne 0x53d28f
        __asm _emit 0x75
        __asm _emit 0x14
        push 11eh
        push 582398h
        ; Exact mapped bytes E8 76 77 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53d28f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x53d26a
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 89 94 FF FF: call 0x53672a
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 AC 26 5E 00: call dword ptr [0x5e26ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
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
