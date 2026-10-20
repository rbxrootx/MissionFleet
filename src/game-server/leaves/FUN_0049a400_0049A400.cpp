// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049A400 .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_0049a400_0049A400() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 21: jne 0x49a436
        __asm _emit 0x75
        __asm _emit 0x21
        push 5caee0h
        push 0
        push 50dh
        push 5cae8ch
        push 2
        ; Exact mapped bytes E8 03 67 01 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x49a436
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D0: jne 0x49a40c
        __asm _emit 0x75
        __asm _emit 0xd0
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 12 F1 FF FF: call 0x499560
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x49a463
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 73 1C: jae 0x49a487
        __asm _emit 0x73
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 29 00 00 00: call 0x49a4a0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 05: jge 0x49a485
        __asm _emit 0x7d
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 05: jmp 0x49a48a
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes EB D3: jmp 0x49a45a
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
