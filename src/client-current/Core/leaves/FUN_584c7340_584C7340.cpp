// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C7340 .. +0xC3 bytes.
extern "C" __declspec(naked) void FUN_584c7340_584C7340() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 58895f1ch
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 B5 00 00 00: call 0x584c7410
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ch], 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 60h
        ; Exact mapped bytes E8 70 FF FF FF: call 0x584c72e0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 50h
        push 0
        mov edx, dword ptr [ebp - 4]
        add edx, 4
        push edx
        ; Exact mapped bytes E8 90 5A 38 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x5a
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 0ch
        push 58895d28h
        push 400000h
        push 0
        push 4
        push 0
        push -1
        ; Exact mapped bytes FF 15 A8 42 89 58: call dword ptr [0x588942a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 54h], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 54h], 0
        ; Exact mapped bytes 75 02: jne 0x584c73ac
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 50: jmp 0x584c73fc
        __asm _emit 0xeb
        __asm _emit 0x50
        push 400000h
        push 0
        push 0
        push 0f001fh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        push ecx
        ; Exact mapped bytes FF 15 B4 42 89 58: call dword ptr [0x588942b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 58h], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 58h], 0
        ; Exact mapped bytes 75 10: jne 0x584c73e6
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        push edx
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 16: jmp 0x584c73fc
        __asm _emit 0xeb
        __asm _emit 0x16
        push 400000h
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 58h]
        push ecx
        ; Exact mapped bytes E8 17 5A 38 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x5a
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
