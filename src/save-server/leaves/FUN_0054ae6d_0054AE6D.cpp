// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054AE6D .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_0054ae6d_0054AE6D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 02: jne 0x54ae84
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 53: jmp 0x54aed7
        __asm _emit 0xeb
        __asm _emit 0x53
        push 640d30h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 13 FC FF FF: call 0x54aaa4
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x54aeae
        __asm _emit 0x75
        __asm _emit 0x14
        push 1aeh
        push 678964h
        ; Exact mapped bytes E8 97 DE FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xde
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54aeae
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x54ae94
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 8]
        add edx, 4
        push edx
        ; Exact mapped bytes FF 15 24 BA 68 00: call dword ptr [0x68ba24]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 14 C3 68 00: call dword ptr [0x68c314]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
