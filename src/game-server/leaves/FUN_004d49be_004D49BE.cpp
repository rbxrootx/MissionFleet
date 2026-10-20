// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D49BE .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_004d49be_004D49BE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp - 2ch]
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
        ; Exact mapped bytes 75 14: jne 0x4d49ef
        __asm _emit 0x75
        __asm _emit 0x14
        push 20ch
        push 5c64b4h
        ; Exact mapped bytes E8 16 00 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d49ef
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4d49ca
        __asm _emit 0x75
        __asm _emit 0xd5
        push 28h
        push 0
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 6E 49 FD FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x49
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 102dh
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
