// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CD635 .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_004cd635_004CD635() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 0A: jne 0x4cd64c
        __asm _emit 0x75
        __asm _emit 0x0a
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 04: je 0x4cd64c
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 5A: jmp 0x4cd6a6
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
        ; Exact mapped bytes FF 15 1C BA 68 00: call dword ptr [0x68ba1c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1C: je 0x4cd68d
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 7E 14: jle 0x4cd68d
        __asm _emit 0x7e
        __asm _emit 0x14
        push 279h
        push 6714ach
        ; Exact mapped bytes E8 B8 B6 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cd68d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x4cd66b
        __asm _emit 0x75
        __asm _emit 0xd8
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7E 0A: jle 0x4cd6a3
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
