// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CEA9D .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_004cea9d_004CEA9D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        ; Exact mapped bytes E8 C8 2F 06 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x2f
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4ceab0
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 51: jmp 0x4ceb01
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes E8 BB 30 06 00: call 0x531b70
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 23: je 0x4ceae1
        __asm _emit 0x74
        __asm _emit 0x23
        lea eax, [ebp - 0ch]
        push eax
        push 0
        push 0
        push 0e146h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4ceae1
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 20: jmp 0x4ceb01
        __asm _emit 0xeb
        __asm _emit 0x20
        lea eax, [ebp - 0ch]
        push eax
        push 0
        push 0
        push 0e146h
        ; Exact mapped bytes E8 7D 2F 06 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x2f
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov esp, ebp
        pop ebp
        ret
    }
}
