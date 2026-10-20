// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049BE31 .. +0x7C bytes.
extern "C" __declspec(naked) void __AfxFindDlgItem__YGPAVCWnd__PAV1_K_Z_0049BE31() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9E 2A 05 00: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x2a
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 05: je 0x49be51
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 56: jmp 0x49bea7
        __asm _emit 0xeb
        __asm _emit 0x56
        push 1
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 7F FB FF FF: call 0x49b9dd
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 04: jne 0x49be6d
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 3A: jmp 0x49bea7
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A7 32 05 00: call 0x4ef122
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x32
        __asm _emit 0x05
        __asm _emit 0x00
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 05: jne 0x49be85
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 22: jmp 0x49bea7
        __asm _emit 0xeb
        __asm _emit 0x22
        push 1
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 49 FB FF FF: call 0x49b9dd
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 08: je 0x49bea5
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 CE: jne 0x49be73
        __asm _emit 0x75
        __asm _emit 0xce
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
