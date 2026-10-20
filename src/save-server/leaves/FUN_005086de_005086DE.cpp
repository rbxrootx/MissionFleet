// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005086DE .. +0xA8 bytes.
extern "C" __declspec(naked) void FUN_005086de_005086DE() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58ecd4h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0ch
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax], 63a9b4h
        mov dword ptr [ebp - 4], 1
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x50871e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 7ch
        ; Exact mapped bytes E8 81 DC 01 00: call 0x5263aa
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 7D 2C: jge 0x50875a
        __asm _emit 0x7d
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 41 17 00 00: call 0x509e7b
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 15: je 0x508758
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 70h]
        cmp ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 75 0A: jne 0x508758
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 70h], 0
        ; Exact mapped bytes EB BB: jmp 0x508715
        __asm _emit 0xeb
        __asm _emit 0xbb
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 7ch
        ; Exact mapped bytes E8 5E 66 FB FF: call 0x4bedc7
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x66
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E8 61 FF FF: call 0x4fe960
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
