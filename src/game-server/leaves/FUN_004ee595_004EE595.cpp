// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EE595 .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_004ee595_004EE595() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 0A: jne 0x4ee5ac
        __asm _emit 0x75
        __asm _emit 0x0a
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 04: je 0x4ee5ac
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 5A: jmp 0x4ee606
        __asm _emit 0xeb
        __asm _emit 0x5a
        push 0
        push 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push -1
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        push 0
        ; Exact mapped bytes FF 15 E0 23 5E 00: call dword ptr [0x5e23e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1C: je 0x4ee5ed
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 7E 14: jle 0x4ee5ed
        __asm _emit 0x7e
        __asm _emit 0x14
        push 279h
        push 5c4bd4h
        ; Exact mapped bytes E8 18 64 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ee5ed
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x4ee5cb
        __asm _emit 0x75
        __asm _emit 0xd8
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7E 0A: jle 0x4ee603
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 4]
        mov byte ptr [edx - 1], 0
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
