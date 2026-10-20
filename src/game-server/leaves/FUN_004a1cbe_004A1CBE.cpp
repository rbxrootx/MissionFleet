// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A1CBE .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_004a1cbe_004A1CBE() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        and ecx, 2000h
        test ecx, ecx
        ; Exact mapped bytes 75 14: jne 0x4a1cee
        __asm _emit 0x75
        __asm _emit 0x14
        push 9ddh
        push 5cbe8ch
        ; Exact mapped bytes E8 17 2D 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x2d
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a1cee
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x4a1cc8
        __asm _emit 0x75
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3F B5 0A 00: call 0x54d23b
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xb5
        __asm _emit 0x0a
        __asm _emit 0x00
        push 10h
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 15 73 00 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 02 00 00: mov word ptr [edx], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
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
