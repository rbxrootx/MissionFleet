// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A9FB0 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_004a9fb0_004A9FB0() {
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
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4a9fe1
        __asm _emit 0x75
        __asm _emit 0x14
        push 1b9h
        push 672a58h
        ; Exact mapped bytes E8 64 ED 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xed
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a9fe1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4a9fbc
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 24h], ecx
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 20h]
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 0B 33 00 00: call 0x4ad32f
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
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
